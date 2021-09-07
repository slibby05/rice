module Compile.C where

import FlatUtils.FlatRewrite (Path)
import Util ((++-),(&&-),mergeMap)
import ICurry.Types 
import List (intercalate, isPrefixOf, splitOn, intersect)
import Sort (sort)


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

field :: CType
field = "field"

list :: [CExpr] -> CExpr
list = intercalate ", "

cargs :: [CExpr] -> CExpr
cargs xs = "(" ++ list xs ++ ")"

cparams ps = "(" ++ list (map param ps) ++ ")"
 where param (t,x) = t ++ " " ++ x

carray :: [CExpr] -> CExpr
carray xs = "{" ++ list xs ++ "}"

ccast :: CType -> CExpr -> CExpr
ccast "int" e = "(long)"++e
ccast "char" e = "(char)"++e
ccast "float" e = "*(double*)&"++e

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
nullf = "(field){.n = NULL}"

----------------------------------------------------------
-- get path
-- nondeterministically get's the path to a case block.
----------------------------------------------------------

getPathName :: IQName -> Path -> String
getPathName n p = mangle n ++ "_" ++ (concatMap (('_':) . show) p)

pathList :: IFuncBody -> [(Path, [IVarIndex], IStatement)]
pathList (IExternal _) = []
pathList (IFuncBody b) = getPath [] [] b

getPath :: Path -> [IVarIndex] -> IBlock -> [(Path, [IVarIndex], IStatement)]
getPath _    _    (IBlock _  _   IExempt)        = []

