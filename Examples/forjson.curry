data AB = A | B Int

f 0 _ = 0
f _ ab = g ab

g ab = case ab of
    A -> -1
    B x -> x

main = f 1 A
