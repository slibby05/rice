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
void Prelude_filter_USmkc_hnf(field root);
void Prelude_filter_hnf(field root);
void Prelude_map_USmkc_hnf(field root);
void Prelude_map_hnf(field root);
void Prelude_concatMap_hnf(field root);
void Prelude_break_hnf(field root);
void Prelude_break_HTP0_hnf(field root);
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
void Prelude_elem_hnf(field root);
void Prelude_and_hnf(field root);
void Prelude_all_hnf(field root);
void Prelude_notElem_hnf(field root);
void Prelude_anyOf_hnf(field root);
void Prelude_reverse_hnf(field root);
void Prelude_reverse_HTP1_hnf(field root);
void Prelude_foldl1_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude_boundedEnumFromThen_hnf(field root);
void Prelude_boundedEnumFromThen_HTA2_hnf(field root);
void Prelude_boundedEnumFromThen_HTA1_hnf(field root);
void Prelude_boundedEnumFromThen_HTP3_hnf(field root);
void Prelude_boundedEnumFromThen_HTP2_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude_boundedEnumFrom_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root);
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_hnf(field root);
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
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_hnf(field root);
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USdef_HTpred_HTPrelude_DOEnum_hnf(field root);
void Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA5_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA4_hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker_hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker_HTA6_hnf(field root);
void Prelude_iterate_USbuild_hnf(field root);
void Prelude_span_hnf(field root);
void Prelude_splitAt_HTworker_hnf(field root);
void Prelude_take_HTworker_hnf(field root);
void Prelude_take_HTworker_HTA7_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(field root);
void Prelude_dropWhile_hnf(field root);
void Prelude_takeWhile_hnf(field root);
void Prelude_drop_HTworker_hnf(field root);
void Prelude_foldr1_hnf(field root);
void Prelude_foldl_hnf(field root);
void Prelude__EX_EX_hnf(field root);
void Prelude__EX_EX_HTA9_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7_hnf(field root);
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9_hnf(field root);
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10_hnf(field root);
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
void Prelude_length_USfold__0_hnf(field root);
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
void Prelude_filter_USmkc__hnf(field root);
void Prelude_filter_USmkc__1_hnf(field root);
Node* Prelude_filter_USmkc_RET_hnf(Node* backup);
Node* Prelude_filter_RET_hnf(Node* backup);
Node* Prelude_map_USmkc_RET_hnf(Node* backup);
Node* Prelude_map_RET_hnf(Node* backup);
Node* Prelude_concatMap_RET_hnf(Node* backup);
Node* Prelude_break_RET_hnf(Node* backup);
void Prelude_break_HTP0__hnf(field root);
Node* Prelude_break_HTP0_RET_hnf(Node* backup);
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
void Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__0_hnf(field root);
Node* Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_RET_hnf(Node* backup);
void Prelude_maxBound__hnf(field root);
void Prelude_maxBound__0_hnf(field root);
Node* Prelude_maxBound_RET_hnf(Node* backup);
void Prelude_minBound__hnf(field root);
void Prelude_minBound__0_hnf(field root);
Node* Prelude_minBound_RET_hnf(Node* backup);
Node* Prelude_or_RET_hnf(Node* backup);
Node* Prelude_any_RET_hnf(Node* backup);
Node* Prelude_elem_RET_hnf(Node* backup);
Node* Prelude_and_RET_hnf(Node* backup);
Node* Prelude_all_RET_hnf(Node* backup);
Node* Prelude_notElem_RET_hnf(Node* backup);
Node* Prelude_anyOf_RET_hnf(Node* backup);
Node* Prelude_reverse_RET_hnf(Node* backup);
Node* Prelude_reverse_HTP1_RET_hnf(Node* backup);
void Prelude_foldl1__hnf(field root);
Node* Prelude_foldl1_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen__hnf(field root);
void Prelude_boundedEnumFromThen__0_hnf(field root);
Node* Prelude_boundedEnumFromThen_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen_HTA2__hnf(field root);
void Prelude_boundedEnumFromThen_HTA2__0_hnf(field root);
Node* Prelude_boundedEnumFromThen_HTA2_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen_HTA1__hnf(field root);
void Prelude_boundedEnumFromThen_HTA1__0_hnf(field root);
Node* Prelude_boundedEnumFromThen_HTA1_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen_HTP3__hnf(field root);
void Prelude_boundedEnumFromThen_HTP3__0_hnf(field root);
void Prelude_boundedEnumFromThen_HTP3__0_0_hnf(field root);
Node* Prelude_boundedEnumFromThen_HTP3_RET_hnf(Node* backup);
void Prelude_boundedEnumFromThen_HTP2__hnf(field root);
void Prelude_boundedEnumFromThen_HTP2__0_hnf(field root);
void Prelude_boundedEnumFromThen_HTP2__0_0_hnf(field root);
Node* Prelude_boundedEnumFromThen_HTP2_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude_boundedEnumFrom_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_hnf(field root);
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_hnf(field root);
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_hnf(field root);
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_hnf(field root);
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf(field root);
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_hnf(field root);
Node* Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf(field root);
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_hnf(field root);
Node* Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_0_hnf(field root);
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
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_hnf(field root);
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_0_hnf(field root);
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
Node* Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USdef_HTpred_HTPrelude_DOEnum_RET_hnf(Node* backup);
void Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__hnf(field root);
void Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__0_hnf(field root);
Node* Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_RET_hnf(Node* backup);
void Prelude_enumFromThenTo_USbuild_HTworker__hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_0_1_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_0_1_hnf(field root);
Node* Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf(Node* backup);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA5__hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_0_hnf(field root);
Node* Prelude_enumFromThenTo_USbuild_HTworker_HTA5_RET_hnf(Node* backup);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA4__hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_hnf(field root);
void Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_0_hnf(field root);
Node* Prelude_enumFromThenTo_USbuild_HTworker_HTA4_RET_hnf(Node* backup);
void Prelude_enumFromTo_USbuild_HTworker__hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker__0_hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker__0_0_1_hnf(field root);
Node* Prelude_enumFromTo_USbuild_HTworker_RET_hnf(Node* backup);
void Prelude_enumFromTo_USbuild_HTworker_HTA6__hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker_HTA6__0_hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_hnf(field root);
void Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_0_hnf(field root);
Node* Prelude_enumFromTo_USbuild_HTworker_HTA6_RET_hnf(Node* backup);
Node* Prelude_iterate_USbuild_RET_hnf(Node* backup);
void Prelude_span__hnf(field root);
void Prelude_span__1_hnf(field root);
void Prelude_span__1_0_hnf(field root);
Node* Prelude_span_RET_hnf(Node* backup);
void Prelude_splitAt_HTworker__hnf(field root);
void Prelude_splitAt_HTworker__0_hnf(field root);
void Prelude_splitAt_HTworker__0_0_1_hnf(field root);
void Prelude_splitAt_HTworker__0_0_1_1_hnf(field root);
void Prelude_splitAt_HTworker__0_0_1_1_0_hnf(field root);
void Prelude_splitAt_HTworker__0_0_1_1_0_0_hnf(field root);
void Prelude_splitAt_HTworker__0_0_1_1_0_0_0_hnf(field root);
Node* Prelude_splitAt_HTworker_RET_hnf(Node* backup);
void Prelude_take_HTworker__hnf(field root);
void Prelude_take_HTworker__0_hnf(field root);
void Prelude_take_HTworker__0_0_1_hnf(field root);
void Prelude_take_HTworker__0_0_1_0_hnf(field root);
Node* Prelude_take_HTworker_RET_hnf(Node* backup);
void Prelude_take_HTworker_HTA7__hnf(field root);
void Prelude_take_HTworker_HTA7__0_hnf(field root);
Node* Prelude_take_HTworker_HTA7_RET_hnf(Node* backup);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_hnf(field root);
Node* Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__hnf(field root);
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__0_hnf(field root);
Node* Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_RET_hnf(Node* backup);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_1_hnf(field root);
Node* Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(Node* backup);
void Prelude_dropWhile__hnf(field root);
void Prelude_dropWhile__0_hnf(field root);
void Prelude_dropWhile__1_hnf(field root);
void Prelude_dropWhile__1_1_hnf(field root);
Node* Prelude_dropWhile_RET_hnf(Node* backup);
void Prelude_takeWhile__hnf(field root);
void Prelude_takeWhile__0_hnf(field root);
void Prelude_takeWhile__1_hnf(field root);
Node* Prelude_takeWhile_RET_hnf(Node* backup);
void Prelude_drop_HTworker__hnf(field root);
void Prelude_drop_HTworker__0_hnf(field root);
void Prelude_drop_HTworker__0_0_0_hnf(field root);
void Prelude_drop_HTworker__0_0_1_hnf(field root);
void Prelude_drop_HTworker__0_0_1_0_hnf(field root);
void Prelude_drop_HTworker__0_0_1_1_hnf(field root);
void Prelude_drop_HTworker__0_0_1_1_0_hnf(field root);
void Prelude_drop_HTworker__0_0_1_1_0_0_hnf(field root);
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
void Prelude__EX_EX__1_0_hnf(field root);
void Prelude__EX_EX__1_0_0_0_hnf(field root);
void Prelude__EX_EX__1_0_0_1_hnf(field root);
void Prelude__EX_EX__1_0_0_1_0_hnf(field root);
Node* Prelude__EX_EX_RET_hnf(Node* backup);
void Prelude__EX_EX_HTA9__hnf(field root);
void Prelude__EX_EX_HTA9__0_hnf(field root);
Node* Prelude__EX_EX_HTA9_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10__hnf(field root);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__0_hnf(field root);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__hnf(field root);
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__0_hnf(field root);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10_RET_hnf(Node* backup);

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
static Symbol Prelude_filter_USmkc_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "filter_mkc", .hnf = &Prelude_filter_USmkc_hnf, .hnf_RET = &Prelude_filter_USmkc_RET_hnf};
static Symbol Prelude_filter_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "filter", .hnf = &Prelude_filter_hnf, .hnf_RET = &Prelude_filter_RET_hnf};
static Symbol Prelude_map_USmkc_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "map_mkc", .hnf = &Prelude_map_USmkc_hnf, .hnf_RET = &Prelude_map_USmkc_RET_hnf};
static Symbol Prelude_map_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "map", .hnf = &Prelude_map_hnf, .hnf_RET = &Prelude_map_RET_hnf};
static Symbol Prelude_concatMap_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "concatMap", .hnf = &Prelude_concatMap_hnf, .hnf_RET = &Prelude_concatMap_RET_hnf};
static Symbol Prelude_break_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "break", .hnf = &Prelude_break_hnf, .hnf_RET = &Prelude_break_RET_hnf};
static Symbol Prelude_break_HTP0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "break#P0", .hnf = &Prelude_break_HTP0_hnf, .hnf_RET = &Prelude_break_HTP0_RET_hnf};
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
static Symbol Prelude_elem_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "elem", .hnf = &Prelude_elem_hnf, .hnf_RET = &Prelude_elem_RET_hnf};
static Symbol Prelude_and_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "and", .hnf = &Prelude_and_hnf, .hnf_RET = &Prelude_and_RET_hnf};
static Symbol Prelude_all_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "all", .hnf = &Prelude_all_hnf, .hnf_RET = &Prelude_all_RET_hnf};
static Symbol Prelude_notElem_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "notElem", .hnf = &Prelude_notElem_hnf, .hnf_RET = &Prelude_notElem_RET_hnf};
static Symbol Prelude_anyOf_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "anyOf", .hnf = &Prelude_anyOf_hnf, .hnf_RET = &Prelude_anyOf_RET_hnf};
static Symbol Prelude_reverse_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "reverse", .hnf = &Prelude_reverse_hnf, .hnf_RET = &Prelude_reverse_RET_hnf};
static Symbol Prelude_reverse_HTP1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "reverse#P1", .hnf = &Prelude_reverse_HTP1_hnf, .hnf_RET = &Prelude_reverse_HTP1_RET_hnf};
static Symbol Prelude_foldl1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldl1", .hnf = &Prelude_foldl1_hnf, .hnf_RET = &Prelude_foldl1_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "boundedEnumFromThen", .hnf = &Prelude_boundedEnumFromThen_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_HTA2_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "boundedEnumFromThen#A2", .hnf = &Prelude_boundedEnumFromThen_HTA2_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_HTA2_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_HTA1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "boundedEnumFromThen#A1", .hnf = &Prelude_boundedEnumFromThen_HTA1_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_HTA1_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_HTP3_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P3", .hnf = &Prelude_boundedEnumFromThen_HTP3_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_HTP3_RET_hnf};
static Symbol Prelude_boundedEnumFromThen_HTP2_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P2", .hnf = &Prelude_boundedEnumFromThen_HTP2_hnf, .hnf_RET = &Prelude_boundedEnumFromThen_HTP2_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_boundedEnumFrom_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "boundedEnumFrom", .hnf = &Prelude_boundedEnumFrom_hnf, .hnf_RET = &Prelude_boundedEnumFrom_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#enumFromThen#Prelude.Enum", .hnf = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Int", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#enumFrom#Prelude.Enum", .hnf = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_RET_hnf};
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
static Symbol Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#enumFromTo#Prelude.Enum", .hnf = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USdef_HTpred_HTPrelude_DOEnum_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#pred#Prelude.Enum", .hnf = &Prelude__USdef_HTpred_HTPrelude_DOEnum_hnf, .hnf_RET = &Prelude__USdef_HTpred_HTPrelude_DOEnum_RET_hnf};
static Symbol Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#pred#Prelude.Enum#A3", .hnf = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_hnf, .hnf_RET = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_RET_hnf};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker", .hnf = &Prelude_enumFromThenTo_USbuild_HTworker_hnf, .hnf_RET = &Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA5_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A5", .hnf = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5_hnf, .hnf_RET = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5_RET_hnf};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA4_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A4", .hnf = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4_hnf, .hnf_RET = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4_RET_hnf};
static Symbol Prelude_enumFromTo_USbuild_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build#worker", .hnf = &Prelude_enumFromTo_USbuild_HTworker_hnf, .hnf_RET = &Prelude_enumFromTo_USbuild_HTworker_RET_hnf};
static Symbol Prelude_enumFromTo_USbuild_HTworker_HTA6_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build#worker#A6", .hnf = &Prelude_enumFromTo_USbuild_HTworker_HTA6_hnf, .hnf_RET = &Prelude_enumFromTo_USbuild_HTworker_HTA6_RET_hnf};
static Symbol Prelude_iterate_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "iterate_build", .hnf = &Prelude_iterate_USbuild_hnf, .hnf_RET = &Prelude_iterate_USbuild_RET_hnf};
static Symbol Prelude_span_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "span", .hnf = &Prelude_span_hnf, .hnf_RET = &Prelude_span_RET_hnf};
static Symbol Prelude_splitAt_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt#worker", .hnf = &Prelude_splitAt_HTworker_hnf, .hnf_RET = &Prelude_splitAt_HTworker_RET_hnf};
static Symbol Prelude_take_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take#worker", .hnf = &Prelude_take_HTworker_hnf, .hnf_RET = &Prelude_take_HTworker_RET_hnf};
static Symbol Prelude_take_HTworker_HTA7_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "take#worker#A7", .hnf = &Prelude_take_HTworker_HTA7_hnf, .hnf_RET = &Prelude_take_HTworker_HTA7_RET_hnf};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#compare#Prelude.Ord#[]", .hnf = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]#A8", .hnf = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_hnf, .hnf_RET = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_RET_hnf};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#==#Prelude.Eq#[]", .hnf = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf};
static Symbol Prelude_dropWhile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "dropWhile", .hnf = &Prelude_dropWhile_hnf, .hnf_RET = &Prelude_dropWhile_RET_hnf};
static Symbol Prelude_takeWhile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "takeWhile", .hnf = &Prelude_takeWhile_hnf, .hnf_RET = &Prelude_takeWhile_RET_hnf};
static Symbol Prelude_drop_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop#worker", .hnf = &Prelude_drop_HTworker_hnf, .hnf_RET = &Prelude_drop_HTworker_RET_hnf};
static Symbol Prelude_foldr1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldr1", .hnf = &Prelude_foldr1_hnf, .hnf_RET = &Prelude_foldr1_RET_hnf};
static Symbol Prelude_foldl_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldl", .hnf = &Prelude_foldl_hnf, .hnf_RET = &Prelude_foldl_RET_hnf};
static Symbol Prelude__EX_EX_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "!!", .hnf = &Prelude__EX_EX_hnf, .hnf_RET = &Prelude__EX_EX_RET_hnf};
static Symbol Prelude__EX_EX_HTA9_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "!!#A9", .hnf = &Prelude__EX_EX_HTA9_hnf, .hnf_RET = &Prelude__EX_EX_HTA9_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Char#P4", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char#A10", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char#P5", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P6", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering#P8", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering#P7", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromThenTo#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFromTo#Prelude.Enum#Prelude.Bool#P9", .hnf = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9_RET_hnf};
static Symbol Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#enumFromThen#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool#P11", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_RET_hnf};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool#P10", .hnf = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10_hnf, .hnf_RET = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10_RET_hnf};
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
static Symbol Prelude_length_USfold__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "length_fold@[]", .hnf = Prelude_length_USfold__hnf, .hnf_RET = NULL};
static Symbol Prelude_length_USfold__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "length_fold@[0]", .hnf = Prelude_length_USfold__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lookup_USfold__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lookup_fold@[]", .hnf = Prelude_lookup_USfold__hnf, .hnf_RET = NULL};
static Symbol Prelude_lookup_USfold__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lookup_fold@[0]", .hnf = Prelude_lookup_USfold__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lookup_USfold__0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lookup_fold@[0,1]", .hnf = Prelude_lookup_USfold__0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_repeat_USbuild__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "repeat_build@[]", .hnf = Prelude_repeat_USbuild__hnf, .hnf_RET = NULL};
static Symbol Prelude_filter_USmkc__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "filter_mkc@[]", .hnf = Prelude_filter_USmkc__hnf, .hnf_RET = NULL};
static Symbol Prelude_filter_USmkc__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "filter_mkc@[1]", .hnf = Prelude_filter_USmkc__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_break_HTP0__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "break#P0@[]", .hnf = Prelude_break_HTP0__hnf, .hnf_RET = NULL};
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
static Symbol Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#succ#Prelude.Enum#A0@[0]", .hnf = Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_maxBound__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "maxBound@[]", .hnf = Prelude_maxBound__hnf, .hnf_RET = NULL};
static Symbol Prelude_maxBound__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "maxBound@[0]", .hnf = Prelude_maxBound__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_minBound__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "minBound@[]", .hnf = Prelude_minBound__hnf, .hnf_RET = NULL};
static Symbol Prelude_minBound__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "minBound@[0]", .hnf = Prelude_minBound__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldl1__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldl1@[]", .hnf = Prelude_foldl1__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "boundedEnumFromThen@[]", .hnf = Prelude_boundedEnumFromThen__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "boundedEnumFromThen@[0]", .hnf = Prelude_boundedEnumFromThen__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTA2__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "boundedEnumFromThen#A2@[]", .hnf = Prelude_boundedEnumFromThen_HTA2__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTA2__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "boundedEnumFromThen#A2@[0]", .hnf = Prelude_boundedEnumFromThen_HTA2__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTA1__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "boundedEnumFromThen#A1@[]", .hnf = Prelude_boundedEnumFromThen_HTA1__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTA1__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "boundedEnumFromThen#A1@[0]", .hnf = Prelude_boundedEnumFromThen_HTA1__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP3__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P3@[]", .hnf = Prelude_boundedEnumFromThen_HTP3__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP3__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P3@[0]", .hnf = Prelude_boundedEnumFromThen_HTP3__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP3__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P3@[0,0]", .hnf = Prelude_boundedEnumFromThen_HTP3__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP2__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P2@[]", .hnf = Prelude_boundedEnumFromThen_HTP2__hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP2__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P2@[0]", .hnf = Prelude_boundedEnumFromThen_HTP2__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_boundedEnumFromThen_HTP2__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "boundedEnumFromThen#P2@[0,0]", .hnf = Prelude_boundedEnumFromThen_HTP2__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#pred#Prelude.Enum#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Int@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#succ#Prelude.Enum#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[0]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[0,0]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[0,0,0,1]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[0,0,0,1,0]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[0,0,0,1,0,0]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Char@[0,0,0,1,0,0,0]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[0]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[0,0]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[0,0,0,1]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[0,0,0,1,0]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[0,0,0,1,0,0]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Char@[0,0,0,1,0,0,0]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Char@[]", .hnf = Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Char@[0]", .hnf = Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Char@[]", .hnf = Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Char@[0]", .hnf = Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering@[0]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering@[0,0,1]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering@[0,0,1,0]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering@[0,0,1,0,0,1]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#toEnum#Prelude.Enum#Prelude.Ordering@[0,0,1,0,0,1,0]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromEnum#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#toEnum#Prelude.Enum#Prelude.Bool@[0]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#toEnum#Prelude.Enum#Prelude.Bool@[0,0,1]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#toEnum#Prelude.Enum#Prelude.Bool@[0,0,1,0]", .hnf = Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#pred#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#succ#Prelude.Enum#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#maxBound#Prelude.Bounded#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#minBound#Prelude.Bounded#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#pred#Prelude.Enum#A3@[]", .hnf = Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#pred#Prelude.Enum#A3@[0]", .hnf = Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker@[]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "enumFromThenTo_build#worker@[0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker@[0,0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker@[0,0,0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThenTo_build#worker@[0,0,0,0,0,1]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker@[0,0,1]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "enumFromThenTo_build#worker@[0,0,1,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromThenTo_build#worker@[0,0,1,0,0,1]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA5__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A5@[]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA5__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A5@[0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A5@[0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A5@[0,0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A5@[0,0,0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA4__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A4@[]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA4__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A4@[0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A4@[0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A4@[0,0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromThenTo_build#worker#A4@[0,0,0,0]", .hnf = Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build#worker@[]", .hnf = Prelude_enumFromTo_USbuild_HTworker__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromTo_build#worker@[0]", .hnf = Prelude_enumFromTo_USbuild_HTworker__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "enumFromTo_build#worker@[0,0,1]", .hnf = Prelude_enumFromTo_USbuild_HTworker__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker_HTA6__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build#worker#A6@[]", .hnf = Prelude_enumFromTo_USbuild_HTworker_HTA6__hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker_HTA6__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "enumFromTo_build#worker#A6@[0]", .hnf = Prelude_enumFromTo_USbuild_HTworker_HTA6__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build#worker#A6@[0,0]", .hnf = Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "enumFromTo_build#worker#A6@[0,0,0]", .hnf = Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_span__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "span@[]", .hnf = Prelude_span__hnf, .hnf_RET = NULL};
static Symbol Prelude_span__1_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "span@[1]", .hnf = Prelude_span__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_span__1_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "span@[1,0]", .hnf = Prelude_span__1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt#worker@[]", .hnf = Prelude_splitAt_HTworker__hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "splitAt#worker@[0]", .hnf = Prelude_splitAt_HTworker__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt#worker@[0,0,1]", .hnf = Prelude_splitAt_HTworker__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__0_0_1_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "splitAt#worker@[0,0,1,1]", .hnf = Prelude_splitAt_HTworker__0_0_1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__0_0_1_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "splitAt#worker@[0,0,1,1,0]", .hnf = Prelude_splitAt_HTworker__0_0_1_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__0_0_1_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "splitAt#worker@[0,0,1,1,0,0]", .hnf = Prelude_splitAt_HTworker__0_0_1_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitAt_HTworker__0_0_1_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitAt#worker@[0,0,1,1,0,0,0]", .hnf = Prelude_splitAt_HTworker__0_0_1_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_take_HTworker__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take#worker@[]", .hnf = Prelude_take_HTworker__hnf, .hnf_RET = NULL};
static Symbol Prelude_take_HTworker__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "take#worker@[0]", .hnf = Prelude_take_HTworker__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_take_HTworker__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take#worker@[0,0,1]", .hnf = Prelude_take_HTworker__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_take_HTworker__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "take#worker@[0,0,1,0]", .hnf = Prelude_take_HTworker__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_take_HTworker_HTA7__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "take#worker#A7@[]", .hnf = Prelude_take_HTworker_HTA7__hnf, .hnf_RET = NULL};
static Symbol Prelude_take_HTworker_HTA7__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "take#worker#A7@[0]", .hnf = Prelude_take_HTworker_HTA7__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#compare#Prelude.Ord#[]@[]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]@[0]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#compare#Prelude.Ord#[]@[1]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "_impl#compare#Prelude.Ord#[]@[1,1]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]#A8@[]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#compare#Prelude.Ord#[]#A8@[0]", .hnf = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#==#Prelude.Eq#[]@[]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#==#Prelude.Eq#[]@[0]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#==#Prelude.Eq#[]@[1]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#==#Prelude.Eq#[]@[1,1]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#==#Prelude.Eq#[]@[1,1,1]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_dropWhile__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "dropWhile@[]", .hnf = Prelude_dropWhile__hnf, .hnf_RET = NULL};
static Symbol Prelude_dropWhile__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "dropWhile@[0]", .hnf = Prelude_dropWhile__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_dropWhile__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "dropWhile@[1]", .hnf = Prelude_dropWhile__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_dropWhile__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "dropWhile@[1,1]", .hnf = Prelude_dropWhile__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_takeWhile__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "takeWhile@[]", .hnf = Prelude_takeWhile__hnf, .hnf_RET = NULL};
static Symbol Prelude_takeWhile__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "takeWhile@[0]", .hnf = Prelude_takeWhile__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_takeWhile__1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "takeWhile@[1]", .hnf = Prelude_takeWhile__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop#worker@[]", .hnf = Prelude_drop_HTworker__hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "drop#worker@[0]", .hnf = Prelude_drop_HTworker__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "drop#worker@[0,0,0]", .hnf = Prelude_drop_HTworker__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop#worker@[0,0,1]", .hnf = Prelude_drop_HTworker__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "drop#worker@[0,0,1,0]", .hnf = Prelude_drop_HTworker__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_0_1_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop#worker@[0,0,1,1]", .hnf = Prelude_drop_HTworker__0_0_1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_0_1_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "drop#worker@[0,0,1,1,0]", .hnf = Prelude_drop_HTworker__0_0_1_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_drop_HTworker__0_0_1_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "drop#worker@[0,0,1,1,0,0]", .hnf = Prelude_drop_HTworker__0_0_1_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr1__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "foldr1@[]", .hnf = Prelude_foldr1__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr1__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldr1@[1]", .hnf = Prelude_foldr1__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr1__1_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "foldr1@[1,0]", .hnf = Prelude_foldr1__1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_foldl__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldl@[]", .hnf = Prelude_foldl__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldl__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "foldl@[0]", .hnf = Prelude_foldl__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "!!@[]", .hnf = Prelude__EX_EX__hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "!!@[1]", .hnf = Prelude__EX_EX__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__1_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "!!@[1,0]", .hnf = Prelude__EX_EX__1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "!!@[1,0,0,0]", .hnf = Prelude__EX_EX__1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__1_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "!!@[1,0,0,1]", .hnf = Prelude__EX_EX__1_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX__1_0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "!!@[1,0,0,1,0]", .hnf = Prelude__EX_EX__1_0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX_HTA9__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "!!#A9@[]", .hnf = Prelude__EX_EX_HTA9__hnf, .hnf_RET = NULL};
static Symbol Prelude__EX_EX_HTA9__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "!!#A9@[0]", .hnf = Prelude__EX_EX_HTA9__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Char#A10@[]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering#P8@[]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Ordering#P8@[0]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool#P11@[]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#enumFrom#Prelude.Enum#Prelude.Bool#P11@[0]", .hnf = Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__0_hnf, .hnf_RET = NULL};

