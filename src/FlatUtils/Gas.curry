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


showRule l s = (pPrint (ppExp defaultOptions l)) ++ 
               "\n->_"++ s ++ "\n"

--maybeFix :: (Eq a, Show a) => (a -> (a,String)) -> a -> a
maybeFix :: (Expr -> (Expr,String)) -> Expr -> (Expr, String)
maybeFix opt e = case id $## oneValue (opt e) of
                      Nothing     -> (e, pPrint (ppExp defaultOptions e))
                      Just (e',s) -> mapSnd (showRule e s ++) (maybeFix opt e')


--maybeFixLimit :: (Eq a, Show a) => (a -> (a,String)) -> a -> Int -> a
maybeFixLimit :: (Expr -> (Expr,String)) -> Expr -> Int -> (Expr, String)
maybeFixLimit opt e n 
 | n == 0 = e
 | otherwise = case id $## oneValue (opt e) of
                    Nothing     -> (e, pPrint (ppExp defaultOptions e))
                    Just (e',s) -> mapSnd (showRule e s ++) (maybeFixLimit opt e' (n-1))

simplify :: (Expr -> (Expr, String)) -> Expr -> Expr
simplify opt e = maybeFix opt e

simplifyLimit :: (Expr -> (Expr, String)) -> Int -> Expr -> Expr
simplifyLimit opt n e = maybeFixLimit opt e n

--------------------------------------------------------------------
-- getting subexpressions
--
-- This is the core idea behind the GAS system.
-- The idea is to find a subexpression and path as simply as possible.
-- This feels pretty similar to a parser combinator library
--
-- We start with the root of the expression and an empty path
-- start = Just ([], e)
-- We use Maybe here, because it is useful to distinguish the case
-- where we failed (Nothing), and the case where the root satisfies
-- our subexpression condition (Just ([], e))
--
-- Now, we can search for a subexpression with the ~> operator.
-- a ~> b will find a copy of b that is a subexpresion of a
-- formally if e is the root of an expression
-- and e|p = a, and a|q = b, then (Just (p,a)) ~> b returns (Just (p++q,b))
--
-- If we remove the maybe and path annotations from the expressions, then ~> forms a partial order.
--
-- There is also a one step version of this operator.
-- a ~~ b finds b if b is an immedeate child of a
-- again if e|p = a and a|[x] = b, then (Just (p,a)) ~~ b returns (Just (p++[x],b))
--
-- we can combine ~> and ~~ to get an irreflexive version.
-- a ~~> b will return if b is a proper subexpression of a.
--
-- Finally e ~| p filters the expression
-- (Just (_,e)) ~| p returns if p e is True
--------------------------------------------------------------------

start :: Expr -> Maybe (Path, Expr)
start e = Just ([], e)

(~~) :: Maybe (Path, Expr) -> Expr -> Maybe (Path, Expr)
(Just (p,e)) ~~ a
 | subexpr e == ([x],a)
 = Just (p++[x],a)
  where x free

(~>) :: Maybe (Path, Expr) -> Expr -> Maybe (Path, Expr)
(Just (p,e)) ~> a
 | subexpr e == (q,a)
 = Just (p++q,a)
  where q free

(~~>) :: Maybe (Path, Expr) -> Expr -> Maybe (Path, Expr)
e ~~> a = e ~~ _ ~> a

(~|) :: Maybe (Path, Expr) -> (Expr -> Bool) -> Maybe (Path, Expr)
a@(Just (_,e)) ~| p | p e = a


(|~>) ::  Maybe (Path,Expr) -> Expr -> Maybe (Path, Expr)
(Just (p,l)) |~> r = Just (p,r)

-- These are constants the let me build up expressions more easily
clet :: Expr
clet  = Let   _ _
ccase :: Expr
ccase = Case  _ _ _
ccomb :: Expr
ccomb = Comb  _ _ _
cor :: Expr
cor   = Or    _ _
cfree :: Expr
cfree = Free  _ _
ctype :: Expr
ctype = Typed _ _
clit :: Expr
clit  = Lit _
cvar :: Expr
cvar  = Var _


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

