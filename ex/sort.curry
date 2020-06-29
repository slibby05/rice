
sorted :: [Int] -> Bool
sorted [] = True
sorted [_] = True
sorted (x:y:xs) = x < y && sorted (y:xs)

perm :: [Int] -> [Int]
perm [] = []
perm (x:xs) = insert x (perm xs)

insert :: Int -> [Int] -> [Int]
insert x [] = [x]
insert x (y:ys) = x:y:ys
insert x (y:ys) = y : (insert x ys)

sort :: [Int] -> [Int]
sort xs = let p = perm xs
          in sorted p &> p

main :: [Int]
main = sort (reverse [1..14])
