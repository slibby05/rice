
perm :: [a] -> [a]
perm [] = []
perm (x:xs) = insert x (perm xs)

insert :: a -> [a] -> [a]
insert x [] = [x]
insert x (y:ys) = x:y:ys
insert x (y:ys) = y : insert x ys

main :: [Int]
main = perm [1..8]
