
{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.LoopBreakers (orderFuns) where

import Prelude hiding (lookup)
import FlatCurry.Types
import FlatCurry.Goodies (isVar,isExternal,caseBranches,branchPattern,branchExpr,patCons, funcName, funcBody)
import FlatUtils.DataTable
import Optimize.FunTable
import Graph
import List (minimumBy, delete, minimum)
import Maybe (fromJust)
import Data.Map (Map, fromList, insertList, findWithDefault, member, lookup)
import Debug
import Util

-- returns a list of functions ordered by inlinability
-- because we may have mutual recursion, we need to pick some loop breakers that we just won't inline.
-- The rule is if I'm walking the list, and I haven't encountered a function yet,
-- that that function is a loop breaker.
orderFuns :: [FuncDecl] -> DET ([FuncDecl], [QName])
orderFuns fs
  = let fs'      = filter (not . isExternal) fs
        exts     = filter isExternal fs

        -- fun == (toInt . funcName)^-1
        toInt n = fromJust (lookup n intMap)
        intMap = fromList (zip (map funcName fs) [0..])

        fun i = fromJust (lookup i funMap)
        funMap = fromList (zip [0..] fs)

        score n  = findWithDefault 0 n scoreMap
        scoreMap = fromList (zip [0..] (map (inlineScore . funcBody) fs))

        edges    = [(toInt (funcName f), toInt c) | f <- fs',
                                                    c <- getCalls (funcBody f),
                                                    member c intMap]
        (ns,bs)  = sccSort (map (toInt . funcName) fs') edges score
    in (map fun ns ++ exts, map (funcName . fun) bs ++ map funcName exts)

sccSort :: [Int] -> [(Int, Int)] -> (Int -> Int) -> ([Int],[Int])
sccSort vs  es score
 | length vs == 1   = if (head vs,head vs) `elem` es then (vs,vs) else (vs,[])
 | otherwise
  = let graph       = buildG es
        ind         = indegree graph
        callers v   = findWithDefault 0 v ind
        worst       = minimumBy (\v1 v2 -> compare (score v1, callers v1) (score v2, callers v2))
        loops       = filter (not . null) (map preorder (scc graph))

        edges l     = [(u,v) | (u,v) <- es, u `elem` l && v `elem` l]

        sortComp c = if length c == 1
                     then if (head c,head c) `elem` es then (c,c) else (c,[])
                     else let breaker = worst c
                              c' = delete breaker c
                              es' = edges c'
                              (as, bs) = sccSort c' es' score
                          in (as, breaker:bs)

    in trace (show loops) $ concatTuples (map sortComp loops)

concatTuples :: [([a], [b])] -> ([a], [b])
concatTuples [] = ([], [])
concatTuples ((xs,ys):ts) = let (xss,yss) = concatTuples ts
                            in (xs++xss, ys++yss)

inlineScore :: Expr -> Int
inlineScore (Var v)        = 4
inlineScore (Lit l)        = 4
inlineScore (Let vs e)     = minimum (map inlineScore (e : map snd vs))
inlineScore (Or _ _)       = 0
inlineScore (Free _ _)     = 0
inlineScore (Comb _  n es) = 3
inlineScore (Case ct e bs) = if all ((>0) . inlineScore) (e : map branchExpr bs)
                             then 2
                             else 1
inlineScore (Typed e _)    = inlineScore e

isFunc :: CombType -> Bool
isFunc FuncCall         = True
isFunc (FuncPartCall _) = True
isFunc ConsCall         = False
isFunc (ConsPartCall _) = False

getCalls :: Expr -> [QName]
getCalls (Var v)        = []
getCalls (Lit l)        = []
getCalls (Let vs e)     = concatMap (getCalls . snd) vs ++ getCalls e
getCalls (Or e1 e2)     = getCalls e1 ++ getCalls e2
getCalls (Free _ e)     = getCalls e
getCalls (Comb ct n es) = if isFunc ct 
                          then n : concatMap getCalls es 
                          else concatMap getCalls es
getCalls (Case ct e bs) = getCalls e ++ concatMap (getCalls . branchExpr) bs
getCalls (Typed e t)    = getCalls e
