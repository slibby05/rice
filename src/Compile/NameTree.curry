module Compile.NameTree where

-- One problem we're going to have immedeately is genreating fresh names.
-- I really don't want to wrap all this code in a monad, so I have a more FLP solution.
-- As we traverse an expression we generate a tree of free variables.
-- The tree itself will start as a free variable, and then be filled in.
--
-- If I don't need any free variable for a subexpression, then I bind the name tree to None
-- If I need a single variable, then I bind it to (Name v) and leave v free to be filled in later
-- If I have sub expressions, then I bind it to a branch node (Br ts), 
--    and bass each branch to a sub expression.
data NameTree = None | Name Int | Br [NameTree]
 deriving (Show)

-- Finally after I've fill the name tree with free variables, I can bind all of them at once.
-- I start with the smallest x such that no name n > x is in use (all larger names don't conflict)
-- then I traverse the tree and bind all of the free variables with x, x+1, x+2, ...
bindNames :: NameTree -> Int -> Int
bindNames None     n = n
bindNames (Name n) n = n+1
bindNames (Br ts)  n = foldr bindNames n ts


-- Convenience function
-- Suppose that f nt x = y, and that f fills in the NameTree nt
-- Then (withNames f x start) will bind all of the names in y with [start..]
withNames :: (NameTree -> a -> b) -> a -> Int -> b
withNames f x start
 | y =:= f nt x 
 & bindNames nt start >= start
 = y
  where nt,y free

-- We need to use this instead of zipWith
-- This is because a list of NameTree objects could be empty, 
-- so we need to force it to be as long as the second list.Suppose that f nt x = y, and that f fills in the NameTree nt
forceZipWith :: (a -> b -> c) -> [a] -> [b] -> [c]
forceZipWith _ [] [] = []
forceZipWith f (n:ns) (e:es) = f n e : forceZipWith f ns es

freeVarList :: [a] -> [b]
freeVarList = map (\x -> _) 
