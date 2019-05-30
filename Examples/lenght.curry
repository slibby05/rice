length x = case x of
  [] -> 0
  (_:v) -> 1 + length v
