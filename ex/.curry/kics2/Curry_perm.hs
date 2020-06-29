{-# LANGUAGE MagicHash #-}
{-# LANGUAGE ScopedTypeVariables #-}
{-# LANGUAGE Rank2Types #-}
{-# LANGUAGE CPP #-}
{-# OPTIONS_GHC -fno-warn-overlapping-patterns #-}
{-# OPTIONS_GHC -fno-warn-missing-methods #-}
#if __GLASGOW_HASKELL__ >= 800
{-# OPTIONS_GHC -fno-warn-redundant-constraints #-}
#else
{-# OPTIONS_GHC -fno-warn-duplicate-constraints #-}
#endif

module Curry_perm ( nd_C_perm, nd_C_insert, nd_C_main ) where

import Basics
import qualified Curry_Prelude


nd_C_perm :: forall t0 . (Curry_Prelude.Curry t0) => Curry_Prelude.OP_List t0
  -> IDSupply -> Cover -> ConstStore -> Curry_Prelude.OP_List t0
nd_C_perm x1 s cd cs = case x1 of
  Curry_Prelude.OP_List -> Curry_Prelude.OP_List
  Curry_Prelude.OP_Cons x2 x3 -> let s2 = s
    in s2 `seq` (let s1 = leftSupply s2
                     s0 = rightSupply s2
    in s1 `seq` (s0 `seq` nd_C_insert x2 (nd_C_perm x3 s0 cd cs) s1 cd cs))
  Curry_Prelude.Choice_OP_List d i l r -> narrow d i (nd_C_perm l s cd cs)
    (nd_C_perm r s cd cs)
  Curry_Prelude.Choices_OP_List d i xs -> narrows cs d i (\z -> nd_C_perm z s cd
    cs) xs
  Curry_Prelude.Guard_OP_List d c e -> guardCons d c (nd_C_perm e s cd $! addCs
    c cs)
  Curry_Prelude.Fail_OP_List d info -> failCons d (traceFail "perm.perm" [show
    x1] info)
  _ -> failCons cd (consFail "perm.perm" (showCons x1))

nd_C_insert :: forall t0 . (Curry_Prelude.Curry t0) => t0
  -> Curry_Prelude.OP_List t0 -> IDSupply -> Cover -> ConstStore
  -> Curry_Prelude.OP_List t0
nd_C_insert x1 x2 s cd cs = case x2 of
  Curry_Prelude.OP_List -> Curry_Prelude.OP_Cons x1 Curry_Prelude.OP_List
  Curry_Prelude.OP_Cons x3 x4 -> let s2 = s
    in s2 `seq` (let s1 = leftSupply s2
                     s0 = rightSupply s2
    in s1 `seq` (s0 `seq` choice (Curry_Prelude.OP_Cons x1
    (Curry_Prelude.OP_Cons x3 x4)) (Curry_Prelude.OP_Cons x3 (nd_C_insert x1 x4
    s0 cd cs)) s1 cd cs))
  Curry_Prelude.Choice_OP_List d i l r -> narrow d i (nd_C_insert x1 l s cd cs)
    (nd_C_insert x1 r s cd cs)
  Curry_Prelude.Choices_OP_List d i xs -> narrows cs d i (\z -> nd_C_insert x1 z
    s cd cs) xs
  Curry_Prelude.Guard_OP_List d c e -> guardCons d c (nd_C_insert x1 e s cd $!
    addCs c cs)
  Curry_Prelude.Fail_OP_List d info -> failCons d (traceFail "perm.insert" [show
    x1, show x2] info)
  _ -> failCons cd (consFail "perm.insert" (showCons x2))

nd_C_main :: IDSupply -> Cover -> ConstStore -> Curry_Prelude.OP_List
  Curry_Prelude.C_Int
nd_C_main s cd cs = let s4 = s
  in s4 `seq` (let s3 = leftSupply s4
                   s2 = rightSupply s4
  in s3 `seq` (s2 `seq` nd_C_perm (let s1 = leftSupply s2
                                       s0 = rightSupply s2
  in s1 `seq` (s0 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_C_apply
  (wrapDX (wrapDX id)
  (Curry_Prelude.d_OP_uscore_impl_hash_enumFromTo_hash_Prelude_dot_Enum_hash_Prelude_dot_Int
  cd cs)) (Curry_Prelude.C_Int (1)) s0 cd cs) (Curry_Prelude.C_Int (8)) s1 cd
  cs)) s3 cd cs))

