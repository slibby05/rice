-- Internal (constant, sic!) variable (anonymous)
-- Cmc chokes.

g = case [] ? [_] of
      []  -> 40
      [_] -> 50
