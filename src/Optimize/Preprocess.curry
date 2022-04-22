{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Preprocess (preprocess, showPreprocess, 
                            flatten, alias, float, blocks, unapply,
                            caseVar, fixLets, fixPartFunc, makeStrLit) where

-----------------------------------------------------------
-- This module preprocesses FlatCurry files to do a bunch of simple transformations
-- This makes it easier to perform optimizations on the FlatCurry programs.
-- It's also stuff we'd need to do anyway to compile.
-----------------------------------------------------------

import FlatCurry.Types
import FlatCurry.Goodies (funcName, funcBody, updFuncBody,branchPattern,patCons,isExternal)
import FlatUtils.Gas
import FlatUtils.FlatUtils
import FlatUtils.DataTable
import FlatCurry.Pretty (ppExp, Options(..), QualMode(..))
import Text.Pretty (pPrint)
import Optimize.FunTable (FunTable, arity)
import Optimize.Unboxing (box)
import Optimize.ANF (toANF, trivial)
import Control.SetFunctions
import Control.Findall
import Graph
import List ((\\), last, intersect)
import Debug
import Util
import Time (getClockTime, clockTimeToInt)

time = getClockTime >>= (return . clockTimeToInt)

-- Applies all transformation and returns the resulting program
preprocess :: DataTable -> FunTable -> FuncDecl -> FuncDecl
preprocess dt ft f
 | isExternal f = f
 | otherwise    = updFuncBody runOpts f
 where runOpts = simplify (fillCases dt) (-1)
               . simplify (canonize ft) (-1)
               . box

showPreprocess :: DataTable -> FunTable -> FuncDecl -> IO FuncDecl
showPreprocess dt ft f 
 | isExternal f = do putStrLn $ "function: " ++ snd (funcName f) ++ " external\n"
                     return f
 | otherwise    = do t <- time
                     putStrLn $ "function: " ++ snd (funcName f)
                     let e        = funcBody f
                     putStrLn (pPrint (ppExp (Options 2 QualNone "") e))
                     let e1 = box e
                     putStrLn "=> UNBOX"
                     putStrLn (pPrint (ppExp (Options 2 QualNone "") e1))
                     tunbox <- time
                     let (e2, w1, _) = showWork (canonize ft) (-1) e1
                     putStr w1
                     tcanonize <- time
                     let (e3, w2, _) = showWork (fillCases dt) (-1) e2
                     putStrLn w2
                     tfillCases <- time
                     putStrLn ("unbox time: " ++ show (tunbox-t))
                     putStrLn ("canonize time: " ++ show (tcanonize-tunbox))
                     putStrLn ("fill cases time: " ++ show (tfillCases-tcanonize))
                     putStrLn ("total time: " ++ show (tfillCases-t) ++ "\n")
                     return (updFuncBody (const e3) f)

-- These are rules we can do with simple rewriting
-- All of these forms must be changed before we can transform into flatCurry
-- We could make this shorter by combining several of these transformations,
-- but then we need to create a new function to handle it.
-- for example:
-- let a = let b = x
--             in e1
--     in e2
--
-- could become:
-- let a = f x
--     in e2
--
-- f x = let b = x
--       in e1
--
-- But this would be really inefficient, so we don't do that.
-- Instead we handle each transformation individually.
-- The convention I'm using is
-- Rule name:
-- origonal expr
-- =>
-- transformed expr
--
--
-----------------------------------------------------------------------
-- Let floating optimization
-- These are always ok to run, but they don't really do anything useful
-- they just put the code in a form that's more useful for other optimizations.
--
-- Let in Let:
-- let a = let b = x
--             in e1
--     in e2
-- =>
-- let b = x 
-- in let a = e1 
--    in e2
--
-- Free in Let:
-- let a = let b free 
--         in e1 
--     in e2
-- =>
-- let b free 
--     in let a = e1 
--            in e2
--
--
-- Free in App:
-- f (let x free in e)
-- =>
-- let x free in f e
--
-- Let in App:
-- f (let a = x in e)
-- =>
-- let a = x in f e
--
-- Or in Let:
-- (let a = x in e1 ? e2)
-- =>
-- let a = x in (e1 ? e2)
--
-- Or in Free:
-- (let a free in e1 ? e2)
-- =>
-- let a free in (e1 ? e2)
--
-- Let in Case:
-- case (let x = a in e1) of b -> e2
-- =>
-- let x = a in case e of b -> e2
--
-- Free in Case:
-- case (let x free e1) of b -> e2
-- =>
-- let x free in case e1 of b -> e2
--
-- NOTE: you can't float a let out of the branch of a case.
-- it could use the variabled defined in the pattern
float :: Opt
float _ (Let [(x,l@(Let _ _))] e)           = (traverse x e l, "FLOAT_LET", 0)
float _ (Let [(x,l@(Free _ _))] e)          = (traverse x e l, "FLOAT_LET", 0)
float _ (Let (as++[(x,Let vs e1)]++bs) e2)  = (letBlocks, "FLOAT BLOCK",0)
 where letBlocks = fst $ makeBlocks ((x,e1):vs++as++bs) e2
float _ (Let (as++[(x,Free vs e1)]++bs) e2) = (Free vs letBlocks, "FLOAT BLOCK",0)
 where letBlocks = fst $ makeBlocks ((x,e1):as++bs) e2
float _ (Or (Let vs e1) e2)                 = (Let vs (Or e1 e2), "FLOAT_OR",0)
float _ (Or e1 (Let vs e2))                 = (Let vs (Or e1 e2), "FLOAT_OR",0)
float _ (Or (Free vs e1) e2)                = (Free vs (Or e1 e2), "FLOAT_OR",0)
float _ (Or e1 (Free vs e2))                = (Free vs (Or e1 e2), "FLOAT_OR",0)
float _ (Comb ct n (as++[Let vs e]++bs))    = (Let vs (Comb ct n (as++[e]++bs)), "FLOAT_APP",0)
float _ (Comb ct n (as++[Free vs e]++bs))   = (Free vs (Comb ct n (as++[e]++bs)), "FLOAT_APP",0)
float _ (Case ct (Let vs e) bs)             = (Let vs (Case ct e bs), "FLOAT_CASE",0)
float _ (Case ct (Free vs e) bs)            = (Free vs (Case ct e bs), "FLOAT_CASE",0)

traverse x e l = case l of
                      (Let vs e')  -> Let vs (traverse x e e')
                      (Free vs e') -> Free vs (traverse x e e')
                      e'           -> Let [(x,e')] e

