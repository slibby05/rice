data Nat = Zero | Succ Nat

-- data Color = Red | Green | Blue

myhalf Zero = Zero
myhalf (Succ Zero) = Zero
myhalf (Succ (Succ x)) = Succ (myhalf x)

add Zero x = x
add (Succ x) y = Succ (add x y) 

incr x = Succ x

mydouble x = add x x

average x y = myhalf (add x y)

two = Succ (Succ Zero)
four = mydouble two

main = myhalf (Succ (Succ (Succ Zero)))

-- main = average two four
-- OK main = Zero
-- OK main = Succ Zero
-- OK main = two
-- OK main = add Zero four
