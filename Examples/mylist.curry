data MyList a = MyNil | MyCons a (MyList a)

-- TODO:  unintended, but creates a problem
-- MyCons is partially applied to a pair !!!
-- main = MyCons(1,MyNil)

main = MyCons 1 MyNil