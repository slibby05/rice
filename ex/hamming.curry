
hamming = 1 : merge (map (* 2) hamming)
	            (merge (map (3 *) hamming) (map (5 *) hamming))

merge (x:xs) (y:ys)
  | x==y = x : merge xs ys
  | x<y  = x : merge xs (y:ys)
  | otherwise = y : merge (x:xs) ys


main :: [Int]
main = take 8 hamming
