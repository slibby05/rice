
module Compile.ToH (toHeader) where

import Util (Path)
import ICurry.Types
import List
import Compile.C
import Compile.PrimOps (ignoredPrimOps)
import Data.Map as M
import Compile.IUtil

----------------------------------------------------
-- .h file
----------------------------------------------------

toHeader :: IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()
toHeader (IProg name imps types allFuns) write append
 = do let funs = [fs | fs <- allFuns, not (iname fs `elem` ignoredPrimOps)]
      makeIntro write name imps funs
      mapM_ (makeTags append) types 
      writeSymbols append types funs
      mapM_ (setType append) types 
      mapM_ (setFun append) funs  
      mapM_ (makeType append) types 
      mapM_ (makeFun append) funs  
      mapM_ (makeFunParts append) funs
      mapM_ (setTypeFree append) types 
      mapM_ (makeTypeFree append) types 
      append $ "#endif //"++name++"_H"
 where iname (IFunction name _ _ _ _) = name

makeIntro :: (String -> IO ()) -> String -> [String] -> [IFunction] -> IO ()
makeIntro write name imps funs = write $ unlines $
                                    ["#ifndef "++name++"_H",
                                     "#define "++name++"_H",
                                     "",
                                     cinclude "runtime"] ++
                                     map cinclude imps ++
                                     nl ++
                                     map declareFun funs ++
                                     concatMap declareFunParts funs ++
                                     nl

declareFun :: IFunction -> CStmt
declareFun (IFunction f _ _ _ b) = cfunDecl "void" (hnf f) [("field", "root")]

declareFunParts :: IFunction -> [CStmt]
declareFunParts (IFunction f _ _ _ b) = map declarePart (pathList b) ++
                                        [cfunDecl "Node*" (ret_hnf f) [("Node*", "backup")]]
                                        
 where declarePart (p,_,_) = cfunDecl "void" (getPathName f p ++ "_hnf") [("field", "root")]

makeTags :: (String -> IO ()) -> IDataType -> IO ()
makeTags append (IDataType name cons) = append $ unlines $
                                         map makeTag cons ++
                                         nl
 where makeTag (n,_) = cdefine (tag n) (getTag n + 5)

writeSymbols :: (String -> IO ()) -> [IDataType] -> [IFunction] -> IO ()
writeSymbols append types funs = append $ unlines $
                                  [conSymbol c | t <- types, c <- cons t] ++
                                  map funSymbol funs ++
                                  concatMap funParts funs ++
                                  nl
 where
  cons (IDataType _ cs) = cs
  symbol name p tag arity hnf ret_hnf = ("static Symbol "++mname name p++"_symbol") .=
                                         (carray [ ".tag" .= tag,
                                                   ".arity" .= show arity,
                                                   ".name" .= quote (toName name p),
                                                   ".hnf" .= hnf,
                                                   ".hnf_RET" .= ret_hnf]) ++ ";"
  conSymbol (n,a) = symbol n Nothing (mangle n ++ "_TAG") a "&CTR_hnf" "&CTR_RET_hnf"
  funSymbol (IFunction n a _ _ _) = symbol n Nothing  "FUNCTION_TAG" a ("&"++hnf n) ("&"++ret_hnf n)
  makePartSym n (p,vs,_) = symbol n (Just p) "FUNCTION_TAG" (length vs) (getPathName n p ++ "_hnf") "NULL"
  funParts  (IFunction n _ _ _ b) = map (makePartSym n) (pathList b)
  mname n Nothing  = mangle n
  mname n (Just p) = getPathName n p

set :: (IQName, Int) -> CStmt
set (name,arity) 
 = unlines $ [comment (uninstance name)] ++
             hfunDefn "void" ("set_"++mangle name) 
                         (("field", "root") : makeArgs [1..arity] ++ [("int", "missing")]) ++
             cblock (
               [symbol "root" .= ("&"++mangle name++"_symbol") ++ ";"] ++
               [missing "root" .= "missing" ++ ";"] ++
               makeArray True arity ++
               zipWith (\x y -> children "root" [x] .= var y ++ ";") [0..] (reverse [1 .. arity]) ++
               map (\x -> children "root" [x] ++ ".n" .= "NULL;") [arity..2]
               ) ++
             nl

