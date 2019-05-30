data Color = Red | Green | Blue

swap_by_two [] = []
swap_by_two [x] = [x]
swap_by_two (x1:x2:xs) = x2 : x1 : swap_by_two xs

main = swap_by_two [Red,Green,Green,Blue]
