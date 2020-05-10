
insert x [] = [x]
insert x (y:ys) = x:y:ys
insert x (y:ys) = y : insert x ys

main :: [Int]
main = insert 1 [2,3,4]
