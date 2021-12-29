-- pakcs: 100000

reverse' :: [a] -> [a]
reverse' xs = foldr (flip (.) . (:)) id xs []

list :: [Int]
list = [1..(1024*256)]

main :: Int
main = length (reverse' list)
