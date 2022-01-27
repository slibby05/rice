module Compile.ToC (toSource, writeMain) where

import Compile.ToC_normal (funSource_base, funSource_cases)
import Compile.ToC_RET (funSource_RET)

import Compile.C
import Compile.IUtil
import ICurry.Types

----------------------------------------------------
-- main.c file
----------------------------------------------------

writeMain :: String -> String -> IO ()
writeMain file name 
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
      "field True;",
      "field False;",
      "field Nil;",
      "field Num[256];",
      "",
      "void makeCrap()",
      "{",
      "  True.n = (Node*)alloc(sizeof(Node));",
      "  True.n->symbol = &Prelude_True_symbol;",
      "  True.n->missing = 0;",
      "",
      "  False.n = (Node*)alloc(sizeof(Node));",
      "  False.n->symbol = &Prelude_False_symbol;",
      "  False.n->missing = 0;",
      "",
      "  Nil.n = (Node*)alloc(sizeof(Node));",
      "  Nil.n->symbol = &Prelude__LB_RB_symbol;",
      "  Nil.n->missing = 0;",
      "",
      "  for(int i = -127; i < 128; i++)",
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
