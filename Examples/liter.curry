{-
sweet "banana" = 9
sweet "lemon"  = 1
-}

test "ab" = 1

asciiToInt 'A' = 65
asciiToInt 'B' = 66
asciiToInt 'Z' = 90

intToAscii 65 = 'A'
intToAscii 66 = 'B'
intToAscii 90 = 'Z'

-- main = sweet "banana"

main = intToAscii 65 
-- main = test "ab"

