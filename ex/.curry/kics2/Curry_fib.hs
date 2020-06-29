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

module Curry_fib ( d_C_fib, nd_C_fib, nd_C_main ) where

import Basics
import qualified Curry_Prelude


d_C_fib :: forall t0 . (Curry_Prelude.Curry
  t0) => Curry_Prelude.OP_uscore_Dict_hash_Num t0
  -> Curry_Prelude.OP_uscore_Dict_hash_Ord t0 -> t0 -> Cover -> ConstStore -> t0
d_C_fib x1 x2 x3 cd cs = d_C__case_1 x1 x3 x2 (Curry_Prelude.d_C_apply
  (Curry_Prelude.d_C_apply (Curry_Prelude.d_OP_lt x2 cd cs) x3 cd cs)
  (Curry_Prelude.d_C_apply (Curry_Prelude.d_C_fromInt x1 cd cs)
  (Curry_Prelude.C_Int (2)) cd cs) cd cs) cd cs

nd_C_fib :: forall t0 . (Curry_Prelude.Curry
  t0) => Curry_Prelude.OP_uscore_Dict_hash_Num t0
  -> Curry_Prelude.OP_uscore_Dict_hash_Ord t0 -> t0 -> IDSupply -> Cover
  -> ConstStore -> t0
nd_C_fib x1 x2 x3 s cd cs = let s10 = s
  in s10 `seq` (let s9 = leftSupply s10
                    s7 = rightSupply s10
  in s9 `seq` (s7 `seq` nd_C__case_1 x1 x3 x2 (let s6 = leftSupply s7
                                                   s8 = rightSupply s7
                                                   s2 = leftSupply s8
                                                   s5 = rightSupply s8
  in s6 `seq` (s8 `seq` (s2 `seq` (s5 `seq` Curry_Prelude.nd_C_apply
  (let s1 = leftSupply s2
       s0 = rightSupply s2
  in s1 `seq` (s0 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_OP_lt x2 s0
  cd cs) x3 s1 cd cs)) (let s4 = leftSupply s5
                            s3 = rightSupply s5
  in s4 `seq` (s3 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_C_fromInt x1
  s3 cd cs) (Curry_Prelude.C_Int (2)) s4 cd cs)) s6 cd cs)))) s9 cd cs))

nd_C_main :: IDSupply -> Cover -> ConstStore -> Curry_Prelude.C_Int
nd_C_main s cd cs = let s4 = s
  in s4 `seq` (let s5 = leftSupply s4
                   s6 = rightSupply s4
                   s3 = leftSupply s5
                   s0 = rightSupply s5
                   s1 = leftSupply s6
                   s2 = rightSupply s6
  in s5 `seq` (s6 `seq` (s3 `seq` (s0 `seq` (s1 `seq` (s2 `seq` nd_C_fib
  (Curry_Prelude.nd_OP_uscore_inst_hash_Prelude_dot_Num_hash_Prelude_dot_Int s0
  cd cs)
  (Curry_Prelude.nd_OP_uscore_inst_hash_Prelude_dot_Ord_hash_Prelude_dot_Int s1
  cd cs) (Curry_Prelude.nd_OP_qmark (Curry_Prelude.C_Int (27))
  (Curry_Prelude.C_Int (1)) s2 cd cs) s3 cd cs))))))

d_C__case_1 :: forall t0 . (Curry_Prelude.Curry
  t0) => Curry_Prelude.OP_uscore_Dict_hash_Num t0 -> t0
  -> Curry_Prelude.OP_uscore_Dict_hash_Ord t0 -> Curry_Prelude.C_Bool -> Cover
  -> ConstStore -> t0
d_C__case_1 x1 x3 x2 x4 cd cs = case x4 of
  Curry_Prelude.C_True -> x3
  Curry_Prelude.C_False -> d_C__case_0 x1 x3 x2 (Curry_Prelude.d_C_apply
    (Curry_Prelude.d_C_apply (Curry_Prelude.d_OP_gt x2 cd cs) x3 cd cs)
    (Curry_Prelude.d_C_apply (Curry_Prelude.d_C_fromInt x1 cd cs)
    (Curry_Prelude.C_Int (1)) cd cs) cd cs) cd cs
  Curry_Prelude.Choice_C_Bool d i l r -> narrow d i (d_C__case_1 x1 x3 x2 l cd
    cs) (d_C__case_1 x1 x3 x2 r cd cs)
  Curry_Prelude.Choices_C_Bool d i xs -> narrows cs d i (\z -> d_C__case_1 x1 x3
    x2 z cd cs) xs
  Curry_Prelude.Guard_C_Bool d c e -> guardCons d c (d_C__case_1 x1 x3 x2 e
    cd $! addCs c cs)
  Curry_Prelude.Fail_C_Bool d info -> failCons d (traceFail "fib._case_1" [show
    x1, show x3, show x2, show x4] info)
  _ -> failCons cd (consFail "fib._case_1" (showCons x4))

