
insert :: a -> [a] -> [a]
insert x []     = [x]
insert x (y:ys) = x:y:ys ? y : (insert x ys)

perm :: [a] -> [a]
perm []     = []
perm (x:xs) = insert x (perm xs)

valid :: Int -> Int -> [Int] -> Bool
valid _ _  []     = True
valid q dq (c:cs) = abs (c - q) /= dq &
                    valid q (dq+1) cs &
                    valid c 1 cs

main :: [Int]
main = case perm [1..9] of
            (q:qs) -> valid q 1 qs &> (q:qs)

