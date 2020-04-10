
module Compile.ToC (toSource, CWriter, iname) where

import FlatUtils.FlatRewrite (Path)
import FlatUtils.ReplacePrim (primOps)
import ICurry.Types
import List
import Compile.C
import Data.Map as M

iname :: IProg -> String
iname (IProg name _ _ _) = name

type CWriter = IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()

----------------------------------------------------
-- .c file
----------------------------------------------------

toSource :: IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()
toSource (IProg name imps types funs) write append
 = do write $ unlines [cinclude name,
                                cinclude "debug",
                                cinclude "runtime",
                                ""]
      mapM_ (funSource append) funs


funSource :: (String -> IO ()) -> IFunction -> IO ()
funSource append (IFunction name arity _ _ body) 
 | isExternal body =  return ()
 | otherwise = append $ unlines $
                 [comment (uninstance name),
                  cfunDefn "void" (hnf name) [(nodePtr, "root")]] ++
                 showBody body ++
                 nl

isExternal :: IFuncBody -> Bool
isExternal (IExternal _) = True
isExternal (IFuncBody _) = False

showBody :: IFuncBody -> [String]
showBody (IExternal x) = cblock [scall x ["root"]]
showBody (IFuncBody block) = cblock ([scall "debug_expr" ["LOW", "root"]] ++ 
                                     showBlock [] block)

showBlock :: Path -> IBlock -> [String]
showBlock path (IBlock decls asgns stmt) = map showDecl decls ++
                                           map showAsgn asgns ++
                                           showStmt path stmt

showDecl :: IVarDecl -> String
showDecl (IVarDecl  v) = "Node* " ++ var v ++ ";"
showDecl (IFreeDecl v) = (("Node* " ++ var v) .= "free_var()") ++ ";"

showAsgn :: IAssign -> String
showAsgn (IVarAssign  v e) = (var v .= showExpr e) ++ ";"
showAsgn (INodeAssign v ixs e) = (children (var v) ixs .= showExpr e) ++ ";"

showStmt :: Path -> IStatement -> [CStmt]
showStmt _ IExempt          = [scall "fail" ["root"], 
                               creturn]
showStmt _ (IReturn e)      = setExpr e ++
                              [creturn]
showStmt p (ICaseCons v bs) = showConsCase p v bs
showStmt p (ICaseLit  v bs) = showLitCase p v bs


failBlock :: IVarIndex -> String -> [CStmt]
failBlock v pos = ["FAIL"++pos++":"] ++
              cblock 
              (
                  save v ++
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

forwardBlock :: IVarIndex -> String -> String -> [CStmt]
forwardBlock v pos goto = ["FORWARD"++pos++":"] ++
                          cblock 
                          (
                              cwhile (symtag (children (var v) [0]) .== "FORWARD_TAG")
                              [
                                  (children (var v) [0] .= children (var v) [0,0]) ++ ";"
                              ] ++
                              [(var v .= children (var v) [0]) ++ ";",
                               goto]
                          )

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
                                           [scall ("set_"++ctype) [var v, showLit b],
                                            goto]
                                       )
 where pushLit l = scall "push_choice" [var v, call ("make_"++ctype) [showLit l]]
       showLit (IInt i)   = show i
       showLit (IChar c)  = [c]
       showLit (IFloat f) = show f


jumpTable :: String -> IVarIndex -> [IQName] -> CStmt -> [CStmt]
jumpTable pos v bs goto = [(("static void* " ++ tableName ++ "[]") .= carray table) ++ ";"] ++
                          nl ++
                          [goto] ++
                          nl ++
                          failBlock v pos ++
                          nl ++
                          funBlock v pos goto ++
                          nl ++
                          forwardBlock v pos goto ++
                          nl ++
                          choiceBlock v pos goto ++
                          nl
 where tableName = "table" ++ pos
       table = map label (["FAIL", "FUNCTION", "FORWARD", "CHOICE", "FREE"] ++ cons)
       label x = "&&" ++ x ++ pos
       cons = map mangle bs


pathName :: Path -> String
pathName = intercalate "_" . map show 

showConsCase :: Path -> IVarIndex -> [IConsBranch] -> [String]
showConsCase p v bs = jumpTable pos v (map conName bs') goto ++
                      freeB ++
                      nl ++
                      concatMap (showConsBranch p v) bs'
 where conName (IConsBranch c _ _) = c
       pos = pathName p
       tableName = "table" ++ pos
       goto = "goto* "++tableName++"[" ++ symtag (var v) ++ "];"
       cons = map (mangle . conName) bs'
       freeB = if   isPrimitive bs
               then freeLitBlock v pos goto btype (litPatterns bs)
               else freeBlock v pos goto cons
       bs' = filter (\(IConsBranch (m,c,_) _ _) -> (m++c) /= "") bs
       btype = case bs of (IConsBranch ("",c,_) _ _ : _) -> "_"++c
       
       


showConsBranch :: Path -> IVarIndex -> IConsBranch -> [String]
showConsBranch p v (IConsBranch c _ b) = [mangle c ++ pathName p ++ ":"] ++
                                         cblock 
                                         (
                                             save v ++
                                             showBlock (p++[getTag c]) b
                                         )

showLitCase :: Path -> IVarIndex -> [ILitBranch] -> [String]
showLitCase p v bs = cifCase (zipWith caseCond bs [1..]) [scall "fail" ["root"], creturn]
 where btype = litBranchType (head bs)
       caseCond b i = ((child_t btype (var v)) .== litBranchValue b,
                       showBlock (p++[i]) (litBlock b))

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


save :: IVarIndex -> [CStmt]
save v = cif (nondet (var v))
         [
            scall "save" ["root"]
         ]

setCollapse :: IExpr -> [String]
setCollapse v = cif ("FUNCTION_TAG" .<= symtag (getVar v) .&& symtag (getVar v) .<= "CHOICE_TAG")
                [
                    symhnf (getVar v) ++ ";"
                ] ++
                cifElse (nondet (getVar v))
                [
                    scall "save" ["root"],
                    scall "forward" ["root", getVar v]
                ]
                [
                    scall "set_node" ["root", getVar v]
                ]
 where getVar (IVar x) = var x
       getVar (IVarAccess x ixs) = children (var x) ixs

setExpr :: IExpr -> [CStmt]
setExpr v@(IVar _)          = setCollapse v
setExpr v@(IVarAccess _ _)  = setCollapse v
setExpr (ILit (IInt   v))   = ["root" .= ("(Node*)" ++ show v) ++ ";"]
setExpr (ILit (IChar  v))   = ["root" .= ("(Node*)" ++ show v) ++ ";"]
setExpr (ILit (IFloat v))   = ["root" .= ("(Node*)" ++ show v) ++ ";"]
setExpr (IOr e1 e2)         = [scall "set_choice" ["root", showExpr e1, showExpr e2]]
setExpr (IFCall f es)       = case M.lookup f primOps of
                                   Just (make,set) -> set (map showExpr es)
                                   Nothing         -> setComb f es ++ [symhnf "root" ++ ";"]
setExpr (ICCall c es)       = setComb c es
setExpr (IFPCall f n es)    = setPartComb f n es
setExpr (ICPCall c n es)    = setPartComb c n es

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

