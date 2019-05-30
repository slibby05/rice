data Suit
  = Club 
  | Spade 
  | Heart
  | Diamond 
data Rank
  = Ace
  | King
  | Queen
  | Jack
  | Ten
  | Nine
  | Eight
  | Seven
  | Six
  | Five
  | Four
  | Three
  | Two 
data Card = Card Rank Suit

rank (Card r _) = r
suit (Card _ s) = s

four (x++[_]++z) = map rank (x++z) =:= [r,r,r,r] where r free

testYes = [(Card Six Club),(Card Six Spade),(Card Five Heart),
           (Card Six Heart),(Card Six Diamond)]
testNo  = [(Card Six Club),(Card Ace Spade),(Card Five Heart),
           (Card Ace Club),(Card Six Diamond)]

main = four testYes

{-
Obsolete version

-- This is to avoid a possible failure
main_Set x | x=:=x =  case (findall (=:= (theRank x))) of
                        [r] -> Just r
                        []  -> Nothing
  where theRank (u++[_]++v) | map rank (u++v) =:= [r,r,r,r] = r where r free


-- This is the narrowing free version
four hand = or [allEqual (map rank (removenth hand n)) | n <- [0..4]]
removenth (x:xs) n = if n==0 then xs else x:removenth xs (n-1)
allEqual l = all (== (head l)) (tail l)
-}
