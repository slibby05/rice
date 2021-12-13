module Compile.C where

import ICurry.Types 
import List (intercalate, isPrefixOf, splitOn, intersect)
import Compile.IUtil (mangle)

type CType = String
type CName = String
type CStmt = String
type CExpr = String
type CFunction = String

tab :: Int -> String -> String
tab n s
 | n == 0    = s
 | otherwise = "  " ++ tab (n-1) s

-------------------------------------------------------------------
-- Operators
-------------------------------------------------------------------

infixl 8 .*, ./
infixl 7 .+, .-
infix  6 .==, .!=, .<, .>, .<=, .>=
infixr 5 .&
infixr 4 .|
infixr 3 .&&
infixr 2 .||
infixl 1 .=, .|=


(.*) :: CExpr -> CExpr -> CExpr
x .* y = x ++ " * " ++ y

(./) :: CExpr -> CExpr -> CExpr
x ./ y = x ++ " / " ++ y

(.+) :: CExpr -> CExpr -> CExpr
x .+ y = x ++ " + " ++ y

(.-) :: CExpr -> CExpr -> CExpr
x .- y = x ++ " - " ++ y

(.==) :: CExpr -> CExpr -> CExpr
x .== y = x ++ " == " ++ y

(.!=) :: CExpr -> CExpr -> CExpr
x .!= y = x ++ " != " ++ y

(.<=) :: CExpr -> CExpr -> CExpr
x .<= y = x ++ " <= " ++ y

(.>=) :: CExpr -> CExpr -> CExpr
x .>= y = x ++ " >= " ++ y

(.<) :: CExpr -> CExpr -> CExpr
x .< y = x ++ " < " ++ y

(.>) :: CExpr -> CExpr -> CExpr
x .> y = x ++ " > " ++ y

(.&&) :: CExpr -> CExpr -> CExpr
x .&& y = x ++ " && " ++ y

(.||) :: CExpr -> CExpr -> CExpr
x .|| y = x ++ " || " ++ y

(.|=) :: CExpr -> CExpr -> CExpr
x .|= y = x ++ " |= " ++ y

(.|) :: CExpr -> CExpr -> CExpr
x .| y = x ++ " | " ++ y

(.&) :: CExpr -> CExpr -> CExpr
x .& y = x ++ " & " ++ y

(.=) :: CName -> CExpr -> CExpr
x .= e = x ++ " = " ++ e

-------------------------------------------------------------------------
-- Preprocessor
-------------------------------------------------------------------------

cinclude :: CName -> CStmt
cinclude file = "#include \"" ++ file ++ ".h\""

cdefine :: CName -> Int -> CStmt
cdefine name val = "#define " ++ name ++ " " ++ show val

children :: CName -> [Int] -> CExpr
children node xs = foldl childAt node xs
 where childAt x y = "child_at("++x++", "++show y++")"

child_t :: CType -> CName -> CExpr
child_t "int" node   = "child_at_i("++node++",0)"
child_t "char" node  = "child_at_c("++node++",0)"
child_t "float" node = "child_at_f("++node++",0)"

conv_t :: CType -> CName -> CExpr
conv_t "int" node   = "((field)"++node++").i"
conv_t "char" node  = "((field)"++node++").c"
conv_t "float" node = "((field)"++node++").f"

toUnion :: CType -> CExpr -> CExpr
toUnion "int" exp   = "(field)(long)("++exp++")"
toUnion "char" exp  = "(field)(unsigned long)("++exp++")"
toUnion "float" exp = "(field)(double)("++exp++")"

-------------------------------------------------------------------------
-- statements
-------------------------------------------------------------------------

comment :: String -> CStmt
comment str = "// " ++ str

big_comment :: [String] -> [CStmt]
big_comment strs = ["/*"] ++ map (" * "++) strs ++ [" */"]

call :: CName -> [CExpr] -> CExpr
call name es = name ++ cargs es

scall :: CName -> [CExpr] -> CStmt
scall name es = name ++ cargs es ++ ";"

retCall :: CName -> [CExpr] -> CStmt
retCall name es = "return " ++ name ++ cargs es ++ ";"

calloc_n :: Int -> CExpr
calloc_n num = "(Node*)calloc("++show num++", sizeof(Node))"
calloc_f :: Int -> CExpr
calloc_f num = "(field*)calloc("++show num++", sizeof(field))"


