
data N = Z | S N

add :: N -> N -> N
add Z     y = y
add (S x) y = S (add x y)


fib :: N -> N
fib Z         = Z
fib (S Z)     = S Z
fib (S (S x)) = add (fib (S x)) (fib x)

main :: N
main = fib (S (S (S (S (S (S (S (S (S (S Z))))))))))