------------------------------------------------------------------------------
-- Flattening expression
-- Still not sure if these actually save anything
-- but they're necessary, and they certianly don't make things slower.
--
-- Case in Case:
-- case (case s2 of b21 -> e21
--                  b22 -> e22
--                  ...)
--      of b11 -> e11
--         b12 -> b12
--         ...
-- =>
-- case s2 of b21 -> case e21 of b11 ->e11
--                               b12 ->e22
--                   ...
--            b22 -> case e22 of b11 ->e11
--                               b12 ->e22
--                   ...
--            ...
--
-- this could also be
-- let x = case s2 of b21 -> e21
--                    b22 -> e22
--                    ...)
--      of b11 -> e11
-- in case x of 
--         b11 -> e11
--         b12 -> b12
--         ...
-- but then we'd need to make a function for x later
-- and we want to avoid that if at all possible.

-- double apply
-- apply (apply f [x]) [y]
-- ==>
-- apply f [x,y]
--
-- apply (case e of (b -> f)) x
-- ==>
-- case e of b -> apply f x

flatten :: Opt
flatten (x,_) (Case r1 (Case r2 e b2) b1) = let (b2', x') = renameCases x r1 b1 b2
                                            in  (Case r2 e b2', "CASE_IN_CASE", x'-x)
flatten _     (applyf (applyf f as) bs)   = (applyf f (as++bs), "DOUBLE_APPLY",0)
flatten _     (applyf (Case r e bs) xs)   = 
            (Case r e [Branch p (applyf e' xs) | (Branch p e') <- bs], "CASE_APPLY",0)

-- case (case e2 [p2 -> b2]) of [p1 -> b1]
-- => 
-- case e2 of
--      [p2 -> let x = b2 in case x of [p1 -> b1]]
renameCases :: VarIndex -> CaseType -> [BranchExpr] -> [BranchExpr] -> ([BranchExpr],VarIndex)
renameCases n _  _  [] = ([],n)
renameCases n ct b1 (Branch p e:bs) 
 | p == (Pattern ("","primCond") _) = mapFst (Branch p e :) (renameCases n ct b1 bs)
 | otherwise = let (b1',n') = renameBranches n b1
                   b'       = Branch p (Let [(n', e)] (Case ct (Var n') b1'))
               in mapFst (b' :) (renameCases (n'+1) ct b1 bs) 

