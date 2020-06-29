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

module Curry_sort
  ( d_C_sorted, nd_C_perm, nd_C_insert, nd_C_sort, nd_C_main )
  where

import Basics
import qualified Curry_Prelude


d_C_sorted :: Curry_Prelude.OP_List Curry_Prelude.C_Int -> Cover -> ConstStore
  -> Curry_Prelude.C_Bool
d_C_sorted x1 cd cs = case x1 of
  Curry_Prelude.OP_List -> Curry_Prelude.C_True
  Curry_Prelude.OP_Cons x2 x3 -> d_C__case_0 x2 x3 cd cs
  Curry_Prelude.Choice_OP_List d i l r -> narrow d i (d_C_sorted l cd cs)
    (d_C_sorted r cd cs)
  Curry_Prelude.Choices_OP_List d i xs -> narrows cs d i (\z -> d_C_sorted z cd
    cs) xs
  Curry_Prelude.Guard_OP_List d c e -> guardCons d c (d_C_sorted e cd $! addCs c
    cs)
  Curry_Prelude.Fail_OP_List d info -> failCons d (traceFail "sort.sorted" [show
    x1] info)
  _ -> failCons cd (consFail "sort.sorted" (showCons x1))

nd_C_perm :: Curry_Prelude.OP_List Curry_Prelude.C_Int -> IDSupply -> Cover
  -> ConstStore -> Curry_Prelude.OP_List Curry_Prelude.C_Int
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
  Curry_Prelude.Fail_OP_List d info -> failCons d (traceFail "sort.perm" [show
    x1] info)
  _ -> failCons cd (consFail "sort.perm" (showCons x1))

nd_C_insert :: Curry_Prelude.C_Int -> Curry_Prelude.OP_List Curry_Prelude.C_Int
  -> IDSupply -> Cover -> ConstStore -> Curry_Prelude.OP_List
  Curry_Prelude.C_Int
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
  Curry_Prelude.Fail_OP_List d info -> failCons d (traceFail "sort.insert" [show
    x1, show x2] info)
  _ -> failCons cd (consFail "sort.insert" (showCons x2))

nd_C_sort :: Curry_Prelude.OP_List Curry_Prelude.C_Int -> IDSupply -> Cover
  -> ConstStore -> Curry_Prelude.OP_List Curry_Prelude.C_Int
nd_C_sort x1 s cd cs = let s0 = s
  in s0 `seq` (let x2 = nd_C_perm x1 s0 cd cs
  in Curry_Prelude.d_OP_amp_gt (d_C_sorted x2 cd cs) x2 cd cs)

nd_C_main :: IDSupply -> Cover -> ConstStore -> Curry_Prelude.OP_List
  Curry_Prelude.C_Int
nd_C_main s cd cs = let s6 = s
  in s6 `seq` (let s5 = leftSupply s6
                   s4 = rightSupply s6
  in s5 `seq` (s4 `seq` nd_C_sort (let s3 = leftSupply s4
                                       s2 = rightSupply s4
  in s3 `seq` (s2 `seq` Curry_Prelude.nd_C_apply (wrapDX id
  (Curry_Prelude.d_C_reverse cd cs)) (let s1 = leftSupply s2
                                          s0 = rightSupply s2
  in s1 `seq` (s0 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_C_apply
  (wrapDX (wrapDX id)
  (Curry_Prelude.d_OP_uscore_impl_hash_enumFromTo_hash_Prelude_dot_Enum_hash_Prelude_dot_Int
  cd cs)) (Curry_Prelude.C_Int (1)) s0 cd cs) (Curry_Prelude.C_Int (14)) s1 cd
  cs)) s3 cd cs)) s5 cd cs))

d_C__case_0 :: Curry_Prelude.C_Int -> Curry_Prelude.OP_List Curry_Prelude.C_Int
  -> Cover -> ConstStore -> Curry_Prelude.C_Bool
d_C__case_0 x2 x3 cd cs = case x3 of
  Curry_Prelude.OP_List -> Curry_Prelude.C_True
  Curry_Prelude.OP_Cons x4 x5 -> Curry_Prelude.d_OP_amp_amp
    (Curry_Prelude.d_C_apply (Curry_Prelude.d_C_apply
    (Curry_Prelude.d_OP_uscore_impl_hash_lt_hash_Prelude_dot_Ord_hash_Prelude_dot_Int
    cd cs) x2 cd cs) x4 cd cs) (d_C_sorted (Curry_Prelude.OP_Cons x4 x5) cd cs)
    cd cs
  Curry_Prelude.Choice_OP_List d i l r -> narrow d i (d_C__case_0 x2 l cd cs)
    (d_C__case_0 x2 r cd cs)
  Curry_Prelude.Choices_OP_List d i xs -> narrows cs d i (\z -> d_C__case_0 x2 z
    cd cs) xs
  Curry_Prelude.Guard_OP_List d c e -> guardCons d c (d_C__case_0 x2 e cd $!
    addCs c cs)
  Curry_Prelude.Fail_OP_List d info -> failCons d (traceFail "sort._case_0"
    [show x2, show x3] info)
  _ -> failCons cd (consFail "sort._case_0" (showCons x3))

