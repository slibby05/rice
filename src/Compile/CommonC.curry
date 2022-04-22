module Compile.CommonC where

import Prelude hiding (lookup)
import Sort (sortBy)
import Util
import ICurry.Types
import Compile.IUtil
import Data.Map (lookup)
import Compile.C
import Compile.PrimOps (primOps)

type ShowBlock = FunPos -> IBlock -> [CStmt]

showDecl :: IVarDecl -> String
showDecl (IVarDecl  v) = field v ++ ";"
-- | isRET v   = ""
-- | otherwise = field v ++ ";"
showDecl (IFreeDecl v) = (field v .= "free_var()") ++ ";"

showAsgn :: IAssign -> [CStmt]
showAsgn (INodeAssign v ixs e) = [(children (var v) ixs .= showExpr e) ++ ";"]
showAsgn (IVarAssign  v e)
 | isRET v   = setCall e ++
               [var v .= "RET;"]
 | otherwise = [var v .= showExpr e ++ ";"]

setCall :: IExpr -> [CStmt]
setCall (IOr e1 e2) = [scall "set_choice" ["RET", showExpr e1, showExpr e2]]
setCall (IFCall f es)
 | isApply f  = [scall ("set_apply"++show (length es-1)) ("RET":map showExpr es)]
 | otherwise  = case lookup f primOps of
                     Just (_,set,typ) -> set "RET" (map (showPrim typ) es)
                     Nothing          -> [scall ("set_"++mangle f) ("RET" : (map showExpr es) ++ ["0"])]



isApply :: IQName -> Bool
isApply (m,n,_) = m == "Prelude" && n == "apply"


getCall :: [IAssign] -> [CName]
getCall vs = [c | (IVarAssign v e) <- vs, isRET v, c <- call e]
 where call e = case e of
                    (IFCall f es) -> if isApply f then ["apply_RET_hnf"] else [ret_hnf f]
                    (IOr e1 e2)   -> ["choice_RET_hnf"]
                    _             -> []

----------------------------------------
-- handling string constants and escape characters
----------------------------------------

isStrConst :: IQName -> Bool
isStrConst (m,_,_) = m == "StringConst"

strConst :: IQName -> String
strConst (_,n,_) = quote (escape n)

escape :: String -> String
escape = concatMap escChr

escChr :: Char -> String
escChr c = case c of
                '"'  -> "\\\""
                '\'' -> "\\\'"
                '\\' -> "\\\\"
                '\n' -> "\\n"
                '\r' -> "\\r"
                '\t' -> "\\t"
                '\r' -> "\\r"
                '\f' -> "\\f"
                '\v' -> "\\v"
                _    -> if ord c > 255 then "?" else [c]

----------------------------------------
-- handling primitive values
----------------------------------------

showPrim :: String -> IExpr -> String
showPrim typ (IVar v) = var v ++ "."++typ
showPrim _   (ILit l) = showLit l

showLit :: ILiteral -> String
showLit (IInt i) = show i
showLit (IChar c) = show (ord c)
showLit (IFloat f) = show f


------------------------------------------
-- blocks
------------------------------------------

showIfCase :: FunPos -> [IConsBranch] -> ShowBlock -> [CStmt]
showIfCase pos [cond,t,f] block =  cifElse (showCond (exp cond))
                                    (block (descend 0 pos) (stmt t))
                                    (block (descend 1 pos) (stmt f))
 where exp   (IConsBranch _ _ (IBlock [] [] (IReturn e))) = e
       stmt (IConsBranch _ _ b) = b
       showCond (IFCall (_,"primEqChar",_)    [e1,e2]) = showPrim "c" e1 .== showPrim "c" e2
       showCond (IFCall (_,"primEqInt",_)     [e1,e2]) = showPrim "i" e1 .== showPrim "i" e2
       showCond (IFCall (_,"primEqFloat",_)   [e1,e2]) = showPrim "f" e1 .== showPrim "f" e2
       showCond (IFCall (_,"primLtEqChar",_)  [e1,e2]) = showPrim "c" e1 .<= showPrim "c" e2
       showCond (IFCall (_,"primLtEqInt",_)   [e1,e2]) = showPrim "i" e1 .<= showPrim "i" e2
       showCond (IFCall (_,"primLtEqFloat",_) [e1,e2]) = showPrim "f" e1 .<= showPrim "f" e2

