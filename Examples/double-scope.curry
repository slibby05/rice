f [] = []
f (x:xs) = let y = x:y
               z = (y++y)
            in take x z ++ f xs

main = f [3,5]
