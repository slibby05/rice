f x =
  case x of
    '\n' -> "bad"
    _    -> "good"

-- TODO: I think it break ReadShowTerm.readUnqualifiedTerm
-- main = map f "ab\n\x07cd"

main = map f "ab\ncd"
