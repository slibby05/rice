
module Optimize.Postprocess (postprocess, showPostprocess) where

-----------------------------------------------------------
-- This module puts FlatCurry in a -- normalized form.
-- This doesn't mean we're normalizing expressions in the sense of evaluation,
-- we're just putting it in a form that can be translated to Icurry
-----------------------------------------------------------

import FlatCurry.Types
import FlatCurry.Goodies (updFuncBody, funcBody, isExternal, funcName, isVar)
import FlatUtils.Gas
import FlatUtils.FlatUtils
import FlatCurry.Pretty (ppExp, Options(..), QualMode(..))
import Text.Pretty (pPrint)
import Optimize.ANF
import Optimize.Inline
import Optimize.Preprocess
import Optimize.Primitives
import Optimize.FunTable
import Util
import Control.Findall
import List (delete, (\\), nub)
import Time (getClockTime, clockTimeToInt)

time = getClockTime >>= (return . clockTimeToInt)

postprocess :: FunTable -> [FuncDecl] -> [FuncDecl]
postprocess ft = map renameFunc 
               . map (updFuncBody postopts)
               -- . loop (fixPartApp ft) 0
               . loop rootCases 0
 where postopts = simplify caseCall (-1)
                . uncaseVar
                . simplify fixLets (-1)
                . simplify (toANF veryTrivial) (-1)
                . simplify (unapply ? fixPartFunc ft) (-1)

renameFunc :: FuncDecl -> FuncDecl
renameFunc (Func n a v t (External s)) = Func n a v t (External s)
renameFunc (Func n a v t (Rule vs e))  = Func n a v t (Rule ps (fst (rename nv sub e)))
 where ps  = take (length vs) [2..]
       nv  = length vs + 2
       sub = foldr (@>) id (zip vs ps)


