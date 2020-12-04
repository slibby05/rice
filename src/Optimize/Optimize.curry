
{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Optimize (optimize, optimizeT) where

import FlatUtils.Gas
import FlatUtils.DataTable (DataTable)
import FlatCurry.Types
import FlatCurry.Goodies (updProgFuncs, progFuncs, updFuncBody, funcName)
import Optimize.LoopBreakers (orderFuns)
import Optimize.Preprocess (preprocess, flatten, alias, float, blocks, caseVar)
import Optimize.Inline (caseCancel, deadCode, inline, reduce)
import Optimize.Postprocess (postprocess)
import Optimize.FunTable (FunTable, addEntry, showTable)
import Control.SetFunctions
import Control.Findall
import Debug (trace)
import Text.Pretty (pPrint)
import FlatCurry.Pretty (ppProg, defaultOptions)
import Text.Pretty (pPrint)

output :: String -> Prog -> [FuncDecl] -> a -> a
output name p [] = trace ("==== "++name++" ===================================\n")
output name p fs@(_:_) = trace ("==== "++name++" ===================================\n") .
                         trace (pPrint $ ppProg defaultOptions (updProgFuncs (\_ -> fs) p))

optimizeT :: DataTable -> FunTable -> Prog -> (Prog, FunTable)
optimizeT dt ft p = let (fs,bs)      = orderFuns (progFuncs p)
                        pre_fs       = map (preprocess dt) fs
                        (ft',opt_fs) = optimize_funs bs ft pre_fs
                        post_fs      = postprocess opt_fs
                    in output "Function Order" p fs $
                       trace ("\nloop breakers\n" ++ show bs) $
                       output "Preprocess"  p pre_fs  $
                       output "Optimize"    p opt_fs  $
                       trace ("\nFunTable\n" ++ showTable ft') $
                       output "Postprocess" p post_fs $
                       ((updProgFuncs (const post_fs) p), ft')


optimize :: DataTable -> FunTable -> Prog -> (Prog, FunTable)
optimize dt ft p = let (fs,bs)      = orderFuns (progFuncs p)
                       pre_fs       = map (preprocess dt) fs
                       (ft',opt_fs) = optimize_funs bs ft pre_fs
                       post_fs      = postprocess opt_fs
                   in ((updProgFuncs (const post_fs) p), ft')

optimize_funs :: [QName] -> FunTable -> [FuncDecl] -> (FunTable, [FuncDecl])
optimize_funs bs ft []     = (ft, [])
optimize_funs bs ft (f:fs) = trace ("=== Optimizing " ++ (showQName (funcName f)) ++ " =====================================") $
                                let f' = updFuncBody (optimize_expr ft) f
                                    (ft',fs') = optimize_funs bs (addEntry bs f' ft) fs
                                in (ft', f':fs')

optimize_expr :: FunTable -> Expr -> Expr
optimize_expr ft = simplifyLimit opt 100
 where opt = caseCancel ?
             flatten ?
             deadCode ?
             alias ?
             float ?
             blocks ?
             caseVar ?
             inline ?
             reduce ft
