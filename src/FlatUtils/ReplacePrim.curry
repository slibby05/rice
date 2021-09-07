
module FlatUtils.ReplacePrim (ignoredPrimOps, primOps) where

import ICurry.Types (IQName)
import List (intercalate, splitOn)
import FlatCurry.Types
import FlatCurry.Goodies
import Data.Map (Map, fromList)
import Util
import Debug

ignoredPrimOps :: [IQName]
ignoredPrimOps = [("Prelude", "prim_eqChar",            0),
                  ("Prelude", "prim_eqInt",             0),
                  ("Prelude", "prim_eqFloat",           0),
                  ("Prelude", "prim_ltEqChar",          0),
                  ("Prelude", "prim_ltEqInt",           0),
                  ("Prelude", "prim_ltEqFloat",         0),
                  ("Prelude", "prim_ord",               0),
                  ("Prelude", "prim_chr",               0),
                  ("Prelude", "prim_Int_plus",          0),
                  ("Prelude", "prim_Int_minus",         0),
                  ("Prelude", "prim_Int_times",         0),
                  ("Prelude", "prim_Int_div",           0),
                  ("Prelude", "prim_Int_mod",           0),
                  ("Prelude", "prim_Int_quot",          0),
                  ("Prelude", "prim_Int_rem",           0),
                  ("Prelude", "prim_negateFloat",       0),
                  ("Prelude", "prim_readFileContents",  0),
                  ("Prelude", "prim_readNatLiteral",    0),
                  ("Prelude", "prim_readFloatLiteral",  0),
                  ("Prelude", "prim_readCharLiteral",   0),
                  ("Prelude", "prim_readStringLiteral", 0),
                  ("Prelude", "prim_Float_plus",        0),
                  ("Prelude", "prim_Float_minus",       0),
                  ("Prelude", "prim_Float_times",       0),
                  ("Prelude", "prim_Float_div",         0),
                  ("Prelude", "prim_i2f",               0),
                  ("Prelude", "apply",                  0)]


