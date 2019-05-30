t1 =
  let x = let y = 2:x
              z = 3:y
          in z++y
  in x++x

take5 (x1:x2:x3:x4:x5:_) = [x1,x2,x3,x4,x5]

main = take5 t1
