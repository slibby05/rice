
module FlatUtils.FunTable (exempt,  DataTable, empty,   fillTable, 
                           addType, getType,   getCons, fillCons, 
                           showTable) where

import FlatCurry.Types
import qualified Data.Map as M
--                           vars   e     deterministic  inlinable
type FunTable = M.Map QName ([Var], Expr, Bool,          Bool)
