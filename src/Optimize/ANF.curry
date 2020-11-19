{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.ANF (toANF, trivial, veryTrivial) where

import FlatCurry.Types
import FlatUtils.FlatRewrite
import FlatUtils.Gas

-----------------------------------------------------------------------
-- Convert to ANF
-----------------------------------------------------------------------

veryTrivial :: Expr -> Bool
veryTrivial (Var _)      = True
veryTrivial (Lit _)      = True
veryTrivial (Comb _ _ _) = False
veryTrivial (Let _ _)    = False
veryTrivial (Or _ _)     = False
veryTrivial (Typed _ _)  = False
veryTrivial (Case _ _ _) = False

trivial :: Expr -> Bool
trivial (Var _)                     = True
trivial (Lit _)                     = True
trivial (Comb ConsCall _ _)         = True
trivial (Comb (ConsPartCall _) _ _) = True
trivial (Comb (FuncPartCall _) _ _) = True
trivial (Let _ _)                   = False
trivial (Or _ _)                    = False
trivial (Typed _ _)                 = False
trivial (Case _ _ _)                = False
trivial (Comb FuncCall _ _)         = False

toANF :: (Expr -> Bool) -> Expr -> DET (Expr,String)
toANF triv b = rule b
 where rule = (Case ct e bs, not (triv e))
              ?=> 
              (Let [(n,e)] (Case ct (Var n) bs), "ANF 1")
 where ct, e, bs free
       n = foldr max 0 (allNames b) + 1

toANF triv b = rule b
 where rule = (Comb ct n1 (as++[e]++bs), not (triv e))
              ?=> 
              (Let [(n,e)] (Comb ct n1 (as++[Var n]++bs)), "ANF 2")
 where ct, n1, as, e, bs free
       n = foldr max 0 (allNames b) + 1

toANF triv = rule b
 where rule = (Or e1 e2, not (triv e1))
              ?=> 
              (Let [(n,e1)] (Or (Var n) e2), "ANF 3")
 where e1, e2 free
       n = foldr max 0 (allNames b) + 1

toANF triv b = rule b
 where rule = (Or e1 e2, not (triv e2))
              ?=> 
              (Let [(n,e2)] (Or e1 (Var n)), "ANF 4")
 where e1, e2 free
       n = foldr max 0 (allNames b) + 1

toANF _ = (Let (as++[(x,Let vs e1)]++bs) e2)
          |=> 
          (Let (as++vs++[(x,e1)]++bs) e2, "ANF 5")
 where as,x,vs,e1,bs,e2 free
