data List a = Nil | Cons a (List a)

data Color = Black | White | Gray

data Pair a b = Pair a b


nest (Pair _ Nil) = Nil
nest (Pair _ (Cons Black x)) = x
nest (Pair _ (Cons White y)) = y

main = nest (Pair Nil (Cons Black Nil))
