-- example of let recursive

powers u = let y = map (u *) x
               x = 1 : y
            in x

main = take5 (powers 2)

take5 (x1:x2:x3:x4:x5:_) = [x1,x2,x3,x4,x5]
