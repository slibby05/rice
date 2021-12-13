
module Compile.PrimOps (ignoredPrimOps, primOps) where

import ICurry.Types (IQName)
import Data.Map (Map, fromList)
import Compile.C (CExpr, CStmt, cifElse, scall)

-- These are primitive operations that have been replaced
-- usually because there's a better way to do it with unboxing
-- but I can't just give new functions these low level names
-- or curry will compain.
-- So, We just pretend these functions don't exist.
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


primOps :: Map IQName ([CExpr] -> CExpr, CExpr -> [CExpr] -> [CStmt], String) 
primOps = fromList [-- equality operations
                    ( ("Prelude","primEqChar",0),  
                         (\[x,y] -> x++" == "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \root [x,y] -> cmpBlock root "==" x y, 
                          "c")),
                    ( ("Prelude","primEqInt",0),  
                         (\[x,y] -> x++" == "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \root [x,y] -> cmpBlock root "==" x y, 
                          "i")),
                    ( ("Prelude","primEqFloat",0),  
                         (\[x,y] -> x++" == "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \root [x,y] -> cmpBlock root "==" x y,
                          "f")),
                    ( ("Prelude","primLtEqChar",0),  
                         (\[x,y] -> x++" <= "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \root [x,y] -> cmpBlock root "<=" x y,
                          "c")),
                    ( ("Prelude","primLtEqInt",0),  
                         (\[x,y] -> x++" <= "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \root [x,y] -> cmpBlock root "<=" x y,
                          "i")),
                    ( ("Prelude","primLtEqFloat",0),  
                         (\[x,y] -> x++" <= "++y++" ? make_Prelude_True(0) : make_Prelude_False(0)",
                          \root [x,y] -> cmpBlock root "<=" x y,
                          "f")),

                    -- conversion operations
                    ( ("Prelude","primOrd",0),  
                         (\[c] -> "(field)(long)("++c++")",
                          \root [c] -> [root++".i = (long)"++c++";"],
                          "c")),
                    ( ("Prelude","primChr",0),  
                         (\[i] -> "(field)(unsigned long)("++i++")",
                          \root [i] -> [root++".c = (unsigned long)"++i++";"],
                          "i")),
                    ( ("Prelude","primI2F",0),
                         (\[i] -> "(field)(double)("++i++")",
                          \root [i] -> [root++".f = (float)"++i++";"],
                          "i")),

                    -- Integer arithmetic
                    ( ("Prelude","primAddInt",0),  
                         (\[x,y] -> "(field)(long)("++x++" + "++y++")",
                          \root [x,y] -> [root++".i = "++x++" + "++y++";"],
                          "i")),
                    ( ("Prelude","primSubInt",0),
                         (\[x,y] -> "(field)(long)("++x++" - "++y++")",
                          \root [x,y] -> [root++".i = "++x++" - "++y++";"],
                          "i")),
                    ( ("Prelude","primMulInt",0),
                         (\[x,y] -> "(field)(long)("++x++" * "++y++")",
                          \root [x,y] -> [root++".i = "++x++" * "++y++";"],
                          "i")),
                    ( ("Prelude","primDivInt",0),
                         (\[x,y] -> "(field)(long)("++x++" / "++y++")",
                          \root [x,y] -> [root++".i = "++x++" / "++y++";"],
                          "i")),
                    ( ("Prelude","primModInt",0),
                         (\[x,y] -> "(field)(long)("++x++" % "++y++")",
                          \root [x,y] -> [root++".i = "++x++" % "++y++";"],
                          "i")),
                    ( ("Prelude","primQuotInt",0), 
                         (\[x,y] -> "(field)(long)("++x++"<0 ? -(-"++x++"/"++y++") : "++x++"/"++y++")",
                          \root [x,y] -> [root++".i = "++x++"<0 ? -(-"++x++"/"++y++") : "++x++"/"++y++";"],
                          "i")),
                    ( ("Prelude","primRemInt",0),  
                         (\[x,y] -> "(field)(long)("++x++"<0 ? -(-"++x++"%"++y++") : "++x++"%"++y++")",
                          \root [x,y] -> [root++".i = "++x++"<0 ? -(-"++x++"%"++y++") : "++x++"%"++y++";"],
                          "i")),

                    -- Floating Point arithmetic
                    ( ("Prelude","primAddFloat",0),  
                         (\[x,y] -> "(field)(double)("++x++" + "++y++")",
                          \root [x,y] -> [root++".f = "++x++" + "++y++";"],
                          "f")),
                    ( ("Prelude","primSubFloat",0),
                         (\[x,y] -> "(field)(double)("++x++" - "++y++")",
                          \root [x,y] -> [root++".f = "++x++" - "++y++";"],
                          "f")),
                    ( ("Prelude","primMulFloat",0),
                         (\[x,y] -> "(field)(double)("++x++" * "++y++")",
                          \root [x,y] -> [root++".f = "++x++" * "++y++";"],
                          "f")),
                    ( ("Prelude","primDivFloat",0),
                         (\[x,y] -> "(field)(double)("++x++" / "++y++")",
                          \root [x,y] -> [root++".f = "++x++" / "++y++";"],
                          "f")),
                    ( ("Prelude","primNegateFloat",0),
                         (\[x] -> "(field)(double)(-"++x++")",
                          \root [x] -> [root++".f = -"++x++";"],
                          "f")),

                    -- I/O
                    ( ("Prelude","primPutChar",0),
                         (\[c] -> "(putchar("++c++"), make_Prelude__LP_RP(0))",
                          \root [c] -> ["putchar("++c++");", "set_Prelude__LP_RP("++root++",0);"],
                          "c")),

                    -- Constructors
                    ( ("","int",0),  
                         (\[i] -> "make__int("++i++", 0)",
                          \root [i] -> ["set__int("++root++", "++i++", 0);"],
                          "i")),
                    ( ("","char",0),  
                         (\[c] -> "make__char("++c++", 0)",
                          \root [c] -> ["set__char("++root++", "++c++", 0);"],
                          "c")),
                    ( ("","float",0),  
                         (\[f] -> "make__float("++f++", 0)",
                          \root [f] -> ["set__float("++root++", "++f++", 0);"],
                          "f"))]
 where cmpBlock root op x y = cifElse (x++" "++op++" "++y)
                              [ scall "set_Prelude_True" [root,"0"] ]
                              [ scall "set_Prelude_False" [root,"0"] ]
