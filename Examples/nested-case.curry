f [] = 0
f (x:_) = g (case x of 1 -> 2)

g _ = 3

main = f [6,7]
