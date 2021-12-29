-- f 20000 for pakcs

f :: Int -> Int
f n = foldr (+) 0 $
      map (1+) $
      map (1+) $
      map (1+) $
      map (1+) $
      map (1+) $
      map (1+) $
      map (1+) $
      [1..n]

main :: Int
main = f 10000000
--     f 10000 for pakcs
