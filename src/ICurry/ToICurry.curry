module ICurry.ToICurry (toICurry) where

import FlatCurry.Types as F
import FlatCurry.Goodies
import ICurry.Types as I
import List



-- Prog:
--    n = (module name)
--    is = list of names of imported modules
--    ts = [Type (module,name) visibility [Type varaibles] [Constructors])]
--       | [TypeSyn (module,name) visibility [Type varaibles] TypeExpr)] (Probably not useful)
--    fs = [Func (module,name) arity visibility type rule]
--    ops = [Op (module,name) fixity precidence] (probably not useful)
toICurry :: F.Prog -> I.Program
toICurry (F.Prog name imports types functions _) = I.Program name imports itypes ifuns
 where itypes = map toIType types
       ifuns  = map toIFunction functions

toIType :: F.TypeDecl -> I.Data
toIType (F.Type name _ _ ctrs) = I.Data name (map toCtr ctrs)
 where
  toCtr (F.Cons cname arity _ _) = I.Constr cname arity

toIFunction :: F.FuncDecl -> I.Fun
toIFunction (F.Func name _ _ _ (F.External x)) = I.External name
toIFunction (F.Func name _ _ _ (F.Rule vs e))  = I.Fun name (toBlock vs e I.Root)

-- vs parameters of the block
-- exp the expression to translate
-- root the root of this block
-- n the first free variable
toBlock :: [F.VarIndex] -> F.Expr -> I.Var -> I.Block
toBlock vs exp root = let params = map I.Param vs
                          locals = declare exp
                          asgnParams = zipWith asgnParam vs [0..]
                          asgns = asgn exp
                          stmt = toStmt exp
                      in  Block (params++locals) (asgnParams++asgns) stmt
 where asgnParam p x = I.Local p := I.Var (root :@ x)


-- unfortunately I can't use declVars here, because I might have nested cases
-- Return a list of Decels (Declar or Free) for each local variable defined in the expresion
-- up until the next case
-- We also need to keep track of the free variables 
-- @param e the expresion
-- @param cv Determine if we need to declare a case variable
--
declare :: F.Expr -> [I.Decl]
declare (F.Var _)      = []
declare (F.Lit _)      = []
declare (F.Comb _ _ _) = []
declare (F.Or _ _)     = []
declare (F.Case _ _ _) = []
declare (F.Free vs e)  = map I.Free vs ++ declare e
declare (F.Let vs e)   = map (I.Declare . fst) vs ++ declare e

asgn :: F.Expr -> [I.Asgn]
asgn (F.Var _)      = []
asgn (F.Lit _)      = []
asgn (F.Comb _ _ _) = []
asgn (F.Or _ _)     = []
asgn (F.Case _ _ _) = []
asgn (F.Free vs e)  = asgn e
asgn (F.Let vs e)   = map asgnVar vs ++ asgn e
 where asgnVar (v,e) = (I.Local v) := toExpr e


toStmt :: F.Expr -> I.Stmt
toStmt exp
  = case exp of
      F.Let _ e     -> toStmt e
      F.Free _ e    -> toStmt e
      F.Case t e bs -> toCase t e bs
      e             -> Return (toExpr e)

toCase :: F.CaseType -> F.Expr -> [F.BranchExpr] -> I.Stmt
toCase _ (F.Var v) bs
 | isADTBranch bs = I.Case v (map toADTBranch bs)
 | otherwise      = I.Case v (map toLitBranch bs)
 where
  isADTBranch = isConsPattern . branchPattern . head
  toLitBranch (F.Branch (F.LPattern l) e) = I.LitBranch (toLit l) (toBlock [] e (I.Local v))
  toADTBranch (F.Branch (F.Pattern n vs) e) = I.Branch n (toBlock vs e (I.Local v))

toExpr :: F.Expr -> I.Exp
toExpr (F.Var x)                        = I.Var (I.Local x)
toExpr (F.Lit l)                        = I.Lit (toLit l)
toExpr (F.Comb F.FuncCall n es)         = I.Node (I.FunNode 0 n) (map toExpr es)
toExpr (F.Comb F.ConsCall n es)         = I.Node (I.ConNode 0 n) (map toExpr es)
toExpr (F.Comb (F.FuncPartCall a) n es) = I.Node (I.FunNode a n) (map toExpr es)
toExpr (F.Comb (F.ConsPartCall a) n es) = I.Node (I.ConNode a n) (map toExpr es)
toExpr (F.Or e1 e2)                     = I.Or (toExpr e1) (toExpr e2)

toLit :: F.Literal -> I.Lit
toLit (F.Intc   i) = I.LInt i
toLit (F.Floatc f) = I.LFloat f
toLit (F.Charc  c) = I.LChar c
