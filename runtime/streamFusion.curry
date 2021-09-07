
type Stream a s = Stream (s -> Step a s) s
data Step a s = Done
              | Skip s
              | Yield a s

stream :: [a] -> Stream a [a]
stream xs = Stream stream_next xs

stream_next :: [a] -> Step a [a]
stream_next [] = Done
stream_next (x:xs) = Yield x xs

unstream :: Stream a s -> [a]
unstream (Stream next s) = unfold next s

unfold :: (a -> Step a s) -> s -> [a]
unfold next s = case next s of
                     Done        -> []
                     (Skip s)    -> unfold next s
                     (Yield x s) -> x : unfold next s

map :: (a -> b) -> [a] -> [b]
map f = unstream . map_s f . stream

map_s :: (a -> b) -> Stream a s -> Stream b s
map_s f (Stream next s) = Stream (map_next f next) s
map_next f next s = case next s of
                         Done -> Done
                         Skip s -> Skip s
                         Yield x s -> Yield (f x) s


(++) :: [a] -> [a] -> [a]
xs ++ ys = unstream (append_s (stream xs) (stream ys))

append_s :: Stream a sa -> Stream a sb -> Stream a (Either sa sb)
append_s (Stream next_a s_a0) (Stream next_b s_b0) = Stream (append_next s_b0 next_a next_b) (Left s_a0)
append_next :: sb -> (sa -> Step a (Either sa sb)) (sb -> Step b (Either as sb)) 
            -> Either (Stream a sa) (Stream a sb) -> Stream a (Either sa sb)
append_next s_b0 next_a next_b (Left s_a) = case next_a s_a of
                                                 Done -> Skip (Right s_b0)
                                                 Skip s_a' -> Skip (Left s_a')
                                                 Yield x s_a' -> Yield x (Left s_a')
append_next s_b0 next_a next_b (Right s_b) = case next_b s_b of
                                                  Done -> Done
                                                  Skip s_b' -> Skip (Right s_b')
                                                  Yield x s_b' -> Yield x (Right s_b')

foldr :: (a -> b -> b) -> b -> [a] -> b
foldr f z xs = foldr_s f z (stream xs)

foldr_s :: (a->b->b) -> b -> Stream a -> b
foldr_s f z (Stream next s) = foldr_go f z next s
foldr_go f z next s = case next s of
                           done -> z
                           skip s' -> go s'
                           Yield x s' -> f x (go s')


foldr (+) 0 (xs ++ ys)
=>
let v1 = xs ++ ys
    in foldr (+) 0 v1
=>
let v2 = stream xs
in let v3 = stream ys
in let v4 = append_s v2 v3
in let v1 = unstream v4
in let v5 = stream v1
    in foldr_s (+) 0 v5
=>
let v2 = stream xs
in let v3 = stream ys
in let v4 = append_s v2 v3
in let v5 = stream (unstream v4)
    in foldr_s (+) 0 v5
=>
let v2 = stream xs
in let v3 = stream ys
in let v4 = append_s v2 v3
    in foldr_s (+) 0 v4
=>
let v2 = stream xs
in let v3 = stream ys
in let v4 = case v2 of
             Stream next_a s_a0 -> 
              case v3 of
               Stream next_b s_b0 -> let v6 = append_next s_b0 next_a next_b
                                     in let v7 = Left s_a0
                                     in Stream v6 v7
    in case v4 of
            Stream next s = foldr_go (+) 0 next s
=>
let v2 = stream xs
in let v3 = stream ys
    in case v2 of
        Stream next_a s_a0 -> 
         case v3 of
          Stream next_b s_b0 -> 
           case Stream (append_next s_b0 next_a next_b) (Left s_a0) of
            Stream next s = foldr_go (+) 0 next s
=>
let v2 = stream xs
in let v3 = stream ys
    in case v2 of
        Stream next_a s_a0 -> 
         case v3 of
          Stream next_b s_b0 -> 
            foldr_go (+) 0 (append_next s_b0 next_a next_b) (Left s_a0)
=>
let v2 = stream xs
in let v3 = stream ys
    in case v2 of
        Stream next_a s_a0 -> 
         case v3 of
          Stream next_b s_b0 -> 
            foldr_go (+) 0 (append_next s_b0 next_a next_b) (Left s_a0)
