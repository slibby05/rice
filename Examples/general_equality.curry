data Mytype a b c = A0 | A1 a | A2 a b | A3 a b c

equals_Mytype x y = case x of
   A0 -> case y of
      A0 -> True
      _  -> False
   A1 x1 -> case y of
      A1 y1 -> x1 == y1
      _ -> False
   A2 x1 x2 -> case y of
      A2 y1 y2 -> x1 == y1 && x2 == y2
      _ -> False
   A3 x1 x2 x3 -> case y of
      A3 y1 y2 y3 -> x1 == y1 && x2 == y2 && x3 == y3
      _ -> False


