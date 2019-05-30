f x y =
  g x (h (let z = y:z in head z))

g x y = x + y
h z = z + 2

main = f 4 7

