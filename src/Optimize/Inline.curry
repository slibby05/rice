{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

module Optimize.Inline where

import FlatCurry.Types
import FlatCurry.Goodies (isVar,caseBranches,branchPattern,patCons)
import FlatUtils.FlatRewrite
import FlatUtils.Gas
import FlatUtils.DataTable
import FlatUtils.FunTable
import Util
import Control.SetFunctions
import Graph
import List (delete, (\\))
