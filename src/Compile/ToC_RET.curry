module Compile.ToC_RET (funSource_RET) where

import Prelude hiding (lookup)
import ICurry.Types
import Data.Map (lookup)
import Debug (trace)

import Compile.IUtil
import Compile.PrimOps (primOps)
import Compile.C
import Compile.CommonC


----------------------------------------------------
-- .c file
----------------------------------------------------

funSource_RET :: IQName -> IFuncBody -> [CStmt]
funSource_RET name body
 | otherwise       = [comment (uninstance name),
                      cfunDefn "Node*" (ret_hnf name) [("Node*", "backup")]] ++
                     showBody name body ++
                     nl



showBody :: IQName -> IFuncBody -> [CStmt]
showBody _ (IExternal x) = cblock [scall x ["RET"]]
showBody n (IFuncBody block) = cblock 
                               (
                                   ["field root = RET;",
                                    scall "debug" ["LOW", "\"HNF " ++ toName n Nothing ++ ":\\n\""],
                                    scall "debug_expr" ["LOW", "root"]] ++
                                   showBlock ([],[],n) block
                               )

showBlock :: FunPos -> IBlock -> [CStmt]
showBlock pos (IBlock decls asgns stmt) = map showDecl decls ++
                                          concatMap showAsgn asgns ++
                                          showStmt (updateVars decls stmt pos) (getCall asgns) stmt



showStmt :: FunPos -> [String] -> IStatement -> [CStmt]
showStmt (_,_,n) _ IExempt       = [scall "fail" ["root"], 
                                    scall "debug" ["LOW", "\"leaving " ++ toName n Nothing ++ "\\n\""],
                                    scall "debug_expr" ["LOW", "root"],
                                    "return backup;"]
showStmt pos@(_,_,n) _ (IReturn e) = setExpr pos e True ++ 
                                     [scall "debug" ["LOW", "\"leaving " ++ toName n Nothing ++ "\\n\""],
                                      scall "debug_expr" ["LOW", "root"],
                                      "return backup;"]
showStmt pos call (ICaseCons v bs) 
 | v == -1   = showIfCase pos bs showBlock
 | otherwise = showConsCase pos v bs call showBlock True
showStmt pos _ (ICaseLit v bs) = showLitCase pos v bs showBlock True

