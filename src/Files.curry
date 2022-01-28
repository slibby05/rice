
module Files (readFlatWithImports, riceDir, mainFile, 
              flatFile, optFile, icyFile, cFile, hFile) where

import System
import FlatCurry.Types as F
import Directory        (doesFileExist, getModificationTime)
import FileGoodies      (getFileInPath)
import System.CurryPath (getLoadPathForModule)
import FlatCurry.Goodies (progName, progImports)
import FlatCurry.Files  (flatCurryFileName, readFlatCurry, readFlatCurryFile)
import Util
import List ((\\))


-- reads a flatCurry file, where some of the imports may have already been optimized
-- We take a string of a program to read
-- we return a list of programs, and a flag for whether it needs to be optimized.
-- The list is orderded by inclusion (topological ordering)
-- so we can't split it up.
readFlatWithImports :: String -> IO [(Prog,Bool)]
readFlatWithImports file = readFlat file >>=
                           readTopsort   >>=
                           flip fixOpts []

-- It might be the case that we one of our imports needs to be re-optimized
-- If that's true, then we need to re-optimize the current file.
-- So, go through and make sure that if we're optimized then all of our imports are too.
-- This isn't efficient (O(n^2)), but the number of imports in small (<100) so it shouldn't matter.
fixOpts :: [(Prog,Bool)] -> [(Prog,Bool)] -> IO [(Prog,Bool)]
fixOpts []           fs = return fs
fixOpts ((b,opt):bs) fs = do opt' <- fixOpt
                             fixOpts bs (fs++[opt'])
  where fixOpt 
         | shouldOptimize = do b' <- readFlat (progName b) 
                               return (b',True)
         | otherwise      = return (b,opt)
        checkImport i  = (i,True) `elem` map (mapFst progName) fs
        shouldOptimize = opt == False && any checkImport (progImports b)


readTopsort :: Prog -> IO [(Prog,Bool)]
readTopsort root = do (fcys,_) <- accM visit [progName root] (progImports root)
                      return (fcys ++ [(root,True)])

visit :: String -> [String] -> IO ([(Prog,Bool)], [String])
visit imp seen
 | imp `elem` seen = return ([], seen)
 | otherwise       = do putStrLn ("reading: " ++ imp)
                        (fcy,opt) <- readImport imp
                        let imps = progImports fcy \\ seen
                        (fcys,seen') <- accM visit (imp:seen) imps
                        return (fcys ++ [(fcy,opt)], seen')

readImport :: String -> IO (Prog,Bool)
readImport imp = do hasOpt <- newer imp 
                    fcy <- getFile hasOpt
                    return (fcy, not hasOpt)
 where getFile hasOpt = if hasOpt 
                          then optFile imp >>= readFlatCurryFile
                          else readFlat imp

-- Reads a single flat curry file.
-- Because of how I had to split up Prelude,
-- I need to handle those cases seperately.
-- the split up prelude files are in ~/.rice/.curry/*.fcy
-- the "Prelude" file is completely virtual
-- and Curry can find every other file.
readFlat :: String -> IO Prog
readFlat name
 | name `elem` splitPrelude = flatFile name >>= readFlatCurryFile
 | name == "Prelude"        = return prelude
 | otherwise                = readFlatCurry name
  where prelude = Prog "Prelude" splitPrelude [] [] []

-- returns if a flat curry file has an optimized file that is new then the origonal source.
newer :: String -> IO Bool
newer name = do f <- origonalFile
                fopt <- optFile name
                exists <- doesFileExist fopt
                if exists 
                 then 
                    liftM2 (>=) (getModificationTime fopt) (getModificationTime f) 
                 else 
                    return False
 where origonalFile
        | name `elem` splitPrelude = flatFile name
        | otherwise = getLoadPathForModule name >>=
                      getFileInPath (flatCurryFileName name) [""]


----------------------------------------------------------------
-- common helper functions for getting specific files
----------------------------------------------------------------

-- To make this compile, I've split Prelude into several different files.
-- Tiles are ordered by dependance, and there are no cyclic dependancies.
splitPrelude :: [String]
splitPrelude = ["PreludeBase", "PreludeCompare", "PreludeNum", "PreludeList",
                "PreludeString", "PreludeRead", "PreludeMonad", "PreludeTuple"]

riceDir :: IO String
riceDir = fmap (++"/.rice/") (getEnviron "HOME")

mainFile :: IO String
mainFile = fmap (++"main.c") riceDir

flatFile :: String -> IO String
flatFile name = fmap (++".curry/"++name++".fcy") riceDir

optFile :: String -> IO String
optFile name = fmap (++name++".opt") riceDir

icyFile :: String -> IO String
icyFile name = fmap (++name++".icy") riceDir

cFile :: String -> IO String
cFile name = fmap (++name++".c") riceDir

hFile :: String -> IO String
hFile name = fmap (++name++".h") riceDir

