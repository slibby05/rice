
data Peano = O | S Peano

toPeano :: Int -> Peano
toPeano n = if n==0 then O else S (toPeano (n-1))

equal :: Peano -> Peano -> Bool
equal O O = True
equal (S p) (S q) = equal p q
equal (S _) O = False
equal O (S _) = False

add :: Peano -> Peano -> Peano
add O     p = p
add (S p) q = S (add p q)

half y | equal (add x x) y = x where x free 


main = equal (toPeano 5000) (half (toPeano 10000))
main0 = equal (toPeano 5) (half (toPeano 10))
main1 = equal (toPeano 50) (half (toPeano 100))
main2 = equal (toPeano 500) (half (toPeano 1000))

