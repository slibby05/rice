-- Internal (constant, sic!) variable
-- Cmc chokes.

g = case [] ? (_:_) of
      []    -> []
      (_:v) -> v


      
