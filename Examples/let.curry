coin = 0 ? 1
{-
  l0 = makeNodeSymbol choice
  l0.c[0] = makeNodeInt 0
  l0.c[1] = makeNodeInt 1 
-}

shared = let x = coin in (x,x)
{-
  l0 = makeNodeSymbol pair
  l0.c[0] =  makeNodeSymbol coin
  l0.c[1] = l0.c[0]
-}

unshar = (coin,coin)
{-
  l0 = makeNodeSymbol pair
  l0.c[0] =  makeNodeSymbol coin
  l0.c[1] =  makeNodeSymbol coin
-}


{-
h x y = x+2*y
k x y = 2*x+y

t = let f x = h x y
        y free
        g z = k y z
     in (y, (f (g 1)))
-}

f z = let (x,y) = unzip z
      in x++y

g x y = let u = x-y
            v = x+y
        in (u,v)

main = shared == unshar