module FlatUtils.FlatRewrite (replace, subexpr, arbitrary, 
                              Path, step, 
                              hasVar,
                              allDecls, allVars, allNames, allVarPaths, freeVars, allInvPaths,
                              sub, (@>), idSub, rename) where

import Control.Findall
import FlatCurry.Types
import List
import Util


{-
This is a module for finding and replacing subexpressions
the goal is that I can write all of my transformations as rewrite rules
and then continue applying them until we reach a fixpoint.

-}

type Path = [Int]

-- subexpr computes e|p for any expression e and path p.
-- for the most part this is pretty straightforward
-- just find the right element in the path and move on,
subexpr :: Expr -> (Path,Expr)
subexpr e            = ([],e)
subexpr (Free _ e)   = mapFst ( 0:) $ subexpr e
subexpr (Or e _)     = mapFst ( 0:) $ subexpr e
subexpr (Or _ e)     = mapFst ( 1:) $ subexpr e
subexpr (Let _ e)    = mapFst (-1:) $ subexpr e
subexpr (Typed e _)  = mapFst (-1:) $ subexpr e
subexpr (Case _ e _) = mapFst (-1:) $ subexpr e
subexpr (Comb _ _ (es++[e]++_))          = mapFst (length es:) $ subexpr e
subexpr (Let      (es++[e]++_) _)        = mapFst (length es:) $ subexpr (snd e)
subexpr (Case _ _ (bs++[Branch _ e]++_)) = mapFst (length bs:) $ subexpr e

-- replace takes an expression e, path p, and new expression w, and computes e[w]_p
-- or it replaces the expression e at position p, with the expression w
replace :: Expr -> Path -> Expr -> Expr
replace _             []      w = w
replace (Free vs e)   ( 0:ps) w = Free vs (replace e ps w)
replace (Or e1 e2)    ( 0:ps) w = Or (replace e1 ps w) e2
replace (Or e1 e2)    ( 1:ps) w = Or e1 (replace e2 ps w)
replace (Typed e t)   (-1:ps) w = Typed (replace e ps w) t

replace (Comb t n (x++[e]++y)) (p:ps) w
 | p =:= length x
 = Comb t n (x ++ [replace e ps w] ++ y)

