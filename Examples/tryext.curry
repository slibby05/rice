g :: a -> (a,Int)
g external

f :: [a] -> (a,Int)
f (x:_) = g x 

main = f [1,2,3]
