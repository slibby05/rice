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
      cinclude name,
      "Stack* bt_stack;",
      "field RET;",
      "",
      cfunDefn "int" "main" []] ++
      (cblock 
        ["bt_stack = new_stack();",
         "RET.n = (Node*)calloc(1, sizeof(Node));",
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
