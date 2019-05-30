{-
order_eval LT _ = LT
order_eval EQ x = x
order_eval GT _ = GT
-}

data MyList a = MyNil | MyCons a (MyList a) deriving (Eq, Ord)

t1 = MyCons 2 (MyCons 3 MyNil) <  MyCons 2 (MyCons 2 MyNil)

data BinTree a = Leaf | Branch a (BinTree a) (BinTree a) deriving (Eq, Ord)
mytree = Branch 5 (Branch 2 Leaf Leaf) (Branch 8 Leaf Leaf)

t2 = mytree >= mytree

main = (t1, t2)

