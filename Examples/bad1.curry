f x 
  = let y = x + case x of 1 -> 7; _ -> 9
        z = y + x
    in z + 1

{-

Flat reverse engineered

f x 
  = let y = x + 
                let v3 = x 
                in case v3==1 of
                     True  -> 7
                     False -> 9
        z = y + x
    in z + 1

Flat normalized (WRONG)

f x
  = case v3==1 of
      True  -> let v3 = x
                   y = x + 7
                   z = y + x
               in z + 1
      False -> let v3 = x
                   y = x + 9
                   z = y + x
               in z + 1
   

How did the case get outside the let ???
First, the inner let is moved outside:

f x 
  = let y = let v3 = x 
            in case v3==1 of
                 True  ->  x + 7
                 False ->  x + 9
        z = y + x
    in z + 1

Second, the let blocks are merged

f x 
  = let y = case v3==1 of
               True  ->  x + 7
               False ->  x + 9
        v3 = x 
        z = y + x
    in z + 1

Third, the case is moved outside.
This makes v3 out ot scope

f x 
  = case v3==1 of
      True ->  let y = x + 7
                   v3 = x 
                   z = y + x
               in z + 1
     False ->  let y = x + 9
                   v3 = x 
                   z = y + x
               in z + 1




f x 
  = case x of 
        1 -> let y = x + 7
                 z = y + x
             in z + 1
        _ -> let y = x + 9
                 z = y + x
             in z + 1

 
-}