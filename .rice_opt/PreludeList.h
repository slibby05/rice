#ifndef PreludeList_H
#define PreludeList_H

#include "runtime.h"
#include "PreludeBase.h"
#include "PreludeCompare.h"
#include "PreludeNum.h"

void Prelude_enumFromThenTo_USbuild_hnf(field root);
void Prelude_enumFromTo_USbuild_hnf(field root);
void Prelude_splitAt_hnf(field root);
void Prelude_take_hnf(field root);
void Prelude_drop_hnf(field root);
void Prelude__USdef_HTminBound_HTPrelude_DOBounded_hnf(field root);
void Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_hnf(field root);
void Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_hnf(field root);
void Prelude_succ_hnf(field root);
void Prelude_pred_hnf(field root);
void Prelude_enumFrom_hnf(field root);
void Prelude_enumFromThen_hnf(field root);
void Prelude_enumFromTo_hnf(field root);
void Prelude_enumFromThenTo_hnf(field root);
void Prelude_null_USfold_hnf(field root);
void Prelude_null_hnf(field root);
void Prelude_length_USfold_hnf(field root);
void Prelude_length_hnf(field root);
void Prelude_enumFromThenTo_US_hnf(field root);
void Prelude_enumFromTo_US_hnf(field root);
void Prelude_iterate_hnf(field root);
void Prelude_enumFromThen_US_hnf(field root);
void Prelude_enumFrom_US_hnf(field root);
void Prelude_lookup_USfold_hnf(field root);
void Prelude_lookup_hnf(field root);
void Prelude_repeat_USbuild_hnf(field root);
void Prelude_repeat_hnf(field root);
void Prelude_concat_USmkc_hnf(field root);
void Prelude_concat_hnf(field root);
void Prelude_append_USbuild_hnf(field root);
void Prelude__PL_PL_hnf(field root);
void Prelude__PL_PL_HTP0_hnf(field root);
void Prelude_filter_USmkc_hnf(field root);
void Prelude_filter_hnf(field root);
void Prelude_map_USmkc_hnf(field root);
void Prelude_map_hnf(field root);
void Prelude_concatMap_hnf(field root);
void Prelude_concatMap_HTP2_hnf(field root);
void Prelude_concatMap_HTP1_hnf(field root);
void Prelude_break_hnf(field root);
void Prelude_break_HTP3_hnf(field root);
void Prelude_replicate_hnf(field root);
void Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(field root);
void Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_hnf(field root);
void Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude_fromEnum_hnf(field root);
void Prelude_toEnum_hnf(field root);
void Prelude__USdef_HTsucc_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_hnf(field root);
void Prelude_maxBound_hnf(field root);
void Prelude_minBound_hnf(field root);
void Prelude_or_hnf(field root);
void Prelude_any_hnf(field root);
void Prelude_any_HTP4_hnf(field root);
void Prelude_elem_hnf(field root);
void Prelude_elem_HTP5_hnf(field root);
void Prelude_and_hnf(field root);
void Prelude_all_hnf(field root);
void Prelude_all_HTP6_hnf(field root);
void Prelude_notElem_hnf(field root);
void Prelude_notElem_HTP7_hnf(field root);
void Prelude_anyOf_hnf(field root);
void Prelude_reverse_hnf(field root);
void Prelude_reverse_HTP8_hnf(field root);
void Prelude_foldl1_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude_boundedEnumFromThen_hnf(field root);
void Prelude_boundedEnumFromThen_HTP10_hnf(field root);
void Prelude_boundedEnumFromThen_HTP9_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude_boundedEnumFrom_hnf(field root);
void Prelude_boundedEnumFrom_HTP11_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_hnf(field root);
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_hnf(field root);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_hnf(field root);
void Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_hnf(field root);
void Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_hnf(field root);
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_hnf(field root);
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_hnf(field root);
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USdef_HTpred_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker_hnf(field root);
void Prelude_iterate_USbuild_hnf(field root);
void Prelude_span_hnf(field root);
void Prelude_splitAt_HTworker_hnf(field root);
void Prelude_take_HTworker_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(field root);
void Prelude_dropWhile_hnf(field root);
void Prelude_takeWhile_hnf(field root);
void Prelude_drop_HTworker_hnf(field root);
void Prelude_foldr1_hnf(field root);
void Prelude_foldl_hnf(field root);
void Prelude__EX_EX_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_hnf(field root);
void Prelude_enumFromThenTo_USbuild__hnf(field root);
void Prelude_enumFromThenTo_USbuild__0_hnf(field root);
void Prelude_enumFromThenTo_USbuild__0_0_hnf(field root);
Node* Prelude_enumFromThenTo_USbuild_RET_hnf(Node* backup);
void Prelude_enumFromTo_USbuild__hnf(field root);
void Prelude_enumFromTo_USbuild__0_hnf(field root);
Node* Prelude_enumFromTo_USbuild_RET_hnf(Node* backup);
void Prelude_splitAt__hnf(field root);
Node* Prelude_splitAt_RET_hnf(Node* backup);
void Prelude_take__hnf(field root);
Node* Prelude_take_RET_hnf(Node* backup);
void Prelude_drop__hnf(field root);
Node* Prelude_drop_RET_hnf(Node* backup);
void Prelude__USdef_HTminBound_HTPrelude_DOBounded__hnf(field root);
Node* Prelude__USdef_HTminBound_HTPrelude_DOBounded_RET_hnf(Node* backup);
void Prelude__USdef_HTmaxBound_HTPrelude_DOBounded__hnf(field root);
Node* Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_RET_hnf(Node* backup);
Node* Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_RET_hnf(Node* backup);
void Prelude_succ__hnf(field root);
void Prelude_succ__0_hnf(field root);
Node* Prelude_succ_RET_hnf(Node* backup);
void Prelude_pred__hnf(field root);
void Prelude_pred__0_hnf(field root);
Node* Prelude_pred_RET_hnf(Node* backup);
void Prelude_enumFrom__hnf(field root);
void Prelude_enumFrom__0_hnf(field root);
Node* Prelude_enumFrom_RET_hnf(Node* backup);
void Prelude_enumFromThen__hnf(field root);
void Prelude_enumFromThen__0_hnf(field root);
Node* Prelude_enumFromThen_RET_hnf(Node* backup);
void Prelude_enumFromTo__hnf(field root);
void Prelude_enumFromTo__0_hnf(field root);
Node* Prelude_enumFromTo_RET_hnf(Node* backup);
void Prelude_enumFromThenTo__hnf(field root);
void Prelude_enumFromThenTo__0_hnf(field root);
Node* Prelude_enumFromThenTo_RET_hnf(Node* backup);
Node* Prelude_null_USfold_RET_hnf(Node* backup);
Node* Prelude_null_RET_hnf(Node* backup);
void Prelude_length_USfold__hnf(field root);
Node* Prelude_length_USfold_RET_hnf(Node* backup);
Node* Prelude_length_RET_hnf(Node* backup);
Node* Prelude_enumFromThenTo_US_RET_hnf(Node* backup);
Node* Prelude_enumFromTo_US_RET_hnf(Node* backup);
Node* Prelude_iterate_RET_hnf(Node* backup);
Node* Prelude_enumFromThen_US_RET_hnf(Node* backup);
Node* Prelude_enumFrom_US_RET_hnf(Node* backup);
void Prelude_lookup_USfold__hnf(field root);
void Prelude_lookup_USfold__0_hnf(field root);
void Prelude_lookup_USfold__0_1_hnf(field root);
Node* Prelude_lookup_USfold_RET_hnf(Node* backup);
Node* Prelude_lookup_RET_hnf(Node* backup);
void Prelude_repeat_USbuild__hnf(field root);
Node* Prelude_repeat_USbuild_RET_hnf(Node* backup);
Node* Prelude_repeat_RET_hnf(Node* backup);
Node* Prelude_concat_USmkc_RET_hnf(Node* backup);
Node* Prelude_concat_RET_hnf(Node* backup);
Node* Prelude_append_USbuild_RET_hnf(Node* backup);
Node* Prelude__PL_PL_RET_hnf(Node* backup);
Node* Prelude__PL_PL_HTP0_RET_hnf(Node* backup);
void Prelude_filter_USmkc__hnf(field root);
void Prelude_filter_USmkc__1_hnf(field root);
Node* Prelude_filter_USmkc_RET_hnf(Node* backup);
Node* Prelude_filter_RET_hnf(Node* backup);
Node* Prelude_map_USmkc_RET_hnf(Node* backup);
Node* Prelude_map_RET_hnf(Node* backup);
Node* Prelude_concatMap_RET_hnf(Node* backup);
void Prelude_concatMap_HTP2__hnf(field root);
Node* Prelude_concatMap_HTP2_RET_hnf(Node* backup);
Node* Prelude_concatMap_HTP1_RET_hnf(Node* backup);
Node* Prelude_break_RET_hnf(Node* backup);
void Prelude_break_HTP3__hnf(field root);
Node* Prelude_break_HTP3_RET_hnf(Node* backup);
void Prelude_replicate__hnf(field root);
Node* Prelude_replicate_RET_hnf(Node* backup);
void Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
Node* Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
Node* Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
Node* Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
Node* Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0_hnf(field root);
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1_hnf(field root);
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2_hnf(field root);
Node* Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0_hnf(field root);
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1_hnf(field root);
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2_hnf(field root);
Node* Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB__hnf(field root);
Node* Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude_fromEnum__hnf(field root);
void Prelude_fromEnum__0_hnf(field root);
Node* Prelude_fromEnum_RET_hnf(Node* backup);
void Prelude_toEnum__hnf(field root);
void Prelude_toEnum__0_hnf(field root);
Node* Prelude_toEnum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTsucc_HTPrelude_DOEnum_RET_hnf(Node* backup);
void Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__hnf(field root);
Node* Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_RET_hnf(Node* backup);
void Prelude_maxBound__hnf(field root);
void Prelude_maxBound__0_hnf(field root);
Node* Prelude_maxBound_RET_hnf(Node* backup);
void Prelude_minBound__hnf(field root);
void Prelude_minBound__0_hnf(field root);
Node* Prelude_minBound_RET_hnf(Node* backup);
Node* Prelude_or_RET_hnf(Node* backup);
Node* Prelude_any_RET_hnf(Node* backup);
void Prelude_any_HTP4__hnf(field root);
void Prelude_any_HTP4__1_hnf(field root);
Node* Prelude_any_HTP4_RET_hnf(Node* backup);
Node* Prelude_elem_RET_hnf(Node* backup);
void Prelude_elem_HTP5__hnf(field root);
void Prelude_elem_HTP5__1_hnf(field root);
Node* Prelude_elem_HTP5_RET_hnf(Node* backup);
Node* Prelude_and_RET_hnf(Node* backup);
Node* Prelude_all_RET_hnf(Node* backup);
void Prelude_all_HTP6__hnf(field root);
void Prelude_all_HTP6__0_hnf(field root);
Node* Prelude_all_HTP6_RET_hnf(Node* backup);
Node* Prelude_notElem_RET_hnf(Node* backup);
void Prelude_notElem_HTP7__hnf(field root);
void Prelude_notElem_HTP7__0_hnf(field root);
Node* Prelude_notElem_HTP7_RET_hnf(Node* backup);
Node* Prelude_anyOf_RET_hnf(Node* backup);
Node* Prelude_reverse_RET_hnf(Node* backup);
Node* Prelude_reverse_HTP8_RET_hnf(Node* backup);
void Prelude_foldl1__hnf(field root);
Node* Prelude_foldl1_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen__hnf(field root);
void Prelude_boundedEnumFromThen__0_hnf(field root);
Node* Prelude_boundedEnumFromThen_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen_HTP10__hnf(field root);
Node* Prelude_boundedEnumFromThen_HTP10_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen_HTP9__hnf(field root);
Node* Prelude_boundedEnumFromThen_HTP9_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude_boundedEnumFrom_RET_hnf(Node* backup);
void Prelude_boundedEnumFrom_HTP11__hnf(field root);
void Prelude_boundedEnumFrom_HTP11__0_hnf(field root);
Node* Prelude_boundedEnumFrom_HTP11_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_RET_hnf(Node* backup);
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14__hnf(field root);
Node* Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_RET_hnf(Node* backup);
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__hnf(field root);
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_hnf(field root);
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0_hnf(field root);
Node* Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_RET_hnf(Node* backup);
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__hnf(field root);
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0_hnf(field root);
Node* Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USdef_HTpred_HTPrelude_DOEnum_RET_hnf(Node* backup);
void Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1__hnf(field root);
Node* Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_RET_hnf(Node* backup);
void Prelude_enumFromThenTo_USbuild_HTworker__0_1_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__1_1_hnf(field root);
Node* Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf(Node* backup);
void Prelude_enumFromTo_USbuild_HTworker__1_hnf(field root);
Node* Prelude_enumFromTo_USbuild_HTworker_RET_hnf(Node* backup);
Node* Prelude_iterate_USbuild_RET_hnf(Node* backup);
void Prelude_span__hnf(field root);
void Prelude_span__1_hnf(field root);
void Prelude_span__1_0_hnf(field root);
Node* Prelude_span_RET_hnf(Node* backup);
void Prelude_splitAt_HTworker__1_hnf(field root);
void Prelude_splitAt_HTworker__1_1_hnf(field root);
Node* Prelude_splitAt_HTworker_RET_hnf(Node* backup);
void Prelude_take_HTworker__1_hnf(field root);
Node* Prelude_take_HTworker_RET_hnf(Node* backup);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_hnf(field root);
Node* Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__0_hnf(field root);
Node* Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_RET_hnf(Node* backup);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_hnf(field root);
Node* Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(Node* backup);
void Prelude_dropWhile__hnf(field root);
void Prelude_dropWhile__1_hnf(field root);
Node* Prelude_dropWhile_RET_hnf(Node* backup);
void Prelude_takeWhile__hnf(field root);
void Prelude_takeWhile__1_hnf(field root);
Node* Prelude_takeWhile_RET_hnf(Node* backup);
void Prelude_drop_HTworker__0_hnf(field root);
void Prelude_drop_HTworker__1_hnf(field root);
Node* Prelude_drop_HTworker_RET_hnf(Node* backup);
void Prelude_foldr1__hnf(field root);
void Prelude_foldr1__1_hnf(field root);
void Prelude_foldr1__1_0_hnf(field root);
Node* Prelude_foldr1_RET_hnf(Node* backup);
void Prelude_foldl__hnf(field root);
void Prelude_foldl__0_hnf(field root);
Node* Prelude_foldl_RET_hnf(Node* backup);
void Prelude__EX_EX__hnf(field root);
void Prelude__EX_EX__1_hnf(field root);
void Prelude__EX_EX__1_0_0_hnf(field root);
Node* Prelude__EX_EX_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0_hnf(field root);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19__hnf(field root);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0_hnf(field root);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23__hnf(field root);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0_hnf(field root);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27__hnf(field root);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_RET_hnf(Node* backup);

