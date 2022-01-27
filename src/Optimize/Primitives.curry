
module Optimize.Primitives where

import FlatCurry.Types
import FlatUtils.Gas


--------------------------------------------------------------
-- Primative operations
--------------------------------------------------------------

-- There's a lot of time when we have something like
-- let x = y == z (or any primative comparison)
-- case x of 
--      True -> ...
--      False -> ...
-- I'm going to turn those into
-- case primCond of
--      Marker -> y == z
--      True -> ...
--      False -> ...
--
-- Here primCond and Marker aren't valid symbols.
-- There purpose is that I should be able to translate this to
-- if (y == z)
-- {
--     ...
-- }
-- else
-- {
--     ...
-- }
--
-- This has three advantages.
-- 1. I get to use an if statement instead of a table jump
-- 2. I don't have to check to save anything, because it's a primative condition
-- 3. Since this couldn't possibly backtrack, I don't need to generate a middle function for this.
        
condFold :: Opt
condFold _ (Let [(x, primEqChar_    y z)] (boolCase ct x t f)) = condCase ct (primEqChar_ y z) t f
condFold _ (Let [(x, primEqInt_     y z)] (boolCase ct x t f)) = condCase ct (primEqInt_ y z) t f
condFold _ (Let [(x, primEqFloat_   y z)] (boolCase ct x t f)) = condCase ct (primEqFloat_ y z) t f
condFold _ (Let [(x, primLtEqChar_  y z)] (boolCase ct x t f)) = condCase ct (primLtEqChar_ y z) t f
condFold _ (Let [(x, primLtEqInt_   y z)] (boolCase ct x t f)) = condCase ct (primLtEqInt_ y z) t f
condFold _ (Let [(x, primLtEqFloat_ y z)] (boolCase ct x t f)) = condCase ct (primLtEqFloat_ y z) t f

primCond = Comb FuncCall ("","primCond") []

primCase ct e t f = 
    Case ct primCond [Branch (Pattern ("","primCond")     []) e,
                      Branch (Pattern ("Prelude","True")  []) t,
                      Branch (Pattern ("Prelude","False") []) f]

condCase ct e t f = 
    (Case ct primCond [Branch (Pattern ("","primCond")     []) e,
                       Branch (Pattern ("Prelude","True")  []) t,
                       Branch (Pattern ("Prelude","False") []) f],
                       "CONDITION_FOLD",
                       0)


constantFold :: Opt
constantFold _ (lit_primEqChar_ x y)    = (fromBool (x == y),        "CONSTANT_FOLDING", 0)
constantFold _ (lit_primEqInt_ x y)     = (fromBool (x == y),        "CONSTANT_FOLDING", 0)
constantFold _ (lit_primEqFloat_ x y)   = (fromBool (x == y),        "CONSTANT_FOLDING", 0)
constantFold _ (lit_primLtEqChar_ x y)  = (fromBool (x == y),        "CONSTANT_FOLDING", 0)
constantFold _ (lit_primLtEqInt_ x y)   = (fromBool (x == y),        "CONSTANT_FOLDING", 0)
constantFold _ (lit_primLtEqFloat_ x y) = (fromBool (x == y),        "CONSTANT_FOLDING", 0)
constantFold _ (lit_primChr_ x)         = (Lit (Charc (chr x)),      "CONSTANT_FOLDING", 0)
constantFold _ (lit_primOrd_ x)         = (Lit (Intc (ord x)),       "CONSTANT_FOLDING", 0)
constantFold _ (lit_primI2F_ x)         = (Lit (Floatc (fromInt x)), "CONSTANT_FOLDING", 0)
constantFold _ (lit_primAddInt_ x y)    = (Lit (Intc (x + y)),       "CONSTANT_FOLDING", 0)
constantFold _ (lit_primSubInt_ x y)    = (Lit (Intc (x - y)),       "CONSTANT_FOLDING", 0)
constantFold _ (lit_primMulInt_ x y)    = (Lit (Intc (x * y)),       "CONSTANT_FOLDING", 0)
constantFold _ (lit_primDivInt_ x y)    = (Lit (Intc (div  x y)),    "CONSTANT_FOLDING", 0)
constantFold _ (lit_primModInt_ x y)    = (Lit (Intc (mod  x y)),    "CONSTANT_FOLDING", 0)
constantFold _ (lit_primQuotInt_ x y)   = (Lit (Intc (quot x y)),    "CONSTANT_FOLDING", 0)
constantFold _ (lit_primRemInt_ x y)    = (Lit (Intc (rem  x y)),    "CONSTANT_FOLDING", 0)
constantFold _ (lit_primAddFloat_ x y)  = (Lit (Floatc (x + y)),     "CONSTANT_FOLDING", 0)
constantFold _ (lit_primSubFloat_ x y)  = (Lit (Floatc (x - y)),     "CONSTANT_FOLDING", 0)
constantFold _ (lit_primMulFloat_ x y)  = (Lit (Floatc (x * y)),     "CONSTANT_FOLDING", 0)
constantFold _ (lit_primDivFloat_ x y)  = (Lit (Floatc (x / y)),     "CONSTANT_FOLDING", 0)
constantFold _ (lit_primNegateFloat_ x) = (Lit (Floatc (-x)),        "CONSTANT_FOLDING", 0)

