{-# OPTIONS_CYMAKE -F --pgmF=currypp --optF=defaultrules #-}

-----------------------------------------------------------
-- The purpose of this module is to put FlatCurry in a
-- normalized form.
-- This doesn't mean we're normalizing expressions,
-- we're just putting it in a form that can be translated to Icurry
-----------------------------------------------------------

import FlatCurry.Types
import FlatRewrite
import Util
import Debug
import Control.SetFunctions
import Graph
import Gas
import Data.Map -- for the type table

-- Applies all transformation and returns the resulting program
transform :: Prog -> DET Prog
transform (Prog n is d fs ops) = Prog n is d caseFs ops
 where (fixes,c0)  = loop caseInCase fs 0
       (flatFs,c1) = loop nestedCont fixes c0
       (caseFs,_) = loop caseArg flatFs c1


--------------------------------------------------------------------
-- move nested control flow
-- 
-- We can't have an expression with nested control flow
-- control flow is a let or free (variable declaration), or case expression
-- an expression is a ?, functional/constructor call, or the assignment of a let expression
--------------------------------------------------------------------

nestedCont :: FuncDecl -> Int -> [FuncDecl]
nestedCont (Func _    _ _   _     (External _))   _ = []
nestedCont (Func name a vis xtype (Rule vs body)) n
  = case redex_path body of
       Nothing -> []
       (Just (path,redex)) -> 
          let newVars  = freeVars redex
              new_name = mapSnd (++("#A"++show n)) name
              call     = Comb FuncCall new_name (map Var newVars)
              new_body = replace body path call
          in [ Func name     a                vis     xtype    (Rule vs new_body),
               Func new_name (length newVars) Private (TVar 0) (Rule newVars redex) ]

redex_path :: Expr -> DET (Maybe (Path, Expr))
redex_path t = start t ~> cor ~> (clet?ccase?cfree)
redex_path t = start t ~> ccomb ~> (clet?ccase?cfree)
redex_path t = start t ~> (Let (_ ++ [(_,u)] ++ _) _) ~~ u ~> (clet?ccase)
 where u free
redex_path t = Nothing

--------------------------------------------------------------------
-- Move arguments out of cases
--
-- The arguments for cases need to be fairly trivial
-- basically, we can only have a fully appied constructor
-- or a variable inside of the case argument.
--------------------------------------------------------------------

caseArg :: FuncDecl -> Int -> [FuncDecl]
caseArg (Func _    _ _   _     (External _))   _ = []
caseArg (Func name a vis xtype (Rule vs body)) c
  = case getCaseArg body of
       Nothing             -> []
       (Just (path,redex)) -> 
         let (Case ct sel br) = redex
             redex_vars = allVars redex
             new_var = foldr max 0 redex_vars + 1
             let_expr = Let [(new_var,sel)] (Case ct (Var new_var) br)
             new_body = replace body path let_expr
         in [Func name a vis xtype (Rule vs new_body)]

getCaseArg :: Expr -> DET (Maybe (Path,Expr))
getCaseArg t = start t ~> Case _ (clet ? cfree ? cor ? ccase ? ctype
                               ? Comb (FuncCall ? 
                                      (ConsPartCall _) ? 
                                      (FuncPartCall _)) _ _) _
getCaseArg t = Nothing


--------------------------------------------------------------------
-- Case in Case
--
-- Moves some of the simpler expressions into forms that are easier to translate.
-- We handle 3 types of expressions here.
-- First we remove type annotations, since they're not necessary after typechecking.
-- Second We remove case in case expressions
-- case (case s2 of b21 -> e21
--                  b22 -> e22
--                  ...
--      of b11 -> e11
--         b12 -> b12
--         ...)
-- to
-- case s2 of b21 -> case e21 of b11 ->e11
--                               b12 ->e22
--                   ...
--            b22 -> case e22 of b11 ->e11
--                               b12 ->e22
--                   ...
--            ...
--
-- We can always do this because the inner case is needed in the outer case.
--
-- Finally we reorder let expressions so that all mutually recursive expressions are in the same block.
-- for example if we have
-- let a = b
--     b = c
--     c = d + e
--     d = b
--     e = 1
-- in a
-- the we have 3 blocks of mutual recursion
-- [a] depends on [b,c,d] depends on [e]
-- So, we can rewrite this to
-- let e = 1
-- in let b = c
--        c = d + e
--        d = b
--    in let a = b
--       in a
-- 
-- 
--------------------------------------------------------------------


caseInCase (Func _    _ _   _     (External _))   _ = []
caseInCase (Func name a vis xtype (Rule vs body)) c
  = case findCase body of
       Nothing             -> []
       (Just (path,redex)) -> --[Func name a vis xtype (Rule vs (replace body path (repCase redex)))]
         case (repCase redex) of
            Nothing    -> []
            (Just rep) -> 
               let newBody = replace body path rep
               in [Func name a vis xtype (Rule vs newBody)]


findCase :: Expr -> DET (Maybe (Path,Expr))
findCase t = start t ~> (Case _ (Case _ _ _) _)
findCase t = start t ~> (Typed _ _)
findCase t = start t ~> (Let _ _)
findCase t = Nothing

repCase :: Expr -> DET (Maybe Expr)
repCase (Typed e t)                 = Just e
repCase (Let es e)                  = Just $ makeBlocks es e
repCase (Case t1 (Case t2 e b2) b1) = Just $ Case t2 e (map foldCase b2)
 where foldCase (Branch p e') = Branch p (Case t1 e' b1)
repCase t = Nothing

-- compute the mutually recursive let blocks
-- This is done by making a graph and computing the strongly connected components
-- 
-- @param es the list of variable/expression pairs in a let block
-- @param e the final expression to return
-- @return a new let expression where each let block is a set of mutually recursive definitions.
makeBlocks :: [(Int,Expr)] -> Expr -> Expr
makeBlocks es e
 | length comps > 1 = foldr makeBlock e comps
 where makeEdges (v, exp) = map (\f -> (v,f)) (freeVars exp)
       getComponents = map preorder . scc . buildG . concatMap makeEdges
       comps = getComponents es
       getExp (_++[(n,exp)]++_) n = (n,exp)
       makeBlock comp = Let (map (getExp es) comp)
       
--------------------------------------------------------------------
-- fill in cases
--
-- I'm still working on this, but the idea is to fill in all possible branches in a case expression.
--------------------------------------------------------------------
type TypeTable = Map QName String

--makeTypeTable :: Prog -> TypeTable
--makeTypeTable (Prog _ _ types _ _) = fromList [(name, makeCon decls) | (Type name Public vs decls) <- types]

--findNonCase :: (TypeTable -> Expr) -> Expr
--findNonCase t = fullCase tt (start t ~> (Case _ _ _))
--
--fullCase :: TypeTable -> (Path,Expr) -> (Path,Expr)
--fullCase tt (p,e@(Case Flex _ bs))
-- | (sort tCons == sort bCons) = (p, e)
--  where tCons = lookup tt (head bCons)
--        bCons = map cons bs
--        cons (Branch (Pattern n _)) = n
