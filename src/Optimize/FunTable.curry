module Optimize.FunTable (FunTable, makeFunTable, addEntry, makeOptFunTable, addOptEntry,
                          isNondet, extFun, nondet, loopbreaker, arity, simple, cancels,
                          body, inlinable, params, showTable, showFun, freshVar) where

import Prelude hiding (lookup)
import Data.Map as M
import FlatCurry.Types
import FlatCurry.Goodies (branchExpr)
import List (sum)
import FlatUtils.FlatUtils (newVar)
import FlatCurry.Pretty (ppExp, Options(..), QualMode(..))
import Text.Pretty (pPrint)
import Integer ((^))
import Optimize.Flags (run_unboxing)

sizeLimit :: Int
sizeLimit = 35

-- name -> (external, nondet, loopbreaker, caseless, params, newVar, size, body)
type FunTable = M.Map QName (Bool, Bool, Bool, Bool, [VarIndex], VarIndex, Int, Expr)

makeFunTable :: [FuncDecl] -> [QName] -> FunTable
makeFunTable fs bs = foldr (addEntry bs) empty fs

addEntry :: [QName] -> FuncDecl -> FunTable -> FunTable
addEntry breakers (Func n _ _ _ (Rule vs b)) tab 
 = M.insert n (False, isNondet tab b, n `elem` breakers, caseless b, vs, max a (newVar b), getSize b, b) tab
  where a = 1 + foldr max 0 vs
addEntry _ (Func n a _ _ (External _)) tab 
 = M.insert n (True, True, True, False, [1..a], a+1, sizeLimit+1, Comb ConsCall ("","EXEMPT") []) tab


makeOptFunTable :: [FuncDecl] -> FunTable
makeOptFunTable = foldr addOptEntry M.empty 

-- This is for reading an optimized flatCurry file (.opt) into a function table
-- We use the visibility field to store if the function was a loop breaker.
addOptEntry :: FuncDecl -> FunTable -> FunTable
addOptEntry (Func n _ vis _ (Rule nvs b)) tab 
 =  M.insert n (False, isNondet tab b, vis == Private, caseless b, vs, max a (newVar b), getSize b, b) tab
  where a = 1 + foldr max 0 vs
        vs = map abs nvs
addOptEntry (Func n a _ _ (External _)) tab 
 = M.insert n (True, True, True, False, [1..a], a+1, sizeLimit+1, Comb ConsCall ("","EXEMPT") []) tab



-- This isn't perfect
-- We could have cases like let x free in True, which is actually deterministic,
-- but hopefully the optimizer will catch a lot of these.
isNondet :: FunTable -> Expr -> Bool
isNondet _   (Var _)       = False
isNondet _   (Lit _)       = False
isNondet tab (Comb _ n es) = nondet tab n || any (isNondet tab) es
isNondet tab (Let vs e)    = any (isNondet tab) (e : map snd vs)
isNondet _   (Free _ _)    = True
isNondet _   (Or _ _)      = True
isNondet tab (Typed e _)   = isNondet tab e
isNondet tab (Case _ e bs) = isNondet tab e || any isNondetBranch bs
 where isNondetBranch (Branch _ e) = isNondet tab e

-- Get a rough estimate of the size of a function
getSize :: Expr -> Int
getSize (Var _)       = 1
getSize (Lit _)       = 1
getSize (Comb _ _ es) = 1 + sum (map getSize es)
getSize (Let vs e)    = sum (map (getSize . snd) vs) + getSize e + 1
getSize (Free _ e)    = getSize e + 1
getSize (Or e1 e2)    = getSize e1 + getSize e2
getSize (Typed e _)   = getSize e
getSize (Case _ e bs) = 1 + getSize e + sum (map (getSize . branchExpr) bs)

-- Get a rough estimate of the size of a function
caseless :: Expr -> Bool
caseless (Var _)       = True
caseless (Lit _)       = True
caseless (Comb _ _ es) = all caseless es
caseless (Let vs e)    = all caseless (e : map snd vs)
caseless (Free _ e)    = caseless e
caseless (Or e1 e2)    = all caseless [e1,e2]
caseless (Typed e _)   = caseless e
caseless (Case _ e bs) = False


extFun :: FunTable -> QName -> Bool
extFun ft n = case lookup n ft of
                     Just (ext,_,_,_,_,_,_,_) -> ext

