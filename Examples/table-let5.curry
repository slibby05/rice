

g = let x = []
        y = [True]
    in case x ? y of
         []  -> 40
         [False] -> 50
