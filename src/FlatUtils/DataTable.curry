module FlatUtils.DataTable (exempt,  DataTable, empty,   fillTable, 
                            addType, getType,   getCons, fillCons, 
                            showTable) where

import FlatCurry.Types
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
type DataTable = (M.Map QName [QName], M.Map QName QName)

empty :: DataTable
empty = (M.empty,M.empty)

fillTable :: Prog -> DataTable -> DataTable
fillTable (Prog _ _ ts _ _) dt = addPrimitives $ foldr addType dt ts

addPrimitives :: DataTable -> DataTable
addPrimitives (tmap, cmap) = (M.insert ("Prelude","Int") [("","int")] $
                              M.insert ("Prelude","Char") [("","char")] $
                              M.insert ("Prelude","Float") [("","float")] tmap,
                              M.insert ("","int") ("Prelude","Int") $
                              M.insert ("","char") ("Prelude","Char") $
                              M.insert ("","float") ("Prelude","Float") cmap)

addType :: TypeDecl -> DataTable -> DataTable
addType (TypeSyn _ _ _ _) dt             = dt
addType (Type name _ _ cons) (tmap,cmap) = (M.insert name (map consName cons) tmap, 
                                            M.insertList (map consPair cons) cmap)
 where consName (Cons cname _ _ _) = cname
       consPair con = (consName con, name)

getType :: QName -> DataTable -> QName
getType cons (tmap,cmap) = M.findWithDefault cerror cons cmap
 where cerror = error $ "couldn't find constructor " ++ show cons

getCons :: QName -> DataTable -> [QName]
getCons dtype (tmap,cmap) = M.findWithDefault cerror dtype tmap
 where cerror = error $ "couldn't find data type " ++ show dtype

fillCons :: QName -> DataTable -> [QName]
fillCons cons cmap = getCons (getType cons cmap) cmap


showTable :: DataTable -> String
showTable (tmap,_) = concatMap showType (M.toList tmap)

showType :: (QName,[QName]) -> String
showType (t,[]) = "data " ++ showQ t ++ "\n\n"
showType (t,(c:cs)) = datat ++ "= " ++ showQ c ++ "\n" ++ 
                      concatMap (\x -> indent ++ "| " ++ showQ x ++ "\n") cs ++ "\n"
 where datat = "data " ++ showQ t ++ " "
       indent = map (const ' ') datat
       
showQ :: QName -> String
showQ (m,d) = m++"."++d
