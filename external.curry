
--I'm using Int# Float# and Char# to stand form primitive Int, primitive Float and primitive Char
-- so the boxed data types are 
-- data Int   = Int Int#
-- data Char  = Char Int#
-- data Float = Float Int#

--- Evaluates the argument to head normal form and returns it.
--- Suspends until the result is bound to a non-variable term.
ensureNotFree :: a -> a
ensureNotFree external


--- Right-associative application with strict evaluation of its argument
--- to head normal form.
($!)    :: (a -> b) -> a -> b
($!) external

--- Right-associative application with strict evaluation of its argument
--- to normal form.
($!!)   :: (a -> b) -> a -> b
($!!) external

--- Right-associative application with strict evaluation of its argument
--- to ground normal form.
($##)   :: (a -> b) -> a -> b
($##) external

prim_error :: String -> _
prim_error external

--- replace:
--- failed = Fail
failed :: a
failed external


--- The equational constraint.
--- `(e1 =:= e2)` is satisfiable if both sides `e1` and `e2` can be
--- reduced to a unifiable data term (i.e., a term without defined
--- function symbols).
--- (normalForm a) == (normalForm b) ?
(=:=) :: a -> a -> Bool
(=:=) external

--- replace with?
--- case c1 of 
---      True -> case c2 of
---                   True -> True
---                   False -> Fail
---      False -> Fail
(&) :: Bool -> Bool -> Bool
(&) external

--------------------------------------------------------------

-- replace: eqChar
-- eqChar x y = case x of
--                   Char x' -> case y of
--                                   Char y' -> prim_eqChar x' y'
prim_eqChar :: Char# -> Char# -> Bool
prim_eqChar external


-- replace: eqInt
-- eqInt x y = case x of
--                   Int x' -> case y of
--                                  Int y' -> prim_eqInt x' y'
prim_eqInt :: Int# -> Int# -> Bool
prim_eqInt external

-- replace: eqFloat
-- eqFloat x y = case x of
--                    Float x' -> case y of
--                                     Float y' -> prim_eqFloat x' y'
prim_eqFloat :: Float# -> Float# -> Bool
prim_eqFloat external


-- replace: ltEqChar
-- ltEqChar x y = case x of
--                   Char x' -> case y of
--                                   Char y' -> prim_eqChar x' y'
prim_ltEqChar :: Char# -> Char# -> Bool
prim_ltEqChar external


-- replace: ltEqInt
-- ltEqInt x y = case x of
--                   Int x' -> case y of
--                                  Int y' -> prim_eqInt x' y'
prim_ltEqInt :: Int# -> Int# -> Bool
prim_ltEqInt external

-- replace: ltEqFloat
-- ltEqFloat x y = case x of
--                    Float x' -> case y of
--                                     Float y' -> prim_eqFloat x' y'
prim_ltEqFloat :: Float# -> Float# -> Bool
prim_ltEqFloat external


--replace: ord
--ord c = case c of
--             Char c' -> Int (prim_ord c')
prim_ord :: Char# -> Int#
prim_ord external

--replace: chr
--chr i = case i of
--             Int i -> Char (prim_chr i')
prim_chr :: Int# -> Char#
prim_chr external

--replace: +$
--x +$ y = case x of
--              Int x' -> case y of
--                             Int y' -> Int (prim_int_plus x' y')
prim_Int_plus :: Int# -> Int# -> Int#
prim_Int_plus external


--replace: -$
--x -$ y = case x of
--              Int x' -> case y of
--                             Int y' -> Int (prim_int_minus x' y')
prim_Int_minus :: Int# -> Int# -> Int#
prim_Int_minus external

--replace: *$
--x *$ y = case x of
--              Int x' -> case y of
--                             Int y' -> Int (prim_int_times x' y')
prim_Int_times :: Int# -> Int# -> Int#
prim_Int_times external

--replace: div_
--div_ x y = case x of
--                Int x' -> case y of
--                               Int y' -> Int (prim_int_div x' y')
prim_Int_div :: Int# -> Int# -> Int#
prim_Int_div external

--replace: mod_
--mod_ x y = case x of
--                Int x' -> case y of
--                               Int y' -> Int (prim_int_mod x' y')
prim_Int_mod :: Int# -> Int# -> Int#
prim_Int_mod external

--replace: quot_
--quot_ x y = case x of
--                  Int x' -> case y of
--                                 Int y' -> Int (prim_int_quot x' y')
prim_Int_quot :: Int# -> Int# -> Int#
prim_Int_quot external


--replace: rem_
--rem_ x y = case x of
--                  Int x' -> case y of
--                                 Int y' -> Int (prim_int_rem x' y')
prim_Int_rem :: Int# -> Int# -> Int#
prim_Int_rem external

--replace: rem_
--negateFloat x y = case x of
--                       Int x' -> Float (prim_negateFloat x')
prim_negateFloat :: Int# -> Int# -> Int#
prim_negateFloat external


--replace: +.
--x +. y = case x of 
--              Float x' -> case y of
--                               Float y' -> Float (prim_float_plus x' y')
prim_Float_plus :: Float -> Float -> Float
prim_Float_plus external

--replace: -.
--x -. y = case x of 
--              Float x' -> case y of
--                               Float y' -> Float (prim_float_minus x' y')
prim_Float_minus :: Float -> Float -> Float
prim_Float_minus external

--replace: *.
--x *. y = case x of 
--              Float x' -> case y of
--                               Float y' -> Float (prim_float_times x' y')
prim_Float_times :: Float -> Float -> Float
prim_Float_times external

--replace: /.
--x /. y = case x of 
--              Float x' -> case y of
--                               Float y' -> Float (prim_float_div x' y')
prim_Float_div :: Float -> Float -> Float
prim_Float_div external

--replace i2f
--i2f x = case x of 
--             Int x' -> Float (prim_i2f x')
prim_i2f :: Int -> Float
prim_i2f external

