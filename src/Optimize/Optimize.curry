module Optimize.Optimize (optimize, optimizeT) where

import FlatUtils.Gas
import FlatUtils.FlatUtils
import FlatUtils.DataTable (DataTable)
import FlatCurry.Types
import FlatCurry.Goodies (updProgFuncs, progFuncs, funcName, isExternal, updRuleBody, ruleBody)
import FlatCurry.Pretty (ppExp, ppFuncDecl, Options(..), QualMode(..))
import Text.Pretty (pPrint)
import Optimize.LoopBreakers (orderFuns)
import Optimize.Preprocess
import Optimize.Strictness (StrictTable, split)
import Optimize.Inline (caseCancel, deadCode, inline, reduce, caseFold, deforest)
import Optimize.Postprocess (postprocess, showPostprocess)
import Optimize.FunTable (FunTable, addEntry, showTable)
import Optimize.ANF (trivial, toANF)
import Optimize.Primitives (condFold, constantFold)
import Control.Findall
import Debug (trace)
import Time (getClockTime, clockTimeToInt)
import Util

time = getClockTime >>= (return . clockTimeToInt)

optimize :: DataTable -> FunTable -> StrictTable -> Prog -> (Prog, FunTable, StrictTable)
optimize dt ft st p
 = case id $!! orderFuns (progFuncs p) of
    (fs, bs) -> case id $!! map (preprocess dt ft) fs of
     (x:y) -> case id $!! split dt st (x:y) of
      (sfs,st') -> let ws = [fw | (_,Just fw) <- sfs]
                       bs' = fixBreakers (map funcName ws) bs
                   in case id $!! optimizeFuns bs' ft (ws ++ map fst sfs) of
       (ft', opt_fs) -> case id $!! postprocess ft' opt_fs of
        post_fs -> (updProgFuncs (const post_fs) p, ft',st')

optimizeFuns :: [QName] -> FunTable -> [FuncDecl] -> (FunTable, [FuncDecl])
optimizeFuns _  ft []     = (ft, [])
optimizeFuns bs ft (f:fs)
 | isExternal f = mapSnd (f:) $ optimizeFuns bs ft fs
 | otherwise    = case id $## optimizeFun ft f of
                        f'@(Func _ _ _ _ _) -> 
                         case optimizeFuns bs (addEntry bs f' ft) fs of
                          (ft', fs') -> (ft', f' : fs')


optimizeFun :: FunTable -> FuncDecl -> FuncDecl
optimizeFun ft (Func n a v t r) = let r'@(Rule vs _) = optimizeRule ft r
                                  in Func n (length vs) v t r'

optimizeRule :: FunTable -> Rule -> Rule
optimizeRule ft r@(Rule vs _) 
  = case id $## updRuleBody opt r of
         r'@(Rule _ e') -> let n = missingVars e'
                               newVs = take n [newVar e' ..]
                           in if n == 0 
                                 then r'
                                 else optimizeRule ft (Rule (vs++newVs) (applyf e' (map Var newVs)))
 where opt = optimizeExpr ft . cleanup ft


optimizeExpr :: FunTable -> Expr -> Expr
optimizeExpr ft = simplify (opts ft) 100

cleanup :: FunTable -> Expr -> Expr
cleanup ft = simplify fixLets (-1)
           . simplify (toANF trivial) (-1)
           . simplify (fixPartFunc ft) (-1)


----------------------------------------------------
-- Show optimize functions
----------------------------------------------------

banner :: String -> IO ()
banner name = putStrLn $ "==== "++name++" "++['=' | _ <- [1 .. 40-length name]]


optimizeT :: DataTable -> FunTable -> StrictTable -> Prog -> IO (Prog, FunTable, StrictTable)
optimizeT dt ft st p = do let (fs,bs) = orderFuns (progFuncs p)
                          banner "Function Order"
                          putStrLn $ unlines (map (snd . funcName) fs)
                          banner "loop breakers"
                          putStrLn $ unlines (map show bs)
                          banner "preprocess"
                          pre_fs <- mapM (showPreprocess dt ft) fs
                          let (splits,st') = split dt st pre_fs
                          banner "Workers"
                          let workers = [f | (_, Just f) <- splits]
                          let bs' = fixBreakers (map funcName workers) bs
                          mapM_ (putStrLn . showFun) workers
                          let split_fs = workers ++ (map fst splits)
                          banner "Optimize"
                          (ft',opt_fs) <- showOptimizeFuns bs' ft split_fs
                          banner "Postprocess"
                          post_fs <- showPostprocess ft' opt_fs
                          return (updProgFuncs (const post_fs) p, ft',st')


fixBreakers :: [QName] -> [QName] -> [QName]
fixBreakers ws bs = map makeWorker bs
 where makeWorker b = if b `elem` ws then mapSnd (++"#worker") b else b

showOptimizeFuns :: [QName] -> FunTable -> [FuncDecl] -> IO (FunTable, [FuncDecl])
showOptimizeFuns _  ft []     = return (ft, [])
showOptimizeFuns bs ft (f:fs) 
 | isExternal f = do (ft', fs') <- showOptimizeFuns bs ft fs
                     return (ft', f:fs')
 | otherwise    = do putStrLn $ "Function: " ++ (snd (funcName f))
                     t <- time
                     f' <- showOptimizeFun ft f
                     t' <- time
                     putStrLn ("time: " ++ show (t' - t) ++ "\n")
                     (ft', fs') <- showOptimizeFuns bs (addEntry bs f' ft) fs
                     return (ft', f' : fs')


showOptimizeFun :: FunTable -> FuncDecl -> IO FuncDecl
showOptimizeFun ft (Func n a v t r) = do putStrLn (showExpr (ruleBody r))
                                         r'@(Rule vs _) <- showOptimizeRule ft r
                                         return (Func n (length vs) v t r')

showOptimizeRule :: FunTable -> Rule -> IO Rule
showOptimizeRule ft r@(Rule vs e) 
 = do t0 <- time
      e1 <- showCleanup ft e
      t1 <- time
      e2 <- showOptimizeExpr ft e1
      t2 <- time
      let n = missingVars e2
      let newVs = take n [newVar e2 ..]
      if n == 0 
         then do putChar '\n'
                 putStrLn ("cleanup  time: " ++ (show (t1 - t0)))
                 putStrLn ("optimize time: " ++ (show (t2 - t1)))
                 return (Rule vs e2)
         else do let e3 = applyf e2 (map Var newVs)
                 putStrLn "=>_addVariables"
                 putStrLn (showExpr e3)
                 showOptimizeRule ft (Rule (vs++newVs) e3)

showOptimizeExpr :: FunTable -> Expr -> IO Expr
showOptimizeExpr ft e = do let (e',w,_) = showWork (opts ft) (20) e
                           putStr w
                           return e'

showCleanup :: FunTable -> Expr -> IO Expr
showCleanup ft e = do let (e1, w1, _) = showWork (fixPartFunc ft) (-1) e
                      putStr w1
                      let (e2, w2, _) = showWork (toANF trivial) (-1) e1
                      putStr w2
                      let (e3, w3, _) = showWork fixLets (-1) e2
                      putStr w3
                      return e3

showExpr :: Expr -> String
showExpr = pPrint . ppExp (Options 2 QualNone "")
showFun :: FuncDecl -> String
showFun = pPrint . ppFuncDecl (Options 2 QualNone "")

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


