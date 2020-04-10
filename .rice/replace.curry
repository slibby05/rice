
cond :: Bool -> a -> a
cond True x = x

readStringLiteral :: String -> [(String,String)]
readStringLiteral []     = []
readStringLiteral l@(x:xs) = if x == '\"'
                                then let (str,rest) = span (/= '\"') xs
                                     in [("\""++str++"\"", tail rest)]
                                else [("",l)]

readNatLiteral :: String -> [(Int,String)]
readNatLiteral []     = []
readNatLiteral l@(x:xs) = if x == '-'
                            then let y = ord (head xs)
                                 in if 48 <= y && y < 58 
                                      then let e = readNat xs 0
                                               d = fst e
                                               s = snd e
                                           in [((-d),s)]
                                      else []
                            else if 48 <= ord x && ord x < 58 
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
                              then case readNatLiteral xs of
                                        [] -> []
                                        [(d,s1)] -> case readDotNat s1 of
                                                         [] -> []
                                                         [(f,s2)] -> case readENat s2 of
                                                                          [] -> []
                                                                          [(e,s3)] -> [(-(fromInt d + f) * (pow 10 e), s3)]
                                                                          (_:_:_) -> []
                                                         (_:_:_) -> []
                                        (_:_:_) -> []
                              else case readNatLiteral l of
                                        [] -> []
                                        [(d,s1)] -> case readDotNat s1 of
                                                         [] -> []
                                                         [(f,s2)] -> case readENat s2 of
                                                                          [] -> []
                                                                          [(e,s3)] -> [((fromInt d + f) * (pow 10 e), s3)]
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
                            then let (d,s) = readDotNat1 xs
                                 in ((fromInt (y-48) + d) / 10, s)
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
 where 
  powaux n x y = if y == 0
                   then n
                   else powaux (n * if (y `mod` 2 == 1) then x else 1)
                               (x * x)
                               (y `div` 2)
