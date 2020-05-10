
import System
import GetOpt
import List
import Either (partitionEithers)

import FlatCurry.Goodies
import FlatCurry.Types
import FlatCurry.Pretty as FP
import FlatCurry.Files  (flatCurryFileName, readFlatCurry, readFlatCurryFile)
import Directory        (doesFileExist, getModificationTime)
import FileGoodies      (getFileInPath)
import System.CurryPath (getLoadPathForModule)

import Control.SetFunctions

import FlatUtils.Normalize
import FlatUtils.DataTable as DT
import FlatUtils.ReplacePrim (mergePrelude)

import Optimize.Unboxing

import Text.Pretty

import Compile.ToICurry
import Compile.ToC
import Compile.ToH
import ICurry.Types
import ICurry.Pretty as IP
import ICurry.Files (readICurryFile)

import Util


main :: IO ()
main = do
    args <- getArgs
    let (opts, files, errors') = getOpt RequireOrder optDescrs args
    let errors = if length files /= 1
                    then "Only compile 1 file" : errors'
                    else errors'
    if not $ null errors
      then mapM_ putStrLn errors
      else compileAll (head files) opts

compileAll :: String -> [FileType] -> IO ()
compileAll file args = 
  do fcys <- readfcy_opt_imports file
     home <- getEnviron "HOME"
     print (length fcys)
     mapM_ (\(p,b) -> putStrLn ((getMod p) ++ ": " ++ show b)) fcys
     let dt = foldr DT.fillTable DT.empty (map fst fcys)
     if SDataTable `elem` args 
         then do putStrLn "\n\nDATA TABLE\n\n"
                 putStrLn (DT.showTable dt)
         else return ()
     mapM_ (compileOpt dt)       [opt | (opt,False) <- fcys]
     mapM_ (compileFlat dt args) [fcy | (fcy,True) <- fcys]
     writeMain (home++"/.rice/main.c") file
     let inc = home++"/.rice/" 
     let files = [inc++x++".c" | x <- ((map (getMod . fst) fcys) ++ ["main", "runtime", "stack", "external"])]
     putStrLn $ "gcc -I"++inc++" " ++ unwords files ++ " -o " ++ file
     system $ "gcc -I"++inc++" " ++ unwords files ++ " -o " ++ file
     return ()


compileOpt :: DT.DataTable -> Prog -> IO ()
compileOpt dt p = do let name = getMod p
                     home <- getEnviron "HOME"
                     let file = home++"/.rice/"++name
                     hasICurry <- doesFileExist (file++".icy")
                     hasC <- doesFileExist (file++".c")
                     if hasC
                       then return ()
                       else do icy <- getICurry dt p hasICurry
                               let hfile = file++".h"
                               let cfile = file++".c"
                               toHeader icy (writeFile hfile) (appendFile hfile)
                               toSource icy (writeFile cfile) (appendFile cfile)

getICurry :: DT.DataTable -> Prog -> Bool -> IO IProg
getICurry dt p hasICurry = do home <- getEnviron "HOME"
                              let file = home++"/.rice/"++getMod p
                              if hasICurry 
                                then readICurryFile (file++".icy")
                                else do let c_fcy = transform dt p
                                        let icy   = toICurry c_fcy
                                        writeFile (file++".icy") (show icy)
                                        return icy

compileFlat :: DT.DataTable -> [FileType] -> Prog -> IO ()
compileFlat dt args fcy =
  do home <- getEnviron "HOME"
     let file = home++"/.rice/"++getMod fcy
     fcy <- if getMod fcy == "Prelude"
               then fixPrelude $## fcy
               else return $## fcy

     if SFlat `elem` args 
         then do putStrLn "\n\nFLAT CURRY\n\n"
                 putStrLn $ pPrint $ FP.ppProg FP.defaultOptions fcy
         else return ()

     let u_fcy = id $## boxProg fcy

     -- <== optimizations go here!
     -- if SOpt `elem` args 
     --     then do putStrLn "\n\nOPTIMIZED FLAT CURRY\n\n"
     --             putStrLn $ pPrint (FP.ppProg FP.defaultOptions) c_fcy
     --     else return ()
     -- writeFile (file++".opt") (show opt_fcy)

     let c_fcy = id $## transform dt u_fcy

     if STransformed `elem` args 
         then do putStrLn "\n\nTRANSFORMED FLAT CURRY\n\n"
                 putStrLn $ pPrint $ FP.ppProg FP.defaultOptions c_fcy
         else return ()
     writeFile (file++".opt") (show c_fcy)

     let icy = id $## toICurry c_fcy
     putStrLn "\n\nICURRY\n\n"
     --print icurry
     if SICurry `elem` args 
         then do putStrLn "\n\nICURRY\n\n"
                 putStrLn $ pPrint $ ppIProg icy
         else return ()
     writeFile (file++".icy") (show icy)

     putStrLn "\n\nC\n\n"
     let hfile = file++".h"
     let cfile = file++".c"
     toHeader icy (writeFile hfile) (appendFile hfile)
     toSource icy (writeFile cfile) (appendFile cfile)

fixPrelude :: Prog -> IO Prog
fixPrelude p = do home <- getEnviron "HOME"
                  prim <- readFlatCurryFile (home++"/.rice/.curry/prim.fcy")
                  let pprim = (mergePrelude p prim)
                  replace <- readFlatCurryFile (home++"/.rice/.curry/replace.fcy")
                  return $ id $## mergePrelude pprim replace



--------------------------------------------------------------------
-- Code for reading files
--
-- Since I need to read and write my own FlatCurry and ICurry files
-- I need to know a few things.
-- For each imported module
-- Have I compiled this module to C? (I don't need to do anything)
-- Have I compiled it to ICurry?
-- Have I optimized the FlatCurry?
-- Am I forcing a recompile anyway?
--
-- I start with a single file that I'm reading in.
-- Then I need to read in all of the imports.
-- I can't use readFlatCurryWithImports, because that will read in 
-- the flatCurry files that were generated by pakcs
-- I would need to re-optimize them
--
-- I will store the all flatcurry programs in ~/.rice/*.fcy
-- All Icurry programs in ~/.rice/*.icy
-- all C programs in ~/.rice/*.c
--
-- This definitely opens me up to name conflicts,
-- and I also don't like using the home directory like this,
-- but the alternative is to store things in local directories
-- and I have no idea how to get that to work correctly.
-- I know gcc useing INCLUDE, PATH, and LD_LIBRARY_PATH to handle this,
-- but I really don't want to deal with environment variables.
--
--
-- So, I read in the FlatCurry version of the program
-- The assumption is that if they're compiling a program, then it has changed,
-- so it needs to be re-compiled
-- Then for each import i
--  If i has an optimized version, read that in
--  if i doesn't have an optimized version, then read in the flatCurry
--  read in all imports of i
--
--
-- After calling readfcy_opt_imports we get a couple of nice properties
-- in the (fcys,opts) tuple we get out we know that
-- 1. all programs in the fcy list haven't been optimized
-- 2. all programs in the opts list have been optimized
-- 3. all imports of an optimized program are optimized
-- 4. fcys is in reverse sorted order
--    if a imports b, then b comes before a in the list
--------------------------------------------------------------------



-- reads a flatCurry file, where some of the imports may have already been optimized
-- We take a string of a program to read
-- we return two lists of programs (fcy, opts)
-- fcy is the normal flatcurry programs that still need to be optimized
-- opts is the programs that have already been optimized
--
readfcy_opt_imports :: String -> IO [(Prog,Bool)]
readfcy_opt_imports file = 
 do rootfcy <- readFlatCurry file
    let imps = getImports rootfcy
    ps <- readLoop imps [getMod rootfcy] []
    fixOpts (ps++[(rootfcy,True)]) []

getImports :: Prog -> [String]
getImports (Prog _ is _ _ _) = is

getMod :: Prog -> String
getMod (Prog m _ _ _ _) = m

-- This is a simple loop to read all of the imports
-- for each import check to see if it's been optimized
-- if it hasn't, the read the flat-curry file
-- Now, we get all of the imports we haven't seen before
-- and we add those to the list of imports
-- We're basically doing a topological sort on the files
read_import :: [String] -> String -> IO [(Prog,Bool)]
read_import seen imp =
 if imp `elem` seen 
   then return []
   else do opt <- try_readopt imp
           case opt of
               Nothing   -> do prog <- readFlatCurry imp
                               ps <- readLoop (getImports prog) (imp:seen) []
                               return (ps++[(prog,True)])
               Just prog -> do ps <- readLoop (getImports prog) (imp:seen) []
                               return (ps++[(prog,False)])

readLoop :: [String] -> [String] -> [(Prog,Bool)] -> IO [(Prog,Bool)]
readLoop []     seen ps = return ps
readLoop (x:xs) seen ps = read_import seen x >>= readLoop xs seen

-- tries to read an optimized program from the ~/.rice directory
-- if this file doesn't exist, then we haven't optimized it yet
-- if the source file is newer, then we haven't optimized the current version
-- returns Just the optimize program if it exists
-- otherwise it returns Nothing
try_readopt :: String -> IO (Maybe Prog)
try_readopt m = do p <- getLoadPathForModule m
                   f <- getFileInPath (flatCurryFileName m) [""] p
                   t0 <- getModificationTime f
                   home <- getEnviron "HOME"
                   let fopt = home++"/.rice/"++m++".opt"
                   opt <- doesFileExist fopt
                   putStrLn (m ++ "_opt exists? " ++ show opt)
                   if opt then do t1 <- getModificationTime fopt
                                  putStrLn (m ++ ": " ++ show t0)
                                  putStrLn (m ++ "_opt: " ++ show t1)
                                  putStrLn (show (t0 > t1))
                                  if t1 > t0 then readFlatCurryFile fopt >>= 
                                                   return . Just 
                                             else return Nothing
                          else return Nothing



-- It might be the case that we one of our imports needs to be re-optimized
-- If that's true, then we need to re-optimize the current file.
-- So, go through and make sure that if we're optimized then all of our imports are too.
-- This isn't efficient (O(n^2)), but the number of imports in small (<100) so it shouldn't matter.
fixOpts :: [(Prog,Bool)] -> [(Prog,Bool)] -> IO [(Prog,Bool)]
fixOpts []             fs = return fs
fixOpts ((b,True) :bs) fs = fixOpts bs (fs++[(b,True)])
fixOpts ((b,False):bs) fs
 | any (\i -> (i,True) `elem` map (mapFst getMod) fs) (getImports b)
 = do b' <- readFlatCurry (getMod b) 
      fixOpts bs (fs++[(b',True)])
 | otherwise = fixOpts bs (fs++[(b,False)])

--------------------------------------------------------------------
-- Code for handling options
--------------------------------------------------------------------

data FileType = SDataTable | SFlat | SOpt | STransformed | SICurry | SC
 deriving(Show, Eq)

optDescrs :: [OptDescr FileType]
optDescrs = [
  Option "d" ["datatable"]   (NoArg SDataTable)   "print DataTable",
  Option "f" ["flatcurry"]   (NoArg SFlat)        "print FlatCurry",
  Option "o" ["optimized"]   (NoArg SOpt)         "print optimized FlatCurry",
  Option "t" ["transformed"] (NoArg STransformed) "print transformed FlatCurry",
  Option "i" ["icurry"]      (NoArg SICurry)      "print ICurry",
  Option "c" []              (NoArg SC)           "print C"]