replace (Let bs e)               (-1:ps) w = Let bs (replace e ps w)
replace (Let (x++[(v,e)]++y) e') (p:ps)  w 
 | p =:= length x
 = Let (x ++ [(v, replace e ps w)] ++ y) e'

replace (Case t e bs)                    (-1:ps) w = Case t (replace e ps w) bs
replace (Case t e' (x++[Branch f e]++y)) (p:ps)  w
 | p =:= length x
 = Case t e' (x ++ [Branch f (replace e ps w)] ++ y)

-- apply substitution s to expression e
-- The substitution is expected to be defined for all variables in the domain
-- so if (s x) = x if x shouldn't be changed
sub :: (Int -> Expr) -> Expr -> Expr
sub s (Var v)       = s v
sub s (Lit l)       = Lit l
sub s (Free vs e)   = Free vs (sub s e)
sub s (Or e1 e2)    = Or (sub s e1) (sub s e2)
sub s (Typed e t)   = Typed (sub s e) t
sub s (Comb t n es) = Comb t n (map (sub s) es)
sub s (Let vs e)    = Let (map (mapSnd (sub s)) vs) (sub s e)
sub s (Case t e bs) = Case t (sub s e) (map (branchSub s) bs)
 where branchSub s (Branch f e) = Branch f (sub s e)

-- combinators for building up a substitution
idSub :: Int -> Expr
idSub x = Var x

(@>) :: (Eq a) => (a,b) -> (a -> b) -> (a -> b)
(x,e) @> s = \v -> if x == v then e else s v

-- I wanted to do this with sub, but if I'm renaming, then I probably want to rename declarations too.
rename :: [Int] -> [Int] -> Expr -> Expr
rename vin vout = ren (foldr (@>) id (zip vin vout))
 where ren s (Var v)       = Var (s v)
       ren s (Lit l)       = Lit l
       ren s (Free vs e)   = Free (map s vs) (ren s e)
       ren s (Or e1 e2)    = Or (ren s e1) (ren s e2)
       ren s (Typed e t)   = Typed (ren s e) t
       ren s (Comb t n es) = Comb t n (map (ren s) es)
       ren s (Let vs e)    = Let (map (fork s (ren s)) vs) (ren s e)
       ren s (Case t e bs) = Case t (ren s e) (map (branchRen s) bs)
       branchRen s (Branch (Pattern n vs) e) = Branch (Pattern n (map s vs)) (ren s e)
       branchRen s (Branch (LPattern l) e)   = Branch (LPattern l) (ren s e)

arbitrary :: Expr -> Expr
arbitrary = snd . subexpr

-- fix f x with find a non-deterministic fixpoint for f
-- this means that if f can have more than one result,
-- then we just pick one arbitrarily
-- it might be worth while to add some sort of ordering on what expression we pick

-- Step applies a rewrite rule (Expr -> Expr) to any subexpression where it can apply
-- I'm a little more general here than I need to be (the rule actually knows the path too)
-- but I think this will be helpful later
step :: (Expr -> Path -> Expr) -> Expr -> Expr
step reduce expr | subexpr expr =:= (p,y)
                 & z =:= reduce y p
                 = replace expr p z
  where p, y, z free

-- This is something that really should be in SetFunctions
-- take a non-deterministic function, and get all of the values by applying it
-- it does destroy the non-determinism independence, but otherwise if I want all of the values,
-- then I need to write all of the code as I/O actions


-- This idea is entirely stolen from Sergio
-- I'm not nearly smart enough to think of this.
--
-- anyway, the idea for withSubexpr is that
-- is to build an arbitrary subexpression around a core
-- so f (withSubexpr (Or e1 e2)) will match any Or expression
withSubexpr :: Expr -> Expr
withSubexpr expr
  = expr
  ? (Comb _ _ (_ ++ [withSubexpr expr] ++ _))
  ? (Let (_ ++ [(_, withSubexpr expr)] ++ _) _)
  ? (Let _ (withSubexpr expr))
  ? (Free _ (withSubexpr expr))
  ? (Or (withSubexpr expr) _)
  ? (Or _ (withSubexpr expr))
  ? (Case _ _ (_ ++ [(Branch _ (withSubexpr expr))] ++ _))
  ? (Case _ (withSubexpr expr) _)
  ? (Typed (withSubexpr expr) _)

-- get an arbitrary variable in the expression
isVar :: Expr -> VarIndex
isVar (withSubexpr (Var v)) = v

-- get an arbitrary variable in the expression
hasVar :: Expr -> VarIndex -> Bool
hasVar (withSubexpr (Var v)) v = True

-- get an arbitrary declared variable from an expression
declVar :: Expr -> VarIndex
declVar (withSubexpr (Let v _)) = anyOf $ map fst v
declVar (withSubexpr (Free v _)) = anyOf v
declVar (withSubexpr (Case _ _ (_++[Branch (Pattern _ v) _]++_))) = anyOf v

allDecls :: Expr -> [VarIndex]
allDecls = nub . allValues . declVar

allVars :: Expr -> [VarIndex]
allVars = nub . allValues . isVar

allNames :: Expr -> [VarIndex]
allNames e = nub $ allVars e ++ allDecls e

isVarPath :: Expr -> (VarIndex, Path)
isVarPath e
 | subexpr e =:= (p, Var v) = (v, p)
  where v, p free

allVarPaths :: Expr -> [(VarIndex, Path)]
allVarPaths = nub . allValues . isVarPath


freeVars :: Expr -> [VarIndex]
freeVars expr = allVars expr \\ allDecls expr


allInvPaths :: Expr -> [(Int,Path)]
allInvPaths = nub . allValues . invPath

invPath :: Expr -> (Int,Path)
invPath (Var v)                 = (v,[])
invPath (Or l r)                = (mapSnd (0:) (invPath l)) ? (mapSnd (1:) (invPath r))
invPath (Comb _ _ (_++[e]++es)) = mapSnd (length es:) (invPath e)

