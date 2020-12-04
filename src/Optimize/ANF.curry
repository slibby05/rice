{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.ANF (toANF, trivial, veryTrivial) where

import FlatCurry.Types
import FlatUtils.FlatRewrite
import FlatUtils.Gas

-----------------------------------------------------------------------
-- Convert to ANF
-----------------------------------------------------------------------

veryTrivial :: Expr -> Bool
--veryTrivial (Var _)      = True
--veryTrivial (Lit _)      = True
veryTrivial (Comb _ _ _) = False
veryTrivial (Let _ _)    = False
veryTrivial (Free _ _)   = False
veryTrivial (Or _ _)     = False
veryTrivial (Typed _ _)  = False
veryTrivial (Case _ _ _) = False

trivial :: Expr -> Bool
--trivial (Var _)                     = True
--trivial (Lit _)                     = True
--trivial (Comb ConsCall _ _)         = True
--trivial (Comb (ConsPartCall _) _ _) = True
--trivial (Comb (FuncPartCall _) _ _) = True
trivial (Let _ _)                   = False
trivial (Free _ _)                  = False
trivial (Or _ _)                    = False
trivial (Typed _ _)                 = False
trivial (Case _ _ _)                = False
trivial (Comb FuncCall _ _)         = False

toANF :: (Expr -> Bool) -> Expr -> (Expr,String)
toANF triv b = rule b
 where rule = (Case ct e bs, not (triv e))
              ?=>
              (Let [(n,e)] (Case ct (Var n) bs), "ANF 1")
       ct, e, bs free
       n = foldr max 0 (allNames b) + 1

toANF triv b = rule b
 where rule = (Comb ct n1 (as++[e]++bs), all triv as && not (triv e))
              ?=>
              (Let [(n,e)] (Comb ct n1 (as++[Var n]++bs)), "ANF 2")
       ct, n1, as, e, bs free
       n = foldr max 0 (allNames b) + 1

toANF triv b = rule b
 where rule = (Or e1 e2, not (triv e1))
              ?=>
              (Let [(n,e1)] (Or (Var n) e2), "ANF 3")
       e1, e2 free
       n = foldr max 0 (allNames b) + 1

toANF triv b = rule b
 where rule = (Or e1 e2, triv e1 && not (triv e2))
              ?=>
              (Let [(n,e2)] (Or e1 (Var n)), "ANF 4")
       e1, e2 free
       n = foldr max 0 (allNames b) + 1

toANF _ b = rule b
 where rule = (Let (as++[(x,Let vs e1)]++bs) e2)
              |=> 
              (Let (as++vs++[(x,e1)]++bs) e2, "ANF 5")
       as,x,vs,e1,bs,e2 free


{-
atomic = trivial

toANF :: Expr -> (Expr -> Expr) -> Expr
toANF (Var v) ctx = ctx (Var v)
toANF (Lit l) ctx = ctx (Lit l)

toANF (Comb t f es) ctx 
 | all atomic es = ctx (Comb t f es)
 | otherwise     = let (as,(n:ns)) = span atomic es
                       ctx' r = Let [(x, toANF n ctx)] r
                   in toANF (Comb t f (as++[x]++ns]) ctx'

toANF (Let vs e) ctx = Let vs' (toANF e ctx)
 where vs' = map (\(v,ve) -> (v, toANF ve id)) vs

toANF (Or e1 e2) ctx
 | atomic e1 && atomic e2 = Let [(x,Or e1 e2)] (ctx x)
 | atomic e1 = let ctx' r = Let [(x,toANF e2 ctx)] r
               in toANF (Or e1 x) ctx'
 | otherwise = let ctx' r = Let [(x,toANF e1 ctx)] r
               in toANF (Or x e2) ctx'

toANF (Typed e t) ctx = Typed (toANF e ctx) t

toANF (Case t e bs) ctx = False
 | not (atomic e) = let ctx' r = Let [(x,toANF e1 ctx)] r
                    in toANF (Case t e bs') ctx'
 | otherwise      = Let [(x,ctx e)] Case t x bs'
 where bs' = map branchANF bs

branchANF (Branch p e) = Branch p (toANF e id)
-}
