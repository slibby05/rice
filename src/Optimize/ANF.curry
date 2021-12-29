{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.ANF (toANF, trivial, veryTrivial) where

import FlatCurry.Types
import FlatUtils.Gas
import List (maximum)

-----------------------------------------------------------------------
-- Convert to ANF
-----------------------------------------------------------------------

veryTrivial :: Expr -> Bool
veryTrivial (Var _)      = True
veryTrivial (Lit _)      = True
veryTrivial (Comb _ n _) = n == ("","primCond")
veryTrivial (Let _ _)    = False
veryTrivial (Free _ _)   = False
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
trivial (Free _ _)                  = False
trivial (Or _ _)                    = False
trivial (Typed _ _)                 = False
trivial (Case _ _ _)                = False
trivial (Comb FuncCall n _)         = n == ("","primCond")

toANF :: (Expr -> Bool) -> Opt
toANF triv (n,_) (Case ct e bs)
 | not (triv e) = (Let [(n,e)] (Case ct (Var n) bs), "ANF_CASE", 1)

toANF triv (n,_) (Comb ct n1 (as++[e]++bs))
 | all triv as && not (triv e) = (Let [(n,e)] (Comb ct n1 (as++[Var n]++bs)), "ANF_APP", 1)

toANF triv (n,_) (Or e1 e2)
 | not (triv e1) = (Let [(n,e1)] (Or (Var n) e2), "ANF_OR1", 1)
 | not (triv e2) = (Let [(n,e2)] (Or e1 (Var n)), "ANF_OR2", 1)

