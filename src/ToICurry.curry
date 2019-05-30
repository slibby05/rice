import FlatCurry.Types as F
import FlatCurry.Goodies as G
import ICurry as I
import List

type ConsList = [F.QName]

--------------------------------------------------------------------------------------------
-- Get the types in a program

-- gets all of the constructors for a program and all imports
-- we group them together by type
-- Really, the only reason we need this is because we need to 
-- fill in in missing case statements with failure
--
-- This might be better as it's own pass in FlatCurry
constructors :: [F.Prog] -> [ConsList]
constructors = concatMap getConstructorSets

-- gets all of the constructors for a single module
-- get the types, filter out the type synonyms,
-- get the list of constructors, and get the names from them.
getConstructorSets :: F.Prog -> [ConsList]
getConstructorSets = map ((mapSnd G.consName) . fork (G.typeName, G.typeConsDecls)) . filter (not . G.isTypeSyn) . G.progTypes


--------------------------------------------------------------------------------------------


-- Prog:
--    n = (module name)
--    is = list of names of imported modules
--    ts = [Type (module,name) visibility [Type varaibles] [Constructors])]
--       | [TypeSyn (module,name) visibility [Type varaibles] TypeExpr)] (Probably not useful)
--    fs = [Func (module,name) arity visibility type rule]
--    ops = [Op (module,name) fixity precidence] (probably not useful)
toICurry :: [ConsList] -> F.Prog -> I.IModule
toICurry (Prog n imports types functions _) = IModule name imports (map toIType types) (map toIFunction functions)

toIType :: [ConsList] -> F.TypeDecl -> (I.IName, [I.IConstructor])
toIType (Type name _ _ constructors) = (name, map toConstructor constructors)
 where 
  toConstructor (Cons cname arity _ _) = IConstructor cname arity

toIFunction :: [ConsList] -> F.FuncDecl -> I.IFunction
toIFunction (Func name arity _ _ rule) = IFunction name arity (toBody name rule)

toBody :: [ConsList] -> F.QName -> F.FRule -> [I.Statement]
toBody _  _    (External x)  = [IExternal x]
toBody cs name (Rule vars exp) = (zipWith declare vars [1..]) ++ toStmt expr
 where
  declare var position = Declare (Variable var (ILhs (name,position)))

toStmts :: [ConsList] -> F.Expr -> [I.Statement]
toStmts cs exp
  = case exp of
      Let _ _     -> toLet cs exp 
      Typed e2 _  -> toSmtms cs e2
      Free vs e2  -> map freeVar vs ++ makeStmts cs e2
      Case _ e bs -> if isLitBranch bs 
                     then makeLitPattern bs e
                     else makeADTPattern cs bs e
      e           -> [Return (toExpr cs e)]

freeVar :: Int -> I.Statement
freeVar x = Declare (Variable x IFree)

toLet :: [ConsList] -> F.Expr -> [I.Statement]
toLet cs (Let [] exp) = toStmts cs exp
toLet cs (Let ((v,e):vars) exp) = Assign v (bindExpr e) : decls ++ fill e 
  where decls = map (\(x,e) -> Assign x (toExpr e)) vars

toExpr :: F.Expr -> I.Expression
toExpr (F.Var x) = Variable x
toExpr (F.Lit (F.Intc x)   = BuiltinLit (BInt x)
toExpr (F.Lit (F.Charc x)  = BuiltinLit (BChar x)
toExpr (F.Lit (F.Floatc x) = BuiltinLit (BFloat x)
toExpr (Comb FuncCall n es) = Applic False n $ map toExpr es
toExpr (Or e1 e2) = IOr (toExpr e1) (toExpr e2)
toExpr (Typed e) = toExpr e



toBindExpr Expr -> I.Expression
toBindExpr (Comb ct n es) = Applic n (map toExpr es)

fill :: [Name] -> Path -> Expr -> [I.Stmt]
fill v vs ps (Lit _) = []
fill v vs ps (Typed e) = fill e
fill v vs ps (Comb _ _ es) = concat (zipWith (\p e -> fill vs (p:ps) e) [1..] es)
fill v vs ps (Var x) = if x `elem` vs then [IFill v ps x] else []

toLitCase :: [ConsList] -> F.Expr -> [I.Statement]
toConsCase :: [ConsList] -> F.Expr -> [I.Statement]





