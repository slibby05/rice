module Compile.CommonC where

import Prelude hiding (lookup)
import Sort (sort)
import Util
import ICurry.Types
import Compile.IUtil
import Data.Map (lookup)
import Compile.C
import Compile.PrimOps (primOps)

type ShowBlock = FunPos -> IBlock -> [CStmt]

showDecl :: IVarDecl -> String
showDecl (IVarDecl  v) 
 | isRET v   = ""
 | otherwise = field v ++ ";"
showDecl (IFreeDecl v) = (field v .= "free_var()") ++ ";"

showAsgn :: IAssign -> [CStmt]
showAsgn (INodeAssign v ixs e) = [(children (var v) ixs .= showExpr e) ++ ";"]
showAsgn (IVarAssign  v e)
 | isRET v   = setCall e ++
               ["field RET_forward" .=  "RET" ++ ";"]
 | otherwise = [var v .= showExpr e ++ ";",
                "field " ++ fwd v .= var v ++ ";"]

setCall :: IExpr -> [CStmt]
setCall (IOr e1 e2) = [scall "set_choice" ["RET", showExpr e1, showExpr e2]]
setCall (IFCall f es)
 | isApply f  = [scall ("set_apply"++show (length es-1)) ("RET":map showExpr es)]
 | otherwise  = case lookup f primOps of
                     Just (_,set,typ) -> set "RET" (map (showPrim typ) es)
                     Nothing          -> [scall ("set_"++mangle f) ("RET" : (map showExpr es) ++ ["0"])]



isApply :: IQName -> Bool
isApply (m,n,_) = m == "Prelude" && n == "apply"

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
showPrim typ (IVar v) = fwd v ++ "."++typ
showPrim _   (ILit l) = showLit l

showLit :: ILiteral -> String
showLit (IInt i) = show i
showLit (IChar c) = show (ord c)
showLit (IFloat f) = show f


------------------------------------------
-- blocks
------------------------------------------


failBlock :: FunPos -> IVarIndex -> Bool -> [CStmt]
failBlock pos@(_,_,n) v retFunction = ccase "FAIL_TAG"
                          (
                              save pos v retFunction ++
                              [scall "fail" [root],
                               scall "debug" ["LOW", "\"leaving " ++ toName n Nothing ++ "\\n\""],
                               scall "debug_expr" ["LOW", root],
                               return]
                          )
 where return = if retFunction then "return backup;" else "return;"
       root = if retFunction then "RET" else "root"

funBlock :: IVarIndex -> [CStmt]
funBlock v = ccase "FUNCTION_TAG"
             [
                 symhnf (fwd v) ++ ";",
                 cbreak
             ]


choiceBlock :: IVarIndex -> Bool -> [CStmt]
choiceBlock v retFunction = ccase "CHOICE_TAG"
                            [
                                scall "choose" [fwd v],
                                cbreak
                            ]

forwardBlock :: IVarIndex -> [CStmt]
forwardBlock v = ccase "FORWARD_TAG"
                 [
                     fwd v .= children (fwd v) [0] ++ ";",
                     cbreak
                 ]

freeCaseBlock :: IVarIndex -> [CName] -> [CStmt]
freeCaseBlock v (b:bs) = ccase "FREE_TAG"
                         (
                            pushFree v b bs push set
                         )
 where push v con = scall "push_choice" [v, "make_"++con++"_free()"]
       set v b = scall ("set_"++b++"_free") [v]

freeLitBlock :: IVarIndex -> CType -> [ILiteral] -> [CStmt]
freeLitBlock v _     []     = ccase "FREE_TAG"
                              [
                                  scall "printf" ["\"free variable used in primitive operation\\n\""],
                                  scall "exit" ["1"]
                              ]
freeLitBlock v ctype (b:bs) = ccase "FREE_TAG"
                              (
                                  pushFree v b bs push set
                              )
 where push v l = scall "push_choice" [v, call ("make_"++ctype) [showLit l, "0"]]
       set v b = scall ("set_"++ctype) [v, showLit b, "0"]

pushFree :: IVarIndex -> a -> [a] -> (CName -> a -> CStmt) -> (CName -> a -> CStmt) -> [CStmt]
pushFree v b bs push set = if isRET v
                           then cifElse ((fwd v ++ ".n") .== "RET.n")
                                (
                                    [make_restore v] ++ 
                                    makeCalls "RET" (var (abs v))
                                )
                                (
                                    makeCalls (fwd v) (fwd v)
                                )
                           else makeCalls (fwd v) (fwd v)
 where makeCalls :: String -> String -> [CStmt]
       makeCalls v bv = [scall "push_frame" [bv, "free_var()"]] ++
                         map (push bv) bs ++
                        [set v b,
                         "nondet = true;",
                         cbreak]

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
        ["nondet" .|= nondet (fwd v) ++ ";"] ++
        cswitch (symtag (fwd v))
        (
          [failBlock pos v retFunction,
           funBlock v,
           choiceBlock v retFunction,
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
       nondetCode []           = []
       nondetCode (ret_call:_) = [field (abs v) .= "(field)"++scall ret_call ["NULL"],
                                  "RET_forward = RET;"] ++
                                 cif ( node (abs v) .!= "NULL")
                                 [
                                    "nondet = true;",
                                    scall "memcpy" [node (abs v), "RET.n", "sizeof(Node)"]
                                 ]
                      


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
       caseCond b i = ((conv_t btype (fwd v)) .== litBranchValue b,
                       block (descend i pos) (litBlock b))
       return = if retFun then "return backup;" else "return;"



getCall :: [IAssign] -> [CName]
getCall vs = [c | (IVarAssign v e) <- vs, isRET v, c <- call e]
 where call e = case e of
                    (IFCall f es) -> if isApply f then ["apply_RET_hnf"] else [ret_hnf f]
                    (IOr e1 e2)   -> ["choice_RET_hnf"]
                    _             -> []


save :: FunPos -> IVarIndex -> Bool -> [CStmt]
save (p,vs,n) v retFunction 
 | isRET v   = cif ("nondet")
               [
                   make_restore v,
                   saveCall
               ]
 | otherwise = cif ("nondet")
               [
                   saveCall
               ]
 where saveCall = if retFunction 
                   then scall "backup = save_RET" ["backup", makePart n p (sort (map abs vs))]
                   else scall "save" ["root", makePart n p (sort (map abs vs))]


makePart :: IQName -> Path -> [IVarIndex] -> CExpr
makePart n p vs = call ("make_"++getPathName n p) (map var vs ++ ["0"])
       

------------------------------------
-- make expression of new nodes
------------------------------------

showExpr :: IExpr -> CExpr
showExpr (IVar v)           = var v
showExpr (IVarAccess v ixs) = children (fwd v) ixs
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
setExpr pos (IVar v)          _  = [scall "set_forward" ["root", var v]]
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

-- used to turn of the automatic evaluation of known funcitons
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

