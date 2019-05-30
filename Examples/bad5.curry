f z y 
  = let x1 = case y of
               True   -> x2 - z
               False  -> z + x2
        x2 = case y of
               True   -> x1 - z
               False  -> z + x1
    in x1 + x2

main = f 3 False
