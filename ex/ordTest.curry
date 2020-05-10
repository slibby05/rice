
data MyList a = MyNil | MyCons a (MyList a) deriving (Eq, Ord)

listTest = MyCons 2 (MyCons 3 MyNil) <  MyCons 2 (MyCons 2 MyNil)

data BinTree a = Leaf | Branch a (BinTree a) (BinTree a) deriving (Eq, Ord)

t = Branch 5 (Branch 2 Leaf Leaf) (Branch 8 Leaf Leaf)

treeTest = t >= t

main :: (Bool, Bool)
main = (listTest, treeTest)

