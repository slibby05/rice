fa x y [] = (x,y)
fa x y (_:_) = (y,x)


fb x y [] = (x,y)
fb x _ (z:_) = (x,z)

main = (fa 1 2 [], fb 3 4 [5]) 
