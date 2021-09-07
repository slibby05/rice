
import Prelude hiding (Maybe, Either, IOError)

data Maybe a = Nothing | Just a
data Either a b = Left a | Right b
data IOError =
    IOError     String
  | UserError   String
  | FailError   String
  | NondetError String

newtype RepBool   = B Bool
newtype RepInt    = RI Int
newtype RepFloat  = RF Float
newtype RepChar   = RC Char
newtype RepList a = RL [a]
newtype RepUnit             = RT0 ()
newtype RepT2 a b           = RT2 (a,b)
newtype RepT3 a b c         = RT3 (a,b,c)
newtype RepT4 a b c d       = RT4 (a,b,c,d)
newtype RepT5 a b c d e     = RT5 (a,b,c,d,e)
newtype RepT6 a b c d e f   = RT6 (a,b,c,d,e,f)
newtype RepT7 a b c d e g f = RT7 (a,b,c,d,e,f,g)

div_ :: Int -> Int -> Int
div_ external
mod_ :: Int -> Int -> Int
mod_ external
quot_ :: Int -> Int -> Int
quot_ external
rem_ :: Int -> Int -> Int
rem_ external
(+$) :: Int -> Int -> Int
(+$) external
(-$) :: Int -> Int -> Int
(-$) external
(*$) :: Int -> Int -> Int
(*$) external
eqInt :: Int -> Int -> Bool
eqInt external
eqFloat :: Float -> Float -> Bool
eqFloat external
eqChar :: Char -> Char -> Bool
eqChar external
ltEqInt :: Int -> Int -> Bool
ltEqInt external
ltEqFloat :: Float -> Float -> Bool
ltEqFloat external
ltEqChar :: Char -> Char -> Bool
ltEqChar external

isDigit :: Char -> Bool
isDigit external
isAlpha :: Char -> Bool
isAlpha external
isBinDigit :: Char -> Bool
isBinDigit external
isHexDigit :: Char -> Bool
isHexDigit external
isOctDigit :: Char -> Bool
isOctDigit external
isUpper :: Char -> Bool
isUpper external
isAlphaNum :: Char -> Bool
isAlphaNum external
lexDigits :: ReadS String
lexDigits external

cond :: Bool -> a -> a
cond True x = x

def_Ord_LtEq :: Ord a => a -> a -> Bool
def_Ord_LtEq x y = case compare x y of
                        LT -> True
                        EQ -> True
                        GT -> False

instance Num RepInt where
  (RI x) + (RI y) = RI (x +$ y)
  (RI x) - (RI y) = RI (x -$ y)
  (RI x) * (RI y) = RI (x *$ y)

  negate (RI x) = RI (0 -$ x)

  abs x | x >= 0    = x
        | otherwise = negate x

  signum x | x > 0     = RI 1
           | x == 0    = RI 0
           | otherwise = RI (-1)

  fromInt x = RI x

instance Real RepInt where
  -- the implementation of typeclasses needed a few more passes

instance Integral RepInt where
    div  (RI n) (RI d) = RI (div_  n d)
    mod  (RI n) (RI d) = RI (mod_  n d)
    quot (RI n) (RI d) = RI (quot_ n d)
    rem  (RI n) (RI d) = RI (rem_  n d)
    divMod  (RI n) (RI d) = (RI (div_  n d), RI (mod_ n d))
    quotRem (RI n) (RI d) = (RI (quot_ n d), RI (rem_ n d))

instance Eq RepBool where
  (B a)  == (B b)  = not (a || b) || (a && b)
  (B a)  /= (B b)  = (a || b) && not (a && b)

instance Eq RepInt where
  (RI x) == (RI y) = x `eqInt` y
  (RI x) /= (RI y) = not (x `eqInt` y)
instance Eq RepFloat where
  (RF x) == (RF y) = x `eqFloat` y
  (RF x) /= (RF y) = not (x `eqFloat` y)
