
import System
import GetOpt
import List

--import FlatCurry.Files
import FlatCurry.Read
import FlatCurry.Goodies
import FlatCurry.Types
import FlatCurry.Pretty

import Control.SetFunctions

import Normalize

import Text.Pretty

rewrite :: String -> IO ([Int],Expr)
rewrite file = readFlatCurryWithImports file >>= 
               return . f . head
 where f :: Prog -> ([Int],Expr)
       f (Prog _ _ _ (Func _ _ _ _ (Rule _ e):_) _) = j $ redex_path e
       j (Just x) = x

main :: IO ()
main = do
    args <- getArgs
    let (opts, files, errors') = getOpt RequireOrder optDescrs args
    let errors = if length files < 1
                    then "Missing imput file" : errors'
                    else errors'
    if not $ null errors
      then
        mapM_ putStrLn errors
      else do

        (fcy:imps) <- readFlatCurryWithImports $ head files
        putStrLn "\n\nFLAT CURRY\n\n"
        writeOpt SFlat opts (ppProg defaultOptions) fcy

        let c_fcy = transform fcy
        putStrLn "\n\nTRANSFORMED FLAT CURRY\n\n"
        writeOpt STransformed opts (ppProg defaultOptions) c_fcy
 where 
  writeOpt :: (Show a) => FileType -> [(Maybe String, FileType)] -> (a -> Doc) -> a -> IO ()
  writeOpt opt opts human prog = 
      case find ((==opt) . snd) opts of
           Nothing             -> return ()
           (Just (Nothing, _)) -> putStrLn (pPrint (human prog))
           (Just (Just y, _))  -> writeFile y (pPrint (human prog))--show prog)

data FileType = SFlat | STransformed | SICurry | SC
 deriving(Show, Eq)

optDescrs :: [OptDescr (Maybe String, FileType)]
optDescrs = [
  Option "f" [] (OptArg (\x-> (x,SFlat)) "FLATCURRY")
                "write flatcurry to file",
  Option "t" [] (OptArg (\x-> (x,STransformed)) "TRANSFORMED")
                "write transformed flatcurry to file",
  Option "i" [] (OptArg (\x-> (x,SICurry)) "ICURRY")
                "write icurry to file",
  Option "c" [] (OptArg (\x-> (x,SC)) "C")
                "write C to file"]

