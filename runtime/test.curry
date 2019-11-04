
data BOOL = TRUE | FALSE
data LIST a = NIL | CONS a (LIST a)

eqbool :: BOOL -> BOOL -> BOOL
eqbool TRUE  TRUE  = TRUE
eqbool TRUE  FALSE = FALSE
eqbool FALSE TRUE  = FALSE
eqbool FALSE FALSE = TRUE


eqlist :: LIST BOOL -> LIST BOOL -> BOOL
eqlist NIL         NIL         = TRUE
eqlist NIL         (CONS _ _)  = FALSE
eqlist (CONS _ _)  NIL         = FALSE
eqlist (CONS x xs) (CONS y ys) = ifte (eqbool x y) (eqlist xs ys) FALSE

append :: LIST a -> LIST a -> LIST a
append NIL         ys = ys
append (CONS x xs) ys = CONS x (append xs ys)

ifte :: BOOL -> a -> a -> a
ifte TRUE  x _ = x
ifte FALSE _ y = y

ift :: BOOL -> a -> a
ift TRUE a = a

last :: LIST BOOL -> BOOL
last xs = ift (eqlist xs (append ys (CONS y NIL))) y
  where y,ys free
