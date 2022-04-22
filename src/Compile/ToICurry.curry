module Compile.ToICurry (toICurry) where

import FlatCurry.Types
import FlatCurry.Goodies
import FlatUtils.DataTable (exempt)
import ICurry.Types
import List
import Sort (sort)
import Util (mapSnd, Path)

-- Prog:
--    n = (module name)
--    is = list of names of imported modules
--    ts = [Type (module,name) visibility [Type varaibles] [Constructors])]
--       | [TypeSyn (module,name) visibility [Type varaibles] TypeExpr)] (Probably not useful)
--    fs = [Func (module,name) arity visibility type rule]
--    ops = [Op (module,name) fixity precidence] (probably not useful)
toICurry :: Prog -> IProg
toICurry (Prog name imports types functions _) = IProg name imports itypes ifuns
 where itypes = zipWith toIType (filter (not . isTypeSyn) types) [0..]
       ifuns  = map toIFunction functions

toIType :: TypeDecl -> Int -> IDataType
toIType (Type (mn,tn) _ _ ctrs) i = IDataType (mn,tn,i) (zipWith toCtr (reverse (sort ctrs)) [0..])
 where
  toCtr (Cons (m,c) a _ _) x = ((m,c,x),a)


toIVis :: Visibility -> IVisibility
toIVis FlatCurry.Types.Public  = ICurry.Types.Public
toIVis FlatCurry.Types.Private = ICurry.Types.Private


toIFunction :: FuncDecl -> IFunction
toIFunction (Func (mn,fn) arity vis _ r) = IFunction (mn,fn,0) arity (toIVis vis) (demandOf r) (toRule r)
 where toRule (External x) = IExternal x
       toRule (Rule vs e)  = IFuncBody (toBlock (map abs vs) e 0)
       -- from Michael's translation, but we don't use demanded variables.
       demandOf (External _) = []
       demandOf (Rule args rhs) = case rhs of
         Case _ ce _ -> case ce of
           Var v -> maybe (error $ "Function '" ++ fn ++ "'case variable not in left-hand side")
                          (\i -> [i])
                          (elemIndex v (map abs args))
           Comb FuncCall ("","primCond") [] -> []
           _     -> []
         _ -> []

-- vs parameters of the block
-- exp the expression to translate
-- root the root of this block
-- n the first free variable
toBlock :: [VarIndex] -> Expr -> Int -> IBlock
toBlock vs exp root = 
  let decls = (map IVarDecl vs) ++ declare exp
      asgns = zipWith asgnParam (reverse vs) [0..] ++ asgn exp ++ fill exp
      stmt  = toStmt exp
  in  IBlock decls asgns stmt
   where
    asgnParam v i = IVarAssign v (IVarAccess scrutinee [i])
    scrutinee = if root == 0 then 0 else 1



-- unfortunately I can't use declVars here, because I might have nested cases
-- Return a list of Decels (Declar or Free) for each local variable defined in the expresion
-- up until the next case
-- We also need to keep track of the free variables 
-- @param e the expresion
--
declare :: Expr -> [IVarDecl]
declare (Var _)      = []
declare (Lit _)      = []
declare (Comb _ _ _) = []
declare (Or _ _)     = []
declare (Case _ _ _) = []
declare (Free vs e)  = map IFreeDecl vs ++ (declare e)
declare (Let vs e)   = map (IVarDecl . fst) vs ++ (declare e)

asgn :: Expr -> [IAssign]
asgn (Var _)         = []
asgn (Lit _)         = []
asgn (Comb _ _ _)    = []
asgn (Or _ _)        = []
asgn (Case _ ce _)   = []
asgn (Free vs e)     = asgn e
asgn (Let vs e)      = map asgnVar vs ++ asgn e
 where asgnVar (v,e) = IVarAssign v (toExpr e)

fill :: Expr -> [IAssign]
fill (Var _)      = []
fill (Lit _)      = []
fill (Comb _ _ _) = []
fill (Or _ _)     = []
fill (Case _ _ _) = []
fill (Free _ e)   = fill e
fill (Let vs e)   = concatMap (fillVar (map fst vs)) vs ++ fill e

fillVar :: [VarIndex] -> (VarIndex,Expr) -> [IAssign]
fillVar ds (v,e) = [INodeAssign v p (IVar x) | (x,p) <- paths e, x `elem` ds]

paths :: Expr -> [(VarIndex, Path)]
paths (Var v)       = [(v,[])]
paths (Lit l)       = []
paths (Or e1 e2)    = [mapSnd (0:) ps | ps <- paths e1] ++ 
                      [mapSnd (1:) ps | ps <- paths e2]
paths (Comb _ _ es) = [mapSnd (i:) ps | (e,i) <- zip es [0..], ps <- paths e]

toStmt :: Expr -> IStatement
toStmt exp
  = case exp of
      Let _ e     -> toStmt e
      Free _ e    -> toStmt e
      Case t e bs -> toCase t e bs
      e           -> toRet e

toRet :: Expr -> IStatement
toRet e
 | e == exempt = IExempt
 | otherwise   = IReturn (toExpr e)

toCase :: CaseType -> Expr -> [BranchExpr] -> IStatement
toCase _ (Var v) bs
 | isADTBranch bs = ICaseCons v (zipWith toADTBranch (reverse (sort bs)) [0..])
 | otherwise      = ICaseLit  v (map toLitBranch bs)
 where
  isADTBranch = isConsPattern . branchPattern . head
  toLitBranch (Branch (LPattern l)         e)   = ILitBranch  (toLit l) (toBlock [] e v)
  toADTBranch (Branch (Pattern (mn,cn) vs) e) i = IConsBranch (mn,cn,i) (length vs) (toBlock vs e v)
toCase _ (Comb FuncCall ("","primCond") []) (cond:bs)
             = ICaseCons (-1) (zipWith toADTBranch (cond:reverse (sort bs)) [-1..])
 where
  toADTBranch (Branch (Pattern (mn,cn) vs) e) i = IConsBranch (mn,cn,i) (length vs) (toBlock vs e (-1))

toExpr :: Expr -> IExpr
toExpr (Var x)             = IVar x
toExpr (Lit l)             = ILit (toLit l)
toExpr (Or e1 e2)          = IOr (toExpr e1) (toExpr e2)
toExpr (Comb t (mn,fn) es) =
    case t of
       FuncCall         -> IFCall  (mn, fn, 0)   (map toExpr es)
       ConsCall         -> ICCall  (mn, fn, 0)   (map toExpr es)
       (FuncPartCall n) -> IFPCall (mn, fn, 0) n (map toExpr es)
       (ConsPartCall n) -> ICPCall (mn, fn, 0) n (map toExpr es)

toLit :: Literal -> ILiteral
toLit (Intc   i) = IInt i
toLit (Floatc f) = IFloat f
toLit (Charc  c) = IChar c