renameBranches :: VarIndex -> [BranchExpr] -> ([BranchExpr],VarIndex)
renameBranches n [] = ([],n)
renameBranches n [b] = ([b],n)
renameBranches n (Branch p e : bs) = let (e',n') = rename n id e
                                     in mapFst (Branch p e' :) (renameBranches n' bs)

------------------------------------------------------------------------------
-- making String literals
-- flatCurry represents string literals as a sequence of cons cells.
-- This is really inefficient for the optimizer, and other programs.
-- so, let's just go back to using strings.
------------------------------------------------------------------------------
makeStrLit :: Opt
makeStrLit _ e@(strCons c cs)
 | cs =:= strNil = (strConst [c],   "STRING", 0)
makeStrLit _ e@(strCons c cs)
 | cs =:= strConst x = (strConst (c:x), "STRING", 0)
  where x free

strCons c str = Comb ConsCall ("Prelude",":") [Lit (Charc c), str]
strCons c str = Comb ConsCall ("Prelude",":") [Comb ConsCall ("","char") [Lit (Charc c)], str]
strNil     = Comb ConsCall ("Prelude","[]") []
strConst x = Comb ConsCall ("StringConst",x) []

-- This should also play nice with deforestation.
-- foldr :: (a -> b -> b) -> b -> [a] -> b
-- foldr f z [] = z
-- foldr f z (x:xs) = x `f` (foldr z xs)
-- 
-- build :: ((a -> b -> b) -> b -> a -> b) -> a -> [a]
-- build g = g (:) []
-- 
-- toCurryString :: StrPtr -> [Char]
-- toCurryString p = if *p == '\0'
--                   then ""
--                   else (Char *p) : toCurryString (p+1)
-- 
-- I could rewrite this as
-- toCurryString = build toCurryStringBuilder
-- toCurryStringBuilder :: (StrPtr -> b -> b) -> b -> b
-- toCurryStringBuilder c z = if *p == '\0'
--                      then z
--                      else c (Char *p) (toCurryStringBuilder (p+1))
--
-- then if we redefine the output functions like
-- putStr = foldr ((>>) . putChar) (return ())
-- we'd get
-- putStr "this is a string"
-- =>
-- toCurryStringBuilder ((>>) . putChar) (return ()) (*"this is a string")
-- Which will never construct the curry string.

