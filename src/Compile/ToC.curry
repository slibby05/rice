
module Compile.ToC (toSource, CWriter, iname, writeMain) where

import FlatUtils.FlatRewrite (Path)
import FlatUtils.ReplacePrim (primOps)
import ICurry.Types
import List
import Sort (sort)
import Compile.C
import Data.Map as M
import Debug (trace)

iname :: IProg -> String
iname (IProg name _ _ _) = name

type CWriter = IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()

type FunPos = (Path, [IVarIndex], IQName)

updateVars :: [IVarDecl] -> IStatement -> FunPos -> FunPos
updateVars xs s (p, vs, n) = (p, newVars, n)
 where newVars = sort $ ((map varFromDecl xs)++vs) `intersect` varsInStmt s

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
         "",
         "Node* expr = make_"++(nameMangle name)++"_main(0);",
         "nf_all(expr);",
         "return 0;"])


----------------------------------------------------
-- .c file
----------------------------------------------------

toSource :: IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()
toSource (IProg name imps types funs) write append
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
 | isExternal body = trace (show name) []
 | otherwise       = trace (show name) $ funSource_base name body ++
                                         funSource_cases name body

funSource_base :: IQName -> IFuncBody -> [String]
funSource_base name body = [comment (uninstance name),
                            cfunDefn "void" (hnf name) [(nodePtr, "root")]] ++
                           showBody name body ++
                           nl

funSource_cases :: IQName -> IFuncBody -> [String]
funSource_cases name body = concatMap (funSource_case name) (getPath [] [] block)
 where (IFuncBody block) = body


funSource_case :: IQName -> ([Int], [IVarIndex], IStatement) -> [String]
funSource_case name (path,vars,start)
   = [comment (uninstance name) ++ " at " ++ show path,
      cfunDefn "void" hnf_p [(nodePtr, "root")]] ++
      cblock 
      (
        [scall "debug_expr" ["LOW", "root"]] ++ 
        showBlock (path, [], name) (IBlock decls asgns start)
      )
 where hnf_p = getPathName name path ++ "_hnf"
       asgns = [IVarAssign v (IVarAccess 0 [i]) | (v,i) <- zip (reverse vars) [0..]]
       decls = map IVarDecl vars

isExternal :: IFuncBody -> Bool
isExternal (IExternal _) = True
isExternal (IFuncBody _) = False

showBody :: IQName -> IFuncBody -> [String]
showBody _ (IExternal x) = cblock [scall x ["root"]]
showBody n (IFuncBody block) = cblock ([scall "debug_expr" ["LOW", "root"]] ++ 
                                       showBlock ([],[],n) block)

showBlock :: FunPos -> IBlock -> [String]
showBlock pos (IBlock decls asgns stmt) = map showDecl decls ++
                                          map showAsgn asgns ++
                                          showStmt (updateVars decls stmt pos) stmt

showDecl :: IVarDecl -> String
showDecl (IVarDecl  v) = "Node* " ++ var v ++ ";"
showDecl (IFreeDecl v) = (("Node* " ++ var v) .= "free_var()") ++ ";"

showAsgn :: IAssign -> String
showAsgn (IVarAssign  v e)     = (var v .= showExpr e) ++ ";"
showAsgn (INodeAssign v ixs e) = (children (var v) ixs .= showExpr e) ++ ";"

showStmt :: FunPos -> IStatement -> [CStmt]
showStmt _   IExempt          = [scall "fail" ["root"], creturn]
showStmt pos (IReturn e)      = setExpr pos e ++ [creturn]
showStmt pos (ICaseCons v bs) = showConsCase pos v bs
showStmt pos (ICaseLit  v bs) = showLitCase  pos v bs


failBlock :: FunPos -> IVarIndex -> String -> [CStmt]
failBlock fpos v pos = ["FAIL"++pos++":"] ++
                       cblock 
                       (
                           save fpos (var v) ++
                           [scall "fail" ["root"],
                            creturn]
                       )

