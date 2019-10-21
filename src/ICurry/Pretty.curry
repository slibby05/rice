module ICurry.Pretty where
import Text.Pretty
import ICurry.Types


------------------------------------------------------------------------
-- options for pretty printer
------------------------------------------------------------------------

--- Options for pretty printing
--- @field indentWidth   - number of columns for indentation of substructures
--- @field qualMode      - Qualification mode of pretty printer
--- @field currentModule - Name of current module to be pretty-printed, used
---                        for proper qualification
data Options = Options
  { indentWidth   :: Int
  , qualMode      :: QualMode
  , currentModule :: String
  }


--- @cons QualNone      - no qualification, only unqualified names
--- @cons QualNoPrelude - qualify all imports except those from
---                       the module `Prelude`
--- @cons QualImports   - qualify all imports, including `Prelude`
--- @cons QualAll       - qualify all names
data QualMode = QualNone 
              | QualNoPrelude
              | QualImports 
              | QualAll
  deriving Eq

defaultOptions :: Options
defaultOptions = Options
  { indentWidth   = 2
  , qualMode      = QualNoPrelude
  , currentModule = ""
  }

-- if mod == "", then it's an internal name (like EXEMPT) so it's never qualified
-- other then that, this follows the specification in QualMode
qual :: Options -> Name -> Doc
qual opts (mod,name)
 | matches QualNone      [mod]           = text name
 | matches QualNoPrelude ["Prelude",cur] = text name
 | matches QualImports   ["Prelude"]     = text name
 | otherwise                             = text (mod ++ "." ++ name)
 where mode = qualMode opts
       cur  = currentModule opts
       matches qualmode exceptions = mode == qualmode && 
                                     not (mod `elem` exceptions)

indent :: Options -> Doc -> Doc
indent o d = nest (indentWidth o) d


------------------------------------------------------------------------
-- actual pretty printing code
------------------------------------------------------------------------


ppProg :: Options -> Program -> Doc
ppProg opts (Program name imports dataTypes funs) 
 = vsepBlank [text "module" <+> text name,
              ppImports imports,
              ppDatas options dataTypes,
              ppFuns  options funs]
  where options = opts { currentModule = name }

ppImports is = vsep $ map ppImport is
 where ppImport i = text "import" <+> text i 

ppDatas :: Options -> [Data] -> Doc
ppDatas opts ds = vsepBlank (map (ppData opts) ds)

ppData :: Options -> Data -> Doc
ppData opts (Data name cs) = indent opts $
                             (text "data" <+> qual opts name)
                             $$ ppCons opts cs

ppCons :: Options -> [Constr] -> Doc
ppCons opts cs = vsep $ zipWith (<+>) (equals : repeat bar)
                                      (map (ppCon opts) cs)
ppCon :: Options -> Constr -> Doc
ppCon opts (Constr name arity) = qual opts name <+> int arity


ppFuns :: Options -> [Fun] -> Doc
ppFuns opts fs = vsepBlank (map (ppFun opts) fs)

fun :: Options -> Name -> Doc
fun opts name = text "function" <+> qual opts name

local :: Int -> Doc
local x = text "v" <> int x

ppFun :: Options -> Fun -> Doc
ppFun opts (External name) = indent opts $ fun opts name $$
                                           text "EXTERNAL"

ppFun opts (Fun name block) = indent opts $ fun opts name $$ 
                                            ppBlock opts block

ppBlock :: Options -> Block -> Doc
ppBlock opts (Block ds as s) = vsep $ map (ppDecl opts) ds ++
                                      map (ppAsgn opts) as ++
                                      [ppStmt opts s]


ppDecl :: Options -> Decl -> Doc
ppDecl opts (Param n)   = text "param" <+> local n
ppDecl opts (Declare n) = text "declare" <+> local n
ppDecl opts (Free n)    = text "free" <+> local n

ppAsgn :: Options -> Asgn -> Doc
ppAsgn opts (v := e) = indent opts $ ppVar v <+> text ":=" <+> ppExp opts e

ppStmt :: Options -> Stmt -> Doc
ppStmt opts (Return e)  = indent opts $ text "return" <+> ppExp opts e
ppStmt opts Exempt      = text "EXEMPT"
ppStmt opts (Case v bs) = indent opts $ text "case" <+> local v <+> text "of" $$
                                        (vsep $ map (ppBranch opts) bs)


ppBranch :: Options -> Branch -> Doc
ppBranch opts (Branch n e) = qual opts n <+> text "->" <+> align (ppBlock opts e)
ppBranch opts (LitBranch l e) = ppLit l <+> text "->" <+> align (ppBlock opts e)

ppExp :: Options -> Exp -> Doc
ppExp opts (Var v)      = ppVar v
ppExp opts (Node l es)  = text "NODE" <+> tupled (ppLabel opts l : map (ppExp opts) es)
ppExp opts (Or e1 e2)   = ppExp opts e1 <+> text "?" <+> ppExp opts e2
ppExp opts (Lit l)      = ppLit l


ppLabel :: Options -> Label -> Doc
ppLabel _    (ConNode _ (_,c)) = text c
ppLabel opts (FunNode _ n)     = qual opts n

ppVar :: Var -> Doc
ppVar (Local i) = local i
ppVar (v :@ i)  = ppVar v <> brackets (int i)
ppVar Root      = text "ROOT"

ppLit :: Lit -> Doc
ppLit (LInt   i) = int i
ppLit (LFloat f) = float f
ppLit (LChar  c) = char c
