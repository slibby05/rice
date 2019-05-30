f x = case x of
  ([],[]) -> 10
  (_,(_:_)) -> 20
  ((_:_),_) -> 30
  ((_:_),(_:_)) -> 40

main = f ([1],[])


{-
(Rule  [1] 
   (Case Rigid (Var 1) [
      (Branch (Pattern ("Prelude","(,)") [2,3] )
         (Case Rigid (Var 2) [
            (Branch (Pattern ("Prelude","[]") [] )
               (Case Rigid (Var 3) [
                  (Branch (Pattern ("Prelude","[]") [] )(Lit (Bint 10))),
                  (Branch (Pattern ("Prelude",":") [4,5] )(Lit (Bint 20)))] )),
            (Branch (Pattern ("Prelude",":") [6,7] )
               (Case Rigid (Var 3) [
                  (Branch (Pattern ("Prelude",":") [8,9] )(Lit (Bint 20))),
                  (Branch (Pattern ("Prelude","[]") [] )(Lit (Bint 30)))] ))] ))] ))
-}