-- This needs to be defined because isNondet uses it.
nondet :: FunTable -> QName -> Bool
nondet ft n = case lookup n ft of
                   Nothing                     -> False
                   Just (_,nondet,_,_,_,_,_,_) -> nondet

loopbreaker :: FunTable -> QName -> Bool
loopbreaker ft n = case lookup n ft of
                        Nothing                   -> False
                        Just (_,_,loop,_,_,_,_,_) -> loop

arity :: FunTable -> QName -> Int
arity ft n = case lookup n ft of
                  Just (_,_,_,_,vs,_,_,_) -> length vs

params :: FunTable -> QName -> [VarIndex]
params ft n = case lookup n ft of
                      Just (_,_,_,_,vs,_,_,_) -> vs

freshVar :: FunTable -> QName -> VarIndex
freshVar ft n = case lookup n ft of
                      Just (_,_,_,_,_,v,_,_) -> v


bodySize :: FunTable -> QName -> Int
bodySize ft n = case lookup n ft of
                     Just (_,_,_,_,_,_,s,_) -> s

body :: FunTable -> QName -> Expr
body ft n = case lookup n ft of
                 Just (_,_,_,_,_,_,_,b) -> b


inlinable :: FunTable -> QName -> Bool
inlinable ft n = case lookup n ft of
                      Nothing -> False
                      Just (ext,_,loop,_,_,_,size,_) -> not (ext || loop) 
                                                        && size < sizeLimit 
                                                        && n /= ("Prelude","build")
                                                        && n /= ("Prelude","build_fold")
                                                        && (run_unboxing || (not (primitive n)))
  where primitive x = case snd x of
                           "eqChar"      -> True
                           "eqInt"       -> True
                           "eqFloat"     -> True
                           "ltEqChar"    -> True
                           "ltEqInt"     -> True
                           "ltEqFloat"   -> True
                           "ord"         -> True
                           "chr"         -> True
                           "i2f"         -> True
                           "+$"          -> True
                           "-$"          -> True
                           "*$"          -> True
                           "div_"        -> True
                           "mod_"        -> True
                           "quot_"       -> True
                           "rem_"        -> True
                           "negateFloat" -> True
                           "+."          -> True
                           "-."          -> True
                           "*."          -> True
                           "/."          -> True
                           _             -> False

simple :: FunTable -> QName -> Bool
simple ft n = case lookup n ft of
                      Nothing -> False
                      Just (_,_,_,nocase,_,_,size,_) -> nocase && size < 10 && inlinable ft n

showTable :: FunTable -> String
showTable ft = unlines $ map (showEntry ft) (toList ft)
showEntry ft (name, (ext, nd, loop, nocase, ps, nv, sz, b)) =
  (snd name) ++ " =>  {"++
                      (if ext  then "external, " else "") ++
                      (if nd   then "nondet, " else "") ++
                      (if loop then "loop breaker, " else "") ++
                      (if inlinable ft name then "inlinable, " else "not inlinable, ") ++
                      (if simple ft name then "simple, " else "not simple, ") ++
                      show ps ++ " params, " ++
                      "next variable = " ++ show nv ++ ", " ++
                      "size = " ++ show sz ++
                      "}\n" ++
                      pPrint (ppExp (Options 2 QualNone "") b) ++ 
                      "\n"

showFun :: FunTable -> QName -> String
showFun ft n = case lookup n ft of
                    Nothing -> ""
                    Just e  -> showEntry ft (n, e)

cancels :: FunTable -> QName -> [Bool] -> Bool
cancels ft f bs = canCancel [v | (v,True) <- zip (params ft f) bs] (body ft f) 

canCancel :: [VarIndex] -> Expr -> Bool
canCancel _ (Var _) = False
canCancel _ (Lit _) = False
canCancel _ (Comb _ _ _) = False
canCancel vs (Let _ e) = canCancel vs e
canCancel vs (Free _ e) = canCancel vs e
canCancel vs (Typed e _) = canCancel vs e
canCancel vs (Or e1 e2) = any (canCancel vs) [e1,e2]
canCancel vs (Case _ v bs) 
 | v `elem` map Var vs = True
 | otherwise = any (canCancel vs . branchExpr) bs

