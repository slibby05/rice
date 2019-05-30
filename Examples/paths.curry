data Nat = Zero | Succ Nat

f (Succ x) Zero y = (x,y)

g Zero (Succ x, Succ (Succ y)) = []

clen list 
    = case list of
        [] -> 0
	(_:xs) -> 1 + clen xs

notyet = case [] ? [6,7] of
   [] -> 22
   (_:xs) -> head xs

h t = let x = 1 : t
      in case x of
        [] -> False
        (y:ys) -> True


-- example with a variable that has two distinct paths
-- is it possible?