// enumFromThenTo_build
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_USbuild(field root, field v1, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
}

// enumFromTo_build
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo_USbuild(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// splitAt
__attribute__((always_inline)) 
static inline void set_Prelude_splitAt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_splitAt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// take
__attribute__((always_inline)) 
static inline void set_Prelude_take(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_take_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// drop
__attribute__((always_inline)) 
static inline void set_Prelude_drop(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_drop_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// default for minBound in Bounded
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTminBound_HTPrelude_DOBounded(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTminBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// default for maxBound in Bounded
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// default for toEnum in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTtoEnum_HTPrelude_DOEnum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for fromEnum in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTfromEnum_HTPrelude_DOEnum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// succ
__attribute__((always_inline)) 
static inline void set_Prelude_succ(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_succ_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// pred
__attribute__((always_inline)) 
static inline void set_Prelude_pred(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_pred_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFrom
__attribute__((always_inline)) 
static inline void set_Prelude_enumFrom(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_enumFrom_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThen
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThen(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_enumFromThen_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromTo
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThenTo
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// null_fold
__attribute__((always_inline)) 
static inline void set_Prelude_null_USfold(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_null_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// null
__attribute__((always_inline)) 
static inline void set_Prelude_null(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_null_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// length_fold
__attribute__((always_inline)) 
static inline void set_Prelude_length_USfold(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_length_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// length
__attribute__((always_inline)) 
static inline void set_Prelude_length(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_length_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThenTo_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_US(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// enumFromTo_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo_US(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// iterate
__attribute__((always_inline)) 
static inline void set_Prelude_iterate(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_iterate_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// enumFromThen_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThen_US(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_enumFromThen_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// enumFrom_
__attribute__((always_inline)) 
static inline void set_Prelude_enumFrom_US(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_enumFrom_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lookup_fold
__attribute__((always_inline)) 
static inline void set_Prelude_lookup_USfold(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lookup_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// lookup
__attribute__((always_inline)) 
static inline void set_Prelude_lookup(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lookup_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// repeat_build
__attribute__((always_inline)) 
static inline void set_Prelude_repeat_USbuild(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_repeat_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// repeat
__attribute__((always_inline)) 
static inline void set_Prelude_repeat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_repeat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// concat_mkc
__attribute__((always_inline)) 
static inline void set_Prelude_concat_USmkc(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_concat_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// concat
__attribute__((always_inline)) 
static inline void set_Prelude_concat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_concat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// append_build
__attribute__((always_inline)) 
static inline void set_Prelude_append_USbuild(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_append_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// ++
__attribute__((always_inline)) 
static inline void set_Prelude__PL_PL(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__PL_PL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// filter_mkc
__attribute__((always_inline)) 
static inline void set_Prelude_filter_USmkc(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_filter_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// filter
__attribute__((always_inline)) 
static inline void set_Prelude_filter(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_filter_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// map_mkc
__attribute__((always_inline)) 
static inline void set_Prelude_map_USmkc(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_map_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// map
__attribute__((always_inline)) 
static inline void set_Prelude_map(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_map_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// concatMap
__attribute__((always_inline)) 
static inline void set_Prelude_concatMap(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_concatMap_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// break
__attribute__((always_inline)) 
static inline void set_Prelude_break(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_break_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// break#P0
__attribute__((always_inline)) 
static inline void set_Prelude_break_HTP0(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_break_HTP0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// replicate
__attribute__((always_inline)) 
static inline void set_Prelude_replicate(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_replicate_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of > in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of < in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of >= in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of <= in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of max in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of min in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of /= in Eq for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// instance of Eq for []
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOEq_HT_LB_RB(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// fromEnum
__attribute__((always_inline)) 
static inline void set_Prelude_fromEnum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_fromEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// toEnum
__attribute__((always_inline)) 
static inline void set_Prelude_toEnum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_toEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTsucc_HTPrelude_DOEnum(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// maxBound
__attribute__((always_inline)) 
static inline void set_Prelude_maxBound(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_maxBound_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// minBound
__attribute__((always_inline)) 
static inline void set_Prelude_minBound(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_minBound_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// or
__attribute__((always_inline)) 
static inline void set_Prelude_or(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_or_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// any
__attribute__((always_inline)) 
static inline void set_Prelude_any(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_any_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// elem
__attribute__((always_inline)) 
static inline void set_Prelude_elem(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_elem_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// and
__attribute__((always_inline)) 
static inline void set_Prelude_and(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_and_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// all
__attribute__((always_inline)) 
static inline void set_Prelude_all(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_all_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// notElem
__attribute__((always_inline)) 
static inline void set_Prelude_notElem(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_notElem_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// anyOf
__attribute__((always_inline)) 
static inline void set_Prelude_anyOf(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_anyOf_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// reverse
__attribute__((always_inline)) 
static inline void set_Prelude_reverse(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_reverse_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// reverse#P1
__attribute__((always_inline)) 
static inline void set_Prelude_reverse_HTP1(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_reverse_HTP1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// foldl1
__attribute__((always_inline)) 
static inline void set_Prelude_foldl1(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_foldl1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromThenTo in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// boundedEnumFromThen
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// boundedEnumFromThen#A2
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen_HTA2(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// boundedEnumFromThen#A1
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen_HTA1(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// boundedEnumFromThen#P3
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen_HTP3(field root, field v1, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
}

// boundedEnumFromThen#P2
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFromThen_HTP2(field root, field v1, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
}

// implementation of enumFromTo in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// boundedEnumFrom
__attribute__((always_inline)) 
static inline void set_Prelude_boundedEnumFrom(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_boundedEnumFrom_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromThen in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// default for enumFromThen in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFrom in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of fromEnum in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
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
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of maxBound in Bounded for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of minBound in Bounded for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
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
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of maxBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of minBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
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
static inline void set_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of toEnum in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of pred in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of succ in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of maxBound in Bounded for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of minBound in Bounded for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
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
static inline void set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// default for enumFromTo in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
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
static inline void set_Prelude__USdef_HTpred_HTPrelude_DOEnum(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// default for pred in Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// enumFromThenTo_build#worker
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_USbuild_HTworker(field root, field v1, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
}

// enumFromThenTo_build#worker#A5
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_USbuild_HTworker_HTA5(field root, field v1, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
}

// enumFromThenTo_build#worker#A4
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromThenTo_USbuild_HTworker_HTA4(field root, field v1, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
}

// enumFromTo_build#worker
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo_USbuild_HTworker(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// enumFromTo_build#worker#A6
__attribute__((always_inline)) 
static inline void set_Prelude_enumFromTo_USbuild_HTworker_HTA6(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_HTA6_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// iterate_build
__attribute__((always_inline)) 
static inline void set_Prelude_iterate_USbuild(field root, field v1, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_iterate_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
}

// span
__attribute__((always_inline)) 
static inline void set_Prelude_span(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_span_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// splitAt#worker
__attribute__((always_inline)) 
static inline void set_Prelude_splitAt_HTworker(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_splitAt_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// take#worker
__attribute__((always_inline)) 
static inline void set_Prelude_take_HTworker(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_take_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// take#worker#A7
__attribute__((always_inline)) 
static inline void set_Prelude_take_HTworker_HTA7(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_take_HTworker_HTA7_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of == in Eq for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// dropWhile
__attribute__((always_inline)) 
static inline void set_Prelude_dropWhile(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_dropWhile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// takeWhile
__attribute__((always_inline)) 
static inline void set_Prelude_takeWhile(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_takeWhile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// drop#worker
__attribute__((always_inline)) 
static inline void set_Prelude_drop_HTworker(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_drop_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// foldr1
__attribute__((always_inline)) 
static inline void set_Prelude_foldr1(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_foldr1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// foldl
__attribute__((always_inline)) 
static inline void set_Prelude_foldl(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_foldl_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// !!
__attribute__((always_inline)) 
static inline void set_Prelude__EX_EX(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__EX_EX_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// !!#A9
__attribute__((always_inline)) 
static inline void set_Prelude__EX_EX_HTA9(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__EX_EX_HTA9_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromThenTo in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromThen in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10(field root, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromThenTo in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromThen in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromThenTo in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFromThen in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// enumFromThenTo_build
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild(field v1, field v2, field v3, field v4, field v5, int missing)
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
  child_at(root, 4) = v1;
  return root;
}

// enumFromTo_build
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// splitAt
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// take
__attribute__((always_inline)) 
static inline field make_Prelude_take(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// drop
__attribute__((always_inline)) 
static inline field make_Prelude_drop(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for minBound in Bounded
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTminBound_HTPrelude_DOBounded(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTminBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for maxBound in Bounded
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for toEnum in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTtoEnum_HTPrelude_DOEnum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for fromEnum in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTfromEnum_HTPrelude_DOEnum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// succ
__attribute__((always_inline)) 
static inline field make_Prelude_succ(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_succ_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// pred
__attribute__((always_inline)) 
static inline field make_Prelude_pred(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pred_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFrom
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThen
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromTo
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThenTo
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// null_fold
__attribute__((always_inline)) 
static inline field make_Prelude_null_USfold(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_null_USfold_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// null
__attribute__((always_inline)) 
static inline field make_Prelude_null(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_null_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// length_fold
__attribute__((always_inline)) 
static inline field make_Prelude_length_USfold(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_length_USfold_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// length
__attribute__((always_inline)) 
static inline field make_Prelude_length(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_length_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThenTo_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_US(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// enumFromTo_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_US(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// iterate
__attribute__((always_inline)) 
static inline field make_Prelude_iterate(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_iterate_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// enumFromThen_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen_US(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// enumFrom_
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom_US(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// lookup_fold
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// lookup
__attribute__((always_inline)) 
static inline field make_Prelude_lookup(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// repeat_build
__attribute__((always_inline)) 
static inline field make_Prelude_repeat_USbuild(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_repeat_USbuild_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// repeat
__attribute__((always_inline)) 
static inline field make_Prelude_repeat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_repeat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// concat_mkc
__attribute__((always_inline)) 
static inline field make_Prelude_concat_USmkc(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concat_USmkc_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// concat
__attribute__((always_inline)) 
static inline field make_Prelude_concat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// append_build
__attribute__((always_inline)) 
static inline field make_Prelude_append_USbuild(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_append_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// ++
__attribute__((always_inline)) 
static inline field make_Prelude__PL_PL(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_PL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// filter_mkc
__attribute__((always_inline)) 
static inline field make_Prelude_filter_USmkc(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// filter
__attribute__((always_inline)) 
static inline field make_Prelude_filter(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// map_mkc
__attribute__((always_inline)) 
static inline field make_Prelude_map_USmkc(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_map_USmkc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// map
__attribute__((always_inline)) 
static inline field make_Prelude_map(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_map_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// concatMap
__attribute__((always_inline)) 
static inline field make_Prelude_concatMap(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_concatMap_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// break
__attribute__((always_inline)) 
static inline field make_Prelude_break(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_break_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// break#P0
__attribute__((always_inline)) 
static inline field make_Prelude_break_HTP0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_break_HTP0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// replicate
__attribute__((always_inline)) 
static inline field make_Prelude_replicate(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_replicate_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of > in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of < in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of >= in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of <= in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of max in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of min in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of /= in Eq for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// instance of Eq for []
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOEq_HT_LB_RB(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// instance of Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromEnum
__attribute__((always_inline)) 
static inline field make_Prelude_fromEnum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// toEnum
__attribute__((always_inline)) 
static inline field make_Prelude_toEnum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_toEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsucc_HTPrelude_DOEnum(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for succ in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// maxBound
__attribute__((always_inline)) 
static inline field make_Prelude_maxBound(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maxBound_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// minBound
__attribute__((always_inline)) 
static inline field make_Prelude_minBound(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_minBound_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// or
__attribute__((always_inline)) 
static inline field make_Prelude_or(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_or_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// any
__attribute__((always_inline)) 
static inline field make_Prelude_any(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_any_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// elem
__attribute__((always_inline)) 
static inline field make_Prelude_elem(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_elem_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// and
__attribute__((always_inline)) 
static inline field make_Prelude_and(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_and_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// all
__attribute__((always_inline)) 
static inline field make_Prelude_all(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_all_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// notElem
__attribute__((always_inline)) 
static inline field make_Prelude_notElem(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_notElem_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// anyOf
__attribute__((always_inline)) 
static inline field make_Prelude_anyOf(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_anyOf_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// reverse
__attribute__((always_inline)) 
static inline field make_Prelude_reverse(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_reverse_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// reverse#P1
__attribute__((always_inline)) 
static inline field make_Prelude_reverse_HTP1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_reverse_HTP1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// foldl1
__attribute__((always_inline)) 
static inline field make_Prelude_foldl1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFromThenTo in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// boundedEnumFromThen
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// boundedEnumFromThen#A2
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTA2(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFromThen#A1
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTA1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFromThen#P3
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP3(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// boundedEnumFromThen#P2
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP2(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// implementation of enumFromTo in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFrom
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFrom(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFrom_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromThen in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for enumFromThen in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFrom in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for enumFrom in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of fromEnum in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
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
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of maxBound in Bounded for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of minBound in Bounded for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
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
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of maxBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of minBound in Bounded for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
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
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of maxBound in Bounded for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of minBound in Bounded for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
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
static inline field make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// default for enumFromTo in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
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
static inline field make_Prelude__USdef_HTpred_HTPrelude_DOEnum(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for pred in Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThenTo_build#worker
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker(field v1, field v2, field v3, field v4, field v5, int missing)
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
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A5
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA5(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A4
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA4(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromTo_build#worker
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// enumFromTo_build#worker#A6
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker_HTA6(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_HTA6_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// iterate_build
__attribute__((always_inline)) 
static inline field make_Prelude_iterate_USbuild(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_iterate_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// span
__attribute__((always_inline)) 
static inline field make_Prelude_span(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// splitAt#worker
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// take#worker
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// take#worker#A7
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker_HTA7(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker_HTA7_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of compare in Ord for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of == in Eq for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// dropWhile
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// takeWhile
__attribute__((always_inline)) 
static inline field make_Prelude_takeWhile(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_takeWhile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// drop#worker
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// foldr1
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// foldl
__attribute__((always_inline)) 
static inline field make_Prelude_foldl(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// !!
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// !!#A9
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX_HTA9(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX_HTA9_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of enumFromThenTo in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFromTo in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP4_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromThen in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of enumFrom in Enum for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP5_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromThenTo in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFromTo in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP6_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromThen in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFrom in Enum for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP7_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromThenTo in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFromTo in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP9_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFromThen in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFrom in Enum for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP10_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// enumFromThenTo_build @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_(field v1, field v2, field v3, field v4, field v5, int missing)
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
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild__0(field v1, field v2, field v3, field v4, field v5, int missing)
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
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild__0_0(field v1, field v2, field v3, field v4, field v5, int missing)
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
  child_at(root, 4) = v1;
  return root;
}

// enumFromTo_build @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// enumFromTo_build @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild__0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// splitAt @ []
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// take @ []
__attribute__((always_inline)) 
static inline field make_Prelude_take_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// drop @ []
__attribute__((always_inline)) 
static inline field make_Prelude_drop_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for minBound in Bounded @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTminBound_HTPrelude_DOBounded__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for maxBound in Bounded @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTmaxBound_HTPrelude_DOBounded__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// succ @ []
__attribute__((always_inline)) 
static inline field make_Prelude_succ_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_succ__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// succ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_succ__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_succ__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// pred @ []
__attribute__((always_inline)) 
static inline field make_Prelude_pred_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pred__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// pred @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_pred__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pred__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFrom @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFrom @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFrom__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFrom__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThen @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThen @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThen__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThen__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromTo @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromTo @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThenTo @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThenTo @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// length_fold @ []
__attribute__((always_inline)) 
static inline field make_Prelude_length_USfold_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_length_USfold__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// length_fold @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_length_USfold__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_length_USfold__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// lookup_fold @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold_(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// lookup_fold @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// lookup_fold @ [0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lookup_USfold__0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lookup_USfold__0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// repeat_build @ []
__attribute__((always_inline)) 
static inline field make_Prelude_repeat_USbuild_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_repeat_USbuild__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// filter_mkc @ []
__attribute__((always_inline)) 
static inline field make_Prelude_filter_USmkc_(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_USmkc__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// filter_mkc @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_filter_USmkc__1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_filter_USmkc__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// break#P0 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_break_HTP0_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_break_HTP0__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// replicate @ []
__attribute__((always_inline)) 
static inline field make_Prelude_replicate_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_replicate__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of > in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of < in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of >= in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of <= in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of max in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of max in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of max in Ord for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of max in Ord for [] @ [2]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of min in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of min in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of min in Ord for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of min in Ord for [] @ [2]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of /= in Eq for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromEnum @ []
__attribute__((always_inline)) 
static inline field make_Prelude_fromEnum_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromEnum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromEnum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_fromEnum__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromEnum__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// toEnum @ []
__attribute__((always_inline)) 
static inline field make_Prelude_toEnum_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_toEnum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// toEnum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_toEnum__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_toEnum__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for succ in Enum @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for succ in Enum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// maxBound @ []
__attribute__((always_inline)) 
static inline field make_Prelude_maxBound_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maxBound__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// maxBound @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_maxBound__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maxBound__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// minBound @ []
__attribute__((always_inline)) 
static inline field make_Prelude_minBound_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_minBound__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// minBound @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_minBound__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_minBound__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// foldl1 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldl1_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFromThen @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// boundedEnumFromThen @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen__0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// boundedEnumFromThen#A2 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTA2_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA2__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFromThen#A2 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTA2__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA2__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFromThen#A1 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTA1_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFromThen#A1 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTA1__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTA1__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// boundedEnumFromThen#P3 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP3_(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP3__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// boundedEnumFromThen#P3 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP3__0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP3__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// boundedEnumFromThen#P3 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP3__0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP3__0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// boundedEnumFromThen#P2 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP2_(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP2__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// boundedEnumFromThen#P2 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP2__0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP2__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// boundedEnumFromThen#P2 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_boundedEnumFromThen_HTP2__0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_boundedEnumFromThen_HTP2__0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// implementation of fromEnum in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of succ in Enum for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of fromEnum in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Char @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of pred in Enum for Char @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of pred in Enum for Char @ [0,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Char @ [0,0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of pred in Enum for Char @ [0,0,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of pred in Enum for Char @ [0,0,0,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of succ in Enum for Char @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of succ in Enum for Char @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of succ in Enum for Char @ [0,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Char @ [0,0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Char @ [0,0,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of succ in Enum for Char @ [0,0,0,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__0_0_0_1_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of maxBound in Bounded for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of maxBound in Bounded for Char @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of minBound in Bounded for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of minBound in Bounded for Char @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of fromEnum in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Ordering @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of toEnum in Enum for Ordering @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Ordering @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of toEnum in Enum for Ordering @ [0,0,1,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Ordering @ [0,0,1,0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__0_0_1_0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of pred in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of maxBound in Bounded for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of minBound in Bounded for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of fromEnum in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Bool @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of toEnum in Enum for Bool @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of toEnum in Enum for Bool @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of pred in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of succ in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of maxBound in Bounded for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of minBound in Bounded for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for pred in Enum @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for pred in Enum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA3__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// enumFromThenTo_build#worker @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0(field v1, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = v1;
  return root;
}

// enumFromThenTo_build#worker @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker @ [0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker @ [0,0,0,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_0_0_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThenTo_build#worker @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0_0_1(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0(field v1, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = v1;
  return root;
}

// enumFromThenTo_build#worker @ [0,0,1,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker__0_0_1_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromThenTo_build#worker#A5 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA5_(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A5 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A5 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A5 @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A5 @ [0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA5__0_0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A4 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA4_(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A4 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A4 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A4 @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromThenTo_build#worker#A4 @ [0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromThenTo_USbuild_HTworker_HTA4__0_0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromTo_build#worker @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker_(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// enumFromTo_build#worker @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker__0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromTo_build#worker @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker__0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// enumFromTo_build#worker#A6 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker_HTA6_(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_HTA6__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// enumFromTo_build#worker#A6 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker_HTA6__0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_HTA6__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// enumFromTo_build#worker#A6 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// enumFromTo_build#worker#A6 @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_enumFromTo_USbuild_HTworker_HTA6__0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// span @ []
__attribute__((always_inline)) 
static inline field make_Prelude_span_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// span @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_span__1(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// span @ [1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_span__1_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_span__1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// splitAt#worker @ []
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// splitAt#worker @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// splitAt#worker @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__0_0_1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// splitAt#worker @ [0,0,1,1]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__0_0_1_1(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__0_0_1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// splitAt#worker @ [0,0,1,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__0_0_1_1_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__0_0_1_1_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// splitAt#worker @ [0,0,1,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__0_0_1_1_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__0_0_1_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// splitAt#worker @ [0,0,1,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_splitAt_HTworker__0_0_1_1_0_0_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitAt_HTworker__0_0_1_1_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// take#worker @ []
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// take#worker @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// take#worker @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker__0_0_1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// take#worker @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker__0_0_1_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker__0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// take#worker#A7 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker_HTA7_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker_HTA7__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// take#worker#A7 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_take_HTworker_HTA7__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_take_HTworker_HTA7__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of compare in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of compare in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of compare in Ord for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// implementation of compare in Ord for [] @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(field v1, field v2, field v3, field v4, field v5, field v6, int missing)
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
  child_at(root, 5) = v1;
  return root;
}

// implementation of compare in Ord for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of compare in Ord for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA8__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of == in Eq for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of == in Eq for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of == in Eq for [] @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// implementation of == in Eq for [] @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// implementation of == in Eq for [] @ [1,1,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// dropWhile @ []
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// dropWhile @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// dropWhile @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile__1(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// dropWhile @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude_dropWhile__1_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_dropWhile__1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// takeWhile @ []
__attribute__((always_inline)) 
static inline field make_Prelude_takeWhile_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_takeWhile__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// takeWhile @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_takeWhile__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_takeWhile__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// takeWhile @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_takeWhile__1(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_takeWhile__1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// drop#worker @ []
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// drop#worker @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// drop#worker @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// drop#worker @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0_0_1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// drop#worker @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0_0_1_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// drop#worker @ [0,0,1,1]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0_0_1_1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_0_1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// drop#worker @ [0,0,1,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0_0_1_1_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_0_1_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// drop#worker @ [0,0,1,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_drop_HTworker__0_0_1_1_0_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_drop_HTworker__0_0_1_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// foldr1 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// foldr1 @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1__1(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// foldr1 @ [1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_foldr1__1_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr1__1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// foldl @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldl_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// foldl @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_foldl__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldl__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// !! @ []
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// !! @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX__1(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// !! @ [1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX__1_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__1_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// !! @ [1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX__1_0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__1_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// !! @ [1,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX__1_0_0_1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__1_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// !! @ [1,0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX__1_0_0_1_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX__1_0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// !!#A9 @ []
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX_HTA9_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX_HTA9__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// !!#A9 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__EX_EX_HTA9__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EX_EX_HTA9__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of enumFrom in Enum for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTA10__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of enumFrom in Enum for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFrom in Enum for Ordering @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP8__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// implementation of enumFrom in Enum for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of enumFrom in Enum for Bool @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP11__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

#endif //PreludeList_H