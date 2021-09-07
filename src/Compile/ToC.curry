
module Compile.ToC (toSource, CWriter, iname, writeMain) where

import Prelude hiding (lookup)
import Util (Path)
import Compile.PrimOps (primOps)
import ICurry.Types
import List (maximum, intercalate)
import Sort (sort)
import Compile.C
import Data.Map (lookup)
import Debug (trace)
import Util ((&&-),(++-))

iname :: IProg -> String
iname (IProg name _ _ _) = name

type CWriter = IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()

type FunPos = (Path, [IVarIndex], IQName)

updateVars :: [IVarDecl] -> IStatement -> FunPos -> FunPos
updateVars xs s (p, vs, n) = (p, newVars, n)
 where newVars = (sort (map varFromDecl xs) ++- vs) &&- varsInStmt s

descend :: Int -> FunPos -> FunPos
descend b (p, vs, n) = (p++[b],vs,n)

----------------------------------------------------
-- main.c file
----------------------------------------------------

writeMain :: String -> String -> IO ()
writeMain file name 
 = writeFile file $ unlines $
     ["#include <stdio.h>",
      cinclude "node",
      cinclude "stack",
      cinclude "runtime",
      cinclude name,
      "",
      cfunDefn "int" "main" []] ++
      (cblock 
        ["bt_stack = new_stack();",
         "RET.n = (Node*)calloc(1, sizeof(Node));",
         "",
         "field expr = make_"++(nameMangle name)++"_main(0);",
         "nf_all(expr);",
         "return 0;"])


----------------------------------------------------
-- .c file
----------------------------------------------------

toSource :: IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()
toSource (IProg name imps _     funs) write append
 = do write $ unlines $ [cinclude name,
                         cinclude "debug",
                         cinclude "runtime"] ++
                        map cinclude imps ++
                        nl
      mapM_ (funSources append) funs


funSources :: (String -> IO ()) -> IFunction -> IO ()
funSources append = append . unlines . funSource

funSource :: IFunction -> [String]
funSource (IFunction name _ _ _ body)
 | isExternal body = []
 | otherwise       = funSource_base name body ++
                     funSource_cases name body

funSource_base :: IQName -> IFuncBody -> [String]
funSource_base name body = [comment (uninstance name),
                            cfunDefn "void" (hnf name) [(field, "root")]] ++
                           showBody name body ++
                           nl

funSource_cases :: IQName -> IFuncBody -> [String]
funSource_cases name body = concatMap (funSource_case name) (getPath [] [] block)
 where (IFuncBody block) = body


funSource_case :: IQName -> ([Int], [IVarIndex], IStatement) -> [String]
funSource_case name (path,vars,start)
   = [comment (uninstance name) ++ " at " ++ show path,
      cfunDefn "void" hnf_p [(field, "root")]] ++
      cblock 
      (
        [scall "debug_expr" ["LOW", "root"]] ++ 
        showBlock (path, [], name) (IBlock decls asgns fixStart)
      ) ++
      nl
 where hnf_p = getPathName name path ++ "_hnf"
       asgns = [IVarAssign v (IVarAccess 0 [i]) | (v,i) <- zip (reverse fixVars) [0..]]
       decls = map IVarDecl fixVars
       nv = max 1 (maximum (vars ++ varsInStmt start) + 1)
       fixVars  = filter (not . isRET) vars ++ if hasRET vars then [nv] else []
       retVar []     = Nothing
       retVar (v:vs) = if isRET v then Just (v,nv) else retVar vs
       fixStart = replace (retVar vars) start


isExternal :: IFuncBody -> Bool
isExternal (IExternal _) = True
isExternal (IFuncBody _) = False

showBody :: IQName -> IFuncBody -> [String]
showBody _ (IExternal x) = cblock [scall x ["root"]]
showBody n (IFuncBody block) = cblock ([scall "debug_expr" ["LOW", "root"]] ++ 
                                       showBlock ([],[],n) block)

showBlock :: FunPos -> IBlock -> [String]
showBlock pos (IBlock decls asgns stmt) = map showDecl decls ++
                                          concatMap showAsgn asgns ++
                                          showStmt (updateVars decls stmt pos) stmt

isVarAsgn :: IAssign -> Bool
isVarAsgn (IVarAssign _ _)    = True
isVarAsgn (INodeAssign _ _ _) = False

