
list :: [Int]
list = [1..(1024*256)]

main :: Int
main = length (reverse list)
