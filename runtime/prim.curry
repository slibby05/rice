
data C = C Char
data I = I Int
data F = F Float

primEqChar :: Char -> Char -> Bool
primEqChar external

primEqInt :: Int -> Int -> Bool
primEqInt external

primEqFloat :: Float -> Float -> Bool
primEqFloat external

primLtEqChar :: Char -> Char -> Bool
primLtEqChar external

primLtEqInt :: Int -> Int -> Bool
primLtEqInt external

primLtEqFloat :: Float -> Float -> Bool
primLtEqFloat external

primChr :: Int -> Char
primChr external

primOrd :: Char -> Int
primOrd external

primI2F :: Int -> Float
primI2F external

primAddInt :: Int -> Int -> Int
primAddInt external

primSubInt :: Int -> Int -> Int
primSubInt external

primMulInt :: Int -> Int -> Int
primMulInt external

primDivInt :: Int -> Int -> Int
primDivInt external

primModInt :: Int -> Int -> Int
primModInt external

primQuotInt :: Int -> Int -> Int
primQuotInt external

primRemInt :: Int -> Int -> Int
primRemInt external

primAddFloat :: Float -> Float -> Float
primAddFloat external

primSubFloat :: Float -> Float -> Float
primSubFloat external

primMulFloat :: Float -> Float -> Float
primMulFloat external

primDivFloat :: Float -> Float -> Float
primDivFloat external

primNegateFloat :: Float -> Float
primNegateFloat external

primPutChar :: Char -> IO ()
primPutChar external

(&) :: Bool -> Bool -> Bool
True & x = x

eqChar :: C -> C -> Bool
eqChar x y = case x of 
                  C x' -> case y of
                               C y' -> primEqChar x' y'

eqInt :: I -> I -> Bool
eqInt x y = case x of 
                 I x' -> case y of
                              I y' -> primEqInt x' y'

eqFlaot :: F -> F -> Bool
eqFlaot x y = case x of 
                   F x' -> case y of
                                F y' -> primEqFloat x' y'

ltEqChar :: C -> C -> Bool
ltEqChar x y = case x of 
                    C x' -> case y of
                                 C y' -> primEqChar x' y'

ltEqInt :: I -> I -> Bool
ltEqInt x y = case x of 
                   I x' -> case y of
                                I y' -> primEqInt x' y'

ltEqFlaot :: F -> F -> Bool
ltEqFlaot x y = case x of 
                     F x' -> case y of
                                  F y' -> primEqFloat x' y'

ord :: C -> I
ord c = case c of 
             C c' -> I (primOrd c')

chr :: I -> C
chr i = case i of 
             I i' -> C (primChr i')

i2f :: I -> F
i2f i = case i of 
             I i' -> F (primI2F i')

(+$) :: I -> I -> I
x +$ y = case x of
              I x' -> case y of
                           I y' -> I (primAddInt x' y')

(-$) :: I -> I -> I
x -$ y = case x of
              I x' -> case y of
                           I y' -> I (primSubInt x' y')

(*$) :: I -> I -> I
x *$ y = case x of
              I x' -> case y of
                           I y' -> I (primMulInt x' y')

div_ :: I -> I -> I
div_ x y = case x of
                I x' -> case y of
                             I y' -> I (primDivInt x' y')

mod_ :: I -> I -> I
mod_ x y = case x of
                I x' -> case y of
                             I y' -> I (primModInt x' y')

quot_ :: I -> I -> I
quot_ x y = case x of
                 I x' -> case y of
                              I y' -> I (primQuotInt x' y')

rem_ :: I -> I -> I
rem_ x y = case x of
                I x' -> case y of
                             I y' -> I (primRemInt x' y')

negateFloat :: F -> F
negateFloat x = case x of
                     F x' -> F (primNegateFloat x')

(+.) :: F -> F -> F
x +. y = case x of
              F x' -> case y of
                           F y' -> F (primAddFloat x' y')

(-.) :: F -> F -> F
x -. y = case x of
              F x' -> case y of
                           F y' -> F (primSubFloat x' y')

(*.) :: F -> F -> F
x *. y = case x of
              F x' -> case y of
                           F y' -> F (primMulFloat x' y')

(/.) :: F -> F -> F
x /. y = case x of
              F x' -> case y of
                           F y' -> F (primDivFloat x' y')

putChar :: C -> IO ()
putChar c = case c of
                 C c' -> primPutChar c'
