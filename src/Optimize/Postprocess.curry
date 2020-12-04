
{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Postprocess (postprocess) where

-----------------------------------------------------------
-- This module puts FlatCurry in a -- normalized form.
-- This doesn't mean we're normalizing expressions in the sense of evaluation,
-- we're just putting it in a form that can be translated to Icurry
-----------------------------------------------------------

import FlatCurry.Types
import FlatCurry.Goodies (updFuncBody)
import FlatUtils.FlatRewrite
import FlatUtils.Gas
import Optimize.ANF
import Util
import Control.Findall
import Graph
import List (delete, (\\), nub)

postprocess :: [FuncDecl] -> [FuncDecl]
postprocess = map (renameFunc . updFuncBody (simplify (toANF veryTrivial))) 
              . loop rootCases 0

renameFunc (Func n a v t (External s)) = Func n a v t (External s)
renameFunc (Func n a v t (Rule vs e)) = let vars = nub (vs ++ allDecls e)
                                            params = take (length vs) [1..]
                                        in Func n a v t (Rule params (rename vars [1..] e))

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

-- (case r of a -> x) ? e ||=> (f r ? e, f r = case r of a -> x)
findCase :: QName -> Expr -> (Expr, Expr)
findCase n = Or rcase e2
             ||=> 
             (Or (Comb FuncCall n (e : fvs)) e2, rcase)
 where r, e, bs, e2 free
       rcase = Case r e bs
       fvs = map Var (freeVars rcase)

findCase n = Or e1 rcase
             ||=> 
             (Or e1 (Comb FuncCall n (e:fvs)), rcase)
 where r, e, bs, e1 free
       rcase = Case r e bs
       fvs = map Var (freeVars rcase)

findCase n = Comb ct f (es1++[rcase]++es2)
             ||=> 
             (Comb ct f (es1++[Comb FuncCall n (e:fvs)]++es2), rcase)
 where ct, f, es1, es2, r, e, bs free
       rcase = Case r e bs
       fvs = map Var (freeVars rcase)

findCase n = Let (vs1++[(x, rcase)]++vs2) e
             ||=> 
             (Let (vs1++[(x, Comb FuncCall n (e:fvs))]++vs2) e, rcase)
 where x, r, ce, e, bs, vs1, vs2 free
       rcase = Case r ce bs
       fvs = map Var (freeVars rcase)



rootCases :: Int -> FuncDecl -> [FuncDecl]
rootCases _ (Func _    _ _   _     (External _))   = []
rootCases n (Func name a vis xtype (Rule vs body))
  = case oneValue (findCase new_name body) of
       Nothing -> []
       (Just (e1, e2)) -> let new_vars = freeVars e2
                              num_vs = length new_vars
                          in [Func name     a      vis     xtype    (Rule vs       e1),
                              Func new_name num_vs Private (TVar 0) (Rule new_vars e2)]
  where new_name = mapSnd (++("#A"++show n)) name


