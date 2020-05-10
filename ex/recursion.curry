

main :: [Int]
main = let x = 1:x
       in take 5 x
