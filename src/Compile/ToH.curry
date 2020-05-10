
module Compile.ToH (toHeader) where

import ICurry.Types
import List
import Compile.C
import FlatUtils.ReplacePrim (ignoredPrimOps)
import Data.Map as M

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
                                     nl

declareFun :: IFunction -> String
declareFun (IFunction f _ _ _ _) = cfunDecl "void" (hnf f) [(nodePtr, "root")]

makeTags :: (String -> IO ()) -> IDataType -> IO ()
makeTags append (IDataType name cons) = append $ unlines $
                                         map makeTag cons ++
                                         nl
 where makeTag (n,_) = cdefine (tag n) (getTag n + 5)

writeSymbols :: (String -> IO ()) -> [IDataType] -> [IFunction] -> IO ()
writeSymbols append types funs = append $ unlines $
                                  [conSymbol c | t <- types, c <- cons t] ++
                                  map funSymbol funs ++
                                  nl
 where
  cons (IDataType _ cs) = cs
  symbol name tag arity hnf = ("static Symbol "++mangle name++"_symbol") .=
                                (carray [ ".tag" .= tag,
                                          ".arity" .= show arity,
                                          ".name" .= nameStr name,
                                          ".hnf" .= hnf]) ++ ";"
  conSymbol (n,a)                 = symbol n (mangle n ++ "_TAG") a "&CTR_hnf"
  funSymbol (IFunction n a _ _ _) = symbol n "FUNCTION_TAG"       a ("&"++mangle n++"_hnf")

set :: (IQName, Int) -> CStmt
set (name,arity) 
 = unlines $ [comment (uninstance name)] ++
             hfunDefn "void" ("set_"++mangle name) ((nodePtr, "root") : makeArgs [1..arity] ++ [("int", "missing")]) ++
             cblock (
               [symbol "root" .= ("&"++mangle name++"_symbol") ++ ";"] ++
               [missing "root" .= "missing" ++ ";"] ++
               makeArray True arity ++
               zipWith (\x y -> children "root" [x] .= var y ++ ";") [0..] (reverse [1 .. arity]) ++
               map (\x -> children "root" [x] .= "NULL;") [arity..2]
               ) ++
             nl

setType :: (String -> IO ()) -> IDataType -> IO ()
setType append (IDataType _ cons) = append $ concat (map set cons)

setFun :: (String -> IO ()) -> IFunction -> IO ()
setFun append (IFunction name arity _ _ _) = append $ set (name,arity)

make :: (IQName, Int) -> String
make (name,arity) 
 = unlines $ [comment (uninstance name)] ++
             hfunDefn nodePtr ("make_"++mangle name) (makeArgs [1..arity] ++ [("int", "missing")]) ++
             cblock (
                 [(nodePtr ++ " root") .= calloc_n 1 ++ ";",
                  symbol "root" .= ("&"++ mangle name ++ "_symbol;"),
                  missing "root" .= "missing" ++ ";"] ++
                 makeArray False arity ++
                 zipWith (\x y -> children "root" [x] .= var y ++ ";") [0..] (reverse [1..arity]) ++
                 ["return root;"]
                ) ++
             nl

makeType :: (String -> IO ()) -> IDataType -> IO ()
makeType append (IDataType _ cons) = append $ concat (map make cons)

makeFun :: (String -> IO ()) -> IFunction -> IO ()
makeFun append (IFunction name arity _ _ _) = append $ make (name,arity)

setTypeFree :: (String -> IO ()) -> IDataType -> IO ()
setTypeFree append (IDataType _ cons) = append $ unlines $ concatMap setConFree cons

setConFree :: (IQName, IArity) -> [CStmt]
setConFree (n, a) = hfunDefn "void" ("set_"++mangle n++"_free") [(nodePtr, "root")] ++
                    cblock 
                    (
                        [symbol "root" .= "&"++mangle n++"_symbol;",
                         missing "root" .= "0" ++ ";"] ++
                        makeArray True a ++
                        map (\x -> children "root" [x] .= "free_var();") [0..a-1]
                    ) ++
                    nl

makeTypeFree :: (String -> IO ()) -> IDataType -> IO ()
makeTypeFree append (IDataType _ cons) = append $ unlines $ concatMap makeConFree cons

makeConFree :: (IQName, IArity) -> [CStmt]
makeConFree (n, a) = hfunDefn nodePtr ("make_"++mangle n++"_free") [] ++
                     cblock 
                     (
                         ["Node* root" .= calloc_n 1 ++ ";",
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
makeArgs = map (\v -> (nodePtr, var v))

makeArray :: Bool -> Int -> [String]
makeArray nullable arity
 | arity > 3 = ["root->children[3].a" .= calloc_f (arity - 3) ++ ";"]
 | nullable  = ["root->children[3].a" .= "NULL;"]
 | otherwise = []

