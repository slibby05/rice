g x = 
  -- case x of  -- OK
  case x ? [6,7] of  -- bad, no way to bind y to [7]
    []    -> []


main = g [1,2]
