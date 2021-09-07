
module Optimize.LoopBreakers (orderFuns) where

import Prelude hiding (lookup)
import FlatCurry.Types
import FlatCurry.Goodies (isVar,isExternal,caseBranches,branchPattern,branchExpr,patCons, funcName, funcBody)
import List (maximumBy, delete, maximum)
import Maybe (fromJust)
import Data.Map (Map, fromList, insertList, findWithDefault, member, lookup)
import Debug
import Util
import FlatUtils.FlatUtils (isCons, isPart, funcCalls)

-- returns a list of functions ordered by inlinability
-- because we may have mutual recursion, we need to pick some loop breakers that we just won't inline.
-- The rule is if I'm walking the list, and I haven't encountered a function yet,
-- that that function is a loop breaker.
orderFuns :: [FuncDecl] -> ([FuncDecl], [QName])
orderFuns fs
  = let -- fun == (toInt . funcName)^-1
        toInt n = fromJust (lookup n intMap)
        intMap = fromList (zip (map funcName fs) [0..])

        fun i = fromJust (lookup i funMap)
        funMap = fromList (zip [0..] fs)

        score n  = findWithDefault 0 n scoreMap
        scoreMap = fromList (zip [0..] (map (inlineScore . funcBody) fs))

        edges    = [(toInt (funcName f), toInt c) | f <- fs,
                                                    c <- funcCalls f,
                                                    member c intMap]

    in case sccSort (map (toInt . funcName) fs) edges score of
       (ns,bs) -> (map fun ns ++ map fun bs, map (funcName . fun) bs)


sccSort :: [Int] -> [(Int, Int)] -> (Int -> Int) -> ([Int],[Int])
sccSort vs es score
 | length vs == 1 = checkLoop vs
 | otherwise      = concatTuples (map sortComp (scc vs es))
 where
  inComp c (u,v) = u `elem` c && v `elem` c
  checkLoop [v] = if (v,v) `elem` es then ([],[v]) else ([v],[])
  worst = maximumBy (\v1 v2 -> compare (score v1) (score v2))

  sortComp c = if length c == 1
               then checkLoop c
               else let breaker = worst c
                        c' = delete breaker c
                        es' = filter (inComp c') es
                    in case sccSort c' es' score of
                            (as, bs) ->  (as, breaker:bs)

concatTuples :: [([a], [b])] -> ([a], [b])
concatTuples [] = ([], [])
concatTuples ((xs,ys):ts) = case concatTuples ts of
                                 (xss,yss) -> (xs++xss, ys++yss)

inlineScore :: Expr -> Int
inlineScore (Var v)         = 0
inlineScore (Lit l)         = 0
inlineScore (Let vs e)      = 1 + max (inlineScore e) (maximum (map (inlineScore . snd) vs))
inlineScore (Or e1 e2)      = 4 + max (inlineScore e1) (inlineScore e2)
inlineScore (Free _ e)      = 1 + inlineScore e
inlineScore (Comb ct  n es) = if isCons ct || isPart ct then 0 else 1
inlineScore (Case ct e bs)  = 2 + max (inlineScore e) (maximum (map (inlineScore . branchExpr) bs))
inlineScore (Typed e _)     = inlineScore e

