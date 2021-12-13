
import System
import GetOpt
import List
import Sort (sort)


import FlatCurry.Goodies
import FlatCurry.Types as F
import FlatCurry.Pretty as FP

import Files
import FlatCurry.Files  (readFlatCurry, readFlatCurryFile)
import Directory        (doesFileExist)

import FlatUtils.DataTable as DT
import FlatUtils.FlatUtils (funcCalls)

import Optimize.Unboxing
import Optimize.Optimize
import Optimize.FunTable as FT
import Optimize.Strictness as ST
import qualified Data.Map as M

import Text.Pretty

import Compile.ToICurry
import Compile.ToC
import Compile.ToH
import ICurry.Types as I
import ICurry.Pretty as IP
import ICurry.Files (readICurryFile)

import Util

import Time (getClockTime, clockTimeToInt)
time = getClockTime >>= (return . clockTimeToInt)

main :: IO ()
main = do
    args <- getArgs
    let (opts, files, errors') = getOpt RequireOrder optDescrs args
    let errors = if length files /= 1
                    then "Only compile 1 file" : errors'
                    else errors'
    if not $ null errors
      then mapM_ putStrLn errors
      else if SCodeGen `elem` opts
            then genCode (head files) (SUseGCC `elem` opts)
            else compileAll (head files) opts


genCode :: String -> Bool -> IO ()
genCode p isGcc = do icyName <- icyFile p
                     hasICurry <- doesFileExist icyName
                     when (not hasICurry) $ error "Error: no ICURRY file"
                     icy <- readICurryFile icyName
                     compileC p icy
                     inc <- riceDir
                     putStrLn (obj isGcc inc p)
                     system (obj isGcc inc p)
                     when (hasIMain icy) $
                           do main_file <- mainFile
                              writeMain main_file p
                              imports <- icyImports [p] icy
                              let includeFiles = imports ++ ["runtime", "stack", "external", "main"]
                              let files = map (\x -> inc++x++".c") includeFiles
                              let comp = if isGcc then "gcc" else "clang"
                              let command = comp ++ " -I"++inc++" " ++ unwords files ++ " -O2 -o " ++ p
                              putStrLn command
                              system command
                              return ()


icyImports :: [String] -> IProg -> IO [String]
icyImports seen (IProg _ is _ _)  = if null new 
                                       then return seen
                                       else do ms <- mapM run new
                                               return (foldr (++-) [] ms)
 where new = (sort is) \\- seen
       run i = icyFile i >>= readICurryFile >>= icyImports (new ++- seen)


compileAll :: String -> [FileType] -> IO ()
compileAll file args = 
  do fcys <- readFlatWithImports file
     mapM_ (\(p,r) -> putStrLn ((progName p) ++ ": " ++ (show r))) fcys

     let dt = foldr DT.fillTable DT.empty (map fst fcys)

     let fcys' = if SNoPrelude `elem` args
                  then filter (not . isPrefixOf "Prelude" . progName . fst) fcys
                  else fcys

     when (SDataTable `elem` args) $
        do putStrLn "\n\nDATA TABLE\n\n"
           putStrLn (DT.showTable dt)

     let st = foldr ST.addProg ST.emptyST [opt | (opt,False) <- fcys']
     putStrLn "read strictness"
     
     t <- time 
     let ft = makeOptFunTable [f | (opt,False) <- fcys', f <- progFuncs opt]
     putStr "read fun table"
     putStrLn (const "()" $## ft)
     t' <- time
     putStrLn ("time to make funTable: " ++ show (t' - t))

     mapM_ compileOpt [opt | (opt,False) <- fcys']

     compileFlats dt args st ft [fcy | (fcy,True) <- fcys']
     let new_files = map (progName . fst) (filter snd fcys')

     inc <- riceDir

     let gcc = SUseGCC `elem` args
     mapM_ (putStrLn . obj gcc inc) new_files
     mapM_ (system . obj gcc inc) new_files


     mapM_ putStrLn 
           $ map (snd . funcName) 
           $ concatMap progFuncs 
           $ filter ((file==) . progName) 
           $ map fst fcys

     when (hasMain file fcys) $
           do main_file <- mainFile
              writeMain main_file file
              let includeFiles = ((map (progName . fst) fcys') ++ ["runtime", "stack", "external", "main"])
              let files = map (\x -> inc++x++".c") includeFiles
              let comp = if gcc then "gcc" else "clang"
              let command = comp++" -I"++inc++" " ++ unwords files ++ " -O2 -o " ++ file
              putStrLn command
              system command
              return ()

obj gcc = if gcc then gccObj else clangObj
gccObj inc f =  "gcc -I"++inc++" -c "++(inc++f++".c")++" -O2 -o "++(inc++f++".o")
clangObj inc f =  "clang -I"++inc++" -c "++(inc++f++".c")++" -O2 -o "++(inc++f++".o")

hasMain :: String -> [(Prog,Bool)] -> Bool
hasMain file = elem "main" 
             . map (snd . funcName) 
             . concatMap progFuncs 
             . filter ((file==) . progName) 
             . map fst

hasIMain :: IProg -> Bool
hasIMain = not . null . filter isMain . iFuns
 where isMain (IFunction (_,n,_) _ _ _ _) = n == "main"
       iFuns (IProg _ _ _ fs) = fs

fromOpt :: String -> IO ()
fromOpt name = optFile name >>= readFlatCurryFile >>= compileOpt

compileOpt :: Prog -> IO ()
compileOpt p = do putStrLn ("compiling " ++ progName p)
                  hasC <- cFile (progName p) >>= doesFileExist
                  if hasC then putStrLn "has C" else putStrLn "doesn't have C"
                  unless hasC (getICurry p >>= compileC (progName p))

getICurry :: Prog -> IO IProg
getICurry p = do icyName <- icyFile (progName p)
                 hasICurry <- doesFileExist icyName
                 if hasICurry 
                    then do putStrLn "has ICurry"
                            readICurryFile icyName
                    else do putStrLn "doesn't have ICurry"
                            putStrLn $ pPrint (FP.ppProg (Options 2 QualNone "") p)
                            let ip = toICurry p
                            putStrLn $ pPrint (IP.ppIProg ip)
                            return ip

compileFlats :: DT.DataTable -> [FileType] -> ST.StrictTable -> FunTable -> [Prog] -> IO ()
compileFlats _  _    _  _  []         = return ()
compileFlats dt args st ft (fcy:fcys) =
  do let file = progName fcy

     when (SFlat `elem` args ) $
         do putStrLn "\n\nFLAT CURRY\n\n"
            putStrLn $ pPrint $ FP.ppProg FP.defaultOptions fcy

     (opt_fcy,c_ft,c_st) <- if SOpt `elem` args 
                            then optimizeT dt ft st fcy
                            else return (optimize dt ft st fcy)

     let calls = mergeMap funcCalls (progFuncs opt_fcy)
     let used_fcy = updProgFuncs (filter (\f -> isPublic f || funcName f `elem` calls)) opt_fcy

     opt_file <- optFile file
     writeFile opt_file (show (flipAllPrivates c_ft c_st used_fcy))

     icy_file <- icyFile file
     let icy = id $## toICurry used_fcy

     when (SICurry `elem` args) $
         do putStrLn "\n\nICURRY\n\n"
            putStrLn $ pPrint $ ppIProg icy

     writeFile icy_file (show icy)

     compileC file icy

     compileFlats dt args c_st c_ft fcys


compileC :: String -> IProg -> IO ()
compileC file icy = do h <- hFile file
                       c <- cFile file
                       toHeader icy (writeFile h) (appendFile h)
                       toSource icy (writeFile c) (appendFile c)


-- This is a hack because I don't have a good place to store the loop breaker in FlatCurry files.
-- Basically I'm hijacking the visibility field for functions, since I never use it.
flipAllPrivates :: FunTable -> ST.StrictTable -> Prog -> Prog
flipAllPrivates ft st = updProgFuncs (map (flipPrivate ft st))

flipPrivate :: FunTable -> ST.StrictTable -> FuncDecl -> FuncDecl
flipPrivate _  _  f@(Func _ _ _ _ (External _)) = f
flipPrivate ft st (Func f a _ t (Rule vs e)) = Func f a viz t (Rule vs' e)
  where viz = if loopbreaker ft f then F.Private else F.Public
        vs' = case M.lookup f st of
                   Just us -> [if i `elem` us then -v else v | (v,i) <- zip vs [1..]]
                   Nothing -> vs

isPublic :: F.FuncDecl -> Bool
isPublic f = funcVisibility f == F.Public

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





--------------------------------------------------------------------
-- Code for handling options
--------------------------------------------------------------------

data FileType = SDataTable | SFlat | SOpt | SICurry | SC | SNoPrelude | SCodeGen | SUseGCC
 deriving(Show, Eq)

optDescrs :: [OptDescr FileType]
optDescrs = [
  Option "d" ["datatable"]   (NoArg SDataTable)   "print DataTable",
  Option "f" ["flatcurry"]   (NoArg SFlat)        "print FlatCurry",
  Option "o" ["optimized"]   (NoArg SOpt)         "print optimized FlatCurry",
  Option "i" ["icurry"]      (NoArg SICurry)      "print ICurry",
  Option "c" []              (NoArg SC)           "print C",
  Option "g" ["codegen"]     (NoArg SCodeGen)     "only generate code from icurry",
  Option "p" ["noprelude"]   (NoArg SNoPrelude)   "don't include Prelude (for testing)",
  Option "x" ["gcc"]         (NoArg SUseGCC)      "Use Gcc instead of clang"]


-----------------------------------------------------------------------
-- DEBUGGING
-----------------------------------------------------------------------

printFiles :: (Prog,Bool) -> IO ()
printFiles (fcy,hasOpt) = do let name = progName fcy
                             f <- flatFile name
                             o <- optFile name
                             i <- icyFile name
                             c <- cFile name
                             [fe,oe,ie,ce] <- mapM doesFileExist [f,o,i,c]
                             putStrLn (name ++ ": " ++ show hasOpt)
                             putStrLn ("flatCurry exists " ++ f ++ ": " ++ show fe)
                             putStrLn ("optCurry exists "  ++ o ++ ": " ++ show oe)
                             putStrLn ("ICurry exists "    ++ i ++ ": " ++ show ie)
                             putStrLn ("C exists "         ++ c ++ ": " ++ show ce)

