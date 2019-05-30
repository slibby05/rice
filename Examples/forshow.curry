forshow x [] = x
forshow x (y:ys) =
   forshow ('(' : x ++ " " ++ y ++ [')']) ys

main = forshow "f" ["a1","a2"]
