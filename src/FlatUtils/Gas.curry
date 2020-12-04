{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

-- Graph Algebra System
-- 

module FlatUtils.Gas where

import FlatCurry.Types
import FlatCurry.Goodies (updProgExps)
import FlatUtils.FlatRewrite
import FlatCurry.Pretty
import Text.Pretty
import Util
import Debug
import Control.Findall (oneValue)


-- Loop over each function and applied a specified transformation.
-- The transformation is allowed to return an empty list of no transformation is applied
-- However, if any transformation is applied, then the transformed functions are
-- passed into opt again to see if they can be transformed further.
--
-- @param opt - the transformationto apply to each function
--              returns an empty list if no transformation is applied
--              otherwise it returns a list of 1 or more transformed functions
-- @param (f:fs) - the list of funcions to apply the transformation
-- @return a list of transformed functions.  This list may be longer than the origonal list.
loop :: (Int -> FuncDecl -> [FuncDecl]) -> Int -> [FuncDecl] -> [FuncDecl]
loop _   _ []     = []
loop opt n (f:fs)
  = fcase opt n f of
      []      -> f : loop opt n fs
      y@(_:_) -> loop opt (n+1) (y++fs)


showRule s r = "->_"++ s ++ "\n" ++
               (pPrint (ppExp defaultOptions r))
               

--maybeFix :: (Eq a, Show a) => (a -> (a,String)) -> a -> a
maybeFix :: (Expr -> (Expr,String)) -> Expr -> Expr
maybeFix opt e = case oneValue (opt e) of
                      Nothing     -> e
                      Just (e',s) -> trace (showRule s e') $ maybeFix opt e'


--maybeFixLimit :: (Eq a, Show a) => (a -> (a,String)) -> a -> Int -> a
maybeFixLimit :: (Expr -> (Expr,String)) -> Expr -> Int -> Expr
maybeFixLimit opt e n 
 | n == 0 = e
 | otherwise = case oneValue (opt e) of
                    Nothing     -> e
                    Just (e',s) -> trace (showRule s e') $ maybeFixLimit opt e' (n-1)

simplify :: (Expr -> (Expr, String)) -> Expr -> Expr
simplify opt e = maybeFix opt e

simplifyLimit :: (Expr -> (Expr, String)) -> Int -> Expr -> Expr
simplifyLimit opt n e = maybeFixLimit opt e n


-- |=> represents a rewrite rule
-- if r = (lhs |=> rhs)
-- then r e computes f where e rewrites to f with rule r.
-- e ->_(p,r) f for some position p in e
(|=>) :: Expr -> (Expr,String) -> Expr -> (Expr,String)
lhs |=> (rhs,name) = \e -> subexpr e =:= (p,lhs) &> (replace e p rhs, name)
  where p free

-- Similar to above, but we make two expressions.
-- This is used when we need to move part of an expression out into a different function.
(||=>) :: Expr -> (Expr, Expr) -> Expr -> (Expr, Expr)
lhs ||=> (r1, r2) = \e -> subexpr e =:= (p,lhs) &> (replace e p r1, r2)
  where p free

-- Conditional rewrite rule.
-- Again similar to above, but this time we can add a condition.
(?=>) :: (Expr, Bool) -> (Expr,String) -> Expr -> (Expr,String)
(lhs, cond) ?=> (rhs, name) = \e -> (subexpr e =:= (p,lhs) & cond) &> (replace e p rhs, name)
  where p free

-- helper functions to make some expressions easier to construct
applyf :: Expr -> [Expr] -> Expr
applyf f es = Comb FuncCall ("Prelude","apply") (f:es)

caseBranch :: Expr -> Expr
caseBranch e = Case _ _ (_++[Branch _ e]++_)

partCall :: Int -> QName -> [Expr] -> Expr
partCall n f es = Comb (FuncPartCall n) f es
                ? Comb (ConsPartCall n) f es

