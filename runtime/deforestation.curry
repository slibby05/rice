

-- This is an implementation using build/foldr deforestation.
-- foldr is the standard defintion,
-- but we introduce a new function.
-- build generates a list
-- if you have an expression that generates a list
-- such as:
-- upto x y = if x == y then [] else x : upto (x+1) y
-- Then we can turn that into a build by replacing : with c and [] with n (cons and nil)
-- upto x y = build upto_build
-- upto_build x y c n = if x == y then n else c x (upto_build (x+1) y c n)
--
-- This satisfies the rule 
-- foldr f z (build g) == g f z
--
-- so foldr (+) 0 (upto 0 n)
-- => foldr (+) 0 (build upto_build 0 n)
-- => upto_build 0 n (+) 0
-- which is now effectively
-- if x == y then 0 else x + (upto_build (x+1) y)
--
-- not the actual type since Curry doens't have higher order polymorphism.
--build :: (∀ b. (a -> b -> b) -> b -> b) -> [a]
build g = g (:) []

--foldr :: (a -> b -> b) -> b -> [a] -> b
--foldr f z [] = z
--foldr f z (x:xs) = x `f` foldr f z xs

-- foldr f z (build g) = g f z

-- build_fold mkc mkn (build g) = build (\c n -> g (mkc c) (mkn n))
-- foldr f z (build_fold mkf mkz xs) = foldr (mkf f) (mkz z) xs
-- build_fold mkf1 mkz2 (build_fold mkf2 mkz2 xs) = buildFold (mkf1 . mkf2) (mkz1 . mkz2) xs

-- map f xs = build_fold (\c x y -> f x `c` y) id xs
-- iterate k = build (iterate_build k)
-- iterate_build k c n = x `c` iterate_build k x
-- map (*2) (iterate (+1) xs)
-- build_fold (\c x y -> (*2) x `c` y) id (build (iterate_build (+1)))
-- build (mk_build (iterate_build (+1)) (\c x y -> (*2) x `c` y) id)
-- build (\c n -> iterate_build (+1) ((\c x y -> (*2) x `c` y) c) n)
-- (\c n -> iterate_build (+1) ((\c x y -> (*2) x `c` y) c) n) (:) []
-- (\c n -> iterate_build (+1) ((\c x y -> (*2) x `c` y) (:)) [])
-- (\c n -> iterate_build (+1) (x y -> (*2) x : y) [])
--(x y -> (*2) x : y) x (iterate_build (+1) (x+1))
--2*x : (iterate_build (+1) (x+1)

--build_fold :: ((a -> b -> b) -> (c -> d -> d)) -> (b -> d) -> [a] -> d
build_fold mkc mkn xs = foldr (mkc (:)) (mkn []) xs
bf mkc mkn f z xs = foldr (mkc f) (mkn z) xs
-- used to actually construct a new build with build_fold/build rule
mk_build g mkc mkn c n = g (mkc c) (mkn n)

map :: (a -> b) -> [a] -> [b]
map f = build_fold (map_mkc f) id
map_mkc :: (a -> b) -> (b -> c -> c) -> a -> c -> c
map_mkc f c x y = f x `c` y

filter :: (a -> Bool) -> [a] -> [a]
filter p = build_fold (filter_mkc p) id
filter_mkc :: (a -> Bool) -> (a -> b -> b) -> a -> b -> b
filter_mkc p c x y = if p x then x `c` y else y

(++) :: [a] -> [a] -> [a]
xs ++ ys = concat (build (append_build xs ys))
append_build :: [a] -> [a] -> ([a] -> b -> b) -> b -> b
append_build xs ys c n = xs `c` (ys `c` n)

concat :: [[a]] -> [a]
concat = build_fold concat_mkc id
concat_mkc :: (a -> b -> b) -> [a] -> b -> b
concat_mkc f xs z = foldr f z xs

repeat x = build (repeat_build x)
repeat_build x c _ = let r = c x r in r

zip xs ys = build (zip_build xs ys)
zip_build []     []     _ n = n
zip_build []     (_:_)  _ n = n
zip_build (_:_)  []     _ n = n
zip_build (x:xs) (y:ys) c n = c (x,y) (zip_build xs ys c n) 

zipWith f xs ys = build (zipWith_build f xs ys)
zipWith_build _ []     []     _ n = n
zipWith_build _ []     (_:_)  _ n = n
zipWith_build _ (_:_)  []     _ n = n
zipWith_build f (x:xs) (y:ys) c n = c (f x y) (zipWith_build f xs ys c n) 


lookup :: Eq a => a -> [(a, b)] -> Maybe b
lookup k = foldr (lookup_fold k) Nothing
lookup_fold k (x,y) ans = if k == x then Just y else ans

iterate f x = build (iterate_build f x)
iterate_build f x c n = c x (iterate_build f (f x) c n)


-- [n..]
enumFrom_ :: Int -> [Int]
enumFrom_ n = iterate (1+) n

-- [n1,n2..]
enumFromThen_ :: Int -> Int -> [Int]
enumFromThen_ n1 n2 = iterate ((n2-n1)+) n1

-- [n..m]
enumFromTo_ :: Int -> Int -> [Int]
enumFromTo_ n m = build (enumFromTo_build n m)
enumFromTo_build :: Int -> Int -> (Int -> [Int] -> [Int]) -> [Int] -> [Int]
enumFromTo_build k m c n = if k > m then n else c k (enumFromTo_build (k+1) m c n)

-- [n1,n2..m]
enumFromThenTo_ :: Int -> Int -> Int -> [Int]
enumFromThenTo_ n1 n2 m = build (enumFromThenTo_build n1 (n2-n1) m)
enumFromThenTo_build :: Int -> Int -> Int -> (Int -> [Int] -> [Int]) -> [Int] -> [Int]
enumFromThenTo_build n dn m cons nil = if dn <= 0
                                       then if n < m 
                                            then nil 
                                            else cons n (enumFromThenTo_build (n+dn) dn m cons nil)
                                       else if n > m
                                            then nil 
                                            else cons n (enumFromThenTo_build (n+dn) dn m cons nil)

length :: [a] -> Int
length = foldr length_fold 0
length_fold :: a -> Int -> Int
length_fold _ y = 1 + y

null            :: [_] -> Bool
null = foldr null_fold True
null_fold _ _ = False

--map f (map g (map h xs))
-- =>
--let x1 = build (map_build h xs)
--    x2 = build (map_build g x1)
--    x3 = build (map_build f x2)
--in  x3
-- =>
--let x1 = build (map_build h xs)
--    x2 = build (map_build g x1)
--    x3 = foldr (map_fold f (:)) [] x2)
--in  x3
-- =>
--let x1 = build (map_build h xs)
--    x2 = build (map_build g x1)
--    x3 = foldr (map_fold f (:)) [] (build (map_build g x1))
--in  x3
-- =>
--let x1 = build (map_build h xs)
--    x2 = build (map_build g x1)
--    x3 = map_build g x1 (map_fold f (:)) []
--in  x3
-- =>
--let x1 = build (map_build h xs)
--    x3 = foldr (map_fold g (map_fold f (:))) [] x1
--in  x3
-- =>
--let x1 = build (map_build h xs)
--    x3 = foldr (map_fold g (map_fold f (:))) [] (build (map_build h xs)
--in  x3
-- =>
--let x1 = build (map_build h xs)
--    x3 = map_build h xs (map_fold g (map_fold f (:))) []
--in  x3
-- =>
--map_build h xs (map_fold g (map_fold f (:))) []
-- =>
--foldr (map_fold h (map_fold g (map_fold f (:)))) [] xs