showConsCase :: FunPos -> IVarIndex -> [IConsBranch] -> [String] -> ShowBlock -> Bool -> [String]
showConsCase pos v bs call block retFunction
  = cblock 
    (
      ["bool nondet = false;"] ++
      nondetCode call ++
      cwhile "true"
      (
        ["nondet" .|= "scrutinee.n->nondet;"] ++
        cswitch "scrutinee.n->symbol->tag"
        (
          [failBlock pos v retFunction,
           funBlock v,
           choiceBlock v,
           forwardBlock v,
           freeBlock] ++ 
          map (showConsBranch pos v block retFunction) bs'
        )
      )
    )
 where conName (IConsBranch c _ _) = c
       cons = map (mangle . conName) bs'
       freeBlock = if   isPrimitive bs
                   then freeLitBlock v btype (litPatterns bs)
                   else freeCaseBlock v cons
       bs' = filter (\(IConsBranch (m,c,_) _ _) -> (m++c) /= "") bs
       btype = case bs of (IConsBranch ("",c,_) _ _ : _) -> "_"++c
       nondetCode []           = ["field scrutinee" .= var v ++ ";"]
       nondetCode (ret_call:_) = ["field "++backup v .=  "(field)"++scall ret_call ["NULL"],
                                  "field scrutinee = RET;"] ++
                                 cif (nbackup v .!= "NULL")
                                 [
                                    "nondet = true;",
                                    scall "memcpy" [nbackup v, "RET.n", "sizeof(Node)"]
                                 ] ++
                                 -- if RET isn't nondet, but it is a forwarding node,
                                 -- then we want to store the node it forwards to
                                 -- as our backup.
                                 -- There's no need to copy/reevaluate RET,
                                 -- but it's very important that we have a node to store
                                 -- if the forwarding chain is nondet.
                                 cElseIf ("RET.n->symbol->tag" .== "FORWARD_TAG",
                                 [
                                    backup v .= "RET.n->children[0];"
                                 ])
                      


showConsBranch :: FunPos -> IVarIndex -> ShowBlock -> Bool -> IConsBranch -> [String]
showConsBranch pos v block retFunction (IConsBranch c _ b)
   = ccase (tag c)
     (
         save pos v retFunction ++
         block (descend (getTag c) pos) b
     )

showLitCase :: FunPos -> IVarIndex -> [ILitBranch] -> ShowBlock -> Bool -> [String]
showLitCase pos v bs block retFun = cifCase (zipWith caseCond bs [1..]) [scall "fail" ["root"], return]
 where btype = litBranchType (head bs)
       caseCond b i = ((conv_t btype (var v)) .== litBranchValue b,
                       block (descend i pos) (litBlock b))
       return = if retFun then "return backup;" else "return;"



failBlock :: FunPos -> IVarIndex -> Bool -> [CStmt]
failBlock pos@(_,_,n) v retFunction = ccase "FAIL_TAG"
                          (
                              save pos v retFunction ++
                              [scall "fail" ["root"],
                               scall "debug" ["LOW", "\"leaving " ++ toName n Nothing ++ "\\n\""],
                               scall "debug_expr" ["LOW", "root"],
                               return]
                          )
 where return = if retFunction then "return backup;" else "return;"

funBlock :: IVarIndex -> [CStmt]
funBlock v = ccase "FUNCTION_TAG"
             [
                 "HNF(scrutinee);",
                 cbreak
             ]


choiceBlock :: IVarIndex -> [CStmt]
choiceBlock v = ccase "CHOICE_TAG"
              [
                  "choose(scrutinee);",
                  cbreak
              ]

forwardBlock :: IVarIndex -> [CStmt]
forwardBlock v = ccase "FORWARD_TAG"
                 [
                     "scrutinee = scrutinee.n->children[0];",
                     cbreak
                 ]

freeCaseBlock :: IVarIndex -> [CName] -> [CStmt]
freeCaseBlock v (b:bs) = ccase "FREE_TAG"
                         (
                            pushFree v b bs push set
                         )
 where push v con = scall "push_choice" [v, "make_"++con++"_free()"]
       set v b' = scall ("set_"++b'++"_free") [v]

freeLitBlock :: IVarIndex -> CType -> [ILiteral] -> [CStmt]
freeLitBlock _ _     []     = ccase "FREE_TAG"
                              [
                                  scall "printf" ["\"free variable used in primitive operation\\n\""],
                                  scall "exit" ["1"]
                              ]
freeLitBlock v ctype (b:bs) = ccase "FREE_TAG"
                              (
                                  pushFree v b bs push set
                              )
 where push v' l = scall "push_choice" [v', call ("make_"++ctype) [showLit l, "0"]]
       set v' b' = scall ("set_"++ctype) [v', showLit b', "0"]

