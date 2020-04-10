
module FlatUtils.ReplacePrim (ignoredPrimOps, primOps, mergePrelude) where

import ICurry.Types (IQName)
import List (intercalate)
import FlatCurry.Types
import FlatCurry.Goodies
import Data.Map (Map, fromList)
import Util
import Debug

ignoredPrimOps :: [IQName]
ignoredPrimOps = [("Prelude", "prim_eqChar", 0),
                  ("Prelude", "prim_eqInt", 0),
                  ("Prelude", "prim_eqFloat", 0),
                  ("Prelude", "prim_ltEqChar", 0),
                  ("Prelude", "prim_ltEqInt", 0),
                  ("Prelude", "prim_ltEqFloat", 0),
                  ("Prelude", "prim_ord", 0),
                  ("Prelude", "prim_chr", 0),
                  ("Prelude", "prim_Int_plus", 0),
                  ("Prelude", "prim_Int_minus", 0),
                  ("Prelude", "prim_Int_times", 0),
                  ("Prelude", "prim_Int_div", 0),
                  ("Prelude", "prim_Int_mod", 0),
                  ("Prelude", "prim_Int_quot", 0),
                  ("Prelude", "prim_Int_rem", 0),
                  ("Prelude", "prim_negateFloat", 0),
                  ("Prelude", "prim_readFileContents", 0),
                  ("Prelude", "prim_readNatLiteral", 0),
                  ("Prelude", "prim_readFloatLiteral", 0),
                  ("Prelude", "prim_readCharLiteral", 0),
                  ("Prelude", "prim_readStringLiteral", 0),
                  ("Prelude", "prim_Float_plus", 0),
                  ("Prelude", "prim_Float_minus", 0),
                  ("Prelude", "prim_Float_times", 0),
                  ("Prelude", "prim_Float_div", 0),
                  ("Prelude", "prim_i2f", 0),
                  ("Prelude", "apply", 0)]


