f a1 a2 a3 a4 a5 = a1+a2+a3+a4+a5

g x = f 0 x
-- translated as 
-- (Comb (FuncPartCall 4) ("partial","f") [(Lit (Bint 0))] )
-- where the argument of FuncPartCall is the number of missing arguments

h y = g 1 y


main = h 2
