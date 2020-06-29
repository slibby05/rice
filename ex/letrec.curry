
t :: Int -> [Int]
t u = let y = map (u *) x
          x = 1 : y
      in x

main :: [Int]
main = take 5 (t 2)
