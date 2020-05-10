
fib n | n < 2 = n
      | n > 1 = fib (n-1) + fib (n-2)

main :: Int
main = fib (27 ? 1)