showDecl :: IVarDecl -> String
showDecl (IVarDecl  v) 
 | isRET v   = ""
 | otherwise = "field " ++ var v ++ ";"
showDecl (IFreeDecl v) = (("field " ++ var v) .= "free_var()") ++ ";"

showAsgn :: IAssign -> [CStmt]
showAsgn (IVarAssign  v e)
 | isRET v   = [retAsgn e,
                ("RET_forward" .=  "RET") ++ ";"]
 | otherwise = [(var v .= showExpr e) ++ ";",
                "field " ++ (fwd v .= var v) ++ ";"]
showAsgn (INodeAssign v ixs e) = [(children (var v) ixs .= showExpr e) ++ ";"]

retAsgn :: IExpr -> CStmt
retAsgn (IOr e1 e2) = scall "SET_RET" ["choice", showExpr e1, showExpr e2]
retAsgn (IFCall f es)
 | isApply f = scall "SET_RET" (("apply"++show (length es-1)) : map showExpr es)
 | otherwise = scall "SET_RET" (mangle f : map showExpr es ++ ["0"])
  

showStmt :: FunPos -> IStatement -> [CStmt]
showStmt _   IExempt          = [scall "fail" ["root"], creturn]
showStmt pos (IReturn e)      = setExpr pos e ++ [creturn]
showStmt pos (ICaseCons v bs) 
 | v == -1   = showIfCase pos bs
 | otherwise = showConsCase pos v bs
showStmt pos (ICaseLit  v bs) = showLitCase  pos v bs


failBlock :: FunPos -> IVarIndex -> String -> [CStmt]
failBlock fpos v pos = ["FAIL"++pos++":"] ++
                       cblock 
                       (
                           save fpos v ++
                           [scall "fail" ["root"],
                            creturn]
                       )

funBlock :: IVarIndex -> String -> String -> [CStmt]
funBlock v pos goto = ["FUNCTION"++pos++":"] ++
                      cblock
                      [
                          symhnf (fwd v) ++ ";",
                          goto
                      ]


choiceBlock :: IVarIndex -> String -> String -> [CStmt]
choiceBlock v pos goto = ["CHOICE"++pos++":"] ++
                         cblock
                         [
                             scall "choose" [fwd v],
                             goto
                         ]

forwardBlock :: IVarIndex -> String -> String -> [CStmt]
forwardBlock v pos goto = ["FORWARD"++pos++":"] ++
                          cblock
                          [
                              fwd v .= children (fwd v) [0] ++ ";",
                              goto
                          ]

freeBlock :: IVarIndex -> String -> String -> [CName] -> [CStmt]
freeBlock v pos goto (b:bs) = ["FREE"++pos++":"] ++
                               cblock
                               (
                                   if isRET v 
                                   then makeCV ++ 
                                        makeCalls "cv"
                                   else makeCalls (fwd v)
                               )
 where pushFree v con = scall "push_choice" [v, "make_"++con++"_free()"]
       makeCalls v = map (pushFree v) bs ++
                     [scall ("set_"++b++"_free") [v],
                      goto]

freeLitBlock :: IVarIndex -> String -> String -> CType -> [ILiteral] -> [CStmt]
freeLitBlock _ pos _    _     []     = ["FREE"++pos++":",
                                        scall  "error" ["\"free variable used in primitive operation\\n\"", "root"]]
freeLitBlock v pos goto ctype (b:bs) = ["FREE"++pos++":"] ++
                                       cblock
                                       (
                                           if isRET v 
                                           then makeCV ++
                                                makeCalls "cv"
                                           else makeCalls (fwd v)
                                       )
 where pushLit v l = scall "push_choice" [v, call ("make_"++ctype) [showLit l, "0"]]
       makeCalls v = map (pushLit v) bs ++
                     [scall ("set_"++ctype) [v, showLit b, "0"],
                      goto]

makeCV :: [CStmt]
makeCV = ["field cv;"] ++
         cifElse "RET.n->nondet"
          [ "cv.c = RET.n->nondet;" ]
          [ "cv.n = (Node*)calloc(1, sizeof(Node*));" ] ++
         ["root.n->nondet = cv.c;"]

