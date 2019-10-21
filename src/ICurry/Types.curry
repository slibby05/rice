module ICurry.Types where

-- This is the grammar from the paper
-- P  ::=  T_1 ... T_n, D_1 ... D_m     & program
-- T  ::=  c_1 ... c_n                  & type declaration

-- D  ::=  f = blck                     & function definition

-- blck ::= decl_1 ... decl_k ~ asgn_1 ... asgn_n ~ stm & block
-- decl ::= declare  x                                  & local variable declaration
--       |  param  x                                    & parameter declaration
--       |  free  x                                     & free variable declaration

-- asgn ::= v = exp                                     & variable assignment

-- stm  ::= return exp                                  & return statement
--      |   exempt                                      & failure statement
--      |   case x of c_1 -> blck_1;                    & case statement
--                    ...; 
--                    c_n -> blck_n

-- exp  ::= v                        & variable
--      |   NODE(l,exp_1,...,exp_n)  & node construction
--      |   exp_1 ? exp_2            & disjunction

-- v  ::= x      & local variable
--    |   v[i]   & node access
--    |   ROOT   & root of function call

-- l ::= c          & constructor symbol
--   |   f          & function symbol
--   |   LABEL(v)   & node label symbol 
--                    I don't know what we need this for,
--                    I think it's for higher order functions,
--                    but that's what apply is for
                                         

-- A name is something that can name a specific function or constructor
type Name = (String,String)

-- Program Name Imports DataTypes Functions
data Program = Program String [String] [Data] [Fun]
 deriving(Show)

-- Datatypes have a name, and a list of constructors
-- A constructor just has a name and an arity
data Data = Data Name [Constr]
 deriving(Show)
data Constr = Constr Name Int
 deriving(Show)

-- A function has a name, and a single block for the body
data Fun = External Name
         | Fun Name Block
 deriving(Show)

-- a block is declarations, assignments, then a single statement
data Block = Block [Decl] [Asgn] Stmt
 deriving(Show)

-- Declare a normal variable, parameter, or a free variable
data Decl = Declare Int 
          | Param Int
          | Free Int
 deriving(Show)

data Asgn = Var := Exp
 deriving(Show)

-- statement
data Stmt = Return Exp         -- Make a new subgraph
          | Exempt             -- Failure
          | Case Int [Branch]  -- Case on a local variable
 deriving(Show)

-- A branch has a constructor name and an expression
data Branch = Branch Name Block
            | LitBranch Lit Block
 deriving(Show)

data Exp = Var Var           -- return a local variable
         | Node Label [Exp]  -- return a new node
         | Or Exp Exp        -- non-deterministic expression
         | Lit Lit           -- Literal Value
 deriving(Show)

data Lit = LInt Int | LFloat Float | LChar Char
 deriving(Show)

data Label = ConNode Int Name  -- constructor symbol
           | FunNode Int Name  -- function symbol
 deriving(Show)

data Var = Local Int  -- local variable
         | Var :@ Int -- node access
         | Root       -- root symbol
 deriving(Show)
