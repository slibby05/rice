module Optimize.Unboxing (boxProg) where

import Compile.NameTree
import FlatCurry.Types
import FlatCurry.Goodies (allVars)

-- This will hold all of the relavant unboxing code,
-- but for now, I just want to explicitly represent boxes.

-- Unfortulately since adding boxes is a non-terminating rewrite, I need to actually traverse the tree
-- Otherwise I'll get
-- Lit (Intc 4) => Int (Lit (Intc 4)) => Int (Int (Lit (Intc 4))) => ...

boxProg :: Prog -> Prog
boxProg (Prog n is ts fs os) = Prog n is ts (map boxFun fs) os

boxFun :: FuncDecl -> FuncDecl
boxFun f@(Func _ _ _ _ (External _)) = f
boxFun (Func n a v t (Rule vs body))
 | newBody =:= addBoxes nt body
 & bindNames nt start >= start
 = Func n a v t (Rule vs newBody)
 where nt, newBody free
       start = foldr max 0 (vs ++ allVars body) + 1


-- traverse the AST looking for either literals or literal cases
-- Lit (Intc i)   => int (Lit (Intc i))
-- Lit (Charc c)  => char (Lit (Charc c))
-- Lit (Floatc f) => float (Lit (Floatc f))
-- For cases we just wrap an algebraic case around them
-- Case e of
--   1 -> ...
--   ...
-- =>
-- case e of
--   int i -> case i of
--             1 -> ...
--             ...
--
-- We use a name tree, because I might need to add new variables (such as i in the previous case)
addBoxes :: NameTree -> Expr -> Expr
addBoxes None         (Var v)        = Var v
addBoxes None         (Lit l)        = Comb ConsCall (litType l) [Lit l]
addBoxes (Br vs)      (Comb ct n es) = Comb ct n (forceZipWith addBoxes vs es)
addBoxes nt           (Free vs e)    = Free vs (addBoxes nt e)
addBoxes nt           (Typed e te)   = Typed (addBoxes nt e) te
addBoxes (Br [v1,v2]) (Or e1 e2)     = Or (addBoxes v1 e1) (addBoxes v2 e2)
addBoxes (Br (v:vs))  (Let lets e)   = Let (forceZipWith letBox vs lets) (addBoxes v e)
  where letBox t (v,e) = (v, addBoxes t e)

addBoxes nt (Case ct e bs)
 | litBranch bs = addLitCaseBox nt ct e bs
 | otherwise    = addCaseBox nt ct e bs

addLitCaseBox (Br ((Name v) : ve : vs)) ct e bs 
 = Case ct (addBoxes ve e) 
     ([Branch (Pattern (litBranchType bs) [v]) (Case ct (Var v) (forceZipWith branchBox vs bs))] ++
      map addPat bs)
 where addPat (Branch (LPattern x) _) = Branch (Pattern ("","") []) (Lit x)

addCaseBox (Br (v : vs)) ct e bs
 = Case ct (addBoxes v e) (forceZipWith branchBox vs bs)

branchBox :: NameTree -> BranchExpr -> BranchExpr
branchBox nt (Branch p e) = Branch p (addBoxes nt e)

litBranch :: [BranchExpr] -> Bool
litBranch (Branch (LPattern _) _ : _) = True
litBranch (Branch (Pattern _ _) _ : _) = False

litBranchType :: [BranchExpr] -> QName
litBranchType (Branch (LPattern l) _ : _) = litType l

litType :: Literal -> QName
litType (Intc i)   = ("","int")
litType (Charc c)  = ("","char")
litType (Floatc f) = ("","float")