jumpTable :: FunPos -> String -> IVarIndex -> [IQName] -> CStmt -> [CStmt]
jumpTable fpos pos v bs goto = [(("static void* " ++ tableName ++ "[]") .= carray table) ++ ";"] ++
                               nl ++
                               [goto] ++
                               nl ++
                               failBlock fpos v pos ++
                               nl ++
                               funBlock v pos goto ++
                               nl ++
                               choiceBlock v pos goto ++
                               nl ++
                               forwardBlock v pos goto ++
                               nl
 where tableName = "table" ++ pos
       table = map label (["FAIL", "FUNCTION", "CHOICE", "FORWARD", "FREE"] ++ cons)
       label x = "&&" ++ x ++ pos
       cons = map mangle bs


pathName :: Path -> String
pathName = intercalate "_" . map show 

showIfCase :: FunPos -> [IConsBranch] -> [String]
showIfCase pos [cond,t,f] =  cifElse (showCond (exp cond))
                               (showBlock (descend 0 pos) (stmts t))
                               (showBlock (descend 1 pos) (stmts f))
 where exp   (IConsBranch _ _ (IBlock [] [] (IReturn e))) = e
       stmts (IConsBranch _ _ b) = b
       showCond (IFCall (_,"primEqChar",_)    [e1,e2]) = showPrim "c" e1 .== showPrim "c" e2
       showCond (IFCall (_,"primEqInt",_)     [e1,e2]) = showPrim "i" e1 .== showPrim "i" e2
       showCond (IFCall (_,"primEqFloat",_)   [e1,e2]) = showPrim "f" e1 .== showPrim "f" e2
       showCond (IFCall (_,"primLtEqChar",_)  [e1,e2]) = showPrim "c" e1 .<= showPrim "c" e2
       showCond (IFCall (_,"primLtEqInt",_)   [e1,e2]) = showPrim "i" e1 .<= showPrim "i" e2
       showCond (IFCall (_,"primLtEqFloat",_) [e1,e2]) = showPrim "f" e1 .<= showPrim "f" e2

