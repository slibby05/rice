
sum :: [Int] -> Int
sum = foldr (+) 0

square :: Int -> Int
square x = x * x

odd :: Int -> Bool
odd x = x `mod` 2 == 0

main = sum $ map square $ filter odd $ [1..200000]
