

fib :: Int -> Int
fib n 
 | n < 2 = 0 ? 1
 | otherwise = fib (n-1) + fib (n-2)
             
main = fib 7