showPostprocess :: FunTable -> [FuncDecl] -> IO [FuncDecl]
showPostprocess ft fs = do putStrLn (const "()" $## ft)
                           fs1 <- loopIO (outline ft) 0 fs
                           fs2 <- return $ loop rootCases 0 fs1
                           fs3 <- mapM (showPostExpr ft) fs2
                           return (map renameFunc fs3)

showPostExpr :: FunTable -> FuncDecl -> IO FuncDecl
showPostExpr ft f
 | isExternal f = return f
 | otherwise    = do let e = funcBody f
                     t <- time
                     putStrLn $ "Post function: \n" ++ (snd (funcName f))
                     putStrLn $ showExpr e
                     let (e1,w1,_) = showWork (unapply ? fixPartFunc ft) (-1) e
                     putStr w1
                     tunapp <- time
                     let (e2,w2,_) = showWork (toANF veryTrivial) (-1) e1
                     putStr w2
                     tanf <- time
                     let (e3,w3,_) = showWork fixLets (-1) e2
                     putStr w3
                     tfixLet <- time
                     let e4 = uncaseVar e3
                     putStrLn "=> UNDO_CASE_VAR"
                     putStrLn $ showExpr e4
                     tuncasevar <- time
                     let (e5,w5,_) = showWork caseCall (-1) e4
                     putStr w5
                     tcasecall <- time
                     putChar '\n'
                     putStrLn (showFun ft (funcName f))
                     putChar '\n'
                     putStrLn ("fix apply time: " ++ show (tunapp-t))
                     putStrLn ("anf time: " ++ show (tanf-tunapp))
                     putStrLn ("fix let time: " ++ show (tfixLet-tunapp))
                     putStrLn ("fix CaseVar time: " ++ show (tuncasevar-tfixLet))
                     putStrLn ("case call time: " ++ show (tcasecall-tuncasevar))
                     putStrLn ("total time: " ++ show (tcasecall-t) ++ "\n")
                     return (updFuncBody (const e5) f)
 where showExpr = pPrint . ppExp (Options 2 QualNone "")

caseCall :: Opt
caseCall _ (Let [(v,ve)] e@(has (Case _ (Var v) _)))
 | v >= 0
 & uses v e == 1 
 & uses v ve == 0 
 & not (isApply ve)
 = (Let [(-(v+1),ve)] (sub ((v,Var (-(v+1))) @> idSub) e), "CASE_CALL", 0)
  where isApply e = case e of 
                         Comb _ ("Prelude","apply") _ -> True
                         _                            -> False

--turn of shortcutting
--caseCall _ _ = failed

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


-- These should never happen in ANF
--findCase n (Or rcase@(Case r e bs) e2) = (Or (Comb FuncCall n (e : fvs)) e2, rcase)
-- where fvs = map Var (freeVars rcase)
--
--findCase n (Or e1 rcase@(Case r e bs)) = (Or e1 (Comb FuncCall n (e:fvs)), rcase)
-- where fvs = map Var (freeVars rcase)

--findCase n (Comb ct f (es1++[rcase]++es2)) = 
--             (Comb ct f (es1++[Comb FuncCall n (e:fvs)]++es2), rcase)
-- where fvs = map Var (freeVars rcase)

--findCase n (Case ct e bs) = Case ct e' bs
-- where e' = findCase n e

findCase :: QName -> Expr -> (Expr, Expr)
findCase n (Free vs e) = (Free vs e', r)
 where (e',r) = findCase n e
findCase n (Case ct e (as++[Branch p be]++bs)) = (Case ct e (as++[Branch p be']++bs), r)
 where (be',r) = findCase n be
findCase n (Let vs e) = (Let vs e', r)
 where (e',r) = findCase n e

findCase n (Let (vs1++[(x, rcase@(Case _ _ _))]++vs2) e) =
             (Let (vs1++[(x, f)]++vs2) e, rcase)
 where fvs = map Var (freeVars rcase)
       f = Comb FuncCall n fvs

rootCases :: Int -> FuncDecl -> [FuncDecl]
rootCases _ (Func _    _ _   _     (External _))   = []
rootCases n (Func name a vis xtype (Rule vs body))
  = case oneValue (findCase new_name body) of
       Nothing -> []
       (Just (e1, e2)) -> let new_vars = freeVars e2
                              num_vs = length new_vars
                          in [Func name     a      vis    xtype    (Rule vs       e1),
                              Func new_name num_vs Public (TVar 0) (Rule new_vars e2)]
  where new_name = mapSnd (++("#A"++show n)) name


-----------------------------------------------------
-- outline
-- If I ever have a nontrivial partial application
-- then I want to outline it into it's own funciton
-- so I can optimize that.
-----------------------------------------------------

findPartApp :: Int -> Expr -> (Expr, Expr)
findPartApp k (Free vs e) = (Free vs e', r)
 where (e',r) = findPartApp k e
findPartApp k (Let vs e) = (Let vs e', r)
 where (e',r) = findPartApp k e
findPartApp k (Let (vs1++[(v,ve)]++vs2) e) = (Let (vs1++[(v,ve')]++vs2) e, r)
 where (ve',r) = findPartApp k ve
findPartApp k (Case ct e (as++[Branch p be]++bs)) = (Case ct e (as++[Branch p be']++bs), r)
 where (be',r) = findPartApp k be
findPartApp k (Comb ct f (es1++[e]++es2)) 
 | not (isFunc ct && isPart ct) = (Comb ct f (es1++[e']++es2), r)
 where (e',r) = findPartApp k e

findPartApp k e@(Comb (FuncPartCall _) _ es)
 | any (not . isVar) es = (Var k, e)

expandPart :: FunTable -> Expr -> VarIndex -> [VarIndex] -> IO (Expr, [VarIndex], Int)
expandPart ft e k vs
 | n == 0 = return (e, vs, 0)
 | otherwise = do let (e', w, s) = showWork (opts ft) (-1) (applyf e (map Var mvs))
                  putStr w
                  (e'', vs', s') <- expandPart ft e' (k+n) (vs++mvs)
                  return (e'', vs', s+s')
  where n = missingVars e
        mvs = [k..k+n-1]


outline :: FunTable -> Int -> FuncDecl -> IO [FuncDecl]
outline _  _ (Func _    _ _   _     (External _))   = return []
outline ft n (Func name a vis xtype (Rule vs body))
  = case oneValue (findPartApp k body) of
       Nothing -> return []
       Just (e1, e2) -> do t <- time
                           putStrLn "----------------------------"
                           putStrLn $ "Outline: " ++ snd name ++ " " ++ 
                                       concatMap ((++" ") . ('v':) . show) vs
                           putStrLn $ showExpr body ++ "\n"
                           putStrLn "found partial"
                           putStrLn $ showExpr e2
                           (e2',vs2,lw) <- expandPart ft e2 k []
                           let new_name = mapSnd (++("#P"++show n)) name
                           let fvs      = freeVars e2'
                           let new_vars = map Var (fvs \\- vs2)
                           let a2 = length fvs
                           let f = Comb (FuncPartCall (length vs2)) new_name new_vars
                           let e1' = sub ((k, f) @> idSub) e1
                           if lw > 1
                            then do putStrLn $ "\norigonal function: " ++ snd name ++ " " ++ 
                                                concatMap ((++" ") . ('v':) . show) vs
                                    putStrLn $ showExpr e1' ++ "\n"
                                    putStrLn $ "fixed partApp: " ++ snd new_name ++ "_" ++ show a2 ++ " " ++ 
                                                concatMap ((++" ") . ('v':) . show) fvs
                                    putStrLn $ showExpr e2' ++ "\n"
                                    putStrLn $ "length of work: " ++ show lw
                                    t' <- time
                                    putStrLn $ "outline time: " ++ show (t'-t)
                                    return [Func name     a  vis    xtype    (Rule vs  e1'),
                                            Func new_name a2 Public (TVar 0) (Rule fvs e2')]
                            else do putStrLn "\nNo optimizations found."
                                    return []
  where k = newVar body
        showExpr = pPrint . ppExp (Options 2 QualNone "")


opts :: FunTable -> Opt
opts ft = caseCancel
        ? deforest
        ? deadCode
        ? constantFold
        ? condFold
        ? unapply
        ? flatten
        ? alias
        ? float
        ? caseVar
        ? inline
        ? caseFold
        ? reduce ft


-----------------------------------------------------
-- uncasevar
-----------------------------------------------------

uncaseVar :: Expr -> Expr
uncaseVar = unsub []
unsub :: [(Expr, Expr)] -> Expr -> Expr
unsub _ (Var v)       = Var v
unsub _ (Lit l)       = Lit l
unsub s (Or e1 e2)    = Or (unsub s e1) (unsub s e2)
unsub s (Typed e t)   = Typed (unsub s e) t
unsub s (Comb t n es) = let es' = map (unsub s) es
                        in case lookup (Comb t n es') s of
                                Nothing -> Comb t n es'
                                Just e  -> e
unsub s (Free vs e)   = Free vs (unsub s e)
unsub s (Let vs e)    = Let (map (mapSnd (unsub s)) vs) (unsub s e)
unsub s (Case t e bs) 
 | isVar e   = Case t e (map (branchUnsub (Just e)) bs)
 | otherwise = Case t e (map (branchUnsub Nothing) bs)
 where branchUnsub v (Branch p@(Pattern _ _) be) = Branch p (unsub (addVar v p s) be)
       branchUnsub _ (Branch p@(LPattern _ ) be) = Branch p (unsub s be)
       addVar Nothing  _              s' = s'
       addVar (Just v) (Pattern c vs) s' = (Comb ConsCall c (map Var vs), v) : s'
