f1 x = x

f2 ([x]) = x
f2 ([_,y]) = y

data Tree = Leaf | Branch Int Tree Tree

f3 (Branch _ (Branch _ _ (Branch x _ _)) _) = x

main = f2 [4]
