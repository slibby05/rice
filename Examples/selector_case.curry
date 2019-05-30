adder x y 
  = case (case y of 0 -> x; 1 -> x+1) of
    0 -> 0
    1 -> 1
    2 -> 2

main = adder 0 1