
loop = loop

build 0 x = x+1
build x 0 = x+2

main :: Int
main = build 0 loop
