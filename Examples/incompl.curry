data MyList a = Nil | Cons a (MyList a)
data Color = Black | White

comp_dark Black = True
comp_dark White = failed

incomp_dark Black = True

incomp_head (Cons a _) = a

comp_head Nil = failed
comp_head (Cons a _) = a

length Nil = 0
length (Cons _ b) = 1 + length b

rev_length (Cons _ b) = 1 + rev_length b
rev_length Nil = 0

main = let
    a = comp_dark Black
    b = incomp_dark Black
    c = comp_head Nil
    d = length Nil
    e = rev_length Nil
  in (a,b,c,d,e)

