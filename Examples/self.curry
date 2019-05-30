f x = let y = x:y
      in y

main = take 5 (f 2)
