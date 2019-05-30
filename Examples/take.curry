mytake _ [] = []
mytake n (x:xs) = if n==0 then [] else x : mytake (n-1) xs

main = take 3 ['a','b','c','d']
