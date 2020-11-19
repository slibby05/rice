module Optimize.FunTable (FunTable, makeFunTable, addEntry, isNondet, 
                          extFun, nondet, loopbreaker, arity, 
                          body, inlinable, params, showTable) where

import Data.Map as M
import FlatCurry.Types
import FlatCurry.Goodies (branchExpr)
import List (sum)

sizeLimit :: Int
sizeLimit = 20

-- name -> (external, nondet, loopbreaker, params, size, body)
type FunTable = M.Map QName (Bool, Bool, Bool, [VarIndex], Int, Expr)

makeFunTable :: [FuncDecl] -> [QName] -> FunTable
makeFunTable fs bs = foldr (addEntry bs) empty fs

addEntry :: [QName] -> FuncDecl -> FunTable -> FunTable
addEntry breakers (Func n _ _ _ (Rule vs b)) tab 
 = M.insert n (False, isNondet tab b, n `elem` breakers, vs, getSize b, b) tab
addEntry breakers (Func n a _ _ (External _)) tab 
 = M.insert n (True, True, True, [1..a], 1000, Comb ConsCall ("","EXEMPT") []) tab

-- This isn't perfect
-- We could have cases like let x free in True, which is actually deterministic,
-- but hopefully the optimizer will catch a lot of these.
isNondet :: FunTable -> Expr -> Bool
isNondet _   (Var _)       = False
isNondet _   (Lit l)       = False
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


extFun :: FunTable -> QName -> Bool
extFun fd n = case M.lookup n fd of
                     Nothing            -> True
                     Just (ext,_,_,_,_,_) -> ext

nondet :: FunTable -> QName -> Bool
nondet fd n = case M.lookup n fd of
                   Nothing               -> True
                   Just (_,nondet,_,_,_,_) -> nondet

loopbreaker :: FunTable -> QName -> Bool
loopbreaker fd n = case M.lookup n fd of
                        Nothing             -> True
                        Just (_,_,loop,_,_,_) -> loop

arity :: FunTable -> QName -> Int
arity fd n = case M.lookup n fd of
                  Nothing           -> 0
                  Just (_,_,_,vs,_,_) -> length vs

bodySize :: FunTable -> QName -> Int
bodySize fd n = case M.lookup n fd of
                     Nothing            -> 1000
                     Just (_,_,_,_,s,_) -> s

body :: FunTable -> QName -> Expr
body fd n = case M.lookup n fd of
                 Nothing            -> Comb ConsCall ("","EXEMPT") []
                 Just (_,_,_,_,_,b) -> b


inlinable :: FunTable -> QName -> Bool
inlinable fd n = case M.lookup n fd of
                      Nothing                         -> False
                      Just (ext,_,loopbreaker,_,size,_) -> not (ext || loopbreaker) && size < sizeLimit

params :: FunTable -> QName -> [VarIndex]
params fd n = case M.lookup n fd of
                      Nothing             -> []
                      Just (_,_,_,vs,_,_) -> vs

showTable :: FunTable -> String
showTable ft = unlines $ map show (toList ft)