funBlock :: IVarIndex -> String -> String -> [CStmt]
funBlock v pos goto = ["FUNCTION"++pos++":"] ++
                      cblock
                      [
                          symhnf (var v) ++ ";",
                          goto
                      ]


choiceBlock :: IVarIndex -> String -> String -> [CStmt]
choiceBlock v pos goto = ["CHOICE"++pos++":"] ++
                         cblock
                         [
                             scall "choose" [var v],
                             goto
                         ]

freeBlock :: IVarIndex -> String -> String -> [CName] -> [CStmt]
freeBlock v pos goto (b:bs) = ["FREE"++pos++":"] ++
                               cblock
                               (
                                   map pushFree bs ++
                                   [scall ("set_"++b++"_free") [var v],
                                    goto]
                               )
 where pushFree con = scall "push_choice" [var v, "make_"++con++"_free()"]

freeLitBlock :: IVarIndex -> String -> String -> CType -> [ILiteral] -> [CStmt]
freeLitBlock v pos goto ctype []     = ["FREE"++pos++":",
                                        scall  "error" ["\"free variable used in primitive operation\\n\"", "root"]]
freeLitBlock v pos goto ctype (b:bs) = ["FREE"++pos++":"] ++
                                       cblock
                                       (
                                           map pushLit bs ++
                                           [scall ("set_"++ctype) [var v, showLit b, "0"],
                                            goto]
                                       )
 where pushLit l = scall "push_choice" [var v, call ("make_"++ctype) [showLit l, "0"]]
       showLit (IInt i)   = show i
       showLit (IChar c)  = [c]
       showLit (IFloat f) = show f


jumpTable :: FunPos -> String -> IVarIndex -> [IQName] -> (CExpr -> CStmt) -> [CStmt]
jumpTable fpos pos v bs goto = [(("static void* " ++ tableName ++ "[]") .= carray table) ++ ";"] ++
                               nl ++
                               [gotov] ++
                               nl ++
                               failBlock fpos v pos ++
                               nl ++
                               funBlock v pos gotov ++
                               nl ++
                               choiceBlock v pos gotov ++
                               nl
 where tableName = "table" ++ pos
       table = map label (["FAIL", "FUNCTION", "CHOICE", "FREE"] ++ cons)
       label x = "&&" ++ x ++ pos
       cons = map mangle bs
       gotov = goto (var v)


pathName :: Path -> String
pathName = intercalate "_" . map show 

