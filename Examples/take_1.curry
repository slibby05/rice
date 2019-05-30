mytake n l 
  = if n==0 then []
    else fcase l of
           [] -> []
           (x:xs) -> x : mytake (n-1) xs


{-

(Prog "take" ["Prelude"] [] [
  (Func ("take","mytake") 2 Public 
  (FuncType (TCons ("Prelude","Int") []) (FuncType (TCons ("Prelude","[]") [(TVar 0)]) (TCons ("Prelude","[]") [(TVar 0)])))
    (Rule [1,2] (Case Rigid 
       (Comb FuncCall ("Prelude","==") [(Var 1),(Lit (Bint 0))]) [
          (Branch (Pattern ("Prelude","False") []) 
              (Case Flex (Var 2) [
                   (Branch (Pattern ("Prelude","[]") []) (Comb ConsCall ("Prelude","[]") [])),
                   (Branch (Pattern ("Prelude",":") [3,4]) 
                      (Comb ConsCall ("Prelude",":") [
                          (Var 3),
                          (Comb FuncCall ("take","mytake") [
                              (Comb FuncCall ("Prelude","-") [(Var 1),(Lit (Bint 1))]),
                              (Var 4)])]))])),
          (Branch (Pattern ("Prelude","True") []) (Comb ConsCall ("Prelude","[]") []))])))] [])

-}

main = mytake 6 [1..]
 