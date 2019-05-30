f x y = g x (case x of 1 -> y; 2 -> 6)
g x _ = x

f' x y = g x (let v = x in case v==1 of True -> y; False -> case v==2 of True -> 7; False -> failed)

-- f1 x y = case x of 1 -> g x y; 2-> g x (2*x)

main = (f 3 4, f' 9 8)
