f x y =
  g (let z = x:z in head z)
    (h (let z = y:z in head z) (let w = 1:w in head w))

g x y = x + y
h z w = z + w

main = f 4 7 -- 4 + (7 + 1)

{-

(Func ("let_nest_double","f") 2 Public (FuncType (TCons ("Prelude","Int") []) (FuncType (TCons ("Prelude","Int") []) (TCons ("Prelude","Int") []))) (Rule [1,2] (Comb FuncCall ("let_nest_double","g") [(Let [(3,(Comb ConsCall ("Prelude",":") [(Var 1),(Var 3)]))] (Comb FuncCall ("Prelude","head") [(Var 3)])),(Comb FuncCall ("let_nest_double","h") [(Let [(4,(Comb ConsCall ("Prelude",":") [(Var 2),(Var 4)]))] (Comb FuncCall ("Prelude","head") [(Var 4)])),(Let [(5,(Comb ConsCall ("Prelude",":") [(Lit (Intc 1)),(Var 5)]))] (Comb FuncCall ("Prelude","head") [(Var 5)]))])]))),

(Func ("let_nest_double","g") 2 Public (FuncType (TCons ("Prelude","Int") []) (FuncType (TCons ("Prelude","Int") []) (TCons ("Prelude","Int") []))) (Rule [1,2] (Comb FuncCall ("Prelude","+") [(Var 1),(Var 2)]))),

(Func ("let_nest_double","h") 2 Public (FuncType (TCons ("Prelude","Int") []) (FuncType (TCons ("Prelude","Int") []) (TCons ("Prelude","Int") []))) (Rule [1,2] (Comb FuncCall ("Prelude","+") [(Var 1),(Var 2)])))

-}
