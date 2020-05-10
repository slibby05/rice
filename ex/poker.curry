data Suit = Club 
          | Spade 
          | Heart
          | Diamond 
data Rank = Ace | King | Queen | Jack
          | Ten | Nine | Eight | Seven
          | Six | Five | Four  | Three | Two 

data Card = Card Rank Suit

rank (Card r _) = r
suit (Card _ s) = s

four l | l =:= (x++[_]++z) = map rank (x++z) =:= [r,r,r,r] where r free

testYes = [(Card Six Club),(Card Six Spade),(Card Five Heart),
           (Card Six Heart),(Card Six Diamond)]

main :: Success
main = four testYes
