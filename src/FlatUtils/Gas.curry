
-- Graph Algebra System
-- 

module FlatUtils.Gas where

import FlatCurry.Types
import FlatCurry.Pretty (ppExp, Options(..), QualMode(..))
import Text.Pretty (pPrint)
import Util
import Control.Findall (oneValue)
import FlatUtils.FlatUtils
import Debug (trace)


-- Loop over each function and applied a specified transformation.
-- The transformation is allowed to return an empty list of no transformation is applied
-- However, if any transformation is applied, then the transformed functions are
-- passed into opt again to see if they can be transformed further.
--
-- @param opt - the transformationto apply to each function
--              returns an empty list if no transformation is applied
--              otherwise it returns a list of 1 or more transformed functions
-- @param (f:fs) - the list of funcions to apply the transformation
-- @return a list of transformed functions.  This list may be longer than the origonal list.
loop :: (Int -> FuncDecl -> [FuncDecl]) -> Int -> [FuncDecl] -> [FuncDecl]
loop _   _ []     = []
loop opt n (f:fs)
  = fcase opt n f of
      []      -> f : loop opt n fs
      y@(_:_) -> loop opt (n+1) (y++fs)

loopIO :: (Int -> FuncDecl -> IO [FuncDecl]) -> Int -> [FuncDecl] -> IO [FuncDecl]
loopIO _   _ []     = return []
loopIO opt n (f:fs) = do y <- opt n f
                         if null y
                          then do fs' <- loopIO opt n fs
                                  return (f:fs')
                          else loopIO opt (n+1) (y++fs)


type Opt = (Int, Bool) -> Expr -> (Expr,String,VarIndex)

-- if n == -1, then keep going until we can't optimize
simplify :: Opt -> Int -> Expr -> Expr
simplify opt n e = fst (runSimplify opt n (newVar e) e)

showWork :: Opt -> Int -> Expr -> (Expr,String,Int)
showWork opt n e = let (e',steps) = runSimplify opt n (newVar e) e
                   in (e', reconstruct e steps, length steps)

runSimplify :: Opt -> Int -> VarIndex -> Expr -> (Expr,[Step])
runSimplify opt n v e
 | n == 0    = (e,[])
 | otherwise = let (e', s, v', seen) = runRewriter (run opt [] e) v
               in case seen of
                       False -> (e', s)
                       True  -> mapSnd (s++) $ runSimplify opt (n-1) v' e'

run :: Opt -> Path -> Expr -> ReWriter Expr
run opt p e@(Var _) = return e
run opt p e@(Lit _) = return e

run opt p f@(Comb ct n es) = do es' <- mapM runExp (zip [0..] es)
                                runOpts opt p (Comb ct n es')
 where runExp (i,e) = run opt (i:p) e

run opt p (Let vs e) = do e'  <- run opt (-1:p) e
                          vs' <- mapM runVar (zip [0..] vs)
                          runOpts opt p (Let vs' e')
 where runVar (n,(v,l)) = do l' <- run opt (n:p) l
                             return (v,l')

run opt p (Free vs e) = do e' <- run opt (0:p) e
                           runOpts opt p (Free vs e')

run opt p (Or e1 e2) = do e1' <- run opt (0:p) e1
                          e2' <- run opt (1:p) e2
                          runOpts opt p (Or e1' e2')

run opt p (Case ct e bs) = do e'  <- run opt (-1:p) e
                              bs' <- mapM runBranch (zip [0..] bs)
                              runOpts opt p (Case ct e' bs')
 where runBranch (n,Branch q b) = do b' <- run opt (n:p) b
                                     return (Branch q b')

run opt p (Typed e t) = run opt (0:p) e


runOpts :: Opt -> Path -> Expr -> ReWriter Expr
runOpts opt p e = do v <- curVar
                     case oneValue (opt (v,null p) e) of
                          Nothing        -> return e
                          Just (e',r,dv) -> do update e' (r,p,e') dv
                                               run opt p e'

reconstruct :: Expr -> [Step] -> String
reconstruct _ [] = ""
reconstruct e ((rule, p, rhs):steps) = "=>_"++rule++" "++(show (reverse p))++"\n" ++
                                       pPrint (ppExp (Options 2 QualNone "") e')++"\n" ++
                                       reconstruct e' steps
 where e' = replace e (reverse p) rhs


-- helper functions to make some expressions easier to construct
applyf :: Expr -> [Expr] -> Expr
applyf f es = Comb FuncCall ("Prelude","apply") (f:es)

comp :: Expr -> Expr -> Expr
comp f g = Comb (FuncPartCall 1) ("Prelude",".") [f,g]

caseBranch :: Expr -> Expr
caseBranch e = Case _ _ (_++[Branch _ e]++_)

partCall :: Int -> QName -> [Expr] -> Expr
partCall n f es = Comb (FuncPartCall n) f es
                ? Comb (ConsPartCall n) f es

has :: Expr -> Expr
has e = e
      ? (Comb _ _ (_ ++ [has e] ++ _))
      ? (Let (_ ++ [(_, has e)] ++ _) _)
      ? (Let _ (has e))
      ? (Free _ (has e))
      ? (Or (has e) _)
      ? (Or _ (has e))
      ? (Case _ _ (_ ++ [(Branch _ (has e))] ++ _))
      ? (Case _ (has e) _)


build_  :: Expr -> Expr
build_ g = Comb FuncCall ("Prelude","build") [g]
foldr_  :: Expr -> Expr -> Expr -> Expr
foldr_ f z xs = Comb FuncCall ("Prelude","foldr") [f,z,xs]
build_fold_  :: Expr -> Expr -> Expr -> Expr
build_fold_ mkf mkz xs = Comb FuncCall ("Prelude","build_fold") [mkf,mkz,xs]
mk_build_ :: Expr -> Expr -> Expr -> Expr
mk_build_ g mkf mkz = Comb (FuncPartCall 2) ("Prelude","mk_build") [g,mkf,mkz]
