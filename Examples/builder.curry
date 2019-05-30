loop = loop

build 0 x = x+1
build x 0 = x+2

test_build = build 0 loop

other x y = f1 x y ? f2 x y
f1 0 x = x+1
f2 x 0 = x+2

test_other = build 0 loop
