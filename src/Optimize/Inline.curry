{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Inline where

import List (sum,maximum)
import FlatCurry.Types
import FlatCurry.Goodies (isVar,caseBranches,branchPattern,branchExpr,patCons, funcName, funcBody)
import FlatUtils.Gas
import FlatUtils.FlatUtils
import FlatUtils.DataTable (exempt)
import Optimize.FunTable
import Optimize.Primitives (primCond, primCase, fromBool)
import Optimize.Flags (run_deforest, run_unboxing)

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
inline :: Opt
inline _ (Let [(x, f@(Comb ct _ _))] e)
 | (isCons ct || isPart ct) & nonRecursive x f = (sub ((x,f) @> idSub) e, "INLINE_CONS", 0)

inline _ (Let [v@(_, Lit _)] e) = (sub (v @> idSub) e, "INLINE_LIT", 0)

-- If we have let x = case .... in ... case x of ....
-- Then we could inline x and have a double case statement
-- case (case ....) of ...), and then transform that by ->caseVar
--
-- let x = case e of C v1 v2 -> eC
-- in case x of D v3 v4 -> eD
-- ==>
-- case (case e of C v1 v2 -> eC) 
--      D v3 v4 -> eD
-- ==>
-- case e of
--      C v1 v2 -> case eC of
--                      D v3 v4 -> eD
--
-- This is pretty much the only downside to using ANF that I've found.
inline _ (Let [v@(x, Case _ _ _)] e)
 | strict x e & uses x e == 1 = (sub (v @> idSub) e, "INLINE_CASE", 0)

-- inline so I can apply fold/build deforestation.
-- This tecnically breaks the ANF invarient, but deforestation should restore that immedeatly afterwards.
inline _ (Let [v@(x, build_ _)] e@(has (foldr_ _ _ (Var x))))
 | run_deforest & uses x e == 1 = (sub (v @> idSub) e, "inline 4 (fold/build)", 0)
inline _ (Let [v@(x, build_ _)] e@(has (build_fold_ _ _ (Var x))))
 | run_deforest & uses x e == 1 = (sub (v @> idSub) e, "inline 4 (build_fold/build)", 0)
inline _ (Let [v@(x, build_fold_ _ _ _)] e@(has (foldr_ _ _ (Var x))))
 | run_deforest & uses x e == 1 = (sub (v @> idSub) e, "inline 4 (fold/build_fold)", 0)
inline _ (Let [v@(x, build_fold_ _ _ _)] e@(has (build_fold_ _ _ (Var x))))
 | run_deforest & uses x e == 1 = (sub (v @> idSub) e, "inline 4 (build_fold/build_fold)", 0)

-- CaseFolding 
-- let t = case e of
--               C1 x -> e1
--               C2 y -> e2
-- in case e of
--         C1 a -> e11
--         C2 b -> e22
-- ==>
-- case e of
--      C1 a -> let t1 = e1[x->a] e11[t->t1]
--      C2 b -> let t2 = e2[y->b] e22[t->t2]
--
--
-- let t1 = case e of
--               C1 x -> e11
--               C2 y -> e12
-- let t2 = case e of
--               C1 x -> e21
--               C2 y -> e22
-- in e
-- ==>
-- let ? = case e of
--               C1 x -> let t1 = e11
--                           t2 = t21
--               C2 y -> let t1 = e12
--                           t2 = e22
-- in case e of
--         C1 a -> let t1 = e1[x->a] e11[t->t1]
--         C2 b -> let t2 = e2[y->b] e22[t->t2]
--
-- Note this *must* be a let with a single case
-- otherwise t is used in multiple places
-- and this transformation isn't valid.
--
-- I can't do this yet, but it should work
-- or fusion
-- let t1 = case e of
--               C1 a -> e11
--               C2 b -> e12
-- let t2 = case e of
--               C1 c -> e21
--               C2 d -> e22
-- ... (t1 ? t2)
-- =>
-- ... case e of
--          C1 a -> (e11 ? e21[c->a])
--          C2 b -> (e12 ? e22[d->b])