creturn :: CStmt
creturn = "return;"

cbreak :: CStmt
cbreak = "break;"

cblock :: [CStmt] -> [CStmt]
cblock b = ["{"] ++ map (tab 1) b ++ ["}"]

cif :: CExpr -> [CStmt] -> [CStmt]
cif c b = ["if(" ++ c ++ ")"] ++
          cblock b


cifCase :: [(CExpr, [CStmt])] -> [CStmt] -> [CStmt]
cifCase ((c,b):bs) defaultBlock = cif c b ++ celseCase bs
 where
    celseCase ((c,b):bs) = ["else if(" ++ c ++ ")"] ++
                           cblock b ++
                           celseCase bs
    celseCase []         = ["else"] ++ 
                           cblock defaultBlock



cifElse :: CExpr -> [CStmt] -> [CStmt] -> [CStmt]
cifElse c t f = cif c t ++ 
                ["else"] ++
                cblock f

cwhile :: CExpr -> [CStmt] -> [CStmt]
cwhile c b = ["while(" ++ c ++ ")"] ++
             cblock b

cswitch :: CExpr -> [[CStmt]] -> [CStmt]
cswitch e bs = ["switch("++ e ++ ")"] ++
               cblock (concat bs)

ccase :: CExpr -> [CStmt] -> [CStmt]
ccase lbl body = ["case " ++ lbl ++ ":"] ++
                 cblock body

-------------------------------------------------------------------------
-- functions
-------------------------------------------------------------------------

cfunDefn :: CType -> CName -> [(CType,CName)] -> CExpr
cfunDefn ret name ps = ret ++ " " ++ name ++ cparams ps

hfunDefn :: CType -> CName -> [(CType,CName)] -> [CStmt]
hfunDefn ret name ps = ["__attribute__((always_inline)) ",
                        "static inline " ++ ret ++ " " ++ name ++ cparams ps ]


cfunDecl :: CType -> CName -> [(CType,CName)] -> CStmt
cfunDecl ret name ps = cfunDefn ret name ps ++ ";"

nl :: [CStmt]
nl = [""]

field :: IVarIndex -> CType
field v = "field " ++ (var v)

list :: [CExpr] -> CExpr
list = intercalate ", "

cargs :: [CExpr] -> CExpr
cargs xs = "(" ++ list xs ++ ")"

cparams ps = "(" ++ list (map param ps) ++ ")"
 where param (t,x) = t ++ " " ++ x

carray :: [CExpr] -> CExpr
carray xs = "{" ++ list xs ++ "}"

quote :: CExpr -> CExpr
quote str = "\"" ++ str ++ "\""

---------------------------------------------------
-- curry specific
---------------------------------------------------

hnf :: IQName -> CName
hnf n = mangle n ++ "_hnf"

ret_hnf :: IQName -> CName
ret_hnf n = mangle n ++ "_RET_hnf"

tag :: IQName -> String
tag f = mangle f ++ "_TAG"

var :: Int -> CExpr
var v
 | v == 0    = "root"
 | isRET v   = "RET"
 | otherwise = "v"++show v

fwd :: Int -> CExpr
fwd v = var v ++ if v == 0 then "" else "_forward"

hasRET :: [IVarIndex] -> Bool
hasRET = not . null . filter (<(-1))

isRET :: IVarIndex -> Bool
isRET v = v < (-1)

symbol :: String -> CExpr
symbol v = v ++ ".n->symbol"

symhnf :: CExpr -> CExpr
symhnf v = "HNF("++v++")"

symtag :: CExpr -> CExpr
symtag v = v ++ ".n->symbol->tag"

symname :: CExpr -> CExpr
symname v = v ++ ".n->symbol->name"

symarity :: CExpr -> CExpr
symarity v = v ++ ".n->symbol->arity"

nondet :: CExpr -> CExpr
nondet v = v ++ ".n->nondet"

missing :: CExpr -> CExpr
missing v = v ++ ".n->missing"

nullf :: CExpr
nullf = "(field)(Node*)NULL"

make_restore :: IVarIndex -> CStmt
make_restore v = (var (abs v) ++ ".n") .= scall "make_restore" [var (abs v)++".n"]

