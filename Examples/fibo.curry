
fib n | n < 2 = n
      | n > 1 = fib (n-1) + fib (n-2)

main = fib 5
