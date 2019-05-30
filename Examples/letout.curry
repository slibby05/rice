f x y = id (let z = y:z in (x + head z))

main = f 1 2
