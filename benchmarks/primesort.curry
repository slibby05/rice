
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

the_filter :: [Int] -> [Int]
the_filter (n:ns) = filter (\x -> mod x n /= 0) ns

primes :: [Int]
primes = map head (iterate the_filter (iterate (+1) 2))

psort :: [Int] -> [Int]
psort xs = let p = perm xs
           in sorted p &> p

goal1 = [primes!!1003, primes!!1002, primes!!1001, primes!!1000]
goal2 = psort [7949,7937,7933,7927]
goal3 = psort [primes!!1003, primes!!1002, primes!!1001, primes!!1000]

main = goal3