pushFree :: IVarIndex -> a -> [a] -> (CName -> a -> CStmt) -> (CName -> a -> CStmt) -> [CStmt]
pushFree v b bs push set
 | not (isRET v) = makeCalls "scrutinee"
 | otherwise   = cifElse ("scrutinee.n == RET.n")
                 (
                     [make_restore v] ++ 
                     makeCalls (backup v)
                 )
                 (
                     makeCalls "scrutinee"
                 )
 where makeCalls v' = [scall "push_frame" [v', "free_var()"]] ++
                       map (push v') bs ++
                      [set "scrutinee" b,
                       "nondet = true;",
                       cbreak]



save :: FunPos -> IVarIndex -> Bool -> [CStmt]
save (p,vs,n) v retFunction 
 | isRET v   = cif ("nondet")
               [
                   --make_restore v,
                   saveCall
               ]
 | otherwise = cif ("nondet")
               [
                   saveCall
               ]
 where saveCall = if retFunction 
                   then "backup" .= scall "save_RET" ["backup", part]
                   else scall "save" ["root", part]
       part = makePart n p (sortBy absCmp vs)
       absCmp x y = abs x <= abs y

-- testing out how much nondet really helps
-- save :: FunPos -> IVarIndex -> Bool -> [CStmt]
-- save (p,vs,n) v retFunction 
--  | isRET v   = [{-make_restore,-} saveCall]
--  | otherwise = [saveCall]
--  where saveCall = if retFunction 
--                    then "backup" .= scall "save_RET" ["backup", part]
--                    else scall "save" ["root", part]
--        part = makePart n p (sortBy absCmp vs)
--        absCmp x y = abs x <= abs y


makePart :: IQName -> Path -> [IVarIndex] -> CExpr
makePart n p vs = call ("make_"++getPathName n p) (map backup vs ++ ["0"])
       

------------------------------------
-- make expression of new nodes
------------------------------------

showExpr :: IExpr -> CExpr
showExpr (IVar v)           = var v
showExpr (IVarAccess v ixs) = children (var v) ixs
showExpr (ILit l)           = toUnion (litType l) (showLit l)
showExpr (IFCall f es)
 | isApply f                = "make_apply"++show (length es-1) ++ cargs (map showExpr es)
 | otherwise                = case lookup f primOps of
                                   Just (make,_,typ) -> make (map (showPrim typ) es)
                                   Nothing -> showComb f es
showExpr (ICCall c es)
 | isStrConst c             = call "toCurryString" [strConst c]
 | otherwise                = case lookup c primOps of
                                   Just (make,_,typ) -> make (map (showPrim typ) es)
                                   Nothing -> showComb c es
showExpr (IFPCall f n es)   = showPart f n es
showExpr (ICPCall c n es)   = showPart c n es
showExpr (IOr e1 e2)        = call "make_choice" [showExpr e1, showExpr e2]

showComb :: IQName -> [IExpr] -> CExpr
showComb f es = call ("make_"++mangle f) (map showExpr es ++ ["0"])

showPart :: IQName -> Int -> [IExpr] -> CExpr
showPart f m es = call ("make_"++mangle f) (missingArgs es m)

missingArgs :: [IExpr] -> Int -> [CExpr]
missingArgs es m = (map showExpr es ++ replicate m nullf ++ [show m])

------------------------------------
-- set expression
------------------------------------

setExpr :: FunPos -> IExpr -> Bool -> [CStmt]
setExpr _   (IVar v)          _  = [scall "set_forward" ["root", var v]]
setExpr _   (ILit (IInt   v)) _  = ["root.i" .= show v] -- this shouldn't happen?
setExpr _   (ILit (IChar  v)) _  = ["root.c" .= show v]
setExpr _   (ILit (IFloat v)) _  = ["root.f" .= show v]
setExpr _   (IOr e1 e2)   retFun = [scall "set_choice" ["root", showExpr e1, showExpr e2],
                                         hnfCall "choice" retFun]
setExpr _   (IFCall f es) retFun
 | isApply f                     = [scall ("set_apply"++show (length es-1)) ("root":map showExpr es),
                                    hnfCall "apply" retFun]
 | otherwise                     = case lookup f primOps of
                                        Just (_,set,typ) -> set "root" (map (showPrim typ) es)
                                        Nothing -> [setComb f es,
                                                    hnfCall (mangle f) retFun]
setExpr _   (ICCall c es)     _  
 | isStrConst c                  = [scall "setCurryString" ["root",strConst c]]
 | otherwise                     = case lookup c primOps of
                                        Just (_,set,typ) -> set "root" (map (showPrim typ) es)
                                        Nothing -> [setComb c es]
setExpr _   (IFPCall f n es)  _  = [setPartComb f n es]
setExpr _   (ICPCall c n es)  _  = [setPartComb c n es]

-- used to turn off the automatic evaluation of known functions
--setExpr _   (IFCall f es) retFun
-- | isApply f                     = [scall ("set_apply"++show (length es-1)) ("root":map showExpr es)]
-- | otherwise                     = case lookup f primOps of
--                                        Just (_,set,typ) -> set "root" (map (showPrim typ) es)
--                                        Nothing -> [setComb f es]

setComb :: IQName -> [IExpr] -> CStmt
setComb f es = scall ("set_"++mangle f) ("root" : (map showExpr es) ++ ["0"])

setPartComb :: IQName -> Int -> [IExpr] -> CStmt
setPartComb f m es = scall ("set_"++mangle f) ("root" : missingArgs es m)

hnfCall :: String -> Bool -> CStmt
hnfCall name False = scall (name++"_hnf") ["root"]
hnfCall name True  = "backup" .= scall (name++"_RET_hnf") ["backup"]

