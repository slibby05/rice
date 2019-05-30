-- Intentionally left and right sections
hamming = 1 : merge (map (* 2) hamming)
	            (merge (map (3 *) hamming) (map (5 *) hamming))

merge (x:xs) (y:ys)
  | x==y = x : merge xs ys
  | x<y  = x : merge xs (y:ys)
  | otherwise = y : merge (x:xs) ys

-- Show first 8 values
show (x1:x2:x3:x4:x5:x6:x7:x8:_) = (x1:x2:x3:x4:x5:x6:x7:x8:[])

main = show hamming
