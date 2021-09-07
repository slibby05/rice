module FlatUtils.DataTable (exempt,  DataTable, empty,   fillTable, 
                            addType, getType,   getCons, fillCons, 
                            getConstructor,
                            showTable) where

import FlatCurry.Types
import FlatUtils.FlatUtils (primType, primCon)
import qualified Data.Map as M

-- I need a structure to hold the mapping between
-- DataTypes and their constructors

-- This is going to have to be a bi-directional map
-- because I need to look up what the data type is from a signle constructor
-- example:
-- f True = 1
-- will be
-- f x = fcase x of
--    True -> 1

-- I need to fill this into
-- f x = fcase x of
--    True -> 1
--    False -> Exempt


-- This is not a valid name in flatcurry, so I don't have to worry about 
-- any name clashes
exempt :: Expr
exempt = Comb ConsCall ("","EXEMPT") []

-- DataTable = (type_map, constructor_map)
-- the type_map looks up the constructors for a type
-- constructor_map looks up the type for a constructor
type DataTable = (M.Map QName ([(QName,Int)]), M.Map QName QName)

empty :: DataTable
empty = (M.empty,M.empty)

fillTable :: Prog -> DataTable -> DataTable
fillTable (Prog _ _ ts _ _) dt = addPrimitives $ foldr addType dt ts

addPrimitives :: DataTable -> DataTable
addPrimitives (tmap, cmap) = (M.insert (primType "int")   [(primCon "int",   1)] $
                              M.insert (primType "char")  [(primCon "char",  1)] $
                              M.insert (primType "float") [(primCon "float", 1)] tmap,
                              M.insert (primCon "int")   (primType "int")   $
                              M.insert (primCon "char")  (primType "char")  $
                              M.insert (primCon "float") (primType "float") cmap)

addType :: TypeDecl -> DataTable -> DataTable
addType (TypeSyn _ _ _ _) dt             = dt
addType (Type name _ _ cons) (tmap,cmap) = (M.insert name (map consName cons) tmap, 
                                            M.insertList (map consPair cons) cmap)
 where consName (Cons cname arity _ _) = (cname,arity)
       consPair (Cons cname _ _ _) = (cname, name)

getType :: QName -> DataTable -> QName
getType cons (tmap,cmap) = M.findWithDefault cerror cons cmap
 where cerror = error $ "couldn't find constructor " ++ show cons

getCons :: QName -> DataTable -> [QName]
getCons dtype (tmap,cmap) = map fst $ M.findWithDefault cerror dtype tmap
 where cerror = error $ "couldn't find data type " ++ show dtype

fillCons :: QName -> DataTable -> [QName]
fillCons cons cmap = getCons (getType cons cmap) cmap

getConstructor :: TypeExpr -> DataTable -> [(QName,Arity)]
getConstructor (TVar _)         _        = []
getConstructor (FuncType _ _)   _        = []
getConstructor (TCons dtype _)  (tmap,_) = case M.lookup dtype tmap of
                                                Just [c] -> [c]
                                                _        -> []
getConstructor (ForallType _ _) _        = []


showTable :: DataTable -> String
showTable (tmap,_) = concatMap showType (M.toList tmap)

showType :: (QName,[(QName,Int)]) -> String
showType (t,[]) = "data " ++ showQ t ++ "\n\n"
showType (t,(c:cs)) = datat ++ "= " ++ showQa c ++ "\n" ++ 
                      concatMap (\x -> indent ++ "| " ++ showQa x ++ "\n") cs ++ "\n"
 where datat = "data " ++ showQ t ++ " "
       indent = map (const ' ') datat
       
showQ :: QName -> String
showQ (m,d) = m++"."++d
showQa :: (QName,Int) -> String
showQa (n,a) = showQ n ++ " : " ++ show a
