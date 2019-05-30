data Tree a = Leaf | Branch a (Tree a) (Tree a)

test_t = Branch 1 Leaf Leaf == Branch 1 Leaf Leaf
test_f = Branch 1 Leaf Leaf == Branch 2 Leaf Leaf

instance Eq a => Eq (Tree a) where
  Leaf == Leaf = True
  Leaf == Branch _ _ _ = False
  Branch _ _ _ == Leaf = False
  Branch a1 a2 a3 == Branch b1 b2 b3 = a1 == b1 && a2 == b2 && a3 == b3
  