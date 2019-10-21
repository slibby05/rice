-- I might want this later, so I want to remember it.

type ConsList = [F.QName]


-- One problem we're going to have immedeately is genreating fresh names.
-- I really don't want to wrap all this code in a monad, so I have a more FLP solution.
-- As we traverse an expression we generate a tree of free variables.
-- The tree itself will start as a free variable, and then be filled in.
--
-- If I don't need any free variable for a subexpression, then I bind the name tree to None
-- If I need a single variable, then I bind it to (Name v) and leave v free to be filled in later
-- If I have sub expressions, then I bind it to a branch node (Br ts), 
--    and bass each branch to a sub expression.
data NameTree = None | Name A.Name | Br [NameTree]

-- Finally after I've fill the name tree with free variables, I can bind all of them at once.
-- I start with the smallest x such that no name n > x is in use (all larger names don't conflict)
-- then I traverse the tree and bind all of the free variables with x, x+1, x+2, ...
bindNames :: NameTree -> Int -> Int
bindNames None     n = n
bindNames (Name v) n | v =:= ('v':show n) = n+1
bindNames (Br ts)  n = foldr bindNames n ts