static Symbol Prelude_enumFromThenTo_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build", .hnf = &Prelude_enumFromThenTo_USbuild_hnf, .hnf_RET = &Prelude_enumFromThenTo_USbuild_RET_hnf};
static Symbol Prelude_enumFromTo_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build", .hnf = &Prelude_enumFromTo_USbuild_hnf, .hnf_RET = &Prelude_enumFromTo_USbuild_RET_hnf};
static Symbol Prelude_splitAt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt", .hnf = &Prelude_splitAt_hnf, .hnf_RET = &Prelude_splitAt_RET_hnf};
static Symbol Prelude_take_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take", .hnf = &Prelude_take_hnf, .hnf_RET = &Prelude_take_RET_hnf};
static Symbol Prelude_drop_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop", .hnf = &Prelude_drop_hnf, .hnf_RET = &Prelude_drop_RET_hnf};
static Symbol Prelude__USdef_HTminBound_HTPrelude_DOBounded_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#minBound#Prelude.Bounded", .hnf = &Prelude__USdef_HTminBound_HTPrelude_DOBounded_hnf, .hnf_RET = &Prelude__USdef_HTminBound_HTPrelude_DOBounded_RET_hnf};
static Symbol Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#maxBound#Prelude.Bounded", .hnf = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_hnf, .hnf_RET = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_RET_hnf};
static Symbol Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#toEnum#Prelude.Enum", .hnf = &Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#fromEnum#Prelude.Enum", .hnf = &Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude_succ_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "succ", .hnf = &Prelude_succ_hnf, .hnf_RET = &Prelude_succ_RET_hnf};
static Symbol Prelude_pred_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "pred", .hnf = &Prelude_pred_hnf, .hnf_RET = &Prelude_pred_RET_hnf};
static Symbol Prelude_enumFrom_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFrom", .hnf = &Prelude_enumFrom_hnf, .hnf_RET = &Prelude_enumFrom_RET_hnf};
static Symbol Prelude_enumFromThen_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThen", .hnf = &Prelude_enumFromThen_hnf, .hnf_RET = &Prelude_enumFromThen_RET_hnf};
static Symbol Prelude_enumFromTo_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromTo", .hnf = &Prelude_enumFromTo_hnf, .hnf_RET = &Prelude_enumFromTo_RET_hnf};
static Symbol Prelude_enumFromThenTo_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThenTo", .hnf = &Prelude_enumFromThenTo_hnf, .hnf_RET = &Prelude_enumFromThenTo_RET_hnf};
static Symbol Prelude_null_USfold_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "null_fold", .hnf = &Prelude_null_USfold_hnf, .hnf_RET = &Prelude_null_USfold_RET_hnf};
static Symbol Prelude_null_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "null", .hnf = &Prelude_null_hnf, .hnf_RET = &Prelude_null_RET_hnf};
static Symbol Prelude_length_USfold_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "length_fold", .hnf = &Prelude_length_USfold_hnf, .hnf_RET = &Prelude_length_USfold_RET_hnf};
static Symbol Prelude_length_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "length", .hnf = &Prelude_length_hnf, .hnf_RET = &Prelude_length_RET_hnf};
static Symbol Prelude_enumFromThenTo_US_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "enumFromThenTo_", .hnf = &Prelude_enumFromThenTo_US_hnf, .hnf_RET = &Prelude_enumFromThenTo_US_RET_hnf};
static Symbol Prelude_enumFromTo_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "enumFromTo_", .hnf = &Prelude_enumFromTo_US_hnf, .hnf_RET = &Prelude_enumFromTo_US_RET_hnf};
static Symbol Prelude_iterate_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "iterate", .hnf = &Prelude_iterate_hnf, .hnf_RET = &Prelude_iterate_RET_hnf};
static Symbol Prelude_enumFromThen_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "enumFromThen_", .hnf = &Prelude_enumFromThen_US_hnf, .hnf_RET = &Prelude_enumFromThen_US_RET_hnf};
static Symbol Prelude_enumFrom_US_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFrom_", .hnf = &Prelude_enumFrom_US_hnf, .hnf_RET = &Prelude_enumFrom_US_RET_hnf};
static Symbol Prelude_lookup_USfold_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lookup_fold", .hnf = &Prelude_lookup_USfold_hnf, .hnf_RET = &Prelude_lookup_USfold_RET_hnf};
static Symbol Prelude_lookup_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lookup", .hnf = &Prelude_lookup_hnf, .hnf_RET = &Prelude_lookup_RET_hnf};
static Symbol Prelude_repeat_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "repeat_build", .hnf = &Prelude_repeat_USbuild_hnf, .hnf_RET = &Prelude_repeat_USbuild_RET_hnf};
static Symbol Prelude_repeat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "repeat", .hnf = &Prelude_repeat_hnf, .hnf_RET = &Prelude_repeat_RET_hnf};
static Symbol Prelude_concat_USmkc_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "concat_mkc", .hnf = &Prelude_concat_USmkc_hnf, .hnf_RET = &Prelude_concat_USmkc_RET_hnf};
static Symbol Prelude_concat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "concat", .hnf = &Prelude_concat_hnf, .hnf_RET = &Prelude_concat_RET_hnf};
static Symbol Prelude_append_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "append_build", .hnf = &Prelude_append_USbuild_hnf, .hnf_RET = &Prelude_append_USbuild_RET_hnf};
static Symbol Prelude__PL_PL_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "++", .hnf = &Prelude__PL_PL_hnf, .hnf_RET = &Prelude__PL_PL_RET_hnf};
static Symbol Prelude__PL_PL_HTP0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "++#P0", .hnf = &Prelude__PL_PL_HTP0_hnf, .hnf_RET = &Prelude__PL_PL_HTP0_RET_hnf};
static Symbol Prelude_filter_USmkc_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "filter_mkc", .hnf = &Prelude_filter_USmkc_hnf, .hnf_RET = &Prelude_filter_USmkc_RET_hnf};
static Symbol Prelude_filter_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "filter", .hnf = &Prelude_filter_hnf, .hnf_RET = &Prelude_filter_RET_hnf};
static Symbol Prelude_map_USmkc_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "map_mkc", .hnf = &Prelude_map_USmkc_hnf, .hnf_RET = &Prelude_map_USmkc_RET_hnf};
static Symbol Prelude_map_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "map", .hnf = &Prelude_map_hnf, .hnf_RET = &Prelude_map_RET_hnf};
static Symbol Prelude_concatMap_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "concatMap", .hnf = &Prelude_concatMap_hnf, .hnf_RET = &Prelude_concatMap_RET_hnf};
static Symbol Prelude_concatMap_HTP2_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "concatMap#P2", .hnf = &Prelude_concatMap_HTP2_hnf, .hnf_RET = &Prelude_concatMap_HTP2_RET_hnf};
static Symbol Prelude_concatMap_HTP1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "concatMap#P1", .hnf = &Prelude_concatMap_HTP1_hnf, .hnf_RET = &Prelude_concatMap_HTP1_RET_hnf};
static Symbol Prelude_break_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "break", .hnf = &Prelude_break_hnf, .hnf_RET = &Prelude_break_RET_hnf};
static Symbol Prelude_break_HTP3_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "break#P3", .hnf = &Prelude_break_HTP3_hnf, .hnf_RET = &Prelude_break_HTP3_RET_hnf};
static Symbol Prelude_replicate_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "replicate", .hnf = &Prelude_replicate_hnf, .hnf_RET = &Prelude_replicate_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#>#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#<#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#>=#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#<=#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#max#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#min#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#/=#Prelude.Eq#[]", .hnf = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_inst#Prelude.Eq#[]", .hnf = &Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_inst#Prelude.Ord#[]", .hnf = &Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude_fromEnum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromEnum", .hnf = &Prelude_fromEnum_hnf, .hnf_RET = &Prelude_fromEnum_RET_hnf};
static Symbol Prelude_toEnum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "toEnum", .hnf = &Prelude_toEnum_hnf, .hnf_RET = &Prelude_toEnum_RET_hnf};
static Symbol Prelude__USdef_HTsucc_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#succ#Prelude.Enum", .hnf = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#succ#Prelude.Enum#A0", .hnf = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_hnf, .hnf_RET = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_RET_hnf};
static Symbol Prelude_maxBound_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "maxBound", .hnf = &Prelude_maxBound_hnf, .hnf_RET = &Prelude_maxBound_RET_hnf};
static Symbol Prelude_minBound_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "minBound", .hnf = &Prelude_minBound_hnf, .hnf_RET = &Prelude_minBound_RET_hnf};
static Symbol Prelude_or_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "or", .hnf = &Prelude_or_hnf, .hnf_RET = &Prelude_or_RET_hnf};
static Symbol Prelude_any_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "any", .hnf = &Prelude_any_hnf, .hnf_RET = &Prelude_any_RET_hnf};
static Symbol Prelude_any_HTP4_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "any#P4", .hnf = &Prelude_any_HTP4_hnf, .hnf_RET = &Prelude_any_HTP4_RET_hnf};
static Symbol Prelude_elem_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "elem", .hnf = &Prelude_elem_hnf, .hnf_RET = &Prelude_elem_RET_hnf};
static Symbol Prelude_elem_HTP5_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "elem#P5", .hnf = &Prelude_elem_HTP5_hnf, .hnf_RET = &Prelude_elem_HTP5_RET_hnf};
static Symbol Prelude_and_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "and", .hnf = &Prelude_and_hnf, .hnf_RET = &Prelude_and_RET_hnf};
static Symbol Prelude_all_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "all", .hnf = &Prelude_all_hnf, .hnf_RET = &Prelude_all_RET_hnf};
static Symbol Prelude_all_HTP6_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "all#P6", .hnf = &Prelude_all_HTP6_hnf, .hnf_RET = &Prelude_all_HTP6_RET_hnf};
static Symbol Prelude_notElem_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "notElem", .hnf = &Prelude_notElem_hnf, .hnf_RET = &Prelude_notElem_RET_hnf};
static Symbol Prelude_notElem_HTP7_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "notElem#P7", .hnf = &Prelude_notElem_HTP7_hnf, .hnf_RET = &Prelude_notElem_HTP7_RET_hnf};
static Symbol Prelude_anyOf_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "anyOf", .hnf = &Prelude_anyOf_hnf, .hnf_RET = &Prelude_anyOf_RET_hnf};
static Symbol Prelude_reverse_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "reverse", .hnf = &Prelude_reverse_hnf, .hnf_RET = &Prelude_reverse_RET_hnf};
static Symbol Prelude_reverse_HTP8_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "reverse#P8", .hnf = &Prelude_reverse_HTP8_hnf, .hnf_RET = &Prelude_reverse_HTP8_RET_hnf};
static Symbol Prelude_foldl1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldl1", .hnf = &Prelude_foldl1_hnf, .hnf_RET = &Prelude_foldl1_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "boundedEnumFromThen", .hnf = &Prelude_boundedEnumFromThen_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_HTP10_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "boundedEnumFromThen#P10", .hnf = &Prelude_boundedEnumFromThen_HTP10_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_HTP10_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_HTP9_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "boundedEnumFromThen#P9", .hnf = &Prelude_boundedEnumFromThen_HTP9_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_HTP9_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_boundedEnumFrom_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "boundedEnumFrom", .hnf = &Prelude_boundedEnumFrom_hnf, .hnf_RET = &Prelude_boundedEnumFrom_RET_hnf};
static Symbol Prelude_boundedEnumFrom_HTP11_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFrom#P11", .hnf = &Prelude_boundedEnumFrom_HTP11_hnf, .hnf_RET = &Prelude_boundedEnumFrom_HTP11_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#enumFromThen#Prelude.Enum", .hnf = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "_def#enumFromThen#Prelude.Enum#P12", .hnf = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_hnf, .hnf_RET = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#enumFrom#Prelude.Enum", .hnf = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_def#enumFrom#Prelude.Enum#P13", .hnf = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_hnf, .hnf_RET = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_RET_hnf};
static Symbol Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#enumFrom#Prelude.Enum#P13#P14", .hnf = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_hnf, .hnf_RET = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_RET_hnf};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Char", .hnf = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Char", .hnf = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Bounded#Prelude.Char", .hnf = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Ordering", .hnf = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Ordering", .hnf = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Bounded#Prelude.Ordering", .hnf = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Bool", .hnf = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Bool", .hnf = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Bounded#Prelude.Bool", .hnf = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_def#enumFromThenTo#Prelude.Enum", .hnf = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "_def#enumFromThenTo#Prelude.Enum#P15", .hnf = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_hnf, .hnf_RET = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_RET_hnf};
static Symbol Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#enumFromTo#Prelude.Enum", .hnf = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "_def#enumFromTo#Prelude.Enum#P16", .hnf = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_hnf, .hnf_RET = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USdef_HTpred_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#pred#Prelude.Enum", .hnf = &Prelude__USdef_HTpred_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTpred_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#pred#Prelude.Enum#A1", .hnf = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_hnf, .hnf_RET = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_RET_hnf};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker", .hnf = &Prelude_enumFromThenTo_USbuild_HTworker_hnf, .hnf_RET = &Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf};
static Symbol Prelude_enumFromTo_USbuild_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build#worker", .hnf = &Prelude_enumFromTo_USbuild_HTworker_hnf, .hnf_RET = &Prelude_enumFromTo_USbuild_HTworker_RET_hnf};
static Symbol Prelude_iterate_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "iterate_build", .hnf = &Prelude_iterate_USbuild_hnf, .hnf_RET = &Prelude_iterate_USbuild_RET_hnf};
static Symbol Prelude_span_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "span", .hnf = &Prelude_span_hnf, .hnf_RET = &Prelude_span_RET_hnf};
static Symbol Prelude_splitAt_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt#worker", .hnf = &Prelude_splitAt_HTworker_hnf, .hnf_RET = &Prelude_splitAt_HTworker_RET_hnf};
static Symbol Prelude_take_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take#worker", .hnf = &Prelude_take_HTworker_hnf, .hnf_RET = &Prelude_take_HTworker_RET_hnf};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#compare#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]#A2", .hnf = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_hnf, .hnf_RET = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_RET_hnf};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#==#Prelude.Eq#[]", .hnf = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf};
static Symbol Prelude_dropWhile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "dropWhile", .hnf = &Prelude_dropWhile_hnf, .hnf_RET = &Prelude_dropWhile_RET_hnf};
static Symbol Prelude_takeWhile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "takeWhile", .hnf = &Prelude_takeWhile_hnf, .hnf_RET = &Prelude_takeWhile_RET_hnf};
static Symbol Prelude_drop_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop#worker", .hnf = &Prelude_drop_HTworker_hnf, .hnf_RET = &Prelude_drop_HTworker_RET_hnf};
static Symbol Prelude_foldr1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldr1", .hnf = &Prelude_foldr1_hnf, .hnf_RET = &Prelude_foldr1_RET_hnf};
static Symbol Prelude_foldl_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldl", .hnf = &Prelude_foldl_hnf, .hnf_RET = &Prelude_foldl_RET_hnf};
static Symbol Prelude__EX_EX_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "!!", .hnf = &Prelude__EX_EX_hnf, .hnf_RET = &Prelude__EX_EX_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Char#P17", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Char#P17#P18", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char#P19", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char#P19#P20", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21#P22", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23#P24", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25#P26", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool#P27", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool#P27#P28", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_RET_hnf};
static Symbol Prelude_enumFromThenTo_USbuild__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build@[]", .hnf = Prelude_enumFromThenTo_USbuild__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build@[0]", .hnf = Prelude_enumFromThenTo_USbuild__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build@[0,0]", .hnf = Prelude_enumFromThenTo_USbuild__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build@[]", .hnf = Prelude_enumFromTo_USbuild__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build@[0]", .hnf = Prelude_enumFromTo_USbuild__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt@[]", .hnf = Prelude_splitAt__hnf, .hnf_RET = NULL};
static Symbol Prelude_take__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take@[]", .hnf = Prelude_take__hnf, .hnf_RET = NULL};
static Symbol Prelude_drop__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop@[]", .hnf = Prelude_drop__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTminBound_HTPrelude_DOBounded__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#minBound#Prelude.Bounded@[]", .hnf = Prelude__USdef_HTminBound_HTPrelude_DOBounded__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTmaxBound_HTPrelude_DOBounded__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#maxBound#Prelude.Bounded@[]", .hnf = Prelude__USdef_HTmaxBound_HTPrelude_DOBounded__hnf, .hnf_RET = NULL};
static Symbol Prelude_succ__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "succ@[]", .hnf = Prelude_succ__hnf, .hnf_RET = NULL};
static Symbol Prelude_succ__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "succ@[0]", .hnf = Prelude_succ__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pred__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "pred@[]", .hnf = Prelude_pred__hnf, .hnf_RET = NULL};
static Symbol Prelude_pred__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "pred@[0]", .hnf = Prelude_pred__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFrom__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFrom@[]", .hnf = Prelude_enumFrom__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFrom__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFrom@[0]", .hnf = Prelude_enumFrom__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThen__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThen@[]", .hnf = Prelude_enumFromThen__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThen__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThen@[0]", .hnf = Prelude_enumFromThen__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromTo@[]", .hnf = Prelude_enumFromTo__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromTo@[0]", .hnf = Prelude_enumFromTo__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThenTo@[]", .hnf = Prelude_enumFromThenTo__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThenTo@[0]", .hnf = Prelude_enumFromThenTo__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_length_USfold__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "length_fold@[]", .hnf = Prelude_length_USfold__hnf, .hnf_RET = NULL};
static Symbol Prelude_lookup_USfold__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lookup_fold@[]", .hnf = Prelude_lookup_USfold__hnf, .hnf_RET = NULL};
static Symbol Prelude_lookup_USfold__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lookup_fold@[0]", .hnf = Prelude_lookup_USfold__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lookup_USfold__0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lookup_fold@[0,1]", .hnf = Prelude_lookup_USfold__0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_repeat_USbuild__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "repeat_build@[]", .hnf = Prelude_repeat_USbuild__hnf, .hnf_RET = NULL};
static Symbol Prelude_filter_USmkc__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "filter_mkc@[]", .hnf = Prelude_filter_USmkc__hnf, .hnf_RET = NULL};
static Symbol Prelude_filter_USmkc__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "filter_mkc@[1]", .hnf = Prelude_filter_USmkc__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_concatMap_HTP2__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "concatMap#P2@[]", .hnf = Prelude_concatMap_HTP2__hnf, .hnf_RET = NULL};
static Symbol Prelude_break_HTP3__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "break#P3@[]", .hnf = Prelude_break_HTP3__hnf, .hnf_RET = NULL};
static Symbol Prelude_replicate__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "replicate@[]", .hnf = Prelude_replicate__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#>#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#<#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#>=#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#<=#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#max#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#max#Prelude.Ord#[]@[0]", .hnf = Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#max#Prelude.Ord#[]@[1]", .hnf = Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#max#Prelude.Ord#[]@[2]", .hnf = Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#min#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#min#Prelude.Ord#[]@[0]", .hnf = Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#min#Prelude.Ord#[]@[1]", .hnf = Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#min#Prelude.Ord#[]@[2]", .hnf = Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#/=#Prelude.Eq#[]@[]", .hnf = Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude_fromEnum__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromEnum@[]", .hnf = Prelude_fromEnum__hnf, .hnf_RET = NULL};
static Symbol Prelude_fromEnum__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromEnum@[0]", .hnf = Prelude_fromEnum__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_toEnum__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "toEnum@[]", .hnf = Prelude_toEnum__hnf, .hnf_RET = NULL};
static Symbol Prelude_toEnum__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "toEnum@[0]", .hnf = Prelude_toEnum__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#succ#Prelude.Enum#A0@[]", .hnf = Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__hnf, .hnf_RET = NULL};
static Symbol Prelude_maxBound__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "maxBound@[]", .hnf = Prelude_maxBound__hnf, .hnf_RET = NULL};
static Symbol Prelude_maxBound__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "maxBound@[0]", .hnf = Prelude_maxBound__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_minBound__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "minBound@[]", .hnf = Prelude_minBound__hnf, .hnf_RET = NULL};
static Symbol Prelude_minBound__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "minBound@[0]", .hnf = Prelude_minBound__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_any_HTP4__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "any#P4@[]", .hnf = Prelude_any_HTP4__hnf, .hnf_RET = NULL};
static Symbol Prelude_any_HTP4__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "any#P4@[1]", .hnf = Prelude_any_HTP4__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_elem_HTP5__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "elem#P5@[]", .hnf = Prelude_elem_HTP5__hnf, .hnf_RET = NULL};
static Symbol Prelude_elem_HTP5__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "elem#P5@[1]", .hnf = Prelude_elem_HTP5__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_all_HTP6__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "all#P6@[]", .hnf = Prelude_all_HTP6__hnf, .hnf_RET = NULL};
static Symbol Prelude_all_HTP6__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "all#P6@[0]", .hnf = Prelude_all_HTP6__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_notElem_HTP7__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "notElem#P7@[]", .hnf = Prelude_notElem_HTP7__hnf, .hnf_RET = NULL};
static Symbol Prelude_notElem_HTP7__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "notElem#P7@[0]", .hnf = Prelude_notElem_HTP7__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldl1__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldl1@[]", .hnf = Prelude_foldl1__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "boundedEnumFromThen@[]", .hnf = Prelude_boundedEnumFromThen__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "boundedEnumFromThen@[0]", .hnf = Prelude_boundedEnumFromThen__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP10__symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "boundedEnumFromThen#P10@[]", .hnf = Prelude_boundedEnumFromThen_HTP10__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP9__symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "boundedEnumFromThen#P9@[]", .hnf = Prelude_boundedEnumFromThen_HTP9__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFrom_HTP11__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFrom#P11@[]", .hnf = Prelude_boundedEnumFrom_HTP11__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFrom_HTP11__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFrom#P11@[0]", .hnf = Prelude_boundedEnumFrom_HTP11__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#enumFrom#Prelude.Enum#P13#P14@[]", .hnf = Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Char@[]", .hnf = Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Char@[]", .hnf = Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "_def#enumFromThenTo#Prelude.Enum#P15@[]", .hnf = Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "_def#enumFromThenTo#Prelude.Enum#P15@[0]", .hnf = Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "_def#enumFromThenTo#Prelude.Enum#P15@[0,0]", .hnf = Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "_def#enumFromTo#Prelude.Enum#P16@[]", .hnf = Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "_def#enumFromTo#Prelude.Enum#P16@[0]", .hnf = Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#pred#Prelude.Enum#A1@[]", .hnf = Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThenTo_build#worker@[0,1]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThenTo_build#worker@[1,1]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromTo_build#worker@[1]", .hnf = Prelude_enumFromTo_USbuild_HTworker__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_span__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "span@[]", .hnf = Prelude_span__hnf, .hnf_RET = NULL};
static Symbol Prelude_span__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "span@[1]", .hnf = Prelude_span__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_span__1_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "span@[1,0]", .hnf = Prelude_span__1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt#worker@[1]", .hnf = Prelude_splitAt_HTworker__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt#worker@[1,1]", .hnf = Prelude_splitAt_HTworker__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_take_HTworker__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take#worker@[1]", .hnf = Prelude_take_HTworker__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#compare#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]@[0]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#compare#Prelude.Ord#[]@[1]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "_impl#compare#Prelude.Ord#[]@[1,1]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]#A2@[]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]#A2@[0]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#==#Prelude.Eq#[]@[]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#==#Prelude.Eq#[]@[0]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#==#Prelude.Eq#[]@[1]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#==#Prelude.Eq#[]@[1,1]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_dropWhile__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "dropWhile@[]", .hnf = Prelude_dropWhile__hnf, .hnf_RET = NULL};
static Symbol Prelude_dropWhile__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "dropWhile@[1]", .hnf = Prelude_dropWhile__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_takeWhile__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "takeWhile@[]", .hnf = Prelude_takeWhile__hnf, .hnf_RET = NULL};
static Symbol Prelude_takeWhile__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "takeWhile@[1]", .hnf = Prelude_takeWhile__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "drop#worker@[0]", .hnf = Prelude_drop_HTworker__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop#worker@[1]", .hnf = Prelude_drop_HTworker__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr1__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldr1@[]", .hnf = Prelude_foldr1__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr1__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldr1@[1]", .hnf = Prelude_foldr1__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr1__1_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "foldr1@[1,0]", .hnf = Prelude_foldr1__1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldl__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldl@[]", .hnf = Prelude_foldl__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldl__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "foldl@[0]", .hnf = Prelude_foldl__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "!!@[]", .hnf = Prelude__EX_EX__hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "!!@[1]", .hnf = Prelude__EX_EX__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "!!@[1,0,0]", .hnf = Prelude__EX_EX__1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Char#P17@[]", .hnf = Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Char#P17@[0]", .hnf = Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char#P19@[]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21@[]", .hnf = Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21@[0]", .hnf = Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23@[]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25@[]", .hnf = Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25@[0]", .hnf = Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool#P27@[]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27__hnf, .hnf_RET = NULL};

