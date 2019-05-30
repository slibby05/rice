--This is a collection of things that should be in Curry but aren't yet
module Util where

instance Functor Maybe where
  fmap _ Nothing  = Nothing
  fmap f (Just x) = Just (f x)

instance Functor IO where
  fmap f = (>>= (return . f))

fork :: (a -> c) -> (b -> d) -> (a,b) -> (c,d)
fork f g (x,y) = (f x, g y)

mapFst :: (a -> c) -> (a,b) -> (c,b)
mapFst f = fork f id

mapSnd :: (b -> d) -> (a,b) -> (a,d)
mapSnd g  = fork id g

