data Xint = Zero | Succ Xint | Pred Xint | Pair Xint Xint

main = let x = Succ (Succ y)
           y = Pair (Pred Zero) (Succ x)
       in Succ (Pred (Pair (Succ x) y))

