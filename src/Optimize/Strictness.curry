module Optimize.Strictness (StrictTable, addProg, addFun, emptyST, split) where

import qualified Data.Map as M
import FlatUtils.DataTable (DataTable, getConstructor)
import FlatUtils.FlatUtils (newVar,recursiveFunc)
import FlatCurry.Types
import FlatCurry.Goodies (progFuncs, branchExpr, updFuncBody, isExternal,
                          funcArity, funcType, funcBody, funcArgs, funcName)
import Util (State, runState, (&&-), mapSnd, get, put)
import List (sum, (\\))
import Debug

type StrictTable = M.Map QName [Int]

strictVar :: StrictTable -> QName -> [Int] -> Bool
strictVar st f vs = case M.lookup f st of
                         Nothing -> False
                         (Just us) -> not (null (us &&- vs))


addOptFun :: FuncDecl -> StrictTable -> StrictTable
addOptFun (Func f _ _ _ (External _)) st = M.insert f (lookupExternal f) st
addOptFun (Func f _ _ _ (Rule vs _))  st = M.insert f [i | (v,i) <- zip vs [1..], v < 0] st

addProg :: Prog -> StrictTable -> StrictTable
addProg p st = foldr addOptFun st (progFuncs p)

addFun :: StrictTable -> FuncDecl -> [VarIndex] -> StrictTable
addFun st (Func f _ _ _ (External _)) svs = M.insert f svs st
addFun st (Func f _ _ _ (Rule vs _)) svs = M.insert f [i | (v,i) <- zip vs [1..], v `elem` svs] st

emptyST :: StrictTable
emptyST = M.empty


strict :: StrictTable -> Expr -> VarIndex -> Bool
strict _  (Var v)        x = x == v
strict _  (Lit _)        _ = False
strict st (Comb ct f es) x = ct == FuncCall &&
                             strictVar st f [i | (e,i) <- zip es [1..], strict st e x]
strict st (Free _ e)     x = strict st e x
strict st (Typed e _)    x = strict st e x
strict st (Or e1 e2)     x = strict st e1 x && strict st e2 x
strict st (Let vs e)     x = case vs of
                                  [(v,ve)] -> strict st e x || strict st e v && strict st ve x
                                  _        -> strict st e x
strict st (Case _ e bs)  x = strict st e x || and [strict st be x | be <- map branchExpr bs]

fixStrict :: FuncDecl -> State StrictTable [VarIndex]
fixStrict f@(Func n _ _ _ (External _))  = do st <- get
                                              let vs = lookupExternal n
                                              put (addFun st f vs)
                                              return vs
fixStrict f@(Func _ _ _ _ (Rule vs e)) = do st <- get
                                            put (addFun st f vs)
                                            runStrict f e vs

lookupExternal :: QName -> [VarIndex]
lookupExternal (_,f) = 
  case f of
       "$!"              -> [1,2]
       "$!!"             -> [1,2]
       "ensureNotFree"   -> [1]
       "$##"             -> [1,2]
       "prim_error"      -> [1]
       "failed"          -> []
       "returnIO"        -> [1]
       "catch"           -> []
       "prim_show"       -> [1]
       "failure"         -> []
       "letrec"          -> []
       "ifVar"           -> [1]
       "prim_putChar"    -> [1]
       "getChar"         -> []
       "prim_readFile"   -> [1]
       "prim_writeFile"  -> [1,2]
       "prim_appendFile" -> [1,2]
       "=:="             -> [1,2]
       ">>=$"            -> [1,2]
       "=:<="            -> [1,2]
       "=:<<="           -> [1,2]
       _                 -> []

runStrict :: FuncDecl -> Expr -> [VarIndex] -> State StrictTable [VarIndex]
runStrict f e vs = do st <- get
                      let vs' = filter (strict st e) vs
                      put (addFun st f vs')
                      if vs == vs' 
                       then return vs'
                       else runStrict f e vs'


splitWorker :: DataTable -> FuncDecl -> State StrictTable (FuncDecl, Maybe FuncDecl)
splitWorker dt f = do strictVs <- fixStrict f
                      let types     = getTypes (funcArity f) (funcType f)
                      let pats      = [(v,c) | (v,t) <- zip (funcArgs f) types, 
                                               v `elem` strictVs, 
                                               c <- getConstructor t dt]
                      let nonstrictVS = funcArgs f \\ map fst pats
                      let fw_arity  = sum (map (\(_, (_,k)) -> k) pats)-1
                      let fw_expr   = rebox pats n0 (funcBody f)
                      let fw_params = nonstrictVS ++ [n0..n0+fw_arity]
                      if not (recursiveFunc f) || isExternal f || null pats
                       then return (f,Nothing)
                       else return (Func fw_name fw_arity Public (TVar 0) (Rule fw_params fw_expr), 
                                    Just (updFuncBody (\_ -> unbox pats n0 fw_params) f))
 where
  unbox []              n vs = Comb FuncCall fw_name (map Var vs)
  unbox ((v, (c,k)):ps) n vs = Case Flex (Var v) [Branch (Pattern c [n..n+k-1]) (unbox ps (n+k) vs)]
  rebox []              _ e  = e
  rebox ((v, (c,k)):ps) n e  = Let [(v,Comb ConsCall c (map Var [n..n+k-1]))] (rebox ps (n+k) e)
  fw_name                    = mapSnd (++"#worker") (funcName f)
  n0                         = newVar (funcBody f)


split :: DataTable -> StrictTable -> [FuncDecl] -> ([(FuncDecl, Maybe FuncDecl)],StrictTable)
split dt st fs = runState (mapM (splitWorker dt) fs) st

getTypes :: Int -> TypeExpr -> [TypeExpr]
getTypes _ t@(TVar _) = [t]
getTypes a t@(FuncType t1 t2)
 | a == 0 = [t]
 | otherwise = t1 : (getTypes (a-1)) t2
getTypes _ t@(TCons _ _) = [t]
getTypes _ t@(ForallType _ _) = [t]


