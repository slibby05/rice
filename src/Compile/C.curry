module Compile.C where

import ICurry.Types 
import List (intercalate)


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

infixl 7 .*, ./
infixl 6 .+, .-
infix  4 .==, .!=, .<, .>, .<=, .>=
infixr 3 .&&
infixr 2 .||
infixl 1 .=


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

(.=) :: CName -> CExpr -> CExpr
x .= e = x ++ " = " ++ e

-------------------------------------------------------------------------
-- Preprocessor
-------------------------------------------------------------------------

cinclude :: CName -> CStmt
cinclude file = "#include \"" ++ file ++ ".h\""

cdefine :: CName -> Int -> CStmt
cdefine name val = "#define " ++ name ++ " " ++ show val

children :: CName -> [Int] -> CStmt
children node xs = foldl childAt node xs
 where childAt x y
        | y < 3 =  x ++ "->children[" ++ show y ++ "]"
        | otherwise = ("((Node**)(" ++ x ++ "->children[3]))[" ++ show (y-3) ++ "]")

-------------------------------------------------------------------------
-- statements
-------------------------------------------------------------------------

call :: CName -> [CExpr] -> CExpr
call name es = name ++ cargs es

scall :: CName -> [CExpr] -> CStmt
scall name es = name ++ cargs es ++ ";"

calloc :: Int -> CExpr
calloc num = "(Node*)calloc("++show num++", sizeof(Node))"


creturn :: CStmt
creturn = "return;"

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
cwhile c b = ["while (" ++ c ++ ")"] ++
             cblock b

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

nodePtr :: CType
nodePtr = "Node*"

list :: [CExpr] -> CExpr
list = intercalate ", "

cargs :: [CExpr] -> CExpr
cargs xs = "(" ++ list xs ++ ")"

cparams ps = "(" ++ list (map param ps) ++ ")"
 where param (t,x) = t ++ " " ++ x

carray :: [CExpr] -> CExpr
carray xs = "{" ++ list xs ++ "}"

ccast :: CType -> CExpr -> CExpr
ccast ctype e = "("++ctype++")"++e

---------------------------------------------------
-- curry specific
---------------------------------------------------

hnf :: IQName -> CName
hnf n = mangle n ++ "_hnf"

tag :: IQName -> String
tag f = mangle f ++ "_TAG"

var :: Int -> CExpr
var v
 | v == 0    = "root"
 | otherwise = "v"++show v


symbol :: String -> CExpr
symbol v = v ++ "->symbol"

symhnf :: CExpr -> CExpr
symhnf v = v ++ "->symbol->hnf(" ++ v ++ ")"

symtag :: CExpr -> CExpr
symtag v = v ++ "->symbol->tag"

symname :: CExpr -> CExpr
symname v = v ++ "->symbol->name"

symarity :: CExpr -> CExpr
symarity v = v ++ "->symbol->arity"

nondet :: CExpr -> CExpr
nondet v = v ++ "->nondet"

----------------------------------------------------
-- Name mangling
----------------------------------------------------

getTag :: IQName -> Int
getTag (_,_,t) = t

nameStr :: IQName -> String
nameStr (m,f,_) = "\"" ++ m ++ "." ++ f ++ "\""

-- there's a lot of characters that aren't valid in C
-- We can't to have a consistent way of dealing with them
-- I'll use the formal _CH where CH will represent the character
-- that means that _ will be _US
-- Even though that makes _ harder to read, it will make a lot of other characters
-- much easier to read

mangleChar :: Char -> String
mangleChar c
 | c == '('  = "_LP"
 | c == ')'  = "_RP"
 | c == '['  = "_LB"
 | c == ']'  = "_RB"
 | c == ','  = "_CM"
 | c == '\'' = "_SQ"
 | c == '_'  = "_US"
 | c == '~'  = "_TI"
 | c == '!'  = "_EX"
 | c == '@'  = "_AT"
 | c == '#'  = "_HT"
 | c == '$'  = "_DL"
 | c == '%'  = "_PC"
 | c == '^'  = "_CA"
 | c == '&'  = "_AN"
 | c == '*'  = "_ST"
 | c == '+'  = "_PL"
 | c == '-'  = "_MI"
 | c == '='  = "_EQ"
 | c == '<'  = "_LT"
 | c == '>'  = "_GT"
 | c == ':'  = "_CO"
 | c == '?'  = "_QU"
 | c == '.'  = "_DO"
 | c == '/'  = "_FS"
 | c == '|'  = "_OR"
 | c == '\\' = "_BS"
 | otherwise = [c]

nameMangle :: String -> String
nameMangle = concatMap mangleChar

mangle :: IQName -> String
mangle (q,n,_) = nameMangle q ++ "_" ++ nameMangle n
