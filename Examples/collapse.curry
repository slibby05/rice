fst (x, _) = x
snd (_, y) = y

main = (fst z, snd z) where z = ('a','b')