showConsCase :: FunPos -> IVarIndex -> [IConsBranch] -> [String]
showConsCase fpos v bs = jumpTable fpos pos v (map conName bs') goto ++
                         freeB ++
                         nl ++
                         concatMap (showConsBranch fpos v) bs'
 where conName (IConsBranch c _ _) = c
       (p,_,_) = fpos
       pos = pathName p
       tableName = "table" ++ pos
       goto = "goto* "++tableName++"[" ++ symtag (fwd v) ++ "];"
       cons = map (mangle . conName) bs'
       freeB = if   isPrimitive bs
               then freeLitBlock v pos goto btype (litPatterns bs)
               else freeBlock v pos goto cons
       bs' = filter (\(IConsBranch (m,c,_) _ _) -> (m++c) /= "") bs
       btype = case bs of (IConsBranch ("",c,_) _ _ : _) -> "_"++c
       
       


showConsBranch :: FunPos -> IVarIndex -> IConsBranch -> [String]
showConsBranch pos v (IConsBranch c _ b) = [mangle c ++ pathName p ++ ":"] ++
                                            cblock 
                                            (
                                                save pos v ++
                                                showBlock (descend tag pos) b
                                            )
 where tag  = getTag c
       (p, _, _) = pos

showLitCase :: FunPos -> IVarIndex -> [ILitBranch] -> [String]
showLitCase pos v bs = cifCase (zipWith caseCond bs [1..]) [scall "fail" ["root"], creturn]
 where btype = litBranchType (head bs)
       caseCond b i = ((conv_t btype (fwd v)) .== litBranchValue b,
                       showBlock (descend i pos) (litBlock b))

isPrimitive :: [IConsBranch] -> Bool
isPrimitive [] = False
isPrimitive (IConsBranch c _ _ : _) = c == ("","int",0) ||
                                      c == ("","char",0) ||
                                      c == ("","float",0)

litPatterns :: [IConsBranch] -> [ILiteral]
litPatterns (_:bs) = map pattern bs
 where pattern (IConsBranch _ _ (IBlock _ _ (IReturn (ILit l)))) = l

litBranchType :: ILitBranch -> String
litBranchType (ILitBranch (IInt   _) _)  = "int"
litBranchType (ILitBranch (IFloat _) _)  = "float"
litBranchType (ILitBranch (IChar  _) _)  = "char"

litBranchValue :: ILitBranch -> String
litBranchValue (ILitBranch (IInt   v) _)  = show v
litBranchValue (ILitBranch (IFloat v) _)  = show v
litBranchValue (ILitBranch (IChar  v) _)  = show v

litBlock :: ILitBranch -> IBlock
litBlock (ILitBranch _ b)  = b


save :: FunPos -> IVarIndex -> [CStmt]
save (p,vs,n) v = cif (nondet (var v))
                  [
                      scall "save" ["root", makePart n p (filter (not . isRET) vs) (isRET v)]
                  ]


makePart :: IQName -> Path -> [IVarIndex] -> Bool -> CExpr
makePart n p vs cv = call ("make_"++getPathName n p) (map var vs ++ vcv ++ ["0"])
 where vcv = if cv then ["(field){.c = RET.n->nondet}"] else []
       

--setCollapse :: FunPos -> IVarIndex -> [CStmt]
--setCollapse fpos v = cif ("FUNCTION_TAG" .<= symtag (var v) .&& symtag (var v) .<= "FORWARD_TAG" 
--                                                            .&& missing (var v) .<= "0")
--                     [
--                         symhnf (var v) ++ ";"
--                     ] ++
--                     save fpos v ++
--                     [scall "set_node" ["root", var v]]

setExpr :: FunPos -> IExpr -> [CStmt]
setExpr pos (IVar v)            = [scall "set_forward" ["root", var v],
                                   scall "forward_hnf" ["root"]]
setExpr _   (ILit (IInt   v))   = ["root.i" .= show v] -- this shouldn't happen?
setExpr _   (ILit (IChar  v))   = ["root.c" .= show v]
setExpr _   (ILit (IFloat v))   = ["root.f" .= show v]
setExpr _   (IOr e1 e2)         = [scall "set_choice" ["root", showExpr e1, showExpr e2],
                                   scall "choose" ["root"]]
setExpr _   (IFCall f es)
 | isApply f                    = [scall ("set_apply"++show (length es-1)) ("root":map showExpr es),
                                   scall "apply_hnf" ["root"]]
 | otherwise                    = case lookup f primOps of
                                       Just (_,set,typ) -> set (map (showPrim typ) es)
                                       Nothing -> [setComb f es,
                                                   scall (mangle f ++ "_hnf") ["root"]]
setExpr _   (ICCall c es)
 | isStrConst c                 = [retCall "setCurryString" ["root",strConst c]]
 | otherwise                    = case lookup c primOps of
                                       Just (_,set,typ) -> set (map (showPrim typ) es)
                                       Nothing -> [setComb c es]
setExpr _   (IFPCall f n es)    = [setPartComb f n es]
setExpr _   (ICPCall c n es)    = [setPartComb c n es]

isApply :: IQName -> Bool
isApply (m,n,_) = m == "Prelude" && n == "apply"

isStrConst :: IQName -> Bool
isStrConst (m,_,_) = m == "StringConst"

strConst :: IQName -> String
strConst (_,n,_) = "\"" ++ escape n ++ "\""

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

showChr :: Char -> String
showChr c = "'"++escChr c++"'"

showExpr :: IExpr -> CExpr
showExpr (IVar v)           = var v
showExpr (IVarAccess v ixs) = children (fwd v) ixs
showExpr (ILit (IInt   v))  = "(field){.i = "++show v++"}"
showExpr (ILit (IChar  v))  = "(field){.c = "++showChr v++"}"
showExpr (ILit (IFloat v))  = "(field){.f = "++show v++"}"
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
showExpr (IOr e1 e2)        = call "make_choice" [showExpr e1, showExpr e2] -- this shouldn't happen?

setComb :: IQName -> [IExpr] -> CStmt
setComb f es = scall ("set_"++mangle f) ("root" : (map showExpr es) ++ ["0"])

showComb :: IQName -> [IExpr] -> CExpr
showComb f es = call ("make_"++mangle f) (map showExpr es ++ ["0"])

setPartComb :: IQName -> Int -> [IExpr] -> CStmt
setPartComb f m es = scall ("set_"++mangle f) ("root" : missingArgs es m)

showPart :: IQName -> Int -> [IExpr] -> CExpr
showPart f m es = call ("make_"++mangle f) (missingArgs es m)

missingArgs :: [IExpr] -> Int -> [CExpr]
missingArgs es m = (map showExpr es ++ replicate m nullf ++ [show m])

showPrim :: String -> IExpr -> String
showPrim typ (IVar v) = fwd v ++ "."++typ
showPrim _   (ILit l) = showLit l

showLit :: ILiteral -> String
showLit (IInt i) = show i
showLit (IChar c) = show (ord c)
showLit (IFloat f) = show f
