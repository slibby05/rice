
data Exp = Exp :+ Exp
         | Exp :- Exp
         | Exp :* Exp
         | Exp :/ Exp
         | Num Int

eval :: Exp -> Int
eval (Num x) = x
eval (x :+ y) = eval x + eval y
eval (x :- y) = eval x - eval y
eval (x :* y) = eval x * eval y
eval (x :/ y) = case y' > 0 && x' `mod` y' == 0 of
                     True -> x' `div` y'
 where x' = eval x
       y' = eval y

split :: [a] -> ([a],[a])
split (x:xs@(_:_)) = ([x],xs) ? case split xs of (ys,zs) -> (x:ys,zs)

insert :: a -> [a] -> [a]
insert x [] = [x]
insert x (y:ys) = x:y:ys ? y : (insert x ys)

perm :: [a] -> [a]
perm [] = []
perm (x:xs) = insert x (perm xs)

mkExp :: [Int] -> Exp
mkExp [n] = Num n
mkExp xs@(_:_) = case split xs of
                       (ys,zs) -> let e1 = mkExp ys
                                      e2 = mkExp zs
                                  in  e1 :+ e2 ?
                                      e1 :- e2 ?
                                      e1 :* e2 ?
                                      e1 :/ e2 

run :: [Int] -> Exp
run xs = let e = mkExp (perm xs)
         in case eval e of
                 100 -> e

main :: Exp
main = run [1..5]