primOps :: Map IQName ([String] -> String, [String] -> [String]) 
primOps = fromList [( ("Prelude","apply",0),
                         (\es -> "make_apply"++show (length es-1) ++ args es,
                          \es -> ["set_apply"++show (length es-1) ++ args ("root":es) ++ ";",
                                  "root->symbol->hnf(root);"])),

                    -- equality operations
                    ( ("Prelude","primEqChar",0),  
                         (\es -> "tochar("++es!!0++") == tochar("++es!!1++") ? make_Prelude_True() : make_Prelude_False()",
                          \es -> cmpBlock "==" "tochar" (es!!0) (es!!1))),
                    ( ("Prelude","primEqInt",0),  
                         (\es -> "toint("++es!!0++") == toint("++es!!1++") ? make_Prelude_True() : make_Prelude_False()",
                          \es -> cmpBlock "==" "toint" (es!!0) (es!!1))),
                    ( ("Prelude","primEqFloat",0),  
                         (\es -> "tofloat("++es!!0++") == tofloat("++es!!1++") ? make_Prelude_True() : make_Prelude_False()",
                          \es -> cmpBlock "==" "tofloat" (es!!0) (es!!1))),
                    ( ("Prelude","primLtEqChar",0),  
                         (\es -> "tochar("++es!!0++") == tochar("++es!!1++") ? make_Prelude_True() : make_Prelude_False()",
                          \es -> cmpBlock "<=" "tochar" (es!!0) (es!!1))),
                    ( ("Prelude","primLtEqInt",0),  
                         (\es -> "toint("++es!!0++") == toint("++es!!1++") ? make_Prelude_True() : make_Prelude_False()",
                          \es -> cmpBlock "<=" "toint" (es!!0) (es!!1))),
                    ( ("Prelude","primLtEqFloat",0),  
                         (\es -> "tofloat("++es!!0++") == tofloat("++es!!1++") ? make_Prelude_True() : make_Prelude_False()",
                          \es -> cmpBlock "<=" "tofloat" (es!!0) (es!!1))),

                    -- conversion operations
                    ( ("Prelude","primOrd",0),  
                         (\es -> "(int)tochar("++es!!0++")",
                          \es -> ["root = tonode("++es!!0++");"])),
                    ( ("Prelude","primChr",0),  
                         (\es -> "(char)toint("++es!!0++")",
                          \es -> ["root = tonode("++es!!0++");"])),
                    ( ("Prelude","primI2F",0),
                         (\es -> "(float)toint("++es!!0++")",
                          \es -> ["root = tonode("++es!!0++");"])),

                    -- Integer arithmetic
                    ( ("Prelude","primAddInt",0),  
                         (\es -> "toint("++es!!0++") + toint("++es!!1++")",
                          \es -> ["root = tonode(toint("++es!!0++") - toint("++es!!1++");"])),
                    ( ("Prelude","primSubInt",0),
                         (\es -> "toint("++es!!0++") - toint("++es!!1++")",
                          \es -> ["root = tonode(toint("++es!!0++") - toint("++es!!1++");"])),
                    ( ("Prelude","primMulInt",0),
                         (\es -> "toint("++es!!0++") * toint("++es!!1++")",
                          \es -> ["root = tonode(toint("++es!!0++") * toint("++es!!1++");"])),
                    ( ("Prelude","primDivInt",0),
                         (\es -> "toint("++es!!0++") / toint("++es!!1++")",
                          \es -> ["root = tonode(toint("++es!!0++") / toint("++es!!1++");"])),
                    ( ("Prelude","primModInt",0),
                         (\es -> "toint("++es!!0++") % toint("++es!!1++")",
                          \es -> ["root = tonode(toint("++es!!0++") % toint("++es!!1++");"])),
                    ( ("Prelude","primQuotInt",0), 
                         (\es -> let x = "toint("++es!!0++")"
                                     y = "toint("++es!!1++")"
                                 in "("++x++"<0 ? -(-"++x++"/"++y++") : "++x++"/"++y++")",
                          \es -> let x = "toint("++es!!0++")"
                                     y = "toint("++es!!1++")"
                                 in ["root = tonode("++x++"<0 ? -(-"++x++"/"++y++") : "++x++"/"++y++");"])),
                    ( ("Prelude","primRemInt",0),  
                         (\es -> let x = "toint("++es!!0++")"
                                     y = "toint("++es!!1++")"
                                 in "("++x++"<0 ? -(-"++x++"%"++y++") : "++x++"%"++y++")",
                          \es -> let x = "toint("++es!!0++")"
                                     y = "toint("++es!!1++")"
                                 in ["root = tonode("++x++"<0 ? -(-"++x++"%"++y++") : "++x++"%"++y++");"])),

                    -- Floating Point arithmetic
                    ( ("Prelude","primAddFloat",0),  
                         (\es -> "tofloat("++es!!0++") + tofloat("++es!!1++")",
                          \es -> ["root = tonode(tofloat("++es!!0++") + tofloat("++es!!1++");"])),
                    ( ("Prelude","primSubFloat",0),
                         (\es -> "tofloat("++es!!0++") - tofloat("++es!!1++")",
                          \es -> ["root = tonode(tofloat("++es!!0++") - tofloat("++es!!1++");"])),
                    ( ("Prelude","primMulFloat",0),
                         (\es -> "tofloat("++es!!0++") * tofloat("++es!!1++")",
                          \es -> ["root = tonode(tofloat("++es!!0++") * tofloat("++es!!1++");"])),
                    ( ("Prelude","primDivFloat",0),
                         (\es -> "tofloat("++es!!0++") / tofloat("++es!!1++")",
                          \es -> ["root = tonode(tofloat("++es!!0++") / tofloat("++es!!1++");"])),
                    ( ("Prelude","primNegateFloat",0),
                         (\es -> "-tofloat("++es!!0++")",
                          \es -> ["root = tonode(-tofloat("++es!!0++"));"])),
                    ( ("Prelude","primPutChar",0),
                         (\es -> "(putchar(tochar("++es!!0++")), make_Prelude__LP_RP(0))",
                          \es -> ["putchar(tochar("++es!!0++"));", "set_Prelude__LP_RP(root,0);"]))]
 where args xs = "(" ++ intercalate "," xs ++ ")"
       cmpBlock op t x y = ["if" ++ "("++t++"("++x++") "++op++" "++t++"("++y++"))",
                          "{",
                          "    set_Prelude_True(root,0);",
                          "}",
                          "else",
                          "{",
                          "    set_Prelude_False(root,0);",
                          "}"]

mergePrelude :: Prog -> Prog -> Prog
mergePrelude prelude prim = updProgFuncs (const (preludeFuns++primFuns)) prelude
 where primFuns    = [makePrim f | f <- progFuncs prim,    not (isExternal f)]
       preludeFuns = [f          | f <- progFuncs prelude, not (funcName f `elem` primNames)]
       primNames   = map funcName primFuns
       makePrelude = updQNamesInFunc (mapFst (const "Prelude"))
       makePrim    = updFunc primRule id id (updQNamesInTypeExpr primType) (updQNamesInRule primRule)
       primType n  = case n of
                         ("prim","C")      -> ("Prelude","Char")
                         ("prim","I")      -> ("Prelude","Int")
                         ("prim","F")      -> ("Prelude","Float")
                         otherwise         -> n
       primRule n  = case n of
                         ("prim","C")      -> ("","char")
                         ("prim","I")      -> ("","int")
                         ("prim","F")      -> ("","float")
                         (_,x)             -> ("Prelude",x)

