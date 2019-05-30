insert x [] = [x]
insert x (y:ys) = x:y:ys
insert x (y:ys) = y : insert x ys