primOps :: Map IQName ([String] -> String, [String] -> [String], String) 
primOps = fromList [-- equality operations
                    ( ("Prelude","primEqChar",0),  
                         (\[x,y] -> x++" == "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \[x,y] -> cmpBlock "==" x y, 
                          "c")),
                    ( ("Prelude","primEqInt",0),  
                         (\[x,y] -> x++" == "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \[x,y] -> cmpBlock "==" x y, 
                          "i")),
                    ( ("Prelude","primEqFloat",0),  
                         (\[x,y] -> x++" == "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \[x,y] -> cmpBlock "==" x y,
                          "f")),
                    ( ("Prelude","primLtEqChar",0),  
                         (\[x,y] -> x++" <= "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \[x,y] -> cmpBlock "<=" x y,
                          "c")),
                    ( ("Prelude","primLtEqInt",0),  
                         (\[x,y] -> x++" <= "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \[x,y] -> cmpBlock "<=" x y,
                          "i")),
                    ( ("Prelude","primLtEqFloat",0),  
                         (\[x,y] -> x++" <= "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \[x,y] -> cmpBlock "<=" x y,
                          "f")),

                    -- conversion operations
                    ( ("Prelude","primOrd",0),  
                         (\[c] -> "(field){.i = "++c++"}",
                          \[c] -> ["root.i = (long)"++c++";"],
                          "c")),
                    ( ("Prelude","primChr",0),  
                         (\[i] -> "(field){.c = "++i++"}",
                          \[i] -> ["root.c = (unsigned long)"++i++";"],
                          "i")),
                    ( ("Prelude","primI2F",0),
                         (\[i] -> "(field){.f = "++i++"}",
                          \[i] -> ["root.f = (float)"++i++";"],
                          "i")),

                    -- Integer arithmetic
                    ( ("Prelude","primAddInt",0),  
                         (\[x,y] -> "(field){.i = "++x++" + "++y++"}",
                          \[x,y] -> ["root.i = "++x++" + "++y++";"],
                          "i")),
                    ( ("Prelude","primSubInt",0),
                         (\[x,y] -> "(field){.i = "++x++" - "++y++"}",
                          \[x,y] -> ["root.i = "++x++" - "++y++";"],
                          "i")),
                    ( ("Prelude","primMulInt",0),
                         (\[x,y] -> "(field){.i = "++x++" * "++y++"}",
                          \[x,y] -> ["root = "++x++" * "++y++";"],
                          "i")),
                    ( ("Prelude","primDivInt",0),
                         (\[x,y] -> "(field){.i = "++x++" / "++y++"}",
                          \[x,y] -> ["root = "++x++" / "++y++";"],
                          "i")),
                    ( ("Prelude","primModInt",0),
                         (\[x,y] -> "(field){.i = "++x++" % "++y++"}",
                          \[x,y] -> ["root.i = "++x++" % "++y++";"],
                          "i")),
                    ( ("Prelude","primQuotInt",0), 
                         (\[x,y] -> "(field){.i = "++x++"<0 ? -(-"++x++"/"++y++") : "++x++"/"++y++"}",
                          \[x,y] -> ["root.i = "++x++"<0 ? -(-"++x++"/"++y++") : "++x++"/"++y++";"],
                          "i")),
                    ( ("Prelude","primRemInt",0),  
                         (\[x,y] -> "(field){.i = "++x++"<0 ? -(-"++x++"%"++y++") : "++x++"%"++y++"}",
                          \[x,y] -> ["root.i = "++x++"<0 ? -(-"++x++"%"++y++") : "++x++"%"++y++";"],
                          "i")),

                    -- Floating Point arithmetic
                    ( ("Prelude","primAddFloat",0),  
                         (\[x,y] -> "(field){.f = "++x++" + "++y++"}",
                          \[x,y] -> ["root.f = "++x++" + "++y++";"],
                          "f")),
                    ( ("Prelude","primSubFloat",0),
                         (\[x,y] -> "(field){.f = "++x++" - "++y++"}",
                          \[x,y] -> ["root.f = "++x++" - "++y++";"],
                          "f")),
                    ( ("Prelude","primMulFloat",0),
                         (\[x,y] -> "(field){.f = "++x++" * "++y++"}",
                          \[x,y] -> ["root.f = "++x++" * "++y++";"],
                          "f")),
                    ( ("Prelude","primDivFloat",0),
                         (\[x,y] -> "(field){.f = "++x++" / "++y++"}",
                          \[x,y] -> ["root.f = "++x++" / "++y++";"],
                          "f")),
                    ( ("Prelude","primNegateFloat",0),
                         (\[x] -> "(field){.f = -"++x++"}",
                          \[x] -> ["root.f = -"++x++";"],
                          "f")),

                    ( ("Prelude","primPutChar",0),
                         (\[c] -> "(putchar("++c++"), make_Prelude__LP_RP(0))",
                          \[c] -> ["putchar("++c++");", "set_Prelude__LP_RP(root,0);"],
                          "c")),

                    ( ("","int",0),  
                         (\[i] -> "make__int("++i++", 0)",
                          \[i] -> ["set__int(root, "++i++", 0);"],
                          "i")),
                    ( ("","char",0),  
                         (\[c] -> "make__char("++c++", 0)",
                          \[c] -> ["set__char(root, "++c++", 0);"],
                          "c")),
                    ( ("","float",0),  
                         (\[f] -> "make__float("++f++", 0)",
                          \[f] -> ["set__float(root, "++f++", 0);"],
                          "f"))]
 where cmpBlock op x y = ["if("++x++" "++op++" "++y++")",
                          "{",
                          "    set_Prelude_True(root,0);",
                          "}",
                          "else",
                          "{",
                          "    set_Prelude_False(root,0);",
                          "}"]