setType :: (String -> IO ()) -> IDataType -> IO ()
setType append (IDataType _ cons) = append $ concat (map set cons)

setFun :: (String -> IO ()) -> IFunction -> IO ()
setFun append (IFunction name arity _ _ _) = append $ set (name,arity)

make :: Maybe Path -> (IQName, Int) -> String
make path (name,arity) 
 = unlines $ [comment (uname path)] ++
             hfunDefn "field" ("make_"++(mname path)) (makeArgs [1..arity] ++ [("int", "missing")]) ++
             cblock (
                 [("field root;"),
                  "root.n" .= calloc_n 1 ++ ";",
                  symbol "root" .= ("&"++ (mname path) ++ "_symbol;"),
                  missing "root" .= "missing" ++ ";"] ++
                 makeArray False arity ++
                 zipWith (\x y -> children "root" [x] .= var y ++ ";") [0..] (reverse [1..arity]) ++
                 ["return root;"]
                ) ++
             nl
 where uname Nothing  = uninstance name
       uname (Just p) = uninstance name ++ " @ [" ++ (intercalate "," (map show p)) ++ "]"
       mname Nothing  = mangle name
       mname (Just p) = getPathName name p

makeType :: (String -> IO ()) -> IDataType -> IO ()
makeType append (IDataType _ cons) = append $ concat (map (make Nothing) cons)

makeFun :: (String -> IO ()) -> IFunction -> IO ()
makeFun append (IFunction name arity _ _ _) = append $ make Nothing (name,arity)

makeFunParts :: (String -> IO ()) -> IFunction -> IO ()
makeFunParts append (IFunction name _ _ _ body) = mapM_ (append . makePath) (pathList body)
 where makePath (p,vs,_) = make (Just p) (name,length vs)
       

setTypeFree :: (String -> IO ()) -> IDataType -> IO ()
setTypeFree append (IDataType _ cons) = append $ unlines $ concatMap setConFree cons

setConFree :: (IQName, IArity) -> [CStmt]
setConFree (n, a) = hfunDefn "void" ("set_"++mangle n++"_free") [("field", "root")] ++
                    cblock 
                    (
                        [symbol "root" .= "&"++mangle n++"_symbol;",
                         nondet "root" .= "true" ++ ";",
                         missing "root" .= "0" ++ ";"] ++
                        makeArray True a ++
                        map (\x -> children "root" [x] .= "free_var();") [0..a-1]
                    ) ++
                    nl

makeTypeFree :: (String -> IO ()) -> IDataType -> IO ()
makeTypeFree append (IDataType _ cons) = append $ unlines $ concatMap makeConFree cons

makeConFree :: (IQName, IArity) -> [CStmt]
makeConFree (n, a) = hfunDefn "field" ("make_"++mangle n++"_free") [] ++
                     cblock 
                     (
                         ["field root;",
                          "root.n" .= calloc_n 1 ++ ";",
                          nondet "root" .= "true" ++ ";",
                          symbol "root" .= "&"++mangle n++"_symbol;",
                          missing "root" .= "0" ++ ";"] ++
                         makeArray False a ++
                         map (\x -> children "root" [x] .= "free_var();") [0..a-1] ++
                         ["return root;"]
                     ) ++
                     nl

---------------------------------------------------
-- auxiliary functions for dealing with children
---------------------------------------------------

makeArgs :: [Int] -> [(String, String)]
makeArgs = map (\v -> ("field", var v))

makeArray :: Bool -> Int -> [String]
makeArray nullable arity
 | arity > 3 = ["root.n->children[3].a" .= calloc_f (arity - 3) ++ ";"]
 | nullable  = ["root.n->children[3].a" .= "NULL;"]
 | otherwise = []

