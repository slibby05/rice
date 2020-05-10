
t u = let y = map (u *) x
          x = 1 : y
      in x

main = take5 (t 2)