-- Let Blocks:
-- Seperate let expressions into strongly connected components
-- let a = b
--     b = c
--     c = d + e
--     d = b
--     e = 1
-- in a
-- the we have 3 blocks of mutual recursion
-- [a] depends on [b,c,d] depends on [e]
-- So, we can rewrite this to
-- let e = 1
-- in let b = c
--        c = d + e
--        d = b
--    in let a = b
--       in a
--
blocks :: Opt
blocks _ (Let es@(_:_:_) e)
 | changed = (e', "BLOCKS", 0)
  where (e', changed) = makeBlocks es e



------------------------------------------------------------------------------
-- Remove aliasing
--
-- We never want to have the code
--  let x = y
--      ...
--  in ...
--
-- fortunately we can remove this with a simple substitution
-- we still have 3 cases.
-- If we have y = y, then we really have a loop
-- If we have let y = x in ...,
--    then we can remove the let block entirely
-- otherwise, we just remove that assignment from the let block.
------------------------------------------------------------------------------

alias :: Opt
alias _ (Let (as++[(v, Var y)]++bs) e)
 | v == y       = (Let (as++[(v,loop)]++bs) e, "ALIAS", 0)
 | otherwise    = (suby (Let (as++bs) e), "ALIAS", 0)
  where loop = Comb FuncCall ("Prelude","loop") []
        suby = sub ((v, Var y) @> idSub)

------------------------------------------------------------------------------

-- reuse of case-variable
-- case x of 
--     (C x1 x2) -> ... x ...
-- =>
-- case x of
--     (C x1 x2) -> ... (C x1 x2) ...
caseVar :: Opt
caseVar _ (Case ct (Var x) bs)
 | hasVar x (Case ct z bs) = (Case ct (Var x) (map (repCaseVar x) bs), "CASE_VAR",0)
 where z = (Lit (Intc 0)) -- dummy expression that doesn't contain x

repCaseVar :: VarIndex -> BranchExpr -> BranchExpr
repCaseVar x (Branch (Pattern n vs) e) = Branch (Pattern n vs) (sub f e)
  where f v = if v == x then Comb ConsCall n (map Var vs) else Var v
repCaseVar x (Branch (LPattern l) e)   = Branch (LPattern l)   (sub f e)
  where f v = if v == x then Lit l else Var v

------------------------------------------------------------------------------

canonize :: FunTable -> Opt
canonize ft = float
            ? flatten
            ? blocks
            ? alias
            ? caseVar
            ? makeStrLit
            ? unapply
            ? fixPartFunc ft

fixLets :: Opt
fixLets = float ? blocks

------------------------------------------------------------------------------

fixPartFunc :: FunTable -> Opt
fixPartFunc ft _ (Comb ct f es)
 | missed = case compare a (length es) of
                 LT -> (applyf (Comb (miss ct 0) f es1) es2, "FIX_PARTIAL_LT", 0)
                 EQ -> (Comb (miss ct 0) f es,               "FIX_PARTIAL_EQ", 0)
                 GT -> (Comb (miss ct (a - length es)) f es, "FIX_PARTIAL_GT", 0)
 where a = arity ft f
       missed = shouldMiss ct /= a - length es
       (es1,es2) = splitAt a es

shouldMiss :: CombType -> Int
shouldMiss FuncCall = 0
shouldMiss ConsCall = 0
shouldMiss (FuncPartCall n) = n
shouldMiss (ConsPartCall n) = n

miss :: CombType -> Int -> CombType
miss FuncCall         a = if a == 0 then FuncCall else FuncPartCall a
miss ConsCall         a = if a == 0 then ConsCall else ConsPartCall a
miss (FuncPartCall _) a = if a == 0 then FuncCall else FuncPartCall a
miss (ConsPartCall _) a = if a == 0 then ConsCall else ConsPartCall a

------------------------------------------------------------------------------
-- fill in cases
--
-- Look for any case
-- Since we've already built up a map from DataType
-- we can look up each case statement, and find which ones are filled in
-- If They're not filled in, then we can fix that
------------------------------------------------------------------------------

fillCases :: DataTable -> Opt
fillCases dt _ (Case ct e bs)
 | not (null exempts) = (Case ct e (bs++exempts), "FILL", 0)
       -- We can get away with having the wrong arity, because
       -- these branches are always a failure, so we should
       -- never bind variables to them anyway
 where exempts = [Branch (Pattern b []) exempt | b <- missingBranches dt bs]


-- find all missing branches from this tree
missingBranches :: DataTable -> [BranchExpr] -> [QName]
missingBranches dt bs 
 | any nullName bs = []
 | otherwise       = allBranches \\ foundBranches
 where allBranches    = fillCons (branchName (head bs)) dt
       foundBranches  = map branchName bs
       branchName     = patCons . branchPattern
       nullName (Branch (Pattern n _) _) = n == ("","")


-- applyRules:  f_m (function or constructor f missing m arguments)
--
-- apply f_(n+k) [a1,a2...an] 
-- ==>
-- f_k(a1,a2...an)
--
-- apply f_n [a1,a2...an]
-- ==>
-- f(a1,a2...an)
-- 
-- apply f_n [a1,a2...a(n+k)]
-- ==>
-- apply f(a1,a2...an) [a(n+1),...a(n+k)]
unapply :: Opt
unapply (n,_) (applyf (Comb pcall f es) as)
 = case compare m (length as) of
        LT -> (Let [(n, Comb (call pcall) f (es++as1))] (applyf (Var n) as2), "UNAPPLY_LT", 1)
        EQ -> (Comb (call pcall) f (es++as),                                  "UNAPPLY_EQ", 0)
        GT -> (Comb (partcall pcall (m-length as)) f (es++as),                "UNAPPLY_GT", 0)
 where m = missing pcall
       (as1, as2) = splitAt (missing pcall) as
       missing (FuncPartCall x) = x
       missing (ConsPartCall x) = x
       call (FuncPartCall _) = FuncCall
       call (ConsPartCall _) = ConsCall
       partcall (FuncPartCall _) x = FuncPartCall x
       partcall (ConsPartCall _) x = ConsPartCall x

