f x y = g x (case y of True -> 5; False ->6)
g x y = 2*x
loop = loop
main = f 2 loop
