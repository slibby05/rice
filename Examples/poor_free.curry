f x = x : let y free in y
main = case f True of
         [True,True]  -> 2
         [True,False] -> 1
