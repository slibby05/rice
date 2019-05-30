f a b = let x = a
            y = b
        in x + y + let z = x+y in z*z

main = f 3 5

{-

The nested bind 3 should be brought up.

module "nest-let-rec"
  import Prelude
  function ("nest-let-rec","f") 2
    declare
      path    1 [(("nest-let-rec","f"),0)]
      path    2 [(("nest-let-rec","f"),1)]
      address 3
    Node ("Prelude","+") (
      Node ("Prelude","+") (
        Var 1 ,
        Var 2 ) ,
      bind 3
        Node ("Prelude","+") (
          Var 1 ,
          Var 2 )
      Node ("Prelude","*") (
        Var 3 ,
        Var 3 ) )

-}
