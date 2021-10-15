module ReverseBuiltin where


data Nat = O | S Nat

add O n = n
add (S x) y = S (add x y)

double x = add x x

mult O _ = O
mult (S x) y = add y (mult x y)

two = S (S O)
four = double two
nat16 = mult four four
nat256 = mult nat16 nat16
nat4096 = mult nat256 nat16
nat16384 = mult nat4096 four
nat1M = mult nat16384 (mult nat16 four)
nat4M = mult nat16384 nat256
nat16M = mult nat4M four


natList O = []
natList (S x) = (S x) : (natList x)

isList [] = True
isList (x:xs) = isList xs


main = isList (reverse (natList nat16M))

