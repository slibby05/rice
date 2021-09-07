--This is a collection of things that should be in Curry but aren't yet
module Util where

import FlatCurry.Types
import Graph as G
import List ((\\))

infixr 5 ++-, \\-, &&-

type Path = [Int]
type Step = (String,Path,Expr)

instance Functor Maybe where
  fmap _ Nothing  = Nothing
  fmap f (Just x) = Just (f x)

instance Functor IO where
  fmap f = (>>= (return . f))


accM :: (Monad m) => (a -> b -> m ([c],b)) -> b -> [a] -> m ([c],b)
accM _ acc []     = return ([], acc)
accM f acc (x:xs) = do (r,  acc') <- f x acc
                       (rs, acc'') <- accM f acc' xs
                       return (r ++ rs, acc'')


fork :: (a -> c) -> (b -> d) -> (a,b) -> (c,d)
fork f g (x,y) = (f x, g y)

mapFst :: (a -> c) -> (a,b) -> (c,b)
mapFst f = fork f id

mapSnd :: (b -> d) -> (a,b) -> (a,d)
mapSnd g  = fork id g

fix :: (Eq a) => (a -> a) -> a -> a
fix f x
 | x == x'   = x'
 | otherwise = fix f x'
  where x' = f x           

---------------------------------------------------------
-- efficient list functions for sorted lists with no duplicates
---------------------------------------------------------

-- merge a list of sorted lists without duplicates
mergeMap :: (Ord b) => (a -> [b]) -> [a] -> [b]
mergeMap f = foldr (++-) [] . map f

-- no duplicate union
-- O(n)
(++-) :: (Ord a) => [a] -> [a] -> [a]
[]     ++- ys     = ys
(x:xs) ++- []     = x : xs
(x:xs) ++- (y:ys) = case compare x y of
                         LT -> x : (xs ++- (y:ys))
                         EQ -> x : (xs ++- ys)
                         GT -> y : ((x:xs) ++- ys)

-- difference
-- O(n)
(\\-) :: (Ord a) => [a] -> [a] -> [a]
[]     \\- _      = []
(x:xs) \\- []     = x:xs
(x:xs) \\- (y:ys) = case compare x y of
                         LT -> x : (xs \\- (y:ys))
                         EQ -> xs \\- ys
                         GT -> (x:xs) \\- ys

-- intersection
-- O(n)
(&&-) :: (Ord a) => [a] -> [a] -> [a]
[]     &&- _      = []
(x:xs) &&- []     = []
(x:xs) &&- (y:ys) = case compare x y of
                         LT ->     xs &&- (y:ys)
                         EQ -> x : (xs &&- ys)
                         GT ->     (x:xs) &&- ys

------------------------------------------------------------------------------
--- This gives a monad for creating unique variable names.
--- It's basically the State monad specilized to State Int a.
--- I need to make my own because State is just a type synonym,
--- and you can't make a monad out of that.
------------------------------------------------------------------------------

newtype State s a = State { runState :: (s -> (a,s)) }

instance Functor (State s) where
 fmap f (State g) = State $ \n -> let (a, n') = g n
                                  in (f a, n')

instance Monad (State s) where
 return x        = State $ \n -> (x,n)
 (State h) >>= f = State $ \n -> let (a, n')   = h n
                                     (State g) = f a
                                 in g n'

get :: State s s
get = State $ \n -> (n,n)

put :: s -> State s ()
put n = State $ \_ -> ((),n)


type Names a = State VarIndex a

fresh = do v <- get
           put (v+1)
           return v

------------------------------------------------------------------------------
-- This type is an extension of the Writer monad
-- I'm using it for the optimizer, which optimizes by rewriting expressions.
-- Yes, I do think I'm clever sometimes.
------------------------------------------------------------------------------

newtype ReWriter a = ReWriter {runRewriter :: VarIndex -> (a, [Step], VarIndex, Bool)}


instance Monad ReWriter where
 return x           = ReWriter $ \v -> (x,[],v,False)
 (ReWriter h) >>= f 
  = ReWriter $ \v -> 
     case h v of 
      (e1, steps1, v1, seen1) -> 
       case f e1 of
        (ReWriter g) ->
         case g v1 of
          (e2, steps2, v2, seen2) -> (e2, steps1 ++ steps2, v2, seen1 || seen2)


curVar :: ReWriter VarIndex
curVar = ReWriter $ \v -> (v,[],v,False)

update :: a -> Step -> VarIndex -> ReWriter a
update e step dv = ReWriter $ \v -> case v+dv of
                                         n -> (e, [step], n, True)

-----------------------------------------------------------
-- Strongly connected componenets 
-----------------------------------------------------------

scc :: [Int] -> [(Int,Int)] -> [[Int]]
scc vs es = map (:[]) islands ++ components
 where islands = vs \\ (map fst es ++ map snd es)
       components = map G.preorder $ G.scc $ G.buildG es
