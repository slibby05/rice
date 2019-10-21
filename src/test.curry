

appTest x = (f x) (g x)
 where f x y = x
       g x = x
--test :: Int -> Int ->Int
--test x = (x +)
--q :: Int
--q = a 1 2 3
--a :: Int -> Int -> Int -> Int
--a x = b x
--b :: Int -> Int -> Int -> Int
--b x y = c x y
--c :: Int -> Int -> Int -> Int
--c x y z = x + y + z
--
--f x = case x of True -> g x
--                False -> case x of True -> h x
--                                   False -> g x
--g x = x
--h x = x
--
--r :: Int -> Int
--r x = fcase x of
--           1 -> 2
--           2 -> 4
--           3 -> 9

loop = let a = b
           b = a
           c = d
           d = c
           e = f
           f = e
       in let g = a
          in a + c + e + g

data Color = Red | Green | Blue | Purple
 deriving (Eq,Show)

c :: Char -> Int
c x = case x of
           '1' -> 2
           '2' -> 4
           '3' -> 9
s :: Int -> Int
s x = s $ fcase (x ? x+1) of
           1 -> 2
           2 -> 4
           3 -> 9

t :: [Int] -> Int
t x = case x of
           [] -> 1
           (_:_) -> 2

u :: Color -> Int
u x = case x of
           Red -> 1
           Green -> 2
           Blue -> 3

w :: Color -> Int
w x = case x of
           Red -> 1
           Green -> 2

f :: a -> a
f x = x

g = f True

app :: (a -> b) -> a -> b
app f x = f x


caseAF x = fcase x of
            Red    -> 1
            Green  -> 2
            Blue   -> 3
            Purple -> 4

caseAR x = case x of
            Red    -> 1
            Green  -> 2
            Blue   -> 3
            Purple -> 4

caseLF x = fcase x of
            1 -> Red   
            2 -> Green 
            3 -> Blue  
            4 -> Purple

caseLR x = case x of
            1 -> Red   
            2 -> Green 
            3 -> Blue  
            4 -> Purple
