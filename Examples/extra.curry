f x y
  = let u = y : u
     in g x (case u of (True:_) -> 5; (False:_) ->6)
g x _ = 2*x
loop = loop
main = f 2 loop
