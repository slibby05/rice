{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

-- Graph Algebra System
-- 

module Gas where

import FlatCurry.Types
import FlatRewrite
import Util
import Debug


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
loop :: (FuncDecl -> Int -> [FuncDecl]) -> [FuncDecl] -> Int -> ([FuncDecl],Int)
loop opt []     n = ([], n)
loop opt (f:fs) n
  = trace ("FUNCTION: " ++ fname f) $ fcase opt f n of
      []      -> mapFst (f:) (loop opt fs n)
      y@(_:_) -> loop opt (y++fs) (n + length y)
 where fname (Func q _ _ _ _) = snd q

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
-- Finally satisfies e p filters the expression
-- (Just (_,e)) ~> satisfies p returns if p e is True
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

satisfies :: Maybe (Path, Expr) -> (Expr -> Bool) -> Maybe (Path, Expr)
satisfies a@(Just (_,e)) p | p e = a

-- These are constants the let me build up expressions more easily
clet, ccase, ccomb, cor, cfree, ctype :: Expr
clet  = Let _ _
ccase = Case _ _ _
ccomb = Comb _ _ _
cor   = Or _ _
cfree = Free _ _
ctype = Typed _ _

