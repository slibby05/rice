{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Inline where

import List (sum,maximum)
import FlatCurry.Types
import FlatCurry.Goodies (isVar,caseBranches,branchPattern,branchExpr,patCons, funcName, funcBody)
import FlatUtils.FlatRewrite
import FlatUtils.Gas
import Optimize.FunTable
import Control.SetFunctions

-- I'm only inlining constructor, or partial applications, because those are the only ones that cancle.
-- inlining a function application would be pointless.
-- inlining an OR would be wrong
-- Var and Lit aren't ever outlined
-- and Let/Let, Let/Free are already taken care of
-- 
-- I still need to figure out what to do about inlining cases
-- There are sometimes when I want to do it.
-- like
-- let x = case ...
-- in x
-- should really just be case ...
--
-- but I don't wan't to inline a case in a function application
-- let x = case ...
-- in f x
-- would just need to get outlined again later.

-- let x = C v1 v2 ... vn
-- in e 
-- ==>
-- e[x -> C v1 v2 ... vn]
inline :: Expr -> (Expr, String)
inline = (Let [var] e, nonRecursive var)
         ?=> 
         (sub (var @> idSub) e, "inline 1")
 where x,n,vs,i,e,l free
       var = (x, Comb ConsCall n vs)         ? 
             (x, Comb (FuncPartCall i) n vs) ? 
             (x, Comb (ConsPartCall i) n vs) ?
             (x, Lit l)

inline = (Let (as++[var]++bs) e, usedInCase x False (Let (as++bs) e))
         ?=> 
         (Let (as++bs) (sub (var @> idSub) e), "inline 2")
 where as,x,n,vs,bs,i,e free
       var = (x, Case _ _ _)

nonRecursive :: (VarIndex, Expr) -> Bool
nonRecursive (x,e) = count x e == 0

count :: VarIndex -> Expr -> Int
count x (Var y)        = if x == y then 1 else 0
count x (Lit l)        = 0
count x (Free _ e)     = count x e
count x (Comb ct f es) = sum (map (count x) es)
count x (Let vs e)     = sum (map (count x) (e : map snd vs))
count x (Or e1 e2)     = sum (map (count x) [e1,e2])
count x (Case _ e bs)  = sum (map (count x) (e : map branchExpr bs))
count x (Typed e _)    = count x e

-- the variable x is only used once in an execution path.
-- and that use is as the argument of a case expression.
--
-- Note: we can actually reuse a variable, but it MUST be in a different case branch.
-- I don't really expect this to happen all that often, but we might as well 
-- allow it.
usedInCase :: VarIndex -> Bool -> Expr -> Bool
usedInCase x _    (Var y)        = x /= y
usedInCase x _    (Lit _)        = True
usedInCase x used (Comb ct f es) = all (usedInCase x used) es
usedInCase x used (Let vs e)     = all (usedInCase x used) (e : map snd vs)
usedInCase x used (Or e1 e2)     = all (usedInCase x used) [e1,e2]
usedInCase x used (Free _ e)     = usedInCase x used e
-- we don't want | e == Var x && not used
-- otherwise we'd move to the second branch if we've used the variable,
-- but this should be an outright failure.
usedInCase x used (Case ct e bs)
 | e == Var x                    = not used && all (usedInCase x True . branchExpr) bs
 | otherwise                     = all (usedInCase x used) (e : map branchExpr bs)
usedInCase x used (Typed e _)    = usedInCase x used e

-- case (C1 e) of
--     C1 x -> e1
--     C2 y -> e2
-- ==>
-- let x = e
-- in e2
-- applyRules:  f_m (function or constructor f missing m arguments)
--
-- apply f_(n+k) [a1,a2...an] 
-- ==>
-- f_k(a1,a2...an)
--
-- apply f_n [a1,a2...an]
-- ==>
-- f(a1,a2...an)
-- 
-- apply f_n [a1,a2...a(n+k)]
-- ==>
-- apply f(a1,a2...an) [a(n+1),...a(n+k)]
caseCancel :: Expr -> (Expr, String)
caseCancel = (Case _ (Comb ConsCall c es) (_++[Branch (Pattern c vs) e]++_))
             |=> 
             (foldr (Let . (:[])) e (zip vs es), "case cancel 1")
 where c,es,vs,e free

caseCancel = (Case _ (Lit l) (_++[Branch (LPattern l) e]++_))
             |=> 
             (e, "case cancel 2")
 where e,l free

caseCancel = rule
 where rule b = ((applyf (Comb (FuncPartCall m) f es) as, m < length as)
                 ?=> 
                 let (as1,as2) = splitAt n as
                     k = maximum (allNames b) + 1
                 in (Let [(k, Comb FuncCall f (es++as1))] (applyf (Var k) as2), "case cancel 3")
                ) b
       m,n,es,as,f free

caseCancel = rule
 where rule b = ((applyf (Comb (ConsPartCall m) c es) as, m < length as)
                 ?=> 
                 let (as1,as2) = splitAt n as
                     k = maximum (allNames b) + 1
                 in (Let [(k, Comb ConsCall c (es++as1))] (applyf (Var k) as2), "case cancel 4")
                ) b
       m,n,es,as,c free

caseCancel = (applyf (Comb (FuncPartCall m) f es) as, m == length as)
             ?=> 
             (Comb FuncCall f (es++as), "case cancel 5")
 where m,f,es,as free

caseCancel = (applyf (Comb (ConsPartCall m) c es) as, m == length as)
             ?=> 
             (Comb ConsCall c (es++as), "case cancel 6")
 where m,c,es,as free

caseCancel = (applyf (Comb (FuncPartCall m) f es) as, m > length as)
             ?=> 
             (Comb (FuncPartCall (m-length as)) f (es++as), "case cancel 7")
 where m,f,es,as free

caseCancel = (applyf (Comb (ConsPartCall m) c es) as, m > length as)
             ?=> 
             (Comb (ConsPartCall (m-length as)) c (es++as), "case cancel 8")
 where m,c,es,as free

-- f x = e1
-- f e2
-- ==>
-- f x = e1
-- let v = e2
-- in e1[x -> v]


-------------------------------------------------------
-- add code for floating lets into case branches
--
-- let x = 5
-- in case True of
--    True -> x
--    False -> 10
-- =>
-- case True of
--      True -> let x = 5
--              in x
--      False -> 10
-------------------------------------------------------


reduce :: FunTable -> Expr -> (Expr, String)
reduce funs b@(Comb FuncCall f es) 
 | inlinable funs f = (subVars funs b f es, "reduce 0")

reduce funs b = rule b
 where rule = (Let (as++[(x,Comb FuncCall f es)]++bs) e, inlinable funs f)
              ?=> 
              (Let (as++[(x, subVars funs b f es)]++bs) e, "reduce 1")
       as, x, ct, f, es, bs, e free

reduce funs b = rule b
 where rule = (Let vs (Comb FuncCall f es), inlinable funs f)
              ?=> 
              (Let vs (subVars funs b f es), "reduce 2")
       vs, f, es free

reduce funs b = rule b
 where rule = (Free vs (Comb FuncCall f es), inlinable funs f)
              ?=> 
              (Free vs (subVars funs b f es), "reduce 3")
       vs, f, es free

reduce funs b = rule b
 where rule = (Or (Comb FuncCall f es) e2, inlinable funs f)
              ?=> 
              (Or (subVars funs b f es) e2, "reduce 4")
       f, es, e2 free

reduce funs b = rule b
 where rule = (Or e1 (Comb FuncCall f es), inlinable funs f)
              ?=> 
              (Or e1 (subVars funs b f es), "reduce 5")
       f, es, e1 free

reduce funs b = rule b
 where rule = (Case ct e (as++[Branch p (Comb FuncCall f es)]++bs), inlinable funs f)
              ?=> 
              (Case ct e (as++[Branch p (subVars funs b f es)]++bs), "reduce 6")
       ct, e, as, p, f, es, bs free


subVars :: FunTable -> Expr -> QName -> [Expr] -> Expr
subVars funs caller f es = sub fsub (rename (allDecls callee) [n..] callee)
  where callee = body funs f
        ps = params funs f
        n = foldr max 0 (allVars caller ++ ps) + 1
        fsub = foldr (@>) idSub (zip ps es)

-- let x = e1
-- in e2 [x not in e2]
-- ==>
-- e2
deadCode :: Expr -> (Expr, String)
deadCode = Free [] e |=> (e, "dead code 1")
 where e free
deadCode = Let [] e |=> (e, "dead code 2")
 where e free
deadCode = (Free (as++[v]++bs) e, not (v `elem` allVars e))
           ?=> 
           (Free (as++bs) e, "dead code 3")
 where as, v, bs, e free
deadCode = (Let (as++[(v,_)]++bs) e, not (v `elem` allVars (Let (as++bs) e)))
           ?=> 
           (Let (as++bs) e, "dead code 4")
 where l, as, v, bs, e free

