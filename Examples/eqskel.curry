eqbool False False = True
eqbool False True = False
eqbool True False = False
eqbool True True = True
 

eqlist [] [] = True
eqlist [] (_:_) = False
eqlist (_:_) [] = False
eqlist (x:xs) (y:ys) = eqbool x y && eqlist xs ys

main = eqlist [True,False,False] [True,False,True?False]

{-

Func ("eqskel","eqlist")
   (Rule [1,2] 
       (Case  Flex (Var 1) [
            Branch (Pattern ("Prelude","[]") []) 
                (Case  Flex (Var 2) [
                     Branch (Pattern ("Prelude","[]") []) (Comb ConsCall ("Prelude","True") []),
                     Branch (Pattern ("Prelude",":") [3,4]) (Comb ConsCall ("Prelude","False") [])]),
            Branch (Pattern ("Prelude",":") [5,6]) 
                (Case  Flex (Var 2) [
                     Branch (Pattern ("Prelude","[]") []) (Comb ConsCall ("Prelude","False") []),
                     Branch (Pattern ("Prelude",":") [7,8]) (Comb FuncCall ("Prelude","&&") [Comb FuncCall ("eqskel","eqbool") [Var 5,Var 7],Comb FuncCall ("eqskel","eqlist") [Var 6,Var 8]])])]))] []

-}
