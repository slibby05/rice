-- example of letrec

-- t u = let y = map (u *) x
--           x = 1 : y
--       in x
-- 
-- main = take5 (t 2)

take5 (x1:x2:x3:x4:x5:_) = [x1,x2,x3,x4,x5]

main = take 5 (fx 2)

fx u = 1 : fy u
fy u = map (u *) (fx u)

-- inline fy u
fx' u = 1: map (u *) (fx' u)