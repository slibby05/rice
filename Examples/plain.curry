
data Nat = Zero | Succ Nat

half Zero = Zero
half (Succ Zero) = Zero
half (Succ (Succ x)) = Succ (half x)

data MyList a = MyNil | MyCons a (MyList a)

myappend MyNil y = y
myappend (MyCons x xs) y = MyCons x (myappend xs y)

main = (half (Succ Zero), myappend (MyCons Zero  MyNil) MyNil)
