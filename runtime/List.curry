
------------------------------------------------------------------------------
--- List library but optimized for build/fold deforestation.
---
--- @author Michael Hanus, Bjoern Peemoeller, Steven Libby
--- @version Februar 2021
--- @category general
------------------------------------------------------------------------------

{-# OPTIONS_CYMAKE -Wno-incomplete-patterns #-}

module List
  ( elemIndex, elemIndices, find, findIndex, findIndices
  , nub, nubBy, delete, deleteBy, (\\), union, intersect
  , intersperse, intercalate, transpose, diagonal, permutations, partition
  , group, groupBy, splitOn, split, inits, tails, replace
  , isPrefixOf, isSuffixOf, isInfixOf
  , sortBy, insertBy
  , unionBy, intersectBy
  , last, init
  , sum, product, maximum, minimum, maximumBy, minimumBy
  , scanl, scanl1, scanr, scanr1
  , mapAccumL, mapAccumR
  , cycle, unfoldr
  ) where

infix 5 \\

listMaybe = foldr (\a _ -> Just a) Nothing

--- Returns the index `i` of the first occurrence of an element in a list
--- as `(Just i)`, otherwise `Nothing` is returned.
elemIndex               :: Eq a => a -> [a] -> Maybe Int
elemIndex x              = findIndex (x ==)

--- Returns the list of indices of occurrences of an element in a list.
elemIndices             :: Eq a => a -> [a] -> [Int]
elemIndices x            = findIndices (x ==)

--- Returns the first element `e` of a list satisfying a predicate
--- as `(Just e)`,
--- otherwise `Nothing` is returned.
find                    :: (a -> Bool) -> [a] -> Maybe a
find p                   = listMaybe . filter p

--- Returns the index `i` of the first occurrences of a list element
--- satisfying a predicate as `(Just i)`, otherwise `Nothing` is returned.
findIndex               :: (a -> Bool) -> [a] -> Maybe Int
findIndex p              = listMaybe . findIndices p

--- Returns the list of indices of list elements satisfying a predicate.
findIndices             :: (a -> Bool) -> [a] -> [Int]
findIndices p xs         = map snd (filter p (zip xs [0..]))

--- Removes all duplicates in the argument list.
nub                   :: Eq a => [a] -> [a]
nub xs                 = nubBy (==) xs

--- Removes all duplicates in the argument list according to an
--- equivalence relation.
nubBy                 :: (a -> a -> Bool) -> [a] -> [a]
nubBy eq               = build_fold (nubBy_mkc eq) id
nubBy_mkc eq c a b     = a `elem` b then b else c a b

--- Deletes the first occurrence of an element in a list.
delete                :: Eq a => a -> [a] -> [a]
delete                 = deleteBy (==)

--- Deletes the first occurrence of an element in a list
--- according to an equivalence relation.
deleteBy               :: (a -> a -> Bool) -> a -> [a] -> [a]
deleteBy eq x           = build_fold (deleteBy_mkc eq x) id
deleteBy_mkc eq x c a b = if eq x a then b else c a b


--- Computes the difference of two lists.
--- @param xs - a list
--- @param ys - a list
--- @return the list where the first occurrence of each element of
---         `ys` has been removed from `xs`
(\\) :: Eq a => [a] -> [a] -> [a]
xs \\ ys = build_fold (remove_mkc ys) id xs
remove_mkc ys c a b = if a `elem` ys then b else c a b

--- Computes the union of two lists.
union                 :: Eq a => [a] -> [a] -> [a]
union                  = unionBy (==)

--- Computes the union of two lists according to the given equivalence relation
unionBy :: (a -> a -> Bool) -> [a] -> [a] -> [a]
unionBy eq xs ys         = nubBy eq (xs ++ ys)

--- Computes the intersection of two lists.
intersect             :: Eq a => [a] -> [a] -> [a]
intersect              = intersectBy (==)

--- Computes the intersection of two lists
--- according to the given equivalence relation
intersectBy :: (a -> a -> Bool) -> [a] -> [a] -> [a]
intersectBy eq xs ys         = build_fold (intersectBy_mkc eq ys) id xs
intersectBy_mkc eq ys c a b  = if any (eq a) ys then c a b else b


--- Puts a separator element between all elements in a list.
---
--- Example: `(intersperse 9 [1,2,3,4]) = [1,9,2,9,3,9,4]`
intersperse :: a -> [a] -> [a]
intersperse sep = foldr (\x xs -> x : if null xs then [] else sep : xs) []

--- `intercalate xs xss` is equivalent to `(concat (intersperse xs xss))`.
--- It inserts the list `xs` in between the lists in `xss` and
--- concatenates the result.
intercalate :: [a] -> [[a]] -> [a]
intercalate xs xss = concat (intersperse xs xss)

--- Transposes the rows and columns of the argument.
---
--- Example: `(transpose [[1,2,3],[4,5,6]]) = [[1,4],[2,5],[3,6]]`
transpose :: [[a]] -> [[a]]
transpose = build_fold (zipWith (:)) repeat
--transpose = build_fold transpose_mkc id
--transpose_mkc a b = if null b then map (:[]) a else zipWith (:) a b

--- Diagonalization of a list of lists.
--- Fairly merges (possibly infinite) list of (possibly infinite) lists.
---
--- @param xss - lists of lists
--- @return fair enumeration of all elements of inner lists of given lists
---
diagonal :: [[a]] -> [a]
diagonal = concat . foldr diags []
 where
  diags []     ys = ys
  diags (x:xs) ys = [x] : merge xs ys

  merge []       ys     = ys
  merge xs@(_:_) []     = map (:[]) xs
  merge (x:xs)   (y:ys) = (x:y) : merge xs ys

--- Returns the list of all permutations of the argument.
permutations           :: [a] -> [[a]]
permutations xs0       =  xs0 : perms xs0 []
 where
  perms []     _  = []
  perms (t:ts) is = foldr interleave (perms ts (t:is)) (permutations is)
    where interleave    xs     r = let (_, zs) = interleave' id xs r in zs
          interleave' _ []     r = (ts, r)
          interleave' f (y:ys) r = let (us, zs) = interleave' (f . (y:)) ys r
                                   in (y:us, f (t:y:us) : zs)

--- Partitions a list into a pair of lists where the first list
--- contains those elements that satisfy the predicate argument
--- and the second list contains the remaining arguments.
---
--- Example: `(partition (<4) [8,1,5,2,4,3]) = ([1,2,3],[8,5,4])`
partition       :: (a -> Bool) -> [a] -> ([a],[a])
partition p xs  = foldr select ([],[]) xs
 where
  select x (ts,fs) = if p x then (x:ts,fs)
                            else (ts,x:fs)

--- Splits the list argument into a list of lists of equal adjacent
--- elements.
---
--- Example: `(group [1,2,2,3,3,3,4]) = [[1],[2,2],[3,3,3],[4]]`
group :: Eq a => [a] -> [[a]]
group = groupBy (==)

--- Splits the list argument into a list of lists of related adjacent
--- elements.
--- @param eq - the relation to classify adjacent elements
--- @param xs - the list of elements
--- @return the list of lists of related adjacent elements
groupBy :: (a -> a -> Bool) -> [a] -> [[a]]
groupBy _  []     = []
groupBy eq (x:xs) = (x:ys) : groupBy eq zs
                    where (ys,zs) = span (eq x) xs


--- Breaks the second list argument into pieces separated by the first
--- list argument, consuming the delimiter. An empty delimiter is
--- invalid, and will cause an error to be raised.
splitOn :: Eq a => [a] -> [a] -> [[a]]
splitOn []          _  = error "splitOn called with an empty pattern"
splitOn [x]         xs = split (x ==) xs
splitOn sep@(_:_:_) xs = go xs
 where
  go []       = [[]]
  go l@(y:ys) | sep `isPrefixOf` l = [] : go (drop len l)
              | otherwise          = let (zs:zss) = go ys in (y:zs):zss
  len = length sep

--- Splits a list into components delimited by separators,
--- where the predicate returns True for a separator element.
--- The resulting components do not contain the separators.
--- Two adjacent separators result in an empty component in the output.
---
--- > split (=='a') "aabbaca" == ["","","bb","c",""]
--- > split (=='a') ""        == [""]
split :: (a -> Bool) -> [a] -> [[a]]
split _ []     = [[]]
split p (x:xs) | p x       = [] : split p xs
               | otherwise = let (ys:yss) = split p xs in (x:ys):yss

--- Returns all initial segments of a list, starting with the shortest.
--- Example: `inits [1,2,3] == [[],[1],[1,2],[1,2,3]]`
--- @param xs - the list of elements
--- @return the list of initial segments of the argument list
inits :: [a] -> [[a]]
inits []     =  [[]]
inits (x:xs) =  [] : map (x:) (inits xs)

--- Returns all final segments of a list, starting with the longest.
--- Example: `tails [1,2,3] == [[1,2,3],[2,3],[3],[]]`
tails :: [a] -> [[a]]
tails []         =  [[]]
tails xxs@(_:xs) =  xxs : tails xs

--- Replaces an element in a list.
--- @param x - the new element
--- @param p - the position of the new element (head = 0)
--- @param ys - the old list
--- @return the new list where the `p`. element is replaced by `x`
replace :: a -> Int -> [a] -> [a]
replace _ _ []     = []
replace x p (y:ys) | p==0      = x:ys
                   | otherwise = y:(replace x (p-1) ys)

--- Checks whether a list is a prefix of another.
--- @param xs - a list
--- @param ys - a list
--- @return `True` if `xs` is a prefix of `ys`
isPrefixOf :: Eq a => [a] -> [a] -> Bool
isPrefixOf []     _      = True
isPrefixOf (_:_)  []     = False
isPrefixOf (x:xs) (y:ys) = x==y && (isPrefixOf xs ys)

--- Checks whether a list is a suffix of another.
--- @param xs - a list
--- @param ys - a list
--- @return `True` if `xs` is a suffix of `ys`
isSuffixOf :: Eq a => [a] -> [a] -> Bool
isSuffixOf xs ys = isPrefixOf (reverse xs) (reverse ys)

--- Checks whether a list is contained in another.
--- @param xs - a list
--- @param ys - a list
--- @return True if xs is contained in ys
isInfixOf :: Eq a => [a] -> [a] -> Bool
isInfixOf xs ys = any (isPrefixOf xs) (tails ys)

--- Sorts a list w.r.t. an ordering relation by the insertion method.
sortBy :: (a -> a -> Bool) -> [a] -> [a]
sortBy le = foldr (insertBy le) []

--- Inserts an object into a list according to an ordering relation.
--- @param le - an ordering relation (e.g., less-or-equal)
--- @param x - an element
--- @param xs - a list
--- @return a list where the element has been inserted
insertBy :: (a -> a -> Bool) -> a -> [a] -> [a]
insertBy _ x []      = [x]
insertBy le x (y:ys) = if le x y
                         then x : y : ys
                         else y : insertBy le x ys

--- Returns the last element of a non-empty list.
last :: [a] -> a
last [x]            = x
last (_ : xs@(_:_)) = last xs

--- Returns the input list with the last element removed.
init :: [a] -> [a]
init [_]          = []
init (x:xs@(_:_)) = x : init xs

--- Returns the sum of a list of integers.
sum :: Num a => [a] -> a
sum ns = foldr (+) 0 ns

--- Returns the product of a list of integers.
product :: Num a => [a] -> a
product ns = foldr (*) 1 ns

--- Returns the maximum of a non-empty list.
maximum :: Ord a => [a] -> a
maximum xs@(_:_) =  foldr1 max xs

--- Returns the maximum of a non-empty list
--- according to the given comparison function
maximumBy :: (a -> a -> Ordering) -> [a] -> a
maximumBy cmp xs@(_:_) = foldr1 maxBy xs
 where
  maxBy x y = case cmp x y of
                GT -> x
                _  -> y

--- Returns the minimum of a non-empty list.
minimum :: Ord a => [a] -> a
minimum xs@(_:_) =  foldr1 min xs

--- Returns the minimum of a non-empty list
--- according to the given comparison function
minimumBy :: (a -> a -> Ordering) -> [a] -> a
minimumBy cmp xs@(_:_) = foldr1 minBy xs
 where
  minBy x y = case cmp x y of
                GT -> y
                _  -> x

--- `scanl` is similar to `foldl`, but returns a list of successive
--- reduced values from the left:
---   scanl f z [x1, x2, ...] == [z, z `f` x1, (z `f` x1) `f` x2, ...]
scanl        :: (a -> b -> a) -> a -> [b] -> [a]
scanl f q ls =  q : (case ls of
                       []   -> []
                       x:xs -> scanl f (f q x) xs)

--- `scanl1` is a variant of `scanl` that has no starting value argument:
---  scanl1 f [x1, x2, ...] == [x1, x1 `f` x2, ...]
scanl1          :: (a -> a -> a) -> [a] -> [a]
scanl1 _ []     =  []
scanl1 f (x:xs) =  scanl f x xs

--- `scanr` is the right-to-left dual of `scanl`.
scanr             :: (a -> b -> b) -> b -> [a] -> [b]
scanr _ q0 []     =  [q0]
scanr f q0 (x:xs) =  f x q : qs
                     where qs@(q:_) = scanr f q0 xs

--- `scanr1` is a variant of `scanr` that has no starting value argument.
scanr1                :: (a -> a -> a) -> [a] -> [a]
scanr1 _ []           =  []
scanr1 _ [x]          =  [x]
scanr1 f (x:xs@(_:_)) =  f x q : qs
                         where qs@(q:_) = scanr1 f xs

--- The `mapAccumL` function behaves like a combination of `map` and
--- `foldl`; it applies a function to each element of a list, passing
--- an accumulating parameter from left to right, and returning a final
--- value of this accumulator together with the new list.
mapAccumL :: (acc -> x -> (acc, y)) -> acc -> [x] -> (acc, [y])
mapAccumL _ s []        =  (s, [])
mapAccumL f s (x:xs)    =  (s'',y:ys)
                           where (s', y ) = f s x
                                 (s'',ys) = mapAccumL f s' xs

--- The `mapAccumR` function behaves like a combination of `map` and
--- `foldr`; it applies a function to each element of a list, passing
--- an accumulating parameter from right to left, and returning a final
--- value of this accumulator together with the new list.
mapAccumR :: (acc -> x -> (acc, y)) -> acc -> [x] -> (acc, [y])
mapAccumR _ s []        =  (s, [])
mapAccumR f s (x:xs)    =  (s'', y:ys)
                           where (s'',y ) = f s' x
                                 (s', ys) = mapAccumR f s xs

--- Builds an infinite list from a finite one.
cycle :: [a] -> [a]
cycle xs = build (cycle_build xs)
cycle_build xs c n = let r = foldr c r xs in r

--- Builds a list from a seed value.
unfoldr :: (b -> Maybe (a, b)) -> b -> [a]
unfoldr f b  = case f b of
  Just (a, new_b) -> a : unfoldr f new_b
  Nothing         -> []