nd_C__case_1 :: forall t0 . (Curry_Prelude.Curry
  t0) => Curry_Prelude.OP_uscore_Dict_hash_Num t0 -> t0
  -> Curry_Prelude.OP_uscore_Dict_hash_Ord t0 -> Curry_Prelude.C_Bool
  -> IDSupply -> Cover -> ConstStore -> t0
nd_C__case_1 x1 x3 x2 x4 s cd cs = case x4 of
  Curry_Prelude.C_True -> x3
  Curry_Prelude.C_False -> let s10 = s
    in s10 `seq` (let s9 = leftSupply s10
                      s7 = rightSupply s10
    in s9 `seq` (s7 `seq` nd_C__case_0 x1 x3 x2 (let s6 = leftSupply s7
                                                     s8 = rightSupply s7
                                                     s2 = leftSupply s8
                                                     s5 = rightSupply s8
    in s6 `seq` (s8 `seq` (s2 `seq` (s5 `seq` Curry_Prelude.nd_C_apply
    (let s1 = leftSupply s2
         s0 = rightSupply s2
    in s1 `seq` (s0 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_OP_gt x2 s0
    cd cs) x3 s1 cd cs)) (let s4 = leftSupply s5
                              s3 = rightSupply s5
    in s4 `seq` (s3 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_C_fromInt
    x1 s3 cd cs) (Curry_Prelude.C_Int (1)) s4 cd cs)) s6 cd cs)))) s9 cd cs))
  Curry_Prelude.Choice_C_Bool d i l r -> narrow d i (nd_C__case_1 x1 x3 x2 l s
    cd cs) (nd_C__case_1 x1 x3 x2 r s cd cs)
  Curry_Prelude.Choices_C_Bool d i xs -> narrows cs d i (\z -> nd_C__case_1 x1
    x3 x2 z s cd cs) xs
  Curry_Prelude.Guard_C_Bool d c e -> guardCons d c (nd_C__case_1 x1 x3 x2 e s
    cd $! addCs c cs)
  Curry_Prelude.Fail_C_Bool d info -> failCons d (traceFail "fib._case_1" [show
    x1, show x3, show x2, show x4] info)
  _ -> failCons cd (consFail "fib._case_1" (showCons x4))

d_C__case_0 :: forall t0 . (Curry_Prelude.Curry
  t0) => Curry_Prelude.OP_uscore_Dict_hash_Num t0 -> t0
  -> Curry_Prelude.OP_uscore_Dict_hash_Ord t0 -> Curry_Prelude.C_Bool -> Cover
  -> ConstStore -> t0
d_C__case_0 x1 x3 x2 x4 cd cs = case x4 of
  Curry_Prelude.C_True -> Curry_Prelude.d_C_apply (Curry_Prelude.d_C_apply
    (Curry_Prelude.d_OP_plus x1 cd cs) (d_C_fib x1 x2 (Curry_Prelude.d_C_apply
    (Curry_Prelude.d_C_apply (Curry_Prelude.d_OP_minus x1 cd cs) x3 cd cs)
    (Curry_Prelude.d_C_apply (Curry_Prelude.d_C_fromInt x1 cd cs)
    (Curry_Prelude.C_Int (1)) cd cs) cd cs) cd cs) cd cs) (d_C_fib x1 x2
    (Curry_Prelude.d_C_apply (Curry_Prelude.d_C_apply (Curry_Prelude.d_OP_minus
    x1 cd cs) x3 cd cs) (Curry_Prelude.d_C_apply (Curry_Prelude.d_C_fromInt x1
    cd cs) (Curry_Prelude.C_Int (2)) cd cs) cd cs) cd cs) cd cs
  Curry_Prelude.C_False -> Curry_Prelude.d_C_failed cd cs
  Curry_Prelude.Choice_C_Bool d i l r -> narrow d i (d_C__case_0 x1 x3 x2 l cd
    cs) (d_C__case_0 x1 x3 x2 r cd cs)
  Curry_Prelude.Choices_C_Bool d i xs -> narrows cs d i (\z -> d_C__case_0 x1 x3
    x2 z cd cs) xs
  Curry_Prelude.Guard_C_Bool d c e -> guardCons d c (d_C__case_0 x1 x3 x2 e
    cd $! addCs c cs)
  Curry_Prelude.Fail_C_Bool d info -> failCons d (traceFail "fib._case_0" [show
    x1, show x3, show x2, show x4] info)
  _ -> failCons cd (consFail "fib._case_0" (showCons x4))

