f x y =
  case x of
   True  -> case y of 
              True  -> 0
              False -> 1
   False -> case y of 
              True  -> 2
              False -> 3

main = f False True