caseFold :: Opt
caseFold (n,_) (Let [(t,Case ct e bs')] (Case ct e bs))
 | not (any (hasVar t . branchExpr) bs') = (Case ct e comBs, "CASE_FOLDING", length bs)
  where comBs = zipWith3 comBranch bs bs' [n..]
        comBranch (Branch (Pattern p vs) e1) (Branch (Pattern _ vs') e1') k
           = Branch (Pattern p vs) (Let [(k, sub (listSub vs' vs) e1')] 
                                       (sub ((t,Var k) @> idSub) e1))
        comBranch (Branch (LPattern l) e1) (Branch (LPattern _) e1') k
           = Branch (LPattern l) (Let [(k, e1')] (sub ((t,Var k) @> idSub) e1))
        listSub ins outs = foldr (@>) idSub (zip ins (map Var outs))

caseFold (n,_) (Let [v@(t,_)] c@(Case _ e _))
 | checksVar t c
 = let (c',dn) = pushIn n v c
   in (c', "LET_FOLDING", dn-n)


-- We could get unlucky and have
-- let v1 = e1
-- in let v2 = e2
-- in case v2 of
--    ...
--
-- if e1 and e2 are independent
-- so make sure that we push the let all the way down to the farthest case it can go.
--
-- we can't just switch the order of the lets.
-- otherwise we'd have a cyclical rewrite
-- let v1 = e1 in let v2 = e2 in ... => 
-- let v2 = e2 in let v1 = e1 in ... =>
-- let v1 = e1 in let v2 = e2 in ...
caseFold (n,_) (Let [v@(t,_)] e)
 | letCase t e = let (c',dn) = pushIn n v e in (c', "LET_FOLDING", dn-n)


letCase :: VarIndex -> Expr -> Bool
letCase x (Let vs e)
 | not (any (hasVar x) (map snd vs)) = letCase x e

letCase x e = checksVar x e

checksVar :: VarIndex -> Expr -> Bool
checksVar x (Case _ e (b:_)) = if e /= primCond 
                                then not (hasVar x e)
                                else not (hasVar x (branchExpr b))

-- This speeds up casefold 2 considerably.
-- basically we want to float the let as far in as we can.
-- we'll do this eventually with the origonal rule, but we have to do it one step at a time.
pushIn :: VarIndex -> (VarIndex,Expr) -> Expr -> (Expr,VarIndex)
pushIn k (x,te) e@(Var v) 
 | x == v    = (te,k)
 | otherwise = (e,k)

pushIn k _ l@(Lit _) = (l, k)

pushIn k v@(x,_) f@(Comb ct n es)
 | any (hasVar x) es = addLet k v f
 | otherwise         = (f,k)

pushIn k v@(x,_) l@(Let vs e)
 | any (hasVar x) (map snd vs) = addLet k v l
 | otherwise                   = let (e',k') = pushIn k v e 
                                 in (Let vs e', k')

pushIn k v@(x,_) (Free vs e) = let (e',k') = pushIn k v e
                               in (Free vs e', k')

pushIn k v@(x,_) o@(Or e1 e2)
 | any (hasVar x) [e1,e2] = addLet k v o
 | otherwise              = (o, k)

pushIn k v@(x,_) c@(Case ct e bs)
 | checksVar x c = let (bs',k') = foldr pushBranch ([],k) bs
                   in (Case ct e bs', k')
 | otherwise     = addLet k v c
  where pushBranch (Branch p be) (bs,n) = let (e',n') = pushIn n v be
                                          in (Branch p e' : bs, n')
pushIn k v (Typed e t) = pushIn k v e


addLet :: VarIndex -> (VarIndex,Expr) -> Expr -> (Expr,VarIndex)
addLet k (v,ve) e = let (ve',k') = rename (k+1) ((v,k) @> id) ve
                        e'       = sub ((v,Var k) @> idSub) e
                    in (Let [(k,ve')] e', k')

-- case (C1 e) of
--     C1 x -> e1
--     C2 y -> e2
-- ==>
-- let x = e
-- in e1
caseCancel :: Opt
caseCancel _ (Case _ c@(Comb ConsCall n es) (_++[Branch (Pattern n vs) e]++_))
 | run_unboxing || not (snd n `elem` ["int","char","float"])
 = (subGrounded e vs es, "CASE_CALCEL_CONS", 0)

-- used for turning off inlining
--caseCancel _ (Case _ c@(Comb ConsCall n es) (_++[Branch (Pattern n vs) e]++_))
-- | not (snd n `elem` ["int","char","float"]) = (subGrounded e vs es, "case cancel CONS", 0)

caseCancel _ (Case _ (Lit l) (_++[Branch (LPattern l) e]++_)) = (e, "CASE_CANCEL_LIT", 0)
caseCancel _ (Case _ (Comb ConsCall ("","EXEMPT") []) _)      = (exempt, "CASE_CANCEL_EXEMPT", 0)
caseCancel _ (primCase _ (fromBool True)  t _) = (t, "CASE_CANCEL_TRUE",  0)
caseCancel _ (primCase _ (fromBool False) _ f) = (f, "CASE_CANCEL_FALSE",  0)

subGrounded :: Expr -> [VarIndex] -> [Expr] -> Expr
subGrounded e vs es = lets (sub gsub e)
 where gsub = foldr (@>) Var $ filter (ground . snd) ves
       lets = flip (foldr (Let . (:[]))) (filter (not . ground . snd) ves)
       ves = zip vs es

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

-- f x = e1
-- f e2
-- ==>
-- f x = e1
-- let v = e2
-- in e1[x -> v]

-- special case for if a function call is the root of an expression.
-- we almost always want to inline these, 
-- but if the function is defined with build, then we don't want to get rid of that.
reduce :: FunTable -> Opt
reduce funs (n,True) b@(Comb FuncCall f _)
 | inlinable funs f = (b', "REDUCE_BASE", dn)
  where (b', dn) = makeReduce funs n b

reduce funs (n,_) (Let [(x,b@(Comb FuncCall f _))] e)
 | inlinable funs f 
 & useful funs False x e = (Let [(x,b')] e, "REDUCE_USEFUL", dn)
  where (b', dn)   = makeReduce funs n b

-- without this I don't inline id?
reduce funs (n,_) (Let [(x,b@(Comb FuncCall f _))] e)
 | simple funs f = (Let [(x,b')] e, "REDUCE_SIMPLE", dn)
  where (b', dn) = makeReduce funs n b

reduce funs (n,_) (Let [(x,b@(Comb FuncCall f es))] e)
 | inlinable funs f
 & cancels funs f (map isConsExpr es) = (Let [(x,b')] e, "REDUCE_CANCELS", dn)
  where (b', dn) = makeReduce funs n b

reduce funs (n,_) (Let vs b@(Comb FuncCall f _))
 | inlinable funs f = (Let vs b', "REDUCE_LET", dn)
  where (b', dn) = makeReduce funs n b

reduce funs (n,_) (Case ct e (as++[Branch p b@(Comb FuncCall f _)]++bs))
 | inlinable funs f = (Case ct e (as++[Branch p b']++bs), "REDUCE_BRANCH", dn)
  where (b', dn) = makeReduce funs n b

isConsExpr :: Expr -> Bool
isConsExpr (Var _) = False
isConsExpr (Lit _) = False
isConsExpr (Comb ct _ _) = ct == ConsCall

makeReduce :: FunTable -> VarIndex -> Expr -> (Expr, VarIndex)
makeReduce funs n (Comb _ f es) = (safeBody, n2-n)
  where callee       = body funs f
        ps           = params funs f
        n1           = max (freshVar funs f) n
        vs           = take (length ps) [n1..]
        fsub         = foldr (@>) id (zip ps vs)
        (renBody,n2) = rename (n1+length ps) fsub callee
        safeBody     = subGrounded renBody vs es

useful :: FunTable -> Bool -> VarIndex -> Expr -> Bool
useful _    _     x (Var y)        = x == y
useful _    _     _ (Lit _)        = False
useful funs inLet x (Let vs e)     = useful funs inLet x e || any (useful funs True x) (map snd vs)
useful funs inLet x (Or e1 e2)     = useful funs inLet x e1 || useful funs inLet x e2
useful funs inLet x (Free _ e)     = useful funs inLet x e
useful funs inLet x (Typed e _)    = useful funs inLet x e
useful funs inLet x (Case _ e bs)  = any (useful funs inLet x) (e : map branchExpr bs)
useful funs inLet x (Comb ct n es) = inlinable funs n && mightReduce && any (useful funs inLet x) es
 where mightReduce = isFunc ct && (isApp ct || inLet || n == ("Prelude","apply"))

-- let x = e1
-- in e2 [x not in e2]
-- ==>
-- e2
deadCode :: Opt
deadCode _ (Free [] e) = (e, "DEAD_CODE", 0)
deadCode _ (Let [] e) = (e, "DEAD_CODE", 0)
deadCode _ (Free (as++[v]++bs) e)
 | not (hasVar v e) = (Free (as++bs) e, "DEAD_CODE", 0)
deadCode _ (Let [(v,_)] e)
 | not (hasVar v e) = (e, "DEAD_CODE", 0)
deadCode _ (Let [(x,e)] (Var x))
 | not (hasVar x e) = (e, "DEAD_CODE", 0)



--------------------------------
-- fold/build deforestation
--------------------------------
deforest :: Opt
deforest _ (foldr_ f z (build_ g)) = (applyf g [f,z], "FOLD_BUILD", 0)
deforest (n,_) (foldr_ f z (build_fold_ mkf mkz xs)) 
 = (Let [(n, applyf mkf [f])]
    (Let [(n+1, applyf mkz [z])]
     (foldr_ (Var n) (Var (n+1)) xs)), "FOLD_BF", 2)
deforest (n,_) (build_fold_ mkc mkn (build_ g)) 
 = (Let [(n, mk_build_ g mkc mkn)]
    (build_ (Var n)), "BF_BUILD", 1)
deforest (n,_) (build_fold_ mkf1 mkz1 (build_fold_ mkf2 mkz2 xs)) 
 = (Let [(n, comp mkf2 mkf1)]
    (Let [(n+1, comp mkz2 mkz1)]
     (build_fold_ (Var n) (Var (n+1)) xs)), "BF_BF", 2)

