{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Inline where

import FlatCurry.Types
import FlatCurry.Goodies (isVar,caseBranches,branchPattern,patCons)
import FlatUtils.FlatRewrite
import FlatUtils.Gas
import FlatUtils.DataTable
import FlatUtils.FunTable
import Util
import Control.SetFunctions
import Graph
import List (delete, (\\))

type OptPass = Expr -> Expr

runOpts :: Expr -> Expr
runOpts ?


inline :: FunMap -> VarMap -> Expr -> Expr
inline fs vs (Var v)              = VarIndex
inline fs vs (Lit l)              = Lit l
inline fs vs (Comb FuncCall n es)
 | n == ("Prelude","apply") = 
inline fs vs (Comb ConsCall n es) = 
inline fs vs (Comb (FuncPartCall m) n es) = 
inline fs vs (Comb (ConsPartCall m) n es) = 
inline fs vs (Let decls e)
inline fs vs (Free fvs e)
inline fs vs (Or e1 e2)
inline fs vs (Case ct e bs) =
inline fs vs (Typed e _) = e

-- f x = e1
-- f e2
-- ==>
-- f x = e1
-- let v = e2
-- in e1[x -> v]
beta :: FunMap -> Expr -> Expr
beta funs e
 | e |-> (Comb FuncCall f es) -> Let (zip vs es) (subExpr funs f vs)

-- let x = e1
-- e2 
-- ==>
-- e2[x -> e1]
inline :: OptPass

-- let x = e1
-- in e2 [x not in e2]
-- ==>
-- e2
deadCodeElim :: OptPass

findDeadCode e = (e, Let (as++[(x,_)]++bs) e2) |~ not (x `elem` allVars e2) |=> Let (as++bs) e2

-- case (C1 e) of
--     C1 x -> e1
--     C2 y -> e2
-- ==>
-- let x = e1
-- in e2
caseCancel :: OptPass