boolCase :: CaseType -> Int -> Expr -> Expr -> Expr
boolCase ct x t f = Case ct (Var x) 
                     [Branch (Pattern ("Prelude","True")  []) t,
                      Branch (Pattern ("Prelude","False") []) f]

primCall :: String -> [Expr] -> Expr
primCall name vals = Comb FuncCall ("Prelude",name) vals

primEqChar_ x y    = primCall "primEqChar"      [x, y]
primEqInt_ x y     = primCall "primEqInt"       [x, y]
primEqFloat_ x y   = primCall "primEqFloat"     [x, y]
primLtEqChar_ x y  = primCall "primLtEqChar"    [x, y]
primLtEqInt_ x y   = primCall "primLtEqInt"     [x, y]
primLtEqFloat_ x y = primCall "primLtEqFloat"   [x, y]
primChr_ x         = primCall "primChr"         [x]
primOrd_ x         = primCall "primOrd"         [x]
primI2F_ x         = primCall "primI2F"         [x]
primAddInt_ x y    = primCall "primAddInt"      [x, y]
primSubInt_ x y    = primCall "primSubInt"      [x, y]
primMulInt_ x y    = primCall "primMulInt"      [x, y]
primDivInt_ x y    = primCall "primDivInt"      [x, y]
primModInt_ x y    = primCall "primModInt"      [x, y]
primQuotInt_ x y   = primCall "primQuotInt"     [x, y]
primRemInt_ x y    = primCall "primRemInt"      [x, y]
primAddFloat_ x y  = primCall "primAddFloat"    [x, y]
primSubFloat_ x y  = primCall "primSubFloat"    [x, y]
primMulFloat_ x y  = primCall "primMulFloat"    [x, y]
primDivFloat_ x y  = primCall "primDivFloat"    [x, y]
primNegateFloat_ x = primCall "primNegateFloat" [x]

lit_primEqChar_ x y    = primEqChar_    (Lit (Charc x))  (Lit (Charc y))
lit_primEqInt_ x y     = primEqInt_     (Lit (Intc x))   (Lit (Intc y))
lit_primEqFloat_ x y   = primEqFloat_   (Lit (Floatc x)) (Lit (Floatc y))
lit_primLtEqChar_ x y  = primLtEqChar_  (Lit (Charc x))  (Lit (Charc y))
lit_primLtEqInt_ x y   = primLtEqInt_   (Lit (Intc x))   (Lit (Intc y))
lit_primLtEqFloat_ x y = primLtEqFloat_ (Lit (Floatc x)) (Lit (Floatc y))
lit_primChr_ x         = primChr_     (Lit (Intc x))
lit_primOrd_ x         = primOrd_     (Lit (Charc x))
lit_primI2F_ x         = primI2F_     (Lit (Intc x))
lit_primAddInt_ x y    = primAddInt_  (Lit (Intc x)) (Lit (Intc y))
lit_primSubInt_ x y    = primSubInt_  (Lit (Intc x)) (Lit (Intc y))
lit_primMulInt_ x y    = primMulInt_  (Lit (Intc x)) (Lit (Intc y))
lit_primDivInt_ x y    = primDivInt_  (Lit (Intc x)) (Lit (Intc y))
lit_primModInt_ x y    = primModInt_  (Lit (Intc x)) (Lit (Intc y))
lit_primQuotInt_ x y   = primQuotInt_ (Lit (Intc x)) (Lit (Intc y))
lit_primRemInt_ x y    = primRemInt_  (Lit (Intc x)) (Lit (Intc y))
lit_primAddFloat_ x y  = primAddFloat_ (Lit (Floatc x)) (Lit (Floatc y))
lit_primSubFloat_ x y  = primSubFloat_ (Lit (Floatc x)) (Lit (Floatc y))
lit_primMulFloat_ x y  = primMulFloat_ (Lit (Floatc x)) (Lit (Floatc y))
lit_primDivFloat_ x y  = primDivFloat_ (Lit (Floatc x)) (Lit (Floatc y))
lit_primNegateFloat_ x = primNegateFloat_ (Lit (Floatc x))


fromBool True  = Comb ConsCall ("Prelude","True") []
fromBool False = Comb ConsCall ("Prelude","False") []

