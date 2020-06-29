
take3 :: [Int] -> [Int]
take3 []        = []
take3 [x]       = [x]
take3 [x,y]     = [x,y]
take3 (x:y:z:_) = [x,y,z]

third :: [Int] -> Int
third (x:y:z:_) = z

main :: Int
main = third [1,2,(3 ? 4),4,5]
