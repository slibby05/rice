
isPrime :: Int -> Bool
isPrime x 
 | x < 2     = False
 | x == 2    = True
 | otherwise = all ((/=0) . (x `mod`)) [2..x-1]

sum :: [Int] -> Int
sum = foldr (+) 0

main :: Int
main = (sum $ filter isPrime $ [1..20000])
