
coin = 0 ? 1

shared = let x = coin in (x,x)

unshar = (coin,coin)

main :: Bool
main = shared == unshar
