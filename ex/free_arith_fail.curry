
test x = let z free
             y = 2+x
         in z+y

main :: Int
main = test 3
