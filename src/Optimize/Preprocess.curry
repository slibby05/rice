{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Preprocess (preprocess, flatten, alias, float, blocks, caseVar) where

-----------------------------------------------------------
-- This module preprocesses FlatCurry files to do a bunch of simple transformations
-- This makes it easier to perform optimizations on the FlatCurry programs.
-- It's also stuff we'd need to do anyway to compile.
-----------------------------------------------------------

import FlatCurry.Types
import FlatCurry.Goodies (funcName, updFuncBody,branchPattern,patCons)
import FlatUtils.FlatRewrite
import FlatUtils.Gas
import FlatUtils.DataTable
import Optimize.ANF
import Control.SetFunctions
import Control.Findall
import Graph
import List ((\\), last)
import Debug

f <.> g = \(e,s) -> let (e1,s1) = g e
                        (e2,s2) = f e1
                    in (e2,s1++s2)

-- Applies all transformation and returns the resulting program
preprocess :: DataTable -> FuncDecl -> FuncDecl
preprocess dt f = trace ("function: " ++ snd (funcName f)) $ updFuncBody runOpts f
 where runOpts =   simplify (fillCases dt) 
               <.> simplify fixLets
               <.> simplify (toANF trivial)
               <.> simplify canonize


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
float :: Expr -> (Expr, String)
float = Let (as++[(x,Let vs e1)]++bs) e2 |=> (Let (vs++as++[(x,e1)]++bs) e2, "float 1")
  where as,x,vs,e1,bs,e2 free
float = Let (as++[(x,Free vs e1)]++bs) e2 |=> (Free vs (Let (as++[(x,e1)]++bs) e2), "float 2")
  where as,x,vs,e1,bs,e2 free
float = Or (Let vs e1) e2 |=> (Let vs (Or e1 e2), "float 3")
  where vs, e1, e2 free
float = Or e1 (Let vs e2) |=> (Let vs (Or e1 e2), "float 4")
  where vs, e1, e2 free
float = Or (Free vs e1) e2 |=> (Free vs (Or e1 e2), "float 5")
  where vs, e1, e2 free
float = Or e1 (Free vs e2) |=> (Free vs (Or e1 e2), "float 6")
  where vs, e1, e2 free
float = Comb ct n (as++[Let vs e]++bs) |=> (Let vs (Comb ct n (as++[e]++bs)), "float 7")
  where ct,n,as,vs,e,bs free
float = Comb ct n (as++[Free vs e]++bs) |=> (Free vs (Comb ct n (as++[e]++bs)), "float 8")
  where ct,n,as,bs,vs,e free
float = Case ct (Let vs e) bs |=> (Let vs (Case ct e bs), "float 9")
  where ct,vs,e,bs free
float = Case ct (Free vs e) bs |=> (Free vs (Case ct e bs), "float 10")
  where ct,vs,e,bs free

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

-- Typed:
-- e : t => e
--
-- double apply
-- apply (apply f [x]) [y]
-- ==>
-- apply f [x,y]

flatten :: Expr -> (Expr, String)
flatten = Typed e t |=> (e, "flatten 1")
  where e,t free
flatten = Case r1 (Case r2 e b2) b1
          |=> 
          (Case r2 e [Branch p (Case r1 e' b1) | (Branch p e') <- b2], "flatten 2")
  where r1,r2,e,b1,b2 free
flatten = applyf (applyf f as) bs |=> (applyf f (as++bs), "flatten 3")
  where f, as, bs free


------------------------------------------------------------------------------

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
blocks :: Expr -> (Expr, String)
blocks = Let vs e |=> (makeBlocks vs e, "blocks")
  where vs, e free

-- compute the mutually recursive let blocks
-- This is done by making a graph and computing the strongly connected components
-- 
-- @param es the list of variable/expression pairs in a let block
-- @param e the final expression to return
-- @return a new let expression where each let block is a set of mutually recursive definitions.
makeBlocks :: [(Int,Expr)] -> Expr -> Expr
makeBlocks es e
 | length comps > 1 = foldr makeBlock e comps
 where getComponents = map preorder . scc . buildG . concatMap makeEdges
       comps         = getComponents es

       getExp (_++[(n,exp)]++_) n = (n,exp)
       makeBlock comp = Let (map (getExp es) comp)

       makeEdges (v, exp) = [(v,f) | f <- freeVars exp]


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

alias :: Expr -> (Expr, String)
alias = l |=> (fixAlias l, "alias")
  where l = Let (_++[(_, Var _)]++_) _

fixAlias :: Expr -> Expr
fixAlias (Let (as++[(v,Var y)]++bs) e)
 | v == y       = Let (as++[(v,loop)]++bs) e
 | otherwise    = suby (Let (as++bs) e)
  where loop = Comb ConsCall ("","LOOP") []
        suby = sub ((v, Var y) @> idSub)

------------------------------------------------------------------------------

-- reuse of case-variable
-- case xs of 
--     (C x1 x2) -> ... xs ...
-- =>
-- case xs of
--     (C x1 x2) -> ... (C x1 x2) ...
caseVar :: Expr -> (Expr, String)
caseVar = (Case ct (Var x) bs, hasVar (Case ct z bs) x)
          ?=> 
          (Case ct (Var x) (map (repCaseVar x) bs), "caseVar")
  where ct,x,bs free
        z = (Lit (Intc 0)) -- dummy expression that doesn't contain x

repCaseVar :: VarIndex -> BranchExpr -> BranchExpr
repCaseVar x (Branch (Pattern n vs) e) = Branch (Pattern n vs) (sub f e)
  where f v = if v == x then Comb ConsCall n (map Var vs) else Var v
repCaseVar x (Branch (LPattern l) e)   = Branch (LPattern l)   (sub f e)
  where f v = if v == x then Lit l else Var v

------------------------------------------------------------------------------

canonize :: Expr -> (Expr, String)
--canonize = float ? flatten ? blocks ? alias ? caseVar
canonize = float 
         ? flatten 
         ? blocks 
         ? alias 
         ? caseVar

fixLets :: Expr -> (Expr, String)
fixLets = float ? blocks



------------------------------------------------------------------------------
-- fill in cases
--
-- Look for any case
-- Since we've already built up a map from DataType
-- we can look up each case statement, and find which ones are filled in
-- If They're not filled in, then we can fix that
------------------------------------------------------------------------------

fillCases :: DataTable -> Expr -> (Expr, String)
fillCases dt = (Case ct e bs, not (null exempts))
               ?=> 
               (Case ct e (bs++exempts), "fill case")
 where ct, e, bs free
       -- We can get away with having the wrong arity, because
       -- these branches are always a failure, so we should
       -- never bind variables to them anyway
       exempts = [Branch (Pattern b []) exempt | b <- missingBranches dt bs]


-- find all missing branches from this tree
missingBranches :: DataTable -> [BranchExpr] -> [QName]
missingBranches dt bs 
 | any (\b -> bname b == ("","")) bs = []
 | otherwise       = allBranches \\ foundBranches
 where allBranches    = fillCons (branchName (head bs)) dt
       foundBranches  = map branchName bs
       branchName     = patCons . branchPattern
       bname (Branch (Pattern n _) _) = n