----------------------------------------------------------------------------------------------

--- Sequential composition of IO actions.
--- @param a - An action
--- @param fa - A function from a value into an action
--- @return An action that first performs a (yielding result r)
---         and then performs (fa r)
(>>=$) :: IO a -> (a -> IO b) -> IO b
(>>=$) external

--- The empty IO action that directly returns its argument.
returnIO :: a -> IO a
returnIO external



--replace: putChar
--putChar c = case c of
--                 Char c' -> prim_putchar c'
prim_putChar :: Char -> IO ()
prim_putChar external

--- An action that reads a character from standard output and returns it.
getChar :: IO Char
getChar external


--replace: readFile
--readFile f = prim_readFile (toCStr f)
prim_readFile :: String -> IO String
prim_readFile external


--replace: writeFile
--writeFile f str = prim_writeFile (toCStr f) (toCStr str)
prim_writeFile :: String -> IO String
prim_writeFile external

--replace: appendeFile
--appendFile f str = prim_appendFile (toCStr f) (toCStr str)
prim_appendFile :: String -> IO String
prim_appendFile external

--replace ioError
--ioError err = prim_ioError (toCStr err)
prim_ioError external

--- Catches a possible error or failure during the execution of an
--- I/O action. `(catch act errfun)` executes the I/O action
--- `act`. If an exception or failure occurs
--- during this I/O action, the function `errfun` is applied
--- to the error value.
catch :: IO a -> (IOError -> IO a) -> IO a
catch external

prim_show    :: _ -> String
prim_show external

--- This operation is internally used by PAKCS to implement recursive
--- `let`s by using cyclic term structures. Basically, the effect of
---
---     letrec ones (1:ones)
---
--- (where `ones` is a logic variable) is the binding of `ones` to `(1:ones)`.
letrec :: a -> a -> Bool
letrec external

--- Non-strict equational constraint for linear functional patterns.
--- Thus, it must be ensured that the first argument is always
--- (after evalutation by narrowing) a linear pattern. Experimental.
(=:<=) :: a -> a -> Bool
(=:<=) external

--- internal function to implement =:<=
ifVar :: _ -> a -> a -> a
ifVar external

--- internal operation to implement failure reporting
failure :: _ -> _ -> _
failure external


readNatLiteral :: ReadS Int
readNatLiteral s = prim_readNatLiteral $## s

prim_readNatLiteral :: String -> [(Int,String)]
prim_readNatLiteral external

readFloatLiteral :: ReadS Float
readFloatLiteral s = prim_readFloatLiteral $## s

prim_readFloatLiteral :: String -> [(Float,String)]
prim_readFloatLiteral external

readCharLiteral :: ReadS Char
readCharLiteral s = prim_readCharLiteral $## s

prim_readCharLiteral :: String -> [(Char,String)]
prim_readCharLiteral external

readStringLiteral :: ReadS String
readStringLiteral s = prim_readStringLiteral $## s

prim_readStringLiteral :: String -> [(String,String)]
prim_readStringLiteral external

