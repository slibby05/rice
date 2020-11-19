
import Map as M
import FunTable as F

-- name -> (nondet, loopbreaker, size, uses, expr)
type VarTable = M.Map QName (Bool, Bool, Int, Int, Expr)

isNondet :: FunTab -> VarTable -> Expr -> Bool
isNondet ftab vtab (Var _)       = nondet (vtab v)
isNondet ftab _    (Lit l)       = False
isNondet ftab vtab (Comb _ n es) = F.nondet ftab n || any (isNondet ftab vtab) es
isNondet ftab vtab (Let vs e)    = any (isNondet ftab vtab) (e : map snd vs)
isNondet ftab _    (Free _ _)    = True
isNondet ftab _    (Or _ _)      = True
isNondet ftab vtab (Typed e _)   = isNondet ftab vtab e
isNondet ftab vtab (Case _ e bs) = isNondet ftab vtab e || any isNondetBranch bs
 where isNondetBranch (Branch _ e) = isNondet ftab vtab e

getUses :: VarIndex -> Expr -> Int
getUses v (Var x)       = if v == x then 1 else 0
getUses v (Lit l)       = 0
getUses v (Comb _ n es) = sum (map (getUses v) es)
getUses v (Let vs e)    = sum (getUses v e : map (getUses v . snd) es)
getUses v (Free _ e)    = getUses v e
getUses v (Or e1 e2)    = getUses v e1 + getUses v e2
getUses v (Typed e _)   = getUses v e
getUses v (Case _ e bs) = getUses v e + sum (map getUsesBranch bs)
 where getUsesBranch (Branch _ e) = getUses v e

getSize :: Expr -> Int
getSize (Var x)       = 1
getSize (Lit l)       = 1
getSize (Comb _ n es) = 1 + sum (map getSize es)
getSize (Let vs e)    = 1 + sum (getSize e : map snd vs)
getSize (Free _ e)    = 1 + getSize e
getSize (Or e1 e2)    = 1 + getSize e1 + getSize e2
getSize (Typed e _)   = 1 + getSize e
getSize (Case _ e bs) = 1 + getSize e + sum (map getSizeBranch bs)
 where getSizeBranch (Branch _ e) = getSize e