nd_C__case_0 :: forall t0 . (Curry_Prelude.Curry
  t0) => Curry_Prelude.OP_uscore_Dict_hash_Num t0 -> t0
  -> Curry_Prelude.OP_uscore_Dict_hash_Ord t0 -> Curry_Prelude.C_Bool
  -> IDSupply -> Cover -> ConstStore -> t0
nd_C__case_0 x1 x3 x2 x4 s cd cs = case x4 of
  Curry_Prelude.C_True -> let s27 = s
    in s27 `seq` (let s26 = leftSupply s27
                      s28 = rightSupply s27
                      s13 = leftSupply s28
                      s25 = rightSupply s28
    in s26 `seq` (s28 `seq` (s13 `seq` (s25 `seq` Curry_Prelude.nd_C_apply
    (let s12 = leftSupply s13
         s14 = rightSupply s13
         s0 = leftSupply s14
         s11 = rightSupply s14
    in s12 `seq` (s14 `seq` (s0 `seq` (s11 `seq` Curry_Prelude.nd_C_apply
    (Curry_Prelude.nd_OP_plus x1 s0 cd cs) (let s10 = leftSupply s11
                                                s8 = rightSupply s11
    in s10 `seq` (s8 `seq` nd_C_fib x1 x2 (let s7 = leftSupply s8
                                               s9 = rightSupply s8
                                               s3 = leftSupply s9
                                               s6 = rightSupply s9
    in s7 `seq` (s9 `seq` (s3 `seq` (s6 `seq` Curry_Prelude.nd_C_apply
    (let s2 = leftSupply s3
         s1 = rightSupply s3
    in s2 `seq` (s1 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_OP_minus x1
    s1 cd cs) x3 s2 cd cs)) (let s5 = leftSupply s6
                                 s4 = rightSupply s6
    in s5 `seq` (s4 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_C_fromInt
    x1 s4 cd cs) (Curry_Prelude.C_Int (1)) s5 cd cs)) s7 cd cs)))) s10 cd cs))
    s12 cd cs)))) (let s24 = leftSupply s25
                       s22 = rightSupply s25
    in s24 `seq` (s22 `seq` nd_C_fib x1 x2 (let s21 = leftSupply s22
                                                s23 = rightSupply s22
                                                s17 = leftSupply s23
                                                s20 = rightSupply s23
    in s21 `seq` (s23 `seq` (s17 `seq` (s20 `seq` Curry_Prelude.nd_C_apply
    (let s16 = leftSupply s17
         s15 = rightSupply s17
    in s16 `seq` (s15 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_OP_minus
    x1 s15 cd cs) x3 s16 cd cs)) (let s19 = leftSupply s20
                                      s18 = rightSupply s20
    in s19 `seq` (s18 `seq` Curry_Prelude.nd_C_apply (Curry_Prelude.nd_C_fromInt
    x1 s18 cd cs) (Curry_Prelude.C_Int (2)) s19 cd cs)) s21 cd cs)))) s24 cd
    cs)) s26 cd cs))))
  Curry_Prelude.C_False -> Curry_Prelude.d_C_failed cd cs
  Curry_Prelude.Choice_C_Bool d i l r -> narrow d i (nd_C__case_0 x1 x3 x2 l s
    cd cs) (nd_C__case_0 x1 x3 x2 r s cd cs)
  Curry_Prelude.Choices_C_Bool d i xs -> narrows cs d i (\z -> nd_C__case_0 x1
    x3 x2 z s cd cs) xs
  Curry_Prelude.Guard_C_Bool d c e -> guardCons d c (nd_C__case_0 x1 x3 x2 e s
    cd $! addCs c cs)
  Curry_Prelude.Fail_C_Bool d info -> failCons d (traceFail "fib._case_0" [show
    x1, show x3, show x2, show x4] info)
  _ -> failCons cd (consFail "fib._case_0" (showCons x4))

