module Compile.ToC_normal (funSource_base, funSource_cases) where

import Prelude hiding (lookup)
import Sort (sort)
import ICurry.Types
import Data.Map (lookup)
import Debug (trace)

import Compile.PrimOps (primOps)
import Compile.C
import Compile.CommonC
import Compile.IUtil


funSource_base :: IQName -> IFuncBody -> [String]
funSource_base name body = [comment (uninstance name),
                            cfunDefn "void" (hnf name) [("field", "root")]] ++
                           showBody name body ++
                           nl

showBody :: IQName -> IFuncBody -> [String]
showBody _ (IExternal x) = cblock [scall x ["root"]]
showBody n (IFuncBody block) = cblock ([scall "debug" ["LOW", "\"HNF " ++ toName n Nothing ++ ":\\n\""],
                                        scall "debug_expr" ["LOW", "root"]] ++
                                       showBlock ([],[],n) block)

funSource_cases :: IQName -> IFuncBody -> [String]
funSource_cases name body = concatMap (funSource_case name) (getPath [] [] block)
 where (IFuncBody block) = body


-- If we're a case statement, and the variable is negative,
-- then this came from a non-deterministic RET node.
-- The only time that negative can appear is in the case statement,
-- so we need to flip it.
-- Since all other arguments must correspond to real nodes,
-- they must all be positive, so its safe take the absolute value of every argument.
funSource_case :: IQName -> ([Int], [IVarIndex], IStatement) -> [String]
funSource_case name (path,vars,start)
   = [comment (uninstance name) ++ " at " ++ show path,
      cfunDefn "void" hnf_p [("field", "root")]] ++
      cblock 
      (
        [scall "debug" ["LOW", "\"HNF " ++ toName name (Just path) ++ "\\n\""],
         scall "debug_expr" ["LOW", "root"]] ++
        showBlock (path, [], name) (IBlock decls asgns fixStart)
      ) ++
      nl
 where hnf_p = getPathName name path ++ "_hnf"
       asgns = [IVarAssign v (IVarAccess 0 [i]) | (v,i) <- zip (reverse (sort (map abs vars))) [0..]]
       decls = map IVarDecl $ sort $ map abs vars

       fixStart = case start of
                       ICaseCons v bs -> if isRET v then ICaseCons (-v) (map (fixBranch v) bs) else start
                       _              -> start

-- if f ... = e and e|_p is an inlined case expression
-- then we'll use the RET node to evaluate the expression.
-- we'll assign all children from RET_forward like normal.
-- however, when we make f|_p, we'll actually have a name for the node
-- so we need to fix the assignment statements
-- since these are the only places where RET could show up.
fixBranch :: IVarIndex -> IConsBranch -> IConsBranch
fixBranch x (IConsBranch n a (IBlock ds as s)) = IConsBranch n a (IBlock ds (map (fixAsgn x) as) s)

fixAsgn :: IVarIndex -> IAssign -> IAssign
fixAsgn ret asgn = case asgn of 
                        IVarAssign v (IVarAccess x ixs) -> if x == ret
                                                            then IVarAssign v (IVarAccess (-x) ixs)
                                                            else asgn
                        _ -> asgn


showBlock :: FunPos -> IBlock -> [String]
showBlock pos (IBlock decls asgns stmt) = map showDecl decls ++
                                          concatMap showAsgn asgns ++
                                          showStmt (updateVars decls stmt pos) (getCall asgns) stmt


showStmt :: FunPos -> [String] -> IStatement -> [CStmt]
showStmt (_,_,n) _ IExempt         = [scall "fail" ["root"],
                                      scall "debug" ["LOW", "\"leaving " ++ toName n Nothing ++ "\\n\""],
                                      scall "debug_expr" ["LOW", "root"],
                                      creturn]
showStmt pos@(_,_,n) _ (IReturn e) = setExpr pos e False ++ 
                                     [scall "debug" ["LOW", "\"leaving " ++ toName n Nothing ++ "\\n\""],
                                      scall "debug_expr" ["LOW", "root"],
                                      creturn]
showStmt pos call (ICaseCons v bs) 
 | v == -1   = showIfCase pos bs showBlock
 | otherwise = showConsCase pos v bs call showBlock False
showStmt pos _ (ICaseLit  v bs) = showLitCase pos v bs showBlock False

