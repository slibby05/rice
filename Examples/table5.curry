{-

-- Show where variables are and how are defined/references in FlatCurry

(Branch (Pattern ("Prelude","[]") []) (Lit (Intc 40))),
(Branch (Pattern ("Prelude",":") [1,2]) (Case Rigid (Var 1) [
     (Branch (Pattern ("Prelude","False") []) (Case Rigid (Var 2) [
          (Branch (Pattern ("Prelude","[]") []) (Lit (Intc 50))),
          (Branch (Pattern ("Prelude",":") [3,4]) (Comb FuncCall ("Prelude","failed") []))])),
     (Branch (Pattern ("Prelude","True") []) (Comb FuncCall ("Prelude","failed") []))]))
-}

g = case [] ? [True] of
      []  -> 40
      [False] -> 50
