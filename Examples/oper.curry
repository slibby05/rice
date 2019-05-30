-- flexble elemIndex
(x ++ [y] ++ _) !!! n | n =:= length x = y

indexOf x e | x !!! n =:= e = n where n free

main = indexOf [1,2,4,8,16] 4