getPath path vars (IBlock ds _ c@(ICaseLit _ bs)) 
    = concat [getPath (i:path) (vars ++- ds') b | (i, ILitBranch _ b) <- zip [0..] bs]
 where ds' = sort (map varFromDecl ds)

getPath path vars (IBlock ds _ c@(ICaseCons v bs))
    = if v == -1 
      then concat [getPath (i:path) vs b | (IConsBranch (_,_,i) _ b) <- bs, i >= 0]
      else (reverse path, usedVars , c)
           : concat [getPath (i:path) vs b | (IConsBranch (_,_,i) _ b) <- bs]
 where ds' = sort (map varFromDecl ds)
       vs = vars ++- ds'
       usedVars = vs &&- (varsInStmt c)

-- because collapsing rules need to save at their current state
getPath path vars (IBlock ds _ ret@(IReturn e))
 | isVar e   = [(reverse path, usedVars, ret)] 
 | otherwise = []
  where isVar (IVar _)           = True
        isVar (IVarAccess _ _)   = True
        isVar (ILit _)           = False
        isVar (IOr _ _)          = False
        isVar (IFCall _ _)       = False
        isVar (ICCall _ _)       = False
        isVar (IFPCall _ _ _)    = False
        isVar (ICPCall _ _ _)    = False
        ds' = sort (map varFromDecl ds)
        usedVars = (vars ++- ds') &&- (varsInStmt ret)


varFromDecl :: IVarDecl -> IVarIndex
varFromDecl (IVarDecl  v) = v
varFromDecl (IFreeDecl v) = v

varsInStmt :: IStatement -> [IVarIndex]
varsInStmt IExempt          = []
varsInStmt (IReturn e)      = varsInExpr e
varsInStmt (ICaseLit  v bs) = [v] ++- mergeMap varsInLit bs
 where varsInLit (ILitBranch _ b) = varsInBlock b
varsInStmt (ICaseCons v bs) = [v] ++- mergeMap varsInCons bs
 where varsInCons (IConsBranch _ _ b) = varsInBlock b

varsInExpr :: IExpr -> [IVarIndex]
varsInExpr (IVar        v)      = [v]
varsInExpr (IVarAccess  v _)    = [v]
varsInExpr (ILit        _)      = []
varsInExpr (IFCall      _ es)   = mergeMap varsInExpr es
varsInExpr (ICCall      _ es)   = mergeMap varsInExpr es
varsInExpr (IFPCall     _ _ es) = mergeMap varsInExpr es
varsInExpr (ICPCall     _ _ es) = mergeMap varsInExpr es
varsInExpr (IOr         e1 e2)  = varsInExpr e1 ++- varsInExpr e2

varsInBlock :: IBlock -> [IVarIndex]
varsInBlock (IBlock _ as s) = mergeMap varsInAssign as ++-
                              varsInStmt s
 where varsInAssign (IVarAssign _ e)    = varsInExpr e
       varsInAssign (INodeAssign _ _ e) = varsInExpr e

replace :: Maybe (IVarIndex,IVarIndex) -> IStatement -> IStatement
replace Nothing       e                = e
replace (Just (r,nr)) IExempt          = IExempt
replace (Just (r,nr)) (IReturn e)      = IReturn (replaceExpr r nr e)
replace (Just (r,nr)) (ICaseLit  v bs) = ICaseLit (repVar r nr v) (map (replaceLitBranch r nr) bs)
replace (Just (r,nr)) (ICaseCons v bs) = ICaseCons (repVar r nr v) (map (replaceConsBranch r nr) bs)

repVar :: IVarIndex -> IVarIndex -> IVarIndex -> IVarIndex
repVar r nr v = if v == r then nr else v

replaceConsBranch :: IVarIndex -> IVarIndex -> IConsBranch -> IConsBranch
replaceConsBranch r nr (IConsBranch c a b) = IConsBranch c a (replaceBlock r nr b)

replaceLitBranch :: IVarIndex -> IVarIndex -> ILitBranch -> ILitBranch
replaceLitBranch r nr (ILitBranch l b) = ILitBranch l (replaceBlock r nr b)

replaceBlock :: IVarIndex -> IVarIndex -> IBlock -> IBlock
replaceBlock r nr (IBlock vs as s) = IBlock vs (map (replaceAsgn r nr) as) (replace (Just (r,nr)) s)

replaceAsgn :: IVarIndex -> IVarIndex -> IAssign -> IAssign
replaceAsgn r nr (IVarAssign  v e)     = IVarAssign v (replaceExpr r nr e)
replaceAsgn r nr (INodeAssign v ixs e) = INodeAssign v ixs (replaceExpr r nr e)

replaceExpr :: IVarIndex -> IVarIndex -> IExpr -> IExpr
replaceExpr r nr (IVar v)          = IVar (repVar r nr v)
replaceExpr r nr (IVarAccess v xs) = IVarAccess (repVar r nr v) xs
replaceExpr r nr (ILit l)          = ILit l
replaceExpr r nr (IFCall f es)     = IFCall f (map (replaceExpr r nr) es)
replaceExpr r nr (ICCall c es)     = ICCall c (map (replaceExpr r nr) es)
replaceExpr r nr (IFPCall f n es)  = IFPCall f n (map (replaceExpr r nr) es)
replaceExpr r nr (ICPCall c n es)  = ICPCall c n (map (replaceExpr r nr) es)
replaceExpr r nr (IOr e1 e2)       = IOr (replaceExpr r nr e1) (replaceExpr r nr e2)

----------------------------------------------------
-- Name mangling
----------------------------------------------------

getTag :: IQName -> Int
getTag (_,_,t) = t

--nameStr :: IQName -> Maybe Path -> String
--nameStr (m,f,_) Nothing = "\"" ++ m ++ "." ++ f ++ "\""
--nameStr (m,f,_) (Just p) = "\"" ++ m ++ "." ++ f ++ "@" ++ show p ++ "\""
-- It's easier to read debugging information without the module names.
-- but this is technically wrong.
nameStr :: IQName -> Maybe Path -> String
nameStr (_,f,_) Nothing = "\"" ++ f ++ "\""
nameStr (_,f,_) (Just p) = "\"" ++ f ++ "@" ++ show p ++ "\""

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

uninstance :: IQName -> String
uninstance (_,n,_)
 | isPrefixOf "_inst" n = "instance of " ++ unclass (ps!!1) ++ " for " ++ unclass (ps!!2)
 | isPrefixOf "_impl" n = "implementation of " ++ (ps!!1) ++ " in " ++ unclass (ps!!2) ++ " for " ++ unclass (ps!!3)
 | isPrefixOf "_def" n  = "default for " ++ unclass (ps!!1) ++ " in " ++ unclass (ps!!2)
 | otherwise            = n
  where ps = splitOn "#" n
        unclass s
         | '.' `elem` s = tail (dropWhile (/='.') s)
         | otherwise    = s
