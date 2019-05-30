-- The FlatCurry versions are the same

t1 =
  let x = let y = 2:z
              z = 3:y
          in zip y z
  in (x,x)

t2 = 
  let y = 2:z
      z = 3:y
      x = zip y  z
  in (x,x)