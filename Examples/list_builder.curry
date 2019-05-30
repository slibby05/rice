build [] [] = 0
build [] (_:_) = 1
build (_:_) [] = 2
build (_:_) (_:_) = 3


