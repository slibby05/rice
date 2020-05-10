
main :: [Int]
main = let y = 2:z
           z = 3:y
       in take 5 y ++ take 5 z


