import Integer
import List

queen :: Int -> [Int]
queen n = fst $ iterate placeQueen ([],[1..n]) !! n

placeQueen :: ([Int],[Int]) -> ([Int],[Int])
placeQueen (qs, rs)
 = case split rs of
        (as, q:bs) -> all (safe q) (zip qs [1..]) &> (q:qs, as++bs)

split :: [a] -> ([a],[a])
split (x:xs@(_:_)) = ([x],xs) ? case split xs of (ys,zs) -> (x:ys,zs)

safe :: Int -> (Int,Int) -> Bool
safe q (col,row) = abs (q-col) /= row

main :: [Int]
main = queen 9
