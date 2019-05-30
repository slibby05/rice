f w = let x = (1 : 2 : y) ++ y
          y = map (w +) (z ++ z)
          z = x ++ x
      in y ++ z

main = take5 (f 3)
take5 (x1:x2:x3:x4:x5:_) = [x1,x2,x3,x4,x5]
