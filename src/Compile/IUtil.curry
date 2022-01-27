
module Compile.IUtil (FunPos, updateVars, descend, pathName,
                      iname, isExternal, isVarAsgn,
                      litBlock, litType, litBranchValue, 
                      litBranchType, litPatterns, isPrimitive,
                      getPathName, getPath, pathList, pathName,
                      --replace,
                      getTag, toName,
                      nameMangle, mangle, uninstance) where

import Util (Path,(++-),(&&-),mergeMap)
import ICurry.Types 
import List (intercalate, isPrefixOf, splitOn)
import Sort (sort)

type FunPos = (Path, [IVarIndex], IQName)

updateVars :: [IVarDecl] -> IStatement -> FunPos -> FunPos
updateVars xs s (p, vs, n) = (p, newVars, n)
 where newVars = (sort (map varFromDecl xs) ++- vs) &&- varsInStmt s

descend :: Int -> FunPos -> FunPos
descend b (p, vs, n) = (p++[b],vs,n)

pathName :: Path -> String
pathName = intercalate "_" . map show 

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
      else (reverse path, usedVars, c)
           : concat [getPath (i:path) vs b | (IConsBranch (_,_,i) _ b) <- bs]
 where ds' = sort (map varFromDecl ds)
       vs = vars ++- ds'
       usedVars = vs &&- (varsInStmt c)

-- because collapsing rules need to save at their current state
getPath path vars (IBlock ds _ ret@(IReturn e))
 | isVar e   = [(reverse path, usedVars, ret)] 
 | otherwise = []
  where ds' = sort (map varFromDecl ds)
        usedVars = (vars ++- ds') &&- (varsInStmt ret)

-----------------------------------------------
-- general traversal functions
-----------------------------------------------

iname :: IProg -> String
iname (IProg name _ _ _) = name

isExternal :: IFuncBody -> Bool
isExternal (IExternal _) = True
isExternal (IFuncBody _) = False

isVarAsgn :: IAssign -> Bool
isVarAsgn (IVarAssign _ _)    = True
isVarAsgn (INodeAssign _ _ _) = False


isVar :: IExpr -> Bool
isVar (IVar _)           = True
isVar (IVarAccess _ _)   = True
isVar (ILit _)           = False
isVar (IOr _ _)          = False
isVar (IFCall _ _)       = False
isVar (ICCall _ _)       = False
isVar (IFPCall _ _ _)    = False
isVar (ICPCall _ _ _)    = False

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

isPrimitive :: [IConsBranch] -> Bool
isPrimitive [] = False
isPrimitive (IConsBranch c _ _ : _) = c == ("","int",0) ||
                                      c == ("","char",0) ||
                                      c == ("","float",0)

litPatterns :: [IConsBranch] -> [ILiteral]
litPatterns (_:bs) = map pattern bs
 where pattern (IConsBranch _ _ (IBlock _ _ (IReturn (ILit l)))) = l

litBranchType :: ILitBranch -> String
litBranchType (ILitBranch l _)  = litType l

litBranchValue :: ILitBranch -> String
litBranchValue (ILitBranch (IInt   v) _)  = show v
litBranchValue (ILitBranch (IFloat v) _)  = show v
litBranchValue (ILitBranch (IChar  v) _)  = show v

litType :: ILiteral -> String
litType (IInt   _)  = "int"
litType (IFloat _)  = "float"
litType (IChar  _)  = "char"

litBlock :: ILitBranch -> IBlock
litBlock (ILitBranch _ b)  = b

----------------------------------------------
-- substitution
----------------------------------------------

--replace :: Maybe (IVarIndex,IVarIndex) -> IStatement -> IStatement
--replace Nothing       e                = e
--replace (Just (r,nr)) IExempt          = IExempt
--replace (Just (r,nr)) (IReturn e)      = IReturn (replaceExpr r nr e)
--replace (Just (r,nr)) (ICaseLit  v bs) = ICaseLit (repVar r nr v) (map (replaceLitBranch r nr) bs)
--replace (Just (r,nr)) (ICaseCons v bs) = ICaseCons (repVar r nr v) (map (replaceConsBranch r nr) bs)
--
--repVar :: IVarIndex -> IVarIndex -> IVarIndex -> IVarIndex
--repVar r nr v = if v == r then nr else v
--
--replaceConsBranch :: IVarIndex -> IVarIndex -> IConsBranch -> IConsBranch
--replaceConsBranch r nr (IConsBranch c a b) = IConsBranch c a (replaceBlock r nr b)
--
--replaceLitBranch :: IVarIndex -> IVarIndex -> ILitBranch -> ILitBranch
--replaceLitBranch r nr (ILitBranch l b) = ILitBranch l (replaceBlock r nr b)
--
--replaceBlock :: IVarIndex -> IVarIndex -> IBlock -> IBlock
--replaceBlock r nr (IBlock vs as s) = IBlock vs (map (replaceAsgn r nr) as) (replace (Just (r,nr)) s)
--
--replaceAsgn :: IVarIndex -> IVarIndex -> IAssign -> IAssign
--replaceAsgn r nr (IVarAssign  v e)     = IVarAssign v (replaceExpr r nr e)
--replaceAsgn r nr (INodeAssign v ixs e) = INodeAssign v ixs (replaceExpr r nr e)
--
--replaceExpr :: IVarIndex -> IVarIndex -> IExpr -> IExpr
--replaceExpr r nr (IVar v)          = IVar (repVar r nr v)
--replaceExpr r nr (IVarAccess v xs) = IVarAccess (repVar r nr v) xs
--replaceExpr r nr (ILit l)          = ILit l
--replaceExpr r nr (IFCall f es)     = IFCall f (map (replaceExpr r nr) es)
--replaceExpr r nr (ICCall c es)     = ICCall c (map (replaceExpr r nr) es)
--replaceExpr r nr (IFPCall f n es)  = IFPCall f n (map (replaceExpr r nr) es)
--replaceExpr r nr (ICPCall c n es)  = ICPCall c n (map (replaceExpr r nr) es)
--replaceExpr r nr (IOr e1 e2)       = IOr (replaceExpr r nr e1) (replaceExpr r nr e2)

----------------------------------------------------
-- Name mangling
----------------------------------------------------

getTag :: IQName -> Int
getTag (_,_,t) = t

-- It's easier to read debugging information without the module names.
-- but this is technically wrong.
toName :: IQName -> Maybe Path -> String
toName (_,f,_) Nothing = f
toName (_,f,_) (Just p) = f ++ "@" ++ show p

-- there's a lot of characters that aren't valid in C
-- We can't to have a consistent way of dealing with them
-- I'll use the formal _CH where CH will represent the character
-- that means that _ will be _US
-- Even though that makes _ harder to read, it will make a lot of other characters
-- much easier to read

mangleChar :: Char -> String
mangleChar c = case lookup c special of
                    Nothing  -> [c]
                    Just rep -> rep
 where special = [('(',  "_LP"), (')', "_RP"), ('[', "_LB"), (']', "_RB"), (',', "_CM"), 
                  ('\'', "_SQ"), ('_', "_US"), ('~', "_TI"), ('!', "_EX"), ('@', "_AT"), 
                  ('#',  "_HT"), ('$', "_DL"), ('%', "_PC"), ('^', "_CA"), ('&', "_AN"), 
                  ('*',  "_ST"), ('+', "_PL"), ('-', "_MI"), ('=', "_EQ"), ('<', "_LT"), 
                  ('>',  "_GT"), (':', "_CO"), ('?', "_QU"), ('.', "_DO"), ('/', "_FS"), 
                  ('\\', "_BS"), ('|', "_OR")] 

nameMangle :: String -> String
nameMangle = concatMap mangleChar

mangle :: IQName -> String
mangle (q,n,_) = nameMangle q ++ "_" ++ nameMangle n

uninstance :: IQName -> String
uninstance (_,n,_)
 | isPrefixOf "_inst" n = "instance of " ++ unclass (ps!!1) ++ " for " ++ unclass (ps!!2)
 | isPrefixOf "_impl" n = "implementation of " ++ (ps!!1) ++ " in " ++ 
                           unclass (ps!!2) ++ " for " ++ unclass (ps!!3)
 | isPrefixOf "_def" n  = "default for " ++ unclass (ps!!1) ++ " in " ++ unclass (ps!!2)
 | otherwise            = n
  where ps = splitOn "#" n
        unclass s
         | '.' `elem` s = tail (dropWhile (/='.') s)
         | otherwise    = s
