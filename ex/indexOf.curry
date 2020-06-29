
indexOf x e | x =:= (l++[e]++_) & length l =:= n = n where l,n free

main :: Int
main = indexOf [1,2,4,8,16] 4
