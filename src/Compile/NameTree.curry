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
--
-- bindNames returns True if it was able to bind all the names
-- otherwise it fails
bindNames :: NameTree -> Int -> Bool
bindNames nt n | bind nt n >= n = True
 where
  bind None     n = n
  bind (Name n) n = n+1
  bind (Br ts)  n = foldr bind n ts


-- Convenience function
-- Suppose that f nt x = y, and that f fills in the NameTree nt
-- Then (withNames f x start) will bind all of the names in y with [start..]
withNames :: (NameTree -> a -> b) -> a -> Int -> b
withNames f x start
 | y =:= f nt x 
 & bindNames nt start
 = y
  where nt,y free

-- Like zipWith, but only succeeds if the two lists are the same length.
-- This is important is one list is a free variable.
-- It should be equivalent to 
-- forceZipWith f xs ys | length xs == length ys = zipWith f xs ys
forceZipWith :: (a -> b -> c) -> [a] -> [b] -> [c]
forceZipWith _ [] [] = []
forceZipWith f (n:ns) (e:es) = f n e : forceZipWith f ns es
