-- Datatype for regular expressions over an alphabet:

data RE a = Lit a
          | Alt  (RE a) (RE a)
          | Conc (RE a) (RE a)
          | Star (RE a)

-- My characters:

data Chr = A | B | C | D | E

-- Example: regular expression (a|b|c)

abc = Alt (Alt (Lit A) (Lit B)) (Lit C)

-- Example: regular expression (ab*)

abstar = Conc (Lit A) (Star (Lit B))

-- Example: regular expression (ab*c)
abstarc = Conc abstar (Lit C)

-- Extension: operator plus for regular expressions

plus re = Conc re (Star re)

-- Semantics of regular expressions

--sem :: RE a -> [a]
sem (Lit _)    = [1]
-- sem (Alt  a b) = sem a ? sem b
-- sem (Conc a b) = sem a ++ sem b
-- sem (Star a)   = [] ? sem (Conc a (Star a))

--%21 
--%21 -- Examples:
--%21 
--%21 test1 = sem abc
--%21 
--%21 -- -> "a" oder "b" oder "c"
--%21 
--%21 test2 = sem abstar
--%21 
--%21 -- -> "a" oder "ab" oder "abb" ...
--%21 
--%21 -- Matching:
--%21 
--%21 match :: RE a -> [a] -> Success
--%21 match r s | sem r == s = success
--%21 
--%21 test3 = match (Star abc) [A,B,A,C,A]
--%21 test4 = match abstar [E]
--%21 
--%21 -- grep:
--%21 
--%21 grep :: RE a -> [a] -> Success
--%21 grep r s = xs ++ sem r ++ ys =:= s  where xs,ys free
--%21 
--%21 -- Examples:
--%21 
--%21 test5 = grep abc [D,B,E]
--%21 test6 = grep abstar [D,A,B,E]
--%21 
--%21 biggrep n =
--%21   grep abstarc (take n (concatMap (\i->A : take i (repeat B)) [1..]) ++ [A,B,C])
--%21 
--%21 main = biggrep 200000
--%21 