instance Eq RepChar where
  (RC c) == (RC c') = c `eqChar` c'
  (RC c) /= (RC c') = not (c `eqChar` c')

instance (Eq a) => Eq (RepList a) where
  (RL [])     == (RL [])     = True
  (RL [])     == (RL (_:_))  = False
  (RL (_:_))  == (RL [])     = False
  (RL (x:xs)) == (RL (y:ys)) = x == y && xs == ys
  l1          /= l2          = not (l1 == l2)

instance Eq RepUnit where
  (RT0 ()) == (RT0 ()) = True
  (RT0 ()) /= (RT0 ()) = False
instance (Eq a, Eq b) => Eq (RepT2 a b) where
  (RT2 (a,b)) == (RT2 (a',b')) = a == a' && b == b'
  (RT2 (a,b)) /= (RT2 (a',b')) = a /= a' || b /= b'
instance (Eq a, Eq b, Eq c) => Eq (RepT3 a b c) where
  (RT3 (a,b,c)) == (RT3 (a',b',c')) = a == a' && (b,c) == (b',c')
  (RT3 (a,b,c)) /= (RT3 (a',b',c')) = a /= a' || (b,c) /= (b',c')
instance (Eq a, Eq b, Eq c, Eq d) => Eq (RepT4 a b c d) where
  (RT4 (a,b,c,d)) == (RT4 (a',b',c',d')) = a == a' && (b,c,d) == (b',c',d')
  (RT4 (a,b,c,d)) /= (RT4 (a',b',c',d')) = a /= a' || (b,c,d) /= (b',c',d')
instance (Eq a, Eq b, Eq c, Eq d, Eq e) => Eq (RepT5 a b c d e) where
  (RT5 (a,b,c,d,e)) == (RT5 (a',b',c',d',e')) = a == a' && (b,c,d,e) == (b',c',d',e')
  (RT5 (a,b,c,d,e)) /= (RT5 (a',b',c',d',e')) = a /= a' || (b,c,d,e) /= (b',c',d',e')
instance (Eq a, Eq b, Eq c, Eq d, Eq e, Eq f) => Eq (RepT6 a b c d e f) where
  (RT6 (a,b,c,d,e,f)) == (RT6 (a',b',c',d',e',f')) = a == a' && (b,c,d,e,f) == (b',c',d',e',f')
  (RT6 (a,b,c,d,e,f)) /= (RT6 (a',b',c',d',e',f')) = a /= a' || (b,c,d,e,f) /= (b',c',d',e',f')
instance (Eq a, Eq b, Eq c, Eq d, Eq e, Eq f, Eq g) => Eq (RepT7 a b c d e f g) where
  (RT7 (a,b,c,d,e,f,g)) == (RT7 (a',b',c',d',e',f',g')) = a == a' && (b,c,d,e,f,g) == (b',c',d',e',f',g')
  (RT7 (a,b,c,d,e,f,g)) /= (RT7 (a',b',c',d',e',f',g')) = a /= a' || (b,c,d,e,f,g) /= (b',c',d',e',f',g')


instance Ord RepInt where
  (RI x) <= (RI y)  = ltEqInt x y
  (RI x) >= (RI y)  = ltEqInt y x
  (RI x) <  (RI y)  = not (ltEqInt y x)
  (RI x) >  (RI y)  = not (ltEqInt x y)
  min (RI x) (RI y) | ltEqInt x y = RI x
                    | otherwise   = RI y
  max (RI x) (RI y) | ltEqInt x y = RI y
                    | otherwise   = RI x
  compare (RI x) (RI y) 
    | eqInt x y   = EQ
    | ltEqInt x y = LT
    | otherwise   = GT
instance Ord RepFloat where
  (RF x) <= (RF y)  = ltEqFloat x y
  (RF x) >= (RF y)  = ltEqFloat y x
  (RF x) <  (RF y)  = not (ltEqFloat y x)
  (RF x) >  (RF y)  = not (ltEqFloat x y)
  min (RF x) (RF y) | ltEqFloat x y = RF x
                    | otherwise     = RF y
  max (RF x) (RF y) | ltEqFloat x y = RF y
                    | otherwise     = RF x
  compare (RF x) (RF y) 
    | eqFloat x y   = EQ
    | ltEqFloat x y = LT
    | otherwise     = GT
instance Ord RepChar where
  (RC x) <= (RC y)  = ltEqChar x y
  (RC x) >= (RC y)  = ltEqChar y x
  (RC x) <  (RC y)  = not (ltEqChar y x)
  (RC x) >  (RC y)  = not (ltEqChar x y)
  min (RC x) (RC y) | ltEqChar x y = RC x
                    | otherwise    = RC y
  max (RC x) (RC y) | ltEqChar x y = RC y
                    | otherwise    = RC x
  compare (RC x) (RC y) 
    | eqChar x y   = EQ
    | ltEqChar x y = LT
    | otherwise    = GT

instance (Ord a) => Ord (RepList a) where
  compare (RL [])     (RL [])     = EQ
  compare (RL (_:_))  (RL [])     = GT
  compare (RL [])     (RL (_:_))  = LT
  compare (RL (x:xs)) (RL (y:ys)) | x == y    = compare (RL xs) (RL ys)
                                  | otherwise = compare x y
  a <= b = case compare a b of
                LT -> True
                EQ -> True
                GT -> False
  a >= b = case compare a b of
                LT -> False
                EQ -> True
                GT -> True
  a < b = case compare a b of
               LT -> True
               EQ -> False
               GT -> False
  a > b = case compare a b of
               LT -> False
               EQ -> False
               GT -> True
  min a b | a <= b    = a
          | otherwise = b
  max a b | a <= b    = a
          | otherwise = b

instance Ord RepBool where
  (B a) <= (B b) = not a || b
  (B a) >= (B b) = not b || a
  (B a) <  (B b) = not a && b
  (B a) >  (B b) = not b && a
  min (B a) (B b) = B (a && b)
  max (B a) (B b) = B (a || b)
  compare (B a) (B b) 
   | not a && b = LT
   | not b && a = GT
   | otherwise = EQ

instance Ord RepUnit where
  _ <= _ = True
  _ >= _ = True
  _ <  _ = False
  _ >  _ = False
  min _ _ = RT0 ()
  max _ _ = RT0 ()
instance (Ord a, Ord b) => Ord (RepT2 a b) where
  compare (RT2 (a,b)) (RT2 (a',b'))
    = case compare a a' of
           LT -> LT
           GT -> GT
           EQ -> compare b b'
  a <= b = case compare a b of
                LT -> True
                EQ -> True
                GT -> False
  a >= b = case compare a b of
                LT -> False
                EQ -> True
                GT -> True
  a < b = case compare a b of
               LT -> True
               EQ -> False
               GT -> False
  a > b = case compare a b of
               LT -> False
               EQ -> False
               GT -> True
  min a b | a <= b = a
          | otherwise = b
  max a b | a <= b = a
          | otherwise = b
instance (Ord a, Ord b, Ord c) => Ord (RepT3 a b c) where
  compare (RT3 (a,b,c)) (RT3 (a',b',c'))
    = case compare a a' of
           LT -> LT
           GT -> GT
           EQ -> compare (b,c) (b',c')
  a <= b = case compare a b of
                LT -> True
                EQ -> True
                GT -> False
  a >= b = case compare a b of
                LT -> False
                EQ -> True
                GT -> True
  a < b = case compare a b of
               LT -> True
               EQ -> False
               GT -> False
  a > b = case compare a b of
               LT -> False
               EQ -> False
               GT -> True
  min a b | a <= b = a
          | otherwise = b
  max a b | a <= b = a
          | otherwise = b
instance (Ord a, Ord b, Ord c, Ord d) => Ord (RepT4 a b c d) where
  compare (RT4 (a,b,c,d)) (RT4 (a',b',c',d'))
    = case compare a a' of
           LT -> LT
           GT -> GT
           EQ -> compare (b,c,d) (b',c',d')
  a <= b = case compare a b of
                LT -> True
                EQ -> True
                GT -> False
  a >= b = case compare a b of
                LT -> False
                EQ -> True
                GT -> True
  a < b = case compare a b of
               LT -> True
               EQ -> False
               GT -> False
  a > b = case compare a b of
               LT -> False
               EQ -> False
               GT -> True
  min a b | a <= b = a
          | otherwise = b
  max a b | a <= b = a
          | otherwise = b
instance (Ord a, Ord b, Ord c, Ord d, Ord e) => Ord (RepT5 a b c d e) where
  compare (RT5 (a,b,c,d,e)) (RT5 (a',b',c',d',e'))
    = case compare a a' of
           LT -> LT
           GT -> GT
           EQ -> compare (b,c,d,e) (b',c',d',e')
  a <= b = case compare a b of
                LT -> True
                EQ -> True
                GT -> False
  a >= b = case compare a b of
                LT -> False
                EQ -> True
                GT -> True
  a < b = case compare a b of
               LT -> True
               EQ -> False
               GT -> False
  a > b = case compare a b of
               LT -> False
               EQ -> False
               GT -> True
  min a b | a <= b = a
          | otherwise = b
  max a b | a <= b = a
          | otherwise = b

instance Read (RepUnit) where
  readsPrec _ = readParen False readsUnit

instance (Read a, Read b) => Read (RepT2 a b) where
  readsPrec _ = readParen False (readsLParen readsVal_2)

instance (Read a, Read b, Read c) => Read (RepT3 a b c) where
  readsPrec _ = readParen False (readsLParen readsVal_3)

instance (Read a, Read b, Read c, Read d) => Read (RepT4 a b c d) where
  readsPrec _ = readParen False (readsLParen readsVal_4)

instance (Read a, Read b, Read c, Read d, Read e) => Read (RepT5 a b c d e) where
  readsPrec _ = readParen False (readsLParen readsVal_5)

c2 :: a -> (b, String) -> (RepT2 a b, String)
c2 a (b,str) = ((RT2 (a,b)),str)

c3 :: a -> (RepT2 b c, String) -> (RepT3 a b c, String)
c3 a ((RT2 (b,c)),str) = ((RT3 (a,b,c)),str)

c4 :: a -> (RepT3 b c d, String) -> (RepT4 a b c d, String)
c4 a ((RT3 (b,c,d)),str) = ((RT4 (a,b,c,d)),str)

c5 :: a -> (RepT4 b c d e, String) -> (RepT5 a b c d e, String)
c5 a ((RT4 (b,c,d,e)),str) = ((RT5 (a,b,c,d,e)),str)

readsLParen :: ReadS a -> ReadS a
readsLParen f str = case dropWhile isSpace str of
                         ('(':rest) -> f rest
                         _          -> []

readsVal_5 :: (Read a,Read b,Read c,Read d,Read e) => ReadS (RepT5 a b c d e)
readsVal_5 str = reads str >>= readsComma_4

readsComma_4 :: (Read b,Read c,Read d,Read e) => (a,String) -> [((RepT5 a b c d e),String)]
readsComma_4 (a,str) = case dropWhile isSpace str of
                            (',':rest) -> map (c5 a) (readsVal_4 rest)
                            _          -> []

readsVal_4 :: (Read a,Read b,Read c,Read d) => ReadS (RepT4 a b c d)
readsVal_4 str = reads str >>= readsComma_3

readsComma_3 :: (Read b,Read c,Read d) => (a,String) -> [((RepT4 a b c d),String)]
readsComma_3 (a,str) = case dropWhile isSpace str of
                            (',':rest) -> map (c4 a) (readsVal_3 rest)
                            _          -> []

readsVal_3 :: (Read a,Read b,Read c) => ReadS (RepT3 a b c)
readsVal_3 str = reads str >>= readsComma_2

readsComma_2 :: (Read b,Read c) => (a,String) -> [((RepT3 a b c),String)]
readsComma_2 (a,str) = case dropWhile isSpace str of
                            (',':rest) -> map (c3 a) (readsVal_2 rest)
                            _          -> []

readsVal_2 :: (Read a,Read b) => ReadS (RepT2 a b)
readsVal_2 str = reads str >>= readsComma_1

readsComma_1 :: (Read b) => (a,String) -> [(RepT2 a b,String)]
readsComma_1 (a,str) = case dropWhile isSpace str of
                            (',':rest) -> map (c2 a) (readsVal_1 rest)
                            _          -> []

readsVal_1 :: (Read a) => ReadS a
readsVal_1 str = reads str >>= readsRParen

readsRParen :: (a,String) -> [(a,String)]
readsRParen (a,str) = case dropWhile isSpace str of
                           (')':rest) -> [(a,rest)]
                           _          -> []

readsUnit :: ReadS RepUnit
readsUnit str = case dropWhile isSpace str of
                     ('(':s') -> case dropWhile isSpace s' of
                                      (')':rest) -> [(RT0 (),rest)]
                                      _          -> []
                     _        -> []



readStringLiteral :: String -> [(String,String)]
readStringLiteral s = case s of
                           [] -> []
                           (x:xs) -> if x == '"'
                                     then case span ('"'/=) xs of
                                               (str,rest) -> [('"':str++"\"", tail rest)]
                                     else [("",s)]


readNatLiteral :: String -> [(Int,String)]
readNatLiteral []     = []
readNatLiteral l@(x:xs) = if x == '-'
                            then case xs of
                                      [] -> []
                                      (y:_) -> let oy = ord y
                                               in if 48 <= oy && oy < 58 
                                                  then case readNat xs 0 of
                                                            (d,s) -> [((-d),s)]
                                                  else []
                            else let ox = ord x
                                 in if 48 <= ox && ox < 58 
                                    then [readNat l 0]
                                    else []

readNat :: String -> Int -> (Int, String)
readNat []     n = (n,[])
readNat (x:xs) n = let y = ord x
                   in if 48 <= y && y < 58
                        then readNat xs (n*10 + y-48)
                        else (n,x:xs)

readCharLiteral :: String -> [(Char,String)]
readCharLiteral []     = []
readCharLiteral (x:xs) = [(x,xs)]

readFloatLiteral :: String -> [(Float,String)]
readFloatLiteral []     = []
readFloatLiteral l@(x:xs) = if x == '-' 
                            then case readPosFloat xs of
                                      [] -> []
                                      [(f,s1)] -> [(-f,s1)]
                                      (_:_:_) -> []
                            else readPosFloat l

readPosFloat :: String -> [(Float,String)]
readPosFloat [] = []
readPosFloat l@(_:_) = case readNatLiteral l of
                            [] -> []
                            [(d,s1)] -> case readDotNat s1 of
                                             [] -> []
                                             [(f,s2)] -> case readENat s2 of
                                                              [] -> []
                                                              [(e,s3)] -> [((fromInt d + f)*(pow 10 e), s3)]
                                                              (_:_:_) -> []
                                             (_:_:_) -> []
                            (_:_:_) -> []

                               
readDotNat :: String -> [(Float,String)]
readDotNat [] = [(0,[])]
readDotNat [x] = [(0,[x])]
readDotNat l@(x:r@(y:_)) = if x == '.' && 48 <= ord y && ord y < 58 
                           then [readDotNat1 r]
                           else [(0,l)]

readDotNat1 :: String -> (Float,String)
readDotNat1 []     = (0,[])
readDotNat1 (x:xs) = let y = ord x
                     in if 48 <= y && y < 58
                        then case readDotNat1 xs of
                                  (d,s) -> ((fromInt (y-48) + d) / 10, s)
                        else (0,x:xs)

readENat :: String -> [(Int,String)]
readENat [] = [(0,[])]
readENat (x:xs) = if x == 'e' || x == 'E'
                    then readNatLiteral xs
                    else [(0,x:xs)]

pow :: Float -> Int -> Float
pow a b = if b < 0
          then 1 / powaux 1 a (-b)
          else powaux 1 a b

powaux :: Float -> Float -> Int -> Float
powaux n x y = if y == 0
               then n
               else let x2 = square x
                    in let hy = halve y
                       in if y `mod` 2 == 1 
                          then powaux (n * x) x2 hy
                          else powaux n       x2 hy

halve :: Int -> Int
halve n = n `div` 2

square :: Float -> Float
square n = n * n



lexLitChar :: ReadS String
lexLitChar xs = case xs of
                     ""        -> []
                     ('\\':cs) -> map (lexLitChar_lexPrefix '\\') (lexLitChar_lexEsc cs)
                     (c:cs)    -> [([c], cs)]

lexLitChar_lexEsc :: ReadS String
lexLitChar_lexEsc s = case s of
                           (c:cs) -> lexLitChar_runEsc c cs
                           []     -> []

lexLitChar_runEsc :: Char -> ReadS String
lexLitChar_runEsc c cs = if  c `elem` "afnrtv\\\"'"
                         then [([c], cs)]
                         else lexLitChar_runEsc_1 c cs

lexLitChar_runEsc_1 :: Char -> ReadS String
lexLitChar_runEsc_1 c cs = if c == 'b' 
                           then [lexLitChar_lexPrefix 'b' (span isBinDigit cs)]
                           else lexLitChar_runEsc_2 c cs

lexLitChar_runEsc_2 :: Char -> ReadS String
lexLitChar_runEsc_2 c cs = if c == 'o' 
                           then [lexLitChar_lexPrefix 'o' (span isOctDigit cs)]
                           else lexLitChar_runEsc_3 c cs

lexLitChar_runEsc_3 :: Char -> ReadS String
lexLitChar_runEsc_3 c cs = if c == 'x' 
                           then [lexLitChar_lexPrefix 'x' (span isHexDigit cs)]
                           else lexLitChar_runEsc_4 c cs

lexLitChar_runEsc_4 :: Char -> ReadS String
lexLitChar_runEsc_4 c cs = if isDigit c
                           then [span isDigit (c:cs)]
                           else lexLitChar_runEsc_5 c cs

lexLitChar_runEsc_5 :: Char -> ReadS String
lexLitChar_runEsc_5 c cs = if isUpper c
                           then [span lexLitChar_isCharName (c:cs)]
                           else lexLitChar_runEsc_6 c cs

lexLitChar_runEsc_6 :: Char -> ReadS String
lexLitChar_runEsc_6 c cs = if c == '^' && lexLitChar_isAt cs
                           then [(['^',c], cs)]
                           else []

lexLitChar_isAt :: String -> Bool
lexLitChar_isAt cs = case cs of
                          []    -> False
                          (d:_) -> d >= '@' && d <= '_'

lexLitChar_isCharName :: Char -> Bool
lexLitChar_isCharName c = isUpper c || isDigit c

lexLitChar_lexPrefix :: a -> ([a], b) -> ([a], b)
lexLitChar_lexPrefix c (t, cs) = (c : t, cs)


lex :: ReadS String
lex xs = case xs of
    ""       -> [("","")]
    ('\'':s) -> map lex_lexSingleQuote (filter lex_filterSingleQuote (lexLitChar s))
    ('"':s)  -> map lex_lexDoubleQuote (lex_lexString s)
    (c:cs)   -> lex_else c cs

lex_lexSingleQuote :: (String, String) -> (String, String)
lex_lexSingleQuote (ch, []) = (ch,[])
lex_lexSingleQuote (ch, (q:t)) = (q : ch ++ "'", t)


lex_filterSingleQuote :: (String, String) -> Bool
lex_filterSingleQuote (ch,t) = case t of
                                    []    -> False
                                    (q:_) -> q == '\'' && ch /= "'"

lex_lexDoubleQuote :: (String, a) -> (String, a)
lex_lexDoubleQuote (str, t) = ('"' : str, t)


lex_else :: Char -> String -> [(String, String)]
lex_else c cs
 | isSpace c      = lex $ dropWhile isSpace cs
 | lex_isSingle c = [([c], cs)]
 | lex_isSym c    = case span lex_isSym cs of
                         (sym, t) -> [(c : sym, t)]
 | isAlpha c      = case span lex_isSym cs of
                         (nam, t) -> [(c : nam, t)]
 | isDigit c      = case span isDigit cs of
                         (ds, s) -> map (lex_else_frac c ds) (lex_lexFracExp s)
 | otherwise      = []

lex_else_frac :: a -> [a] -> ([a], b) -> ([a], b)
lex_else_frac c ds (fe,t) = (c : ds ++ fe, t)

lex_isSingle :: Char -> Bool
lex_isSingle c = c `elem` ",;()[]{}_"

lex_isSym :: Char -> Bool
lex_isSym c = c `elem` "!@#$&+./<=?\\^|:~"

lex_isIdChar :: Char -> Bool
lex_isIdChar c = isAlphaNum c || c `elem` "_'"

lex_lexFracExp :: ReadS String
lex_lexFracExp s = case s of
    ('.':c:cs) -> if isDigit c 
                  then map lex_lexFracExp_dot (concatMap lex_lexFracExp_exp (lexDigits (c:cs)))
                  else lex_lexExp s
    _ -> lex_lexExp s

lex_lexFracExp_dot :: (String, String, String) -> (String, String)
lex_lexFracExp_dot (ds,e,u) = ('.' : ds ++ e, u)

lex_lexFracExp_exp :: (String, String) -> [(String, String, String)]
lex_lexFracExp_exp (ds,t) = map (makeTriple ds) (lex_lexExp t)


makeTriple :: a -> (b, c) -> (a, b, c)
makeTriple ds (e,u) = (ds,e,u)

lex_lexExp :: ReadS String
lex_lexExp s = case s of
                    (e:cs) -> case e of 
                                   'e' -> lex_lexPMExp e cs
                                   'E' -> lex_lexPMExp e cs
                                   _   -> [("", s)]
                    []     -> [("", s)]

lex_lexPMExp :: Char -> ReadS String
lex_lexPMExp e cs = case cs of
                         ('+':t) -> map (lex_lexPMExp_sgn e "+") (lexDigits t)
                         ('-':t) -> map (lex_lexPMExp_sgn e "-") (lexDigits t)
                         t       -> map (lex_lexPMExp_sgn e "" ) (lexDigits t)

lex_lexPMExp_sgn :: Char -> String -> (String, String) -> (String, String)
lex_lexPMExp_sgn e sgn (ds,u) = (e:sgn++ds, u)

lex_lexString :: ReadS String
lex_lexString s = case s of
    ('"':cs) -> [("\"", cs)]
    _        -> map lex_lexString_build (concatMap lex_lexString_string (lex_lexStrItem s))

lex_lexString_build :: (String, String, String) -> (String, String)
lex_lexString_build (ch,str,u) = (ch++str, u)

lex_lexString_string :: (String, String) -> [(String, String, String)]
lex_lexString_string (ch,t) = map (makeTriple ch) (lex_lexString t)

lex_lexStrItem :: ReadS String
lex_lexStrItem s = case s of
    ('\\':c:cs) -> if c == '&' 
                   then [("\\&", cs)]
                   else if isSpace c 
                        then case dropWhile isSpace cs of
                                  ('\\':t) -> [("\\&", t)]
                                  _        -> []
                        else lexLitChar s
    _           -> lexLitChar s



take :: Int -> [a] -> [a]
take n xs = if n<=0 
            then []
            else case xs of 
                      [] -> []
                      (x:ys) -> x : take (n-1) ys

splitAt :: Int -> [a] -> ([a],[a])
splitAt n l       = if n<=0 
                    then ([],l) 
                    else case l of 
                              [] -> ([],[])
                              (x:xs) -> case splitAt (n-1) xs of
                                             (ys,zs) -> (x:ys, zs)

span :: (a -> Bool) -> [a] -> ([a],[a])
span _ []     = ([],[])
span p (x:xs) | p x       = case span p xs of
                                 (ys,zs) -> (x:ys, zs)
              | otherwise = ([],x:xs)


lines        :: String -> [String]
lines []     = []
lines (x:xs) = case splitline (x:xs) of 
                    (l,xs_l) -> l : lines xs_l

splitline :: String -> (String, String)
splitline []     = ([],[])
splitline (c:cs) = if c=='\n'
                     then ([],cs)
                     else case splitline cs of
                               (ds,es) -> (c:ds,es)


words   :: String -> [String]
words s = let s1 = dropWhile isSpace s
          in if s1=="" then []
                       else case break isSpace s1 of
                                 (w,s2) -> w : words s2

isSpace :: Char -> Bool
isSpace c = c `elem` " \t\n\r\f\v" || ord c `elem` [160,5760,6158,8192,8239,8287,12288]



instance (Read a, Read b) => Read (Either a b) where 
   readsPrec prec s = readParen (10 < prec) readLeft s ++ 
                      readParen (10 < prec) readRight s

readLeft :: (Read a) => ReadS (Either a b)
readLeft x
 | take 4 x == "Left" = map makeLeft (reads (drop 4 x))
 | otherwise          = []

makeLeft :: (a,String) -> (Either a b, String)
makeLeft (r,s) = (Left r, s)

readRight :: (Read b) => ReadS (Either a b)
readRight x
 | take 5 x == "Right" = map makeRight (reads (drop 5 x))
 | otherwise           = []

makeRight :: (b,String) -> (Either a b, String)
makeRight (r,s) = (Right r, s)

instance Read RepBool where 
   readsPrec _ s = readParen False readTrue s ++ 
                   readParen False readFalse s

readTrue :: ReadS (RepBool)
readTrue s
 | take 4 s == "True" = [(B True, drop 4 s)]
 | otherwise          = []

readFalse :: ReadS (RepBool)
readFalse s
 | take 5 s == "False" = [(B False, drop 5 s)]
 | otherwise           = []


instance (Read a) => Read (Maybe a) where 
   readsPrec prec s = readParen (10 < prec) readNothing s ++ 
                      readParen (10 < prec) readJust s

readNothing :: ReadS (Maybe a)
readNothing s
 | take 7 s == "Nothing" = [(Nothing, drop 7 s)]
 | otherwise             = []

readJust :: (Read a) => ReadS (Maybe a)
readJust x
 | take 4 x == "Just" = map makeJust (reads (drop 4 x))
 | otherwise          = []

makeJust :: (a,String) -> (Maybe a, String)
makeJust (r,s) = (Just r, s)

instance Read IOError where
   readsPrec prec s = readParen (10 < prec) readIOError s ++ 
                      readParen (10 < prec) readUserError s ++
                      readParen (10 < prec) readFailError s ++
                      readParen (10 < prec) readNondetError s

instance Show IOError where
  showsPrec p (IOError e)     = fcase p <= 10 of
                                      True  -> showString "IOError " . showList e
                                      False -> showChar '(' .
                                               showString "IOError" . 
                                               showList e . 
                                               showChar ')'
  showsPrec p (FailError e)   = fcase p <= 10 of
                                      True  -> showString "FailError " . showList e
                                      False -> showChar '(' .
                                               showString "FailError" . 
                                               showList e . 
                                               showChar ')'
  showsPrec p (UserError e)   = fcase p <= 10 of
                                      True  -> showString "UserError " . showList e
                                      False -> showChar '(' .
                                               showString "UserError" . 
                                               showList e . 
                                               showChar ')'
  showsPrec p (NondetError e) = fcase p <= 10 of
                                      True  -> showString "NondetError " . showList e
                                      False -> showChar '(' .
                                               showString "NondetError" . 
                                               showList e . 
                                               showChar ')'

readIOError :: ReadS IOError
readIOError s
 | take 7 s == "IOError" = map makeIOError (reads (drop 7 s))
 | otherwise             = []

makeIOError :: (String,String) -> (IOError, String)
makeIOError (r,s) = (IOError r, s)

readUserError :: ReadS IOError
readUserError s
 | take 9 s == "UserError" = map makeUserError (reads (drop 9 s))
 | otherwise               = []

makeUserError :: (String,String) -> (IOError, String)
makeUserError (r,s) = (UserError r, s)

readFailError :: ReadS IOError
readFailError s
 | take 9 s == "FailError" = map makeFailError (reads (drop 9 s))
 | otherwise               = []

makeFailError :: (String,String) -> (IOError, String)
makeFailError (r,s) = (FailError r, s)

readNondetError :: ReadS IOError
readNondetError s
 | take 11 s == "NondetError" = map makeNondetError (reads (drop 9 s))
 | otherwise                  = []

makeNondetError :: (String,String) -> (IOError, String)
makeNondetError (r,s) = (NondetError r, s)
