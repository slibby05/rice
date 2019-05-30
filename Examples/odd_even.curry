data Pair a b = Pair a b

data Nat = Zero | Succ Nat

even Zero = Zero
even (Succ x) = odd x
odd Zero = Succ Zero
odd (Succ x) = even x

main = (odd (Succ (Succ (Succ (Succ (Succ Zero)))))) ? (even (Succ (Succ (Succ (Succ (Succ Zero))))))
-- main = Pair (odd (Succ (Succ (Succ (Succ (Succ Zero)))))) (even (Succ (Succ (Succ (Succ (Succ Zero))))))


