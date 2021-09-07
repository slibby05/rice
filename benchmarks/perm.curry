
insert :: a -> [a] -> [a]
insert x [] = [x]
insert x (y:ys) = x:y:ys ? y : (insert x ys)

perm :: [a] -> [a]
perm [] = []
perm (x:xs) = insert x (perm xs)

main :: [Int]
main = perm [1..9]