// enumFromThenTo_build
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_USbuild(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// enumFromTo_build
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo_USbuild(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// splitAt
__attribute__((always_inline)) 
static inline void set_Prelude_splitAt(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_splitAt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// take
__attribute__((always_inline)) 
static inline void set_Prelude_take(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_take_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// drop
__attribute__((always_inline)) 
static inline void set_Prelude_drop(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_drop_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for minBound in Bounded
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTminBound_HTPrelude_DOBounded(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTminBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for maxBound in Bounded
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for toEnum in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTtoEnum_HTPrelude_DOEnum(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for fromEnum in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTfromEnum_HTPrelude_DOEnum(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// succ
__attribute__((always_inline)) 
static inline void set_Prelude_succ(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_succ_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// pred
__attribute__((always_inline)) 
static inline void set_Prelude_pred(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_pred_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFrom
__attribute__((always_inline)) 
static inline void set_Prelude_enumFrom(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_enumFrom_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThen
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThen(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_enumFromThen_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromTo
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThenTo
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// null_fold
__attribute__((always_inline)) 
static inline void set_Prelude_null_USfold(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_null_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// null
__attribute__((always_inline)) 
static inline void set_Prelude_null(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_null_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// length_fold
__attribute__((always_inline)) 
static inline void set_Prelude_length_USfold(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_length_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// length
__attribute__((always_inline)) 
static inline void set_Prelude_length(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_length_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThenTo_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_US(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// enumFromTo_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo_US(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// iterate
__attribute__((always_inline)) 
static inline void set_Prelude_iterate(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_iterate_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// enumFromThen_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThen_US(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_enumFromThen_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// enumFrom_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFrom_US(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_enumFrom_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lookup_fold
__attribute__((always_inline)) 
static inline void set_Prelude_lookup_USfold(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lookup_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// lookup
__attribute__((always_inline)) 
static inline void set_Prelude_lookup(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lookup_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// repeat_build
__attribute__((always_inline)) 
static inline void set_Prelude_repeat_USbuild(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_repeat_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// repeat
__attribute__((always_inline)) 
static inline void set_Prelude_repeat(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_repeat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// concat_mkc
__attribute__((always_inline)) 
static inline void set_Prelude_concat_USmkc(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_concat_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// concat
__attribute__((always_inline)) 
static inline void set_Prelude_concat(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_concat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// append_build
__attribute__((always_inline)) 
static inline void set_Prelude_append_USbuild(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_append_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// ++
__attribute__((always_inline)) 
static inline void set_Prelude__PL_PL(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__PL_PL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ++#P0
__attribute__((always_inline)) 
static inline void set_Prelude__PL_PL_HTP0(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__PL_PL_HTP0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// filter_mkc
__attribute__((always_inline)) 
static inline void set_Prelude_filter_USmkc(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_filter_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// filter
__attribute__((always_inline)) 
static inline void set_Prelude_filter(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_filter_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// map_mkc
__attribute__((always_inline)) 
static inline void set_Prelude_map_USmkc(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_map_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// map
__attribute__((always_inline)) 
static inline void set_Prelude_map(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_map_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// concatMap
__attribute__((always_inline)) 
static inline void set_Prelude_concatMap(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_concatMap_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// concatMap#P2
__attribute__((always_inline)) 
static inline void set_Prelude_concatMap_HTP2(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_concatMap_HTP2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// concatMap#P1
__attribute__((always_inline)) 
static inline void set_Prelude_concatMap_HTP1(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_concatMap_HTP1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// break
__attribute__((always_inline)) 
static inline void set_Prelude_break(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_break_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// break#P3
__attribute__((always_inline)) 
static inline void set_Prelude_break_HTP3(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_break_HTP3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// replicate
__attribute__((always_inline)) 
static inline void set_Prelude_replicate(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_replicate_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of > in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of < in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of >= in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of <= in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of max in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of min in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of /= in Eq for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// instance of Eq for []
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOEq_HT_LB_RB(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// fromEnum
__attribute__((always_inline)) 
static inline void set_Prelude_fromEnum(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_fromEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// toEnum
__attribute__((always_inline)) 
static inline void set_Prelude_toEnum(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_toEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTsucc_HTPrelude_DOEnum(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// maxBound
__attribute__((always_inline)) 
static inline void set_Prelude_maxBound(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_maxBound_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// minBound
__attribute__((always_inline)) 
static inline void set_Prelude_minBound(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_minBound_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// or
__attribute__((always_inline)) 
static inline void set_Prelude_or(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_or_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// any
__attribute__((always_inline)) 
static inline void set_Prelude_any(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_any_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// any#P4
__attribute__((always_inline)) 
static inline void set_Prelude_any_HTP4(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_any_HTP4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// elem
__attribute__((always_inline)) 
static inline void set_Prelude_elem(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_elem_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// elem#P5
__attribute__((always_inline)) 
static inline void set_Prelude_elem_HTP5(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_elem_HTP5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// and
__attribute__((always_inline)) 
static inline void set_Prelude_and(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_and_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// all
__attribute__((always_inline)) 
static inline void set_Prelude_all(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_all_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// all#P6
__attribute__((always_inline)) 
static inline void set_Prelude_all_HTP6(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_all_HTP6_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// notElem
__attribute__((always_inline)) 
static inline void set_Prelude_notElem(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_notElem_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// notElem#P7
__attribute__((always_inline)) 
static inline void set_Prelude_notElem_HTP7(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_notElem_HTP7_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// anyOf
__attribute__((always_inline)) 
static inline void set_Prelude_anyOf(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_anyOf_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// reverse
__attribute__((always_inline)) 
static inline void set_Prelude_reverse(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_reverse_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// reverse#P8
__attribute__((always_inline)) 
static inline void set_Prelude_reverse_HTP8(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_reverse_HTP8_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// foldl1
__attribute__((always_inline)) 
static inline void set_Prelude_foldl1(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_foldl1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromThenTo in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// boundedEnumFromThen
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// boundedEnumFromThen#P10
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen_HTP10(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP10_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
}

// boundedEnumFromThen#P9
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen_HTP9(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP9_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
}

// implementation of enumFromTo in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// boundedEnumFrom
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFrom(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFrom_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// boundedEnumFrom#P11
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFrom_HTP11(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFrom_HTP11_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// implementation of enumFromThen in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for enumFromThen in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// default for enumFromThen in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// implementation of enumFrom in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of fromEnum in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of fromEnum in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of maxBound in Bounded for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of minBound in Bounded for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Bounded for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of fromEnum in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of maxBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of minBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Bounded for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of fromEnum in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of maxBound in Bounded for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of minBound in Bounded for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Bounded for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for enumFromThenTo in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// default for enumFromThenTo in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
}

// default for enumFromTo in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// default for enumFromTo in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// instance of Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for pred in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTpred_HTPrelude_DOEnum(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for pred in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThenTo_build#worker
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_USbuild_HTworker(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// enumFromTo_build#worker
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo_USbuild_HTworker(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// iterate_build
__attribute__((always_inline)) 
static inline void set_Prelude_iterate_USbuild(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_iterate_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// span
__attribute__((always_inline)) 
static inline void set_Prelude_span(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_span_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// splitAt#worker
__attribute__((always_inline)) 
static inline void set_Prelude_splitAt_HTworker(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_splitAt_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// take#worker
__attribute__((always_inline)) 
static inline void set_Prelude_take_HTworker(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_take_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of == in Eq for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// dropWhile
__attribute__((always_inline)) 
static inline void set_Prelude_dropWhile(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_dropWhile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// takeWhile
__attribute__((always_inline)) 
static inline void set_Prelude_takeWhile(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_takeWhile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// drop#worker
__attribute__((always_inline)) 
static inline void set_Prelude_drop_HTworker(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_drop_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// foldr1
__attribute__((always_inline)) 
static inline void set_Prelude_foldr1(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_foldr1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// foldl
__attribute__((always_inline)) 
static inline void set_Prelude_foldl(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_foldl_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// !!
__attribute__((always_inline)) 
static inline void set_Prelude__EX_EX(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__EX_EX_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromThenTo in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromThen in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromThenTo in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromThen in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromThenTo in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFromThen in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// enumFromThenTo_build
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// enumFromTo_build
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// splitAt
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// take
__attribute__((always_inline)) 
static inline field make_Prelude_take(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// drop
__attribute__((always_inline)) 
static inline field make_Prelude_drop(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for minBound in Bounded
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTminBound_HTPrelude_DOBounded(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTminBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for maxBound in Bounded
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for toEnum in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTtoEnum_HTPrelude_DOEnum(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for fromEnum in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTfromEnum_HTPrelude_DOEnum(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// succ
__attribute__((always_inline)) 
static inline field make_Prelude_succ(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_succ_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// pred
__attribute__((always_inline)) 
static inline field make_Prelude_pred(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pred_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFrom
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThen
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromTo
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThenTo
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// null_fold
__attribute__((always_inline)) 
static inline field make_Prelude_null_USfold(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_null_USfold_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// null
__attribute__((always_inline)) 
static inline field make_Prelude_null(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_null_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// length_fold
__attribute__((always_inline)) 
static inline field make_Prelude_length_USfold(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_length_USfold_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// length
__attribute__((always_inline)) 
static inline field make_Prelude_length(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_length_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThenTo_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_US(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// enumFromTo_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_US(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// iterate
__attribute__((always_inline)) 
static inline field make_Prelude_iterate(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_iterate_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// enumFromThen_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen_US(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// enumFrom_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom_US(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lookup_fold
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lookup
__attribute__((always_inline)) 
static inline field make_Prelude_lookup(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// repeat_build
__attribute__((always_inline)) 
static inline field make_Prelude_repeat_USbuild(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_repeat_USbuild_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// repeat
__attribute__((always_inline)) 
static inline field make_Prelude_repeat(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_repeat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// concat_mkc
__attribute__((always_inline)) 
static inline field make_Prelude_concat_USmkc(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concat_USmkc_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// concat
__attribute__((always_inline)) 
static inline field make_Prelude_concat(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// append_build
__attribute__((always_inline)) 
static inline field make_Prelude_append_USbuild(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_append_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// ++
__attribute__((always_inline)) 
static inline field make_Prelude__PL_PL(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_PL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ++#P0
__attribute__((always_inline)) 
static inline field make_Prelude__PL_PL_HTP0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_PL_HTP0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// filter_mkc
__attribute__((always_inline)) 
static inline field make_Prelude_filter_USmkc(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// filter
__attribute__((always_inline)) 
static inline field make_Prelude_filter(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// map_mkc
__attribute__((always_inline)) 
static inline field make_Prelude_map_USmkc(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_map_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// map
__attribute__((always_inline)) 
static inline field make_Prelude_map(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_map_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// concatMap
__attribute__((always_inline)) 
static inline field make_Prelude_concatMap(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concatMap_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// concatMap#P2
__attribute__((always_inline)) 
static inline field make_Prelude_concatMap_HTP2(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concatMap_HTP2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// concatMap#P1
__attribute__((always_inline)) 
static inline field make_Prelude_concatMap_HTP1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concatMap_HTP1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// break
__attribute__((always_inline)) 
static inline field make_Prelude_break(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_break_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// break#P3
__attribute__((always_inline)) 
static inline field make_Prelude_break_HTP3(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_break_HTP3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// replicate
__attribute__((always_inline)) 
static inline field make_Prelude_replicate(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_replicate_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of > in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of < in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of >= in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of <= in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of max in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of min in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of /= in Eq for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// instance of Eq for []
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOEq_HT_LB_RB(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fromEnum
__attribute__((always_inline)) 
static inline field make_Prelude_fromEnum(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// toEnum
__attribute__((always_inline)) 
static inline field make_Prelude_toEnum(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_toEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsucc_HTPrelude_DOEnum(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// maxBound
__attribute__((always_inline)) 
static inline field make_Prelude_maxBound(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maxBound_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// minBound
__attribute__((always_inline)) 
static inline field make_Prelude_minBound(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_minBound_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// or
__attribute__((always_inline)) 
static inline field make_Prelude_or(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_or_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// any
__attribute__((always_inline)) 
static inline field make_Prelude_any(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_any_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// any#P4
__attribute__((always_inline)) 
static inline field make_Prelude_any_HTP4(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_any_HTP4_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// elem
__attribute__((always_inline)) 
static inline field make_Prelude_elem(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_elem_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// elem#P5
__attribute__((always_inline)) 
static inline field make_Prelude_elem_HTP5(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_elem_HTP5_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// and
__attribute__((always_inline)) 
static inline field make_Prelude_and(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_and_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// all
__attribute__((always_inline)) 
static inline field make_Prelude_all(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_all_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// all#P6
__attribute__((always_inline)) 
static inline field make_Prelude_all_HTP6(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_all_HTP6_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// notElem
__attribute__((always_inline)) 
static inline field make_Prelude_notElem(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_notElem_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// notElem#P7
__attribute__((always_inline)) 
static inline field make_Prelude_notElem_HTP7(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_notElem_HTP7_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// anyOf
__attribute__((always_inline)) 
static inline field make_Prelude_anyOf(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_anyOf_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// reverse
__attribute__((always_inline)) 
static inline field make_Prelude_reverse(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_reverse_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// reverse#P8
__attribute__((always_inline)) 
static inline field make_Prelude_reverse_HTP8(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_reverse_HTP8_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// foldl1
__attribute__((always_inline)) 
static inline field make_Prelude_foldl1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFromThenTo in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// boundedEnumFromThen
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// boundedEnumFromThen#P10
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP10(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP10_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// boundedEnumFromThen#P9
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP9(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP9_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// boundedEnumFrom
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFrom(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFrom_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// boundedEnumFrom#P11
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFrom_HTP11(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFrom_HTP11_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// implementation of enumFromThen in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for enumFromThen in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// default for enumFromThen in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of fromEnum in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of fromEnum in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of maxBound in Bounded for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of minBound in Bounded for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Bounded for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of fromEnum in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of maxBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of minBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Bounded for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of fromEnum in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of maxBound in Bounded for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of minBound in Bounded for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Bounded for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  return root;
}

// default for enumFromThenTo in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// default for enumFromThenTo in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// default for enumFromTo in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// default for enumFromTo in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// instance of Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  return root;
}

// default for pred in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTpred_HTPrelude_DOEnum(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for pred in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThenTo_build#worker
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// enumFromTo_build#worker
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// iterate_build
__attribute__((always_inline)) 
static inline field make_Prelude_iterate_USbuild(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_iterate_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// span
__attribute__((always_inline)) 
static inline field make_Prelude_span(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// splitAt#worker
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// take#worker
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of == in Eq for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// dropWhile
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// takeWhile
__attribute__((always_inline)) 
static inline field make_Prelude_takeWhile(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_takeWhile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// drop#worker
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// foldr1
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// foldl
__attribute__((always_inline)) 
static inline field make_Prelude_foldl(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// !!
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFromThenTo in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromThen in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromThenTo in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromThen in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromThenTo in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromThen in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// enumFromThenTo_build @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// enumFromThenTo_build @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild__0(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// enumFromThenTo_build @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild__0_0(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild__0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// enumFromTo_build @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// enumFromTo_build @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild__0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// splitAt @ []
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// take @ []
__attribute__((always_inline)) 
static inline field make_Prelude_take_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// drop @ []
__attribute__((always_inline)) 
static inline field make_Prelude_drop_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for minBound in Bounded @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTminBound_HTPrelude_DOBounded__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for maxBound in Bounded @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// succ @ []
__attribute__((always_inline)) 
static inline field make_Prelude_succ_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_succ__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// succ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_succ__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_succ__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// pred @ []
__attribute__((always_inline)) 
static inline field make_Prelude_pred_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pred__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// pred @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_pred__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pred__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFrom @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFrom @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThen @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThen @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromTo @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromTo @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThenTo @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThenTo @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// length_fold @ []
__attribute__((always_inline)) 
static inline field make_Prelude_length_USfold_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_length_USfold__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lookup_fold @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lookup_fold @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lookup_fold @ [0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold__0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold__0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// repeat_build @ []
__attribute__((always_inline)) 
static inline field make_Prelude_repeat_USbuild_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_repeat_USbuild__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// filter_mkc @ []
__attribute__((always_inline)) 
static inline field make_Prelude_filter_USmkc_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_USmkc__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// filter_mkc @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_filter_USmkc__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_USmkc__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// concatMap#P2 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_concatMap_HTP2_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concatMap_HTP2__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// break#P3 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_break_HTP3_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_break_HTP3__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// replicate @ []
__attribute__((always_inline)) 
static inline field make_Prelude_replicate_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_replicate__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of > in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of < in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of >= in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of <= in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of max in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of max in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of max in Ord for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of max in Ord for [] @ [2]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of min in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of min in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of min in Ord for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of min in Ord for [] @ [2]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of /= in Eq for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fromEnum @ []
__attribute__((always_inline)) 
static inline field make_Prelude_fromEnum_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromEnum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fromEnum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_fromEnum__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromEnum__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// toEnum @ []
__attribute__((always_inline)) 
static inline field make_Prelude_toEnum_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_toEnum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// toEnum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_toEnum__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_toEnum__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for succ in Enum @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// maxBound @ []
__attribute__((always_inline)) 
static inline field make_Prelude_maxBound_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maxBound__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// maxBound @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_maxBound__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maxBound__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// minBound @ []
__attribute__((always_inline)) 
static inline field make_Prelude_minBound_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_minBound__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// minBound @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_minBound__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_minBound__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// any#P4 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_any_HTP4_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_any_HTP4__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// any#P4 @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_any_HTP4__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_any_HTP4__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// elem#P5 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_elem_HTP5_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_elem_HTP5__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// elem#P5 @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_elem_HTP5__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_elem_HTP5__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// all#P6 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_all_HTP6_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_all_HTP6__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// all#P6 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_all_HTP6__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_all_HTP6__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// notElem#P7 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_notElem_HTP7_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_notElem_HTP7__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// notElem#P7 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_notElem_HTP7__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_notElem_HTP7__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// foldl1 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldl1_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// boundedEnumFromThen @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// boundedEnumFromThen @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen__0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// boundedEnumFromThen#P10 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP10_(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP10__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// boundedEnumFromThen#P9 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP9_(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP9__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// boundedEnumFrom#P11 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFrom_HTP11_(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFrom_HTP11__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// boundedEnumFrom#P11 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFrom_HTP11__0(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFrom_HTP11__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// default for enumFrom in Enum @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of fromEnum in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of fromEnum in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of maxBound in Bounded for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of minBound in Bounded for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of fromEnum in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of maxBound in Bounded for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of minBound in Bounded for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of fromEnum in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of toEnum in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of pred in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of succ in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of maxBound in Bounded for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of minBound in Bounded for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for enumFromThenTo in Enum @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// default for enumFromThenTo in Enum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// default for enumFromThenTo in Enum @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// default for enumFromTo in Enum @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// default for enumFromTo in Enum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// default for pred in Enum @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThenTo_build#worker @ [0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromThenTo_build#worker @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__1_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// enumFromTo_build#worker @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// span @ []
__attribute__((always_inline)) 
static inline field make_Prelude_span_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// span @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_span__1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// span @ [1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_span__1_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span__1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// splitAt#worker @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// splitAt#worker @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__1_1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// take#worker @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of compare in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of compare in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of compare in Ord for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of compare in Ord for [] @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
  return root;
}

// implementation of compare in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of compare in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of == in Eq for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of == in Eq for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of == in Eq for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of == in Eq for [] @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// dropWhile @ []
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// dropWhile @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile__1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// takeWhile @ []
__attribute__((always_inline)) 
static inline field make_Prelude_takeWhile_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_takeWhile__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// takeWhile @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_takeWhile__1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_takeWhile__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// drop#worker @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// drop#worker @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// foldr1 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// foldr1 @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1__1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// foldr1 @ [1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1__1_0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1__1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// foldl @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldl_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// foldl @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_foldl__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// !! @ []
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// !! @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX__1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// !! @ [1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX__1_0_0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Char @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Ordering @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFromTo in Enum for Bool @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of enumFrom in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

#endif //PreludeList_H