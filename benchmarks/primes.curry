-- Computing prime numbers via sieve and prelude functions
--pakcs primes!!500

the_filter :: [Int] -> [Int]
the_filter (n:ns) = filter (\x -> mod x n /= 0) ns

primes :: [Int]
primes = map head (iterate the_filter (iterate (+1) 2))

goal0 = primes!!12569
goal1 = primes!!24001
goal2 = primes!!54001
goal3 = primes!!4000

main = goal0
