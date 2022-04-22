-- pakcs: 100000

reverse' :: [a] -> [a]
reverse' xs = foldr (flip (.) . (:)) id xs []

main :: Int
main = length (reverse' [1..(1024*256)])
