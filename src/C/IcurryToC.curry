import Icurry.ICurry as I

toC :: I.IModule -> String
toC (I.IModule  name imports cons funcs)
   = "#ifndef "++name++"_H\n" ++
     "#define "++name++"_H\n" ++
     concatMap (toCFunction cons) funcs ++
     "#endif //"++name++"_H\n"
 where structs

toCFunction :: I.IFunction -> String
toCFunction (I.IFunction (m,name) arity body)
  = "Node* "++m++"_"++name++"(Node* n)\n" ++
    "{\n"++
    concatMap toStmt body ++ 
    "}\n\n"


assign :: VarScope -> String
assign (ILhs (_, s))  = "= n->child["++s++"];"
assign (IVar n (_,s)) = " = v"++n++"->child["++s++"];"
assign IBind          = ";"
assign IFree          = ";"

toStmt :: I.Statement -> String
toStmt (IExternal s) = s++"();\n"
toStmt (Comment s) = "// "++s++"\n"
toStmt (Declare (Variable n v)) = "Node* v"++(show n)++(assign v)++"\n"
toStmt (Assign n e) = "v"++n++" = "++(makeNode e)++";\n"

toStmt (Fill n sucs m) = "v"++(show n)++" = v"++(show m)++ (foldl addChild sucs) ++";\n"
 where addChild x ((_,_),s) = x++"->child["++show s++"]"

toStmt (Return e) = "setNode(n, "++(makeNode e)++"->reduce(e));\n"++
                    "return n;"

toStmt (ATable a flex e cases) = "table = {&&fail, &&choice, &&oper, "++args getLabel cases++"};\n"++
                                 "Node* c = "++makeNode e ++ ";\n"
                                 "goto *"++c++"->tag;\n"++
                                 "fail: setNode(n,c);\n"++
                                 "      return n;\n"++
                                 "choice: pushBack(n,c->child[1]);\n"++
                                 "        c = c->child[0];\n"++
                                 "        goto *c->tag;\n"++
                                 "oper:   c->reduce(c);\n"++
                                 "        goto *"++c++"->tag;\n"++
                                 concatMap makeCase cases

makeCase :: (Name,[Stmt]) -> String
makeCase (ctr, stmts) = ctr++":\n" ++ concatMap toStmt stmts

getLabel :: (Name,[Stmt]) -> String
getLabel (ctr, _) = "&&"++ctr

toStmt (BTable a flex e cases = "table = {&&fail, &&choice, &&oper, "++args getLitLabel cases++"};\n"++
                                 "Node* c = "++makeNode e ++ ";\n"
                                 "goto *"++c++"->tag;\n"++
                                 "fail: setNode(n,c);\n"++
                                 "      return n;"++
                                 "choice: pushBack(n,c->child[1]);\n"++
                                 "        c = c->child[0];\n"++
                                 "        goto *c->tag;\n"++
                                 "oper:   c->reduce(c);\n"++
                                 "        goto *"++c++"->tag;\n"
                                 concatMap makeLitCase cases

makeLitCase :: (BuiltinLit, [Stmt]) -> String
makeLitCase (Bint i, stmts) = "I_"++i++":\n" ++ concatMap toStmt stmts
makeLitCase (Bfloat f, stmts) = "F_"++f++":\n" ++ concatMap toStmt stmts
makeLitCase (Bchar c, stmts) = "C_"++c++":\n" ++ concatMap toStmt stmts

getLitLabel :: (BuiltinLit, [Stmt]) -> String
getLitLabel (BInt i, _) = "&&I_"++i
getLitLabel (BFloat f, _) = "&&F_"++f
getLitLabel (BChar c, _) = "&&C_"++c

args :: (a -> String) -> [a] -> String
args f = intersperse ", " . map f

-- in Applic true is constructor, false is function
makeExpr :: I.Expression -> String
makeExpr Exempt                         = "make_failed()"
makeExpr (Reference n)                  = "v"++show n++""
makeExpr (BuiltinVariant (Bint i))      = "make_int("++show i++")"
makeExpr (BuiltinVariant (Bfloat f))    = "make_float("++show f++")"
makeExpr (BuiltinVariant (Bchar c))     = "make_char("++show c++")"
makeExpr (Applic _ n es)                = makeCall 0 n es
makeExpr (PartApplic x (Applic _ n es)) = makeCall x n es
makeExpr (IOr e1 e2)                    = "make_choice("++makeExpr e1 ++ "," ++ makeExpr e2++")"

makeCall :: Int -> I.IName -> [Expr] -> String
makeCall x (m,n) es
 | n == 0    = "make_"++n++"("++args++")"
 | otherwise = "make"++show x++"_"++n++"("++ args++")"
  where args = intersperse "," (concatMap toExpr es)
