f x = case x of {1 -> 2; 2 -> 3}
f x = let y = x:y in head y

main = f 1 ? f 3
