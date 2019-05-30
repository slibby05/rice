break n
  | n==0 = 0
  | n==2 = 1
  | n==4 = 2
  | True = 3

main = break 4

{-

g x = case x of
  _ -> 1
  [] -> 0

f [] = 0
f [_] = 1

f z = case z of
        0 -> z
        _ -> 1

par_or x = case x of
  (True,_) -> True
  (_,True) -> True
  (_,_)    -> False

-}