showConsCase :: FunPos -> IVarIndex -> [IConsBranch] -> [String]
showConsCase fpos v bs = jumpTable fpos pos v (map conName bs') goto ++
                         freeB ++
                         nl ++
                         concatMap (showConsBranch fpos v) bs'
 where conName (IConsBranch c _ _) = c
       (p,_,_) = fpos
       pos = pathName p
       tableName = "table" ++ pos
       goto v = "goto* "++tableName++"[" ++ symtag v ++ "];"
       gotov = goto (var v)
       cons = map (mangle . conName) bs'
       freeB = if   isPrimitive bs
               then freeLitBlock v pos gotov btype (litPatterns bs)
               else freeBlock v pos gotov cons
       bs' = filter (\(IConsBranch (m,c,_) _ _) -> (m++c) /= "") bs
       btype = case bs of (IConsBranch ("",c,_) _ _ : _) -> "_"++c
       
       


showConsBranch :: FunPos -> IVarIndex -> IConsBranch -> [String]
showConsBranch pos v (IConsBranch c _ b) = [mangle c ++ pathName p ++ ":"] ++
                                            cblock 
                                            (
                                                save pos (var v) ++
                                                showBlock (descend tag pos) b
                                            )
 where tag  = getTag c
       (p, _, _) = pos

showLitCase :: FunPos -> IVarIndex -> [ILitBranch] -> [String]
showLitCase pos v bs = cifCase (zipWith caseCond bs [1..]) [scall "fail" ["root"], creturn]
 where btype = litBranchType (head bs)
       caseCond b i = ((conv_t btype (var v)) .== litBranchValue b,
                       showBlock (descend i pos) (litBlock b))

isPrimitive :: [IConsBranch] -> Bool
isPrimitive [] = False
isPrimitive (IConsBranch c _ e : _) = c == ("","int",0) ||
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


save :: FunPos -> String -> [CStmt]
save (p,vs,n) v = cif (nondet v)
                  [
                     scall "save" ["root", makePart n p vs]
                  ]

makePart :: IQName -> Path -> [IVarIndex] -> CExpr
makePart n p vs = call ("make_"++getPathName n p) (["v"++show v | v <- vs] ++ ["0"])

setCollapse :: FunPos -> IExpr -> [String]
setCollapse fpos v = cif ("FUNCTION_TAG" .<= symtag (getVar v) .&& symtag (getVar v) .<= "CHOICE_TAG" 
                                                               .&& missing (getVar v) .<= "0")
                     [
                         symhnf (getVar v) ++ ";"
                     ] ++
                     save fpos (getVar v) ++
                     [scall "set_node" ["root", getVar v]]
 where getVar (IVar x) = var x
       getVar (IVarAccess x ixs) = children (var x) ixs

setExpr :: FunPos -> IExpr -> [CStmt]
setExpr pos v@(IVar _)          = setCollapse pos v
setExpr pos v@(IVarAccess _ _)  = setCollapse pos v
setExpr _   (ILit (IInt   v))   = ["root" .= ("(Node*)" ++ show v) ++ ";"]
setExpr _   (ILit (IChar  v))   = ["root" .= ("(Node*)" ++ show v) ++ ";"]
setExpr _   (ILit (IFloat v))   = ["root" .= ("(Node*)" ++ show v) ++ ";"]
setExpr _   (IOr e1 e2)         = [scall "set_choice" ["root", showExpr e1, showExpr e2],
                                   symhnf "root" ++ ";"]
setExpr _   (IFCall f es)       = case M.lookup f primOps of
                                       Just (make,set) -> set (map showExpr es)
                                       Nothing         -> setComb f es ++ [symhnf "root" ++ ";"]
setExpr _   (ICCall c es)       = setComb c es
setExpr _   (IFPCall f n es)    = setPartComb f n es
setExpr _   (ICPCall c n es)    = setPartComb c n es

isApply :: IQName -> Bool
isApply (m,n,_) = m == "Prelude" && n == "apply"

showExpr :: IExpr -> CExpr
showExpr (IVar v)           = var v
showExpr (IVarAccess v ixs) = children (var v) ixs
showExpr (ILit (IInt   v))  = show v
showExpr (ILit (IChar  v))  = show v
showExpr (ILit (IFloat v))  = show v
showExpr (IFCall f es)      = case M.lookup f primOps of
                                   Just (make,set) -> make (map showExpr es)
                                   Nothing -> call ("make_"++mangle f) (map showExpr es ++ ["0"])
showExpr (ICCall c es)      = call ("make_"++mangle c) (map showExpr es ++ ["0"])
showExpr (IFPCall f n es)   = showPart f n es
showExpr (ICPCall c n es)   = showPart c n es
showExpr (IOr e1 e2)        = call "make_choice" [showExpr e1, showExpr e2]

setComb :: IQName -> [IExpr] -> [String]
setComb f es = [scall ("set_"++mangle f) ("root" : (map showExpr es) ++ ["0"])]

setPartComb :: IQName -> Int -> [IExpr] -> [String]
setPartComb f m es = [scall ("set_"++mangle f) ("root" : map showExpr es ++ replicate m "NULL" ++ [show m])]

showPart :: IQName -> Int -> [IExpr] -> CExpr
showPart f m es = call ("make_"++mangle f) (map showExpr es ++ replicate m "NULL" ++ [show m])
 where l = length es

