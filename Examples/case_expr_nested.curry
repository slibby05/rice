data T = A | B

f x = case (g x) of
    A -> case (h x) of
      B -> 23
    B -> case (j x) of
      A -> 45

g x = x
h x = x
j x = x

------------------------------------------------------------------
-- Function f above is translated into f' below

{-

f' x = f3 (g x) x
f3 y x = case y of
  A -> f1 x
  B -> f2 x
f1 x = f11 (h x) x
f2 x = f21 (j x) x
f11 y x = case y of
  A -> exempt
  B -> 23
f21 y x = case y of
  A -> 45
  B -> exempt

-}
