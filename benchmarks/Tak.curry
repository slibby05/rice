
tak :: Int -> Int -> Int -> Int

tak x y z = if x <= y then z
            else tak (tak (x-1) y z)
                     (tak (y-1) z x)
                     (tak (z-1) x y)


goal0 = tak 24 16 8
goal1 = tak 27 16 8
goal2 = tak 33 17 8

main = goal2
