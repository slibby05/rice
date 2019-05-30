problem1 x y 
  = if (y<0) then
       case x of a:b -> if (a>0) then [a] else (
                            if (y>0) then [] else problem1 b y)
                 []  -> if (y>0) then [y] else []
    else []
