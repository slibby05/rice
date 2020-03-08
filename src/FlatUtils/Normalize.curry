{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module FlatUtils.Normalize (transform) where

-----------------------------------------------------------
-- This module puts FlatCurry in a -- normalized form.
-- This doesn't mean we're normalizing expressions in the sense of evaluation,
-- we're just putting it in a form that can be translated to Icurry
-----------------------------------------------------------

import FlatCurry.Types
import FlatCurry.Goodies (isVar,caseBranches,branchPattern,patCons)
import FlatUtils.FlatRewrite
import FlatUtils.Gas
import FlatUtils.DataTable
import Util
import Control.SetFunctions
import Graph
import List (delete, (\\))

-- Applies all transformation and returns the resulting program
transform :: DataTable -> Prog -> DET Prog
transform dt (Prog n is d fs ops) = Prog n is d fs' ops
 where (fs',_) = (fs,0) ++> rootCases
                        ++> moveContFlow
                        ++> fillCases dt
       (is,n) ++> opt = loop opt is n

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
-- The convection I'm using is
-- Rule name:
-- origonal expr
-- =>
-- transformed expr
--
--
-- Let in Let:
-- let a = let b = x
--             in e1
--     in e2
-- =>
-- let b = x
--     a = e1
--     in e2
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
-- Or in Free
-- (let a free in e1 ? e2)
-- =>
-- let a free in (e1 ? e2)
--
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
-- Typed:
-- e : t => e
--
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
-- Aliasing:
-- let (x = y:vs) in e
-- => if x == y then LOOP
--    if x /= y and vs == [] then e
--    if x /= y and vs /= [] then let vs in e
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
-- Or in Case:
-- case (c1 ? c2) of b -> e
-- =>
-- let x = (c1?c2) in case b -> e

-- expr in Case:
-- It's just easier to remove non-variable expressions from case here.
-- case ce of b -> e (if ce is not a variable)
-- =>
-- let x = ce in case x -> e

moveContFlow :: FuncDecl -> Int -> [FuncDecl]
moveContFlow (Func _ _ _ _ (External _))   _ = []
moveContFlow (Func n a v t (Rule vs body)) _ =
  case rules body of
       Nothing      -> []
       Just newBody -> [Func n a v t (Rule vs newBody)]

rules :: Expr -> DET (Maybe Expr)
rules body = (body, Or (Let vs e1) e2) |=> Let vs (Or e1 e2)
  where vs, e1, e2 free
rules body = (body, Or e1 (Let vs e2)) |=> Let vs (Or e1 e2)
  where vs, e1, e2 free
rules body = (body, Or (Free vs e1) e2) |=> Free vs (Or e1 e2)
  where vs, e1, e2 free
rules body = (body, Or e1 (Free vs e2)) |=> Free vs (Or e1 e2)
  where vs, e1, e2 free
rules body = (body, Comb ct n (as++[Let vs e]++bs)) |=> Let vs (Comb ct n (as++[e]++bs))
  where ct,n,as,vs,e,bs free
rules body = (body, Comb ct n (as++[Free vs e]++bs)) |=> Free vs (Comb ct n (as++[e]++bs))
  where ct,n,as,bs,vs,e free
rules body = (body, Let (as++[(x,Let vs e1)]++bs) e2) |=> Let (as++vs++[(x,e1)]++bs) e2
  where as,x,vs,e1,bs,e2 free
rules body = (body, Let (as++[(x,Free vs e1)]++bs) e2) |=> Free vs (Let (as++[(x,e1)]++bs) e2)
  where as,x,vs,e1,bs,e2 free
rules body = (body, Case r1 (Case r2 e b2) b1) |=> Case r2 e (map (foldCase r1 b1) b2)
  where r1,r2,e,b1,b2 free
rules body = (body, Case ct (Let vs e) bs) |=> Let vs (Case ct e bs)
  where ct,vs,e,bs free
rules body = (body, Case ct (Free vs e) bs) |=> Free vs (Case ct e bs)
  where ct,vs,e,bs free
rules body = (body, Typed e t) |=> e
  where e,t free
rules body = (body, Let vs e) |=> makeBlocks vs e
  where vs, e free
rules body = (body,l) |=> fixAlias l
  where x,y free
        l = Let (_++[(x, Var y)]++_) _
rules body = (body, Case ct e bs) |=> Let [(x,e)] (Case ct (Var x) bs)
  where e = ccomb ? clit ? cor
        x = foldr max 0 (allVars body) + 1
        ct,bs free
rules body = Nothing

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
-- This function putse the inner case in front of each branch.
foldCase :: CaseType -> [BranchExpr] -> BranchExpr -> BranchExpr
foldCase ct bs (Branch p e) = Branch p (Case ct e bs)

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

       makeEdge v f       = (v,f)
       makeEdges (v, exp) = map (makeEdge v) (freeVars exp)



--------------------------------------------------------------------
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
--------------------------------------------------------------------

fixAlias :: Expr -> DET Expr
fixAlias (Let (as++[(v,Var y)]++bs) e)
 | v == y       = Let (as++[(v,loop)]++bs) e
 | as++bs == [] = suby e
 | otherwise    = suby (Let (as++bs) e)
  where loop = Comb ConsCall ("","LOOP") []
        suby = sub ((v, Var y) @> idSub)



--------------------------------------------------------------------
-- move nested control flow
--
-- The following transformations would all be invalild
-- Specifically they would evaluate r when it might not need to be.
--
-- (case r of a -> x ? e)
-- =>
-- (case r of a -> x) ? e
--
-- f (case r of x -> e1 
--              y -> e2)
-- =>
-- case r of x -> f e1
--           y -> f e2
--
-- let a = case r of x -> y
--     in e
-- =>
-- case r of x -> let a = y in e
--
-- Because of this we need to put the case at the root of it's own function
--
-- Note: this assigns an invalid type to the new function
-- I don't think we can fix this without writing our own type inference algorithm
-- Unfortunately the one in Annotated FlatCurry doesn't work (it breaks on forall types)
--
-- Other side note: Why does FlatCurry have forall types?
-- It's not even attempting to be system-F, and the only place they're
-- used is in higher kinded type classes.
--------------------------------------------------------------------

rootCases :: FuncDecl -> Int -> [FuncDecl]
rootCases (Func _    _ _   _     (External _))   _ = []
rootCases (Func name a vis xtype (Rule vs body)) n
  = case redex_path body of
       Nothing -> []
       (Just (path,redex)) -> 
          let new_vars = freeVars redex
              new_name = mapSnd (++("#A"++show n)) name
              call     = Comb FuncCall new_name (map Var new_vars)
              new_body = replace body path call
              num_vs   = length new_vars
          in [ Func name     a      vis     xtype    (Rule vs new_body),
               Func new_name num_vs Private (TVar 0) (Rule new_vars redex) ]

redex_path :: Expr -> DET (Maybe (Path, Expr))
redex_path t = start t ~> cor ~> ccase
redex_path t = start t ~> ccomb ~> ccase
redex_path t = start t ~> (Let (_ ++ [(_,u)] ++ _) _) ~~ u ~> ccase
 where u free
redex_path t = Nothing


--------------------------------------------------------------------
-- fill in cases
--
-- Look for any case
-- Since we've already built up a map from DataType
-- we can look up each case statement, and find which ones are filled in
-- If They're not filled in, then we can fix that
--------------------------------------------------------------------

fillCases :: DataTable -> FuncDecl -> Int -> [FuncDecl]
fillCases _  (Func _    _ _   _     (External _))   _ = []
fillCases dt (Func name a vis xtype (Rule vs body)) _
  = case findCase dt body of
       Nothing             -> []
       (Just (path,redex)) -> 
           let newBody = replace body path (addCases dt redex)
           in [Func name a vis xtype (Rule vs newBody)]


-- find all missing branches from this tree
missingBranches :: DataTable -> [BranchExpr] -> [QName]
missingBranches dt bs = allBranches \\ foundBranches
 where allBranches    = fillCons (branchName (head bs)) dt
       foundBranches  = map branchName bs
       branchName     = patCons . branchPattern

-- Find any case that doesn't contain all of it's branches
findCase :: DataTable -> Expr -> DET (Maybe (Path,Expr))
findCase dt t = start t ~> ccase ~| (not . null . missingBranches dt . caseBranches)
findCase _  t = Nothing

-- Add all of the missing cases
addCases :: DataTable -> Expr -> Expr
addCases dt (Case ct e bs) = Case ct e (bs++exempts)
 where exempts = map exemptBranch (missingBranches dt bs)

       -- We can get away with having the wrong arity, because
       -- these branches are always a failure, so we should
       -- never bind variables to them anyway
       exemptBranch b = Branch (Pattern b []) exempt

