module Compile.ToC (toSource, writeMain) where

import Compile.ToC_normal (funSource_base, funSource_cases)
import Compile.ToC_RET (funSource_RET)

import Compile.C
import Compile.IUtil
import ICurry.Types
import FlatUtils.DataTable (DataTable, constants)

----------------------------------------------------
-- main.c file
----------------------------------------------------

writeMain :: String -> String -> DataTable -> IO ()
writeMain file name dt
 = writeFile file $ unlines $
     ["#include <stdio.h>",
      cinclude "node",
      cinclude "stack",
      cinclude "runtime",
      cinclude "memory",
      cinclude name,
      "Stack* bt_stack;",
      "field RET;",
      "unsigned long mem;",
      "",
      "field Num[256];"] ++
      ["field "++mangle n++";" | n <- constants dt] ++
      ["",
      "void makeCrap()",
      "{"]++
      concat [["  "++mangle c++".n = (Node*)alloc(sizeof(Node));",
               "  "++mangle c++".n->symbol = &"++mangle c++"_symbol;",
               "  "++mangle c++".n->missing = 0;",
               "  "] | c <- constants dt] ++
      ["  for(int i = -127; i < 128; i++)",
      "  {",
      "      Num[i+127].n = (Node*)alloc(sizeof(Node));",
      "      Num[i+127].n->symbol = &int_symbol;",
      "      Num[i+127].n->missing = 0;",
      "      child_at_i(Num[i+127],0) = i;",
      "      child_at_i(Num[i+127],1) = INT_CTR;",
      "  }",
      "}",
      "",
      cfunDefn "int" "main" []] ++
      (cblock 
        ["bt_stack = new_stack();",
         "RET.n = (Node*)alloc(sizeof(Node));",
         "",
         "makeCrap();",
         "field root = make_"++(nameMangle name)++"_main(0);",
         "nf_all(root);",
         "return 0;"])


----------------------------------------------------
-- .c file
----------------------------------------------------

toSource :: IProg -> (String -> IO ()) -> (String -> IO ()) -> IO ()
toSource (IProg name imps _     funs) write append
 = do write $ unlines $ [cinclude name,
                         cinclude "debug",
                         cinclude "runtime"] ++
                        map cinclude imps ++
                        nl
      mapM_ (funSource append) funs

funSource :: (String -> IO ()) -> IFunction -> IO ()
funSource append (IFunction name _ _ _ body)
 | isExternal body = return ()
 | otherwise       = do append (unlines (funSource_base name body))
                        append (unlines (funSource_cases name body))
                        append (unlines (funSource_RET name body))
