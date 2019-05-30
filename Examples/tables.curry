f x = fcase x of
       (_:x2:_) -> x2

main = f [1..9]
