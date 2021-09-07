module Optimize.Unboxing (box) where

import Util (Names, runState, fresh)
import FlatCurry.Types
import FlatUtils.FlatUtils (newVar, litCon, isLitBranch, litBranchCon)

-- This will hold all of the relavant unboxing code,
-- but for now, I just want to explicitly represent boxes.

-- Unfortulately since adding boxes is a non-terminating rewrite, I need to actually traverse the tree
-- Otherwise I'll get
-- Lit (Intc 4) => .int (Lit (Intc 4)) => .int (.int (Lit (Intc 4))) => ...

box :: Expr -> Expr
box e = fst $ runState (addBoxes e) (newVar e)

-- traverse the AST looking for either literals or literal cases
-- Lit (Intc i)   => .int (Lit (Intc i))
-- Lit (Charc c)  => .char (Lit (Charc c))
-- Lit (Floatc f) => .float (Lit (Floatc f))
-- For cases we just wrap an algebraic case around them
-- case e of
--   1 -> ...
--   ...
-- =>
-- case e of
--   .int i -> case i of
--              1 -> ...
--              ...
--
-- We use a name tree, because I might need to add new variables (such as i in the previous case)
addBoxes :: Expr -> Names Expr
addBoxes (Var v)        = return $ Var v
addBoxes (Lit l)        = return $ Comb ConsCall (litCon l) [Lit l]
addBoxes (Comb ct n es) = mapM addBoxes es >>= (return . Comb ct n)
addBoxes (Free vs e)    = addBoxes e >>= (return . Free vs)
addBoxes (Typed e te)   = do e' <- addBoxes e
                             return $ Typed e' te
addBoxes (Or e1 e2)     = do e1' <- addBoxes e1
                             e2' <- addBoxes e2
                             return $ Or e1' e2'
addBoxes (Let vs e)     = do vs' <- mapM letBox vs
                             e'  <- addBoxes e
                             return $ Let vs' e'
  where letBox (lv,le) = do le' <- addBoxes le 
                            return (lv, le')

addBoxes (Case ct e bs) = do e' <- addBoxes e
                             bs' <- mapM branchBox bs
                             if isLitBranch bs
                                 then addLitCaseBox ct e' bs'
                                 else return $ Case ct e' bs'
  where branchBox (Branch p e) = do e' <- addBoxes e 
                                    return $ Branch p e'

addLitCaseBox :: CaseType -> Expr -> [BranchExpr] -> Names Expr
addLitCaseBox ct e bs 
 = do v <- fresh
      let ltype = litBranchCon bs
      let innerCase = Case ct (Var v) bs
      let litBranch = Branch (Pattern ltype [v]) innerCase
      return $ Case ct e (litBranch : map freeBranch bs)
  where freeBranch (Branch (LPattern x) _) = Branch (Pattern ("","") []) (Lit x)
        

