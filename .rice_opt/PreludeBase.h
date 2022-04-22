#ifndef PreludeBase_H
#define PreludeBase_H

#include "runtime.h"

void Prelude_flip_hnf(field root);
void Prelude__DL_hnf(field root);
void Prelude_failed_hnf(field root);
void Prelude__AN_AN_hnf(field root);
void Prelude__OR_OR_hnf(field root);
void Prelude_not_hnf(field root);
void Prelude_otherwise_hnf(field root);
void Prelude_if_USthen_USelse_hnf(field root);
void Prelude_solve_hnf(field root);
void Prelude__AN_GT_hnf(field root);
void Prelude__EQ_CO_EQ_hnf(field root);
void Prelude_fst_hnf(field root);
void Prelude_snd_hnf(field root);
void Prelude_head_hnf(field root);
void Prelude_tail_hnf(field root);
void Prelude_success_hnf(field root);
void Prelude_catch_hnf(field root);
void Prelude__QU_hnf(field root);
void Prelude_unknown_hnf(field root);
void Prelude_PEVAL_hnf(field root);
void Prelude_letrec_hnf(field root);
void Prelude__EQ_CO_LT_EQ_hnf(field root);
void Prelude__EQ_CO_LT_LT_EQ_hnf(field root);
void Prelude__AN_hnf(field root);
void Prelude_eqChar_hnf(field root);
void Prelude_eqInt_hnf(field root);
void Prelude_eqFloat_hnf(field root);
void Prelude_ltEqChar_hnf(field root);
void Prelude_ltEqInt_hnf(field root);
void Prelude_ltEqFloat_hnf(field root);
void Prelude_ord_hnf(field root);
void Prelude_chr_hnf(field root);
void Prelude_cond_hnf(field root);
void Prelude_build_hnf(field root);
void Prelude_mk_USbuild_hnf(field root);
void Prelude_prim_USappendFile_hnf(field root);
void Prelude_prim_USwriteFile_hnf(field root);
void Prelude_prim_USreadFile_hnf(field root);
void Prelude_prim_USputChar_hnf(field root);
void Prelude_putChar_hnf(field root);
void Prelude_build_USfold_hnf(field root);
void Prelude_prim_USerror_hnf(field root);
void Prelude__DL_HT_HT_hnf(field root);
void Prelude_appendFile_hnf(field root);
void Prelude_writeFile_hnf(field root);
void Prelude_readFile_hnf(field root);
void Prelude_error_hnf(field root);
void Prelude__DL_EX_EX_hnf(field root);
void Prelude__DL_EX_hnf(field root);
void Prelude_ensureNotFree_hnf(field root);
void Prelude__DL_HT_hnf(field root);
void Prelude_ensureSpine_hnf(field root);
void Prelude_const_hnf(field root);
void Prelude_asTypeOf_hnf(field root);
void Prelude_seq_hnf(field root);
void Prelude_id_hnf(field root);
void Prelude_groundNormalForm_hnf(field root);
void Prelude_normalForm_hnf(field root);
void Prelude__DO_hnf(field root);
void Prelude_foldr_hnf(field root);
void Prelude_ensureSpine_DOensureList_DO20_hnf(field root);
void Prelude_until_hnf(field root);
Node* Prelude_flip_RET_hnf(Node* backup);
Node* Prelude__DL_RET_hnf(Node* backup);
Node* Prelude_failed_RET_hnf(Node* backup);
void Prelude__AN_AN__hnf(field root);
void Prelude__AN_AN__0_hnf(field root);
Node* Prelude__AN_AN_RET_hnf(Node* backup);
void Prelude__OR_OR__hnf(field root);
void Prelude__OR_OR__1_hnf(field root);
Node* Prelude__OR_OR_RET_hnf(Node* backup);
void Prelude_not__hnf(field root);
Node* Prelude_not_RET_hnf(Node* backup);
Node* Prelude_otherwise_RET_hnf(Node* backup);
void Prelude_if_USthen_USelse__hnf(field root);
void Prelude_if_USthen_USelse__0_hnf(field root);
void Prelude_if_USthen_USelse__1_hnf(field root);
Node* Prelude_if_USthen_USelse_RET_hnf(Node* backup);
void Prelude_solve__hnf(field root);
Node* Prelude_solve_RET_hnf(Node* backup);
void Prelude__AN_GT__hnf(field root);
void Prelude__AN_GT__0_hnf(field root);
Node* Prelude__AN_GT_RET_hnf(Node* backup);
Node* Prelude__EQ_CO_EQ_RET_hnf(Node* backup);
void Prelude_fst__hnf(field root);
void Prelude_fst__0_hnf(field root);
Node* Prelude_fst_RET_hnf(Node* backup);
void Prelude_snd__hnf(field root);
void Prelude_snd__0_hnf(field root);
Node* Prelude_snd_RET_hnf(Node* backup);
void Prelude_head__hnf(field root);
void Prelude_head__1_hnf(field root);
Node* Prelude_head_RET_hnf(Node* backup);
void Prelude_tail__hnf(field root);
void Prelude_tail__1_hnf(field root);
Node* Prelude_tail_RET_hnf(Node* backup);
Node* Prelude_success_RET_hnf(Node* backup);
Node* Prelude_catch_RET_hnf(Node* backup);
Node* Prelude__QU_RET_hnf(Node* backup);
void Prelude_unknown__hnf(field root);
Node* Prelude_unknown_RET_hnf(Node* backup);
void Prelude_PEVAL__hnf(field root);
Node* Prelude_PEVAL_RET_hnf(Node* backup);
Node* Prelude_letrec_RET_hnf(Node* backup);
Node* Prelude__EQ_CO_LT_EQ_RET_hnf(Node* backup);
Node* Prelude__EQ_CO_LT_LT_EQ_RET_hnf(Node* backup);
void Prelude__AN__hnf(field root);
void Prelude__AN__0_hnf(field root);
Node* Prelude__AN_RET_hnf(Node* backup);
void Prelude_eqChar__hnf(field root);
void Prelude_eqChar__0_hnf(field root);
Node* Prelude_eqChar_RET_hnf(Node* backup);
void Prelude_eqInt__hnf(field root);
void Prelude_eqInt__0_hnf(field root);
Node* Prelude_eqInt_RET_hnf(Node* backup);
void Prelude_eqFloat__hnf(field root);
void Prelude_eqFloat__0_hnf(field root);
Node* Prelude_eqFloat_RET_hnf(Node* backup);
void Prelude_ltEqChar__hnf(field root);
void Prelude_ltEqChar__0_hnf(field root);
Node* Prelude_ltEqChar_RET_hnf(Node* backup);
void Prelude_ltEqInt__hnf(field root);
void Prelude_ltEqInt__0_hnf(field root);
Node* Prelude_ltEqInt_RET_hnf(Node* backup);
void Prelude_ltEqFloat__hnf(field root);
void Prelude_ltEqFloat__0_hnf(field root);
Node* Prelude_ltEqFloat_RET_hnf(Node* backup);
void Prelude_ord__hnf(field root);
Node* Prelude_ord_RET_hnf(Node* backup);
void Prelude_chr__hnf(field root);
Node* Prelude_chr_RET_hnf(Node* backup);
void Prelude_cond__hnf(field root);
void Prelude_cond__0_hnf(field root);
Node* Prelude_cond_RET_hnf(Node* backup);
Node* Prelude_build_RET_hnf(Node* backup);
Node* Prelude_mk_USbuild_RET_hnf(Node* backup);
Node* Prelude_prim_USappendFile_RET_hnf(Node* backup);
Node* Prelude_prim_USwriteFile_RET_hnf(Node* backup);
Node* Prelude_prim_USreadFile_RET_hnf(Node* backup);
Node* Prelude_prim_USputChar_RET_hnf(Node* backup);
void Prelude_putChar__hnf(field root);
Node* Prelude_putChar_RET_hnf(Node* backup);
Node* Prelude_build_USfold_RET_hnf(Node* backup);
Node* Prelude_prim_USerror_RET_hnf(Node* backup);
Node* Prelude__DL_HT_HT_RET_hnf(Node* backup);
Node* Prelude_appendFile_RET_hnf(Node* backup);
Node* Prelude_writeFile_RET_hnf(Node* backup);
Node* Prelude_readFile_RET_hnf(Node* backup);
Node* Prelude_error_RET_hnf(Node* backup);
Node* Prelude__DL_EX_EX_RET_hnf(Node* backup);
Node* Prelude__DL_EX_RET_hnf(Node* backup);
Node* Prelude_ensureNotFree_RET_hnf(Node* backup);
Node* Prelude__DL_HT_RET_hnf(Node* backup);
Node* Prelude_ensureSpine_RET_hnf(Node* backup);
void Prelude_const__hnf(field root);
Node* Prelude_const_RET_hnf(Node* backup);
void Prelude_asTypeOf__hnf(field root);
Node* Prelude_asTypeOf_RET_hnf(Node* backup);
Node* Prelude_seq_RET_hnf(Node* backup);
void Prelude_id__hnf(field root);
Node* Prelude_id_RET_hnf(Node* backup);
Node* Prelude_groundNormalForm_RET_hnf(Node* backup);
Node* Prelude_normalForm_RET_hnf(Node* backup);
Node* Prelude__DO_RET_hnf(Node* backup);
void Prelude_foldr__hnf(field root);
void Prelude_foldr__0_hnf(field root);
Node* Prelude_foldr_RET_hnf(Node* backup);
void Prelude_ensureSpine_DOensureList_DO20__hnf(field root);
Node* Prelude_ensureSpine_DOensureList_DO20_RET_hnf(Node* backup);
void Prelude_until__hnf(field root);
void Prelude_until__0_hnf(field root);
Node* Prelude_until_RET_hnf(Node* backup);

#define Prelude__LP_RP_TAG 5

#define Prelude__LP_CM_RP_TAG 5

#define Prelude__LP_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5

#define Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG 5


#define Prelude_True_TAG 5
#define Prelude_False_TAG 6


#define Prelude_Right_TAG 5
#define Prelude_Left_TAG 6



#define Prelude_UserError_TAG 5
#define Prelude_NondetError_TAG 6
#define Prelude_IOError_TAG 7
#define Prelude_FailError_TAG 8


#define Prelude_Nothing_TAG 5
#define Prelude_Just_TAG 6

#define Prelude_LT_TAG 5
#define Prelude_GT_TAG 6
#define Prelude_EQ_TAG 7

#define Prelude__LB_RB_TAG 5
#define Prelude__CO_TAG 6

#define Prelude__USDict_HTBounded_TAG 5

#define Prelude__USDict_HTEnum_TAG 5

#define Prelude__USDict_HTEq_TAG 5

#define Prelude__USDict_HTFractional_TAG 5

#define Prelude__USDict_HTFunctor_TAG 5

#define Prelude__USDict_HTIntegral_TAG 5

#define Prelude__USDict_HTMonad_TAG 5

#define Prelude__USDict_HTNum_TAG 5

#define Prelude__USDict_HTOrd_TAG 5

#define Prelude__USDict_HTRead_TAG 5

#define Prelude__USDict_HTReal_TAG 5

#define Prelude__USDict_HTShow_TAG 5

static Symbol Prelude__LP_RP_symbol = {.tag = Prelude__LP_RP_TAG, .arity = 0, .name = "()", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_RP_symbol = {.tag = Prelude__LP_CM_RP_TAG, .arity = 2, .name = "(,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_RP_TAG, .arity = 3, .name = "(,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_RP_TAG, .arity = 4, .name = "(,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_RP_TAG, .arity = 5, .name = "(,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_RP_TAG, .arity = 6, .name = "(,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 7, .name = "(,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 8, .name = "(,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 9, .name = "(,,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 10, .name = "(,,,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 11, .name = "(,,,,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 12, .name = "(,,,,,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 13, .name = "(,,,,,,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 14, .name = "(,,,,,,,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol = {.tag = Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_TAG, .arity = 15, .name = "(,,,,,,,,,,,,,,)", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_True_symbol = {.tag = Prelude_True_TAG, .arity = 0, .name = "True", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_False_symbol = {.tag = Prelude_False_TAG, .arity = 0, .name = "False", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_Right_symbol = {.tag = Prelude_Right_TAG, .arity = 1, .name = "Right", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_Left_symbol = {.tag = Prelude_Left_TAG, .arity = 1, .name = "Left", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_UserError_symbol = {.tag = Prelude_UserError_TAG, .arity = 1, .name = "UserError", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_NondetError_symbol = {.tag = Prelude_NondetError_TAG, .arity = 1, .name = "NondetError", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_IOError_symbol = {.tag = Prelude_IOError_TAG, .arity = 1, .name = "IOError", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_FailError_symbol = {.tag = Prelude_FailError_TAG, .arity = 1, .name = "FailError", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_Nothing_symbol = {.tag = Prelude_Nothing_TAG, .arity = 0, .name = "Nothing", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_Just_symbol = {.tag = Prelude_Just_TAG, .arity = 1, .name = "Just", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_LT_symbol = {.tag = Prelude_LT_TAG, .arity = 0, .name = "LT", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_GT_symbol = {.tag = Prelude_GT_TAG, .arity = 0, .name = "GT", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_EQ_symbol = {.tag = Prelude_EQ_TAG, .arity = 0, .name = "EQ", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__LB_RB_symbol = {.tag = Prelude__LB_RB_TAG, .arity = 0, .name = "[]", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__CO_symbol = {.tag = Prelude__CO_TAG, .arity = 2, .name = ":", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTBounded_symbol = {.tag = Prelude__USDict_HTBounded_TAG, .arity = 2, .name = "_Dict#Bounded", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTEnum_symbol = {.tag = Prelude__USDict_HTEnum_TAG, .arity = 8, .name = "_Dict#Enum", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTEq_symbol = {.tag = Prelude__USDict_HTEq_TAG, .arity = 2, .name = "_Dict#Eq", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTFractional_symbol = {.tag = Prelude__USDict_HTFractional_TAG, .arity = 4, .name = "_Dict#Fractional", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTFunctor_symbol = {.tag = Prelude__USDict_HTFunctor_TAG, .arity = 1, .name = "_Dict#Functor", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTIntegral_symbol = {.tag = Prelude__USDict_HTIntegral_TAG, .arity = 7, .name = "_Dict#Integral", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTMonad_symbol = {.tag = Prelude__USDict_HTMonad_TAG, .arity = 4, .name = "_Dict#Monad", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTNum_symbol = {.tag = Prelude__USDict_HTNum_TAG, .arity = 7, .name = "_Dict#Num", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTOrd_symbol = {.tag = Prelude__USDict_HTOrd_TAG, .arity = 8, .name = "_Dict#Ord", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTRead_symbol = {.tag = Prelude__USDict_HTRead_TAG, .arity = 2, .name = "_Dict#Read", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTReal_symbol = {.tag = Prelude__USDict_HTReal_TAG, .arity = 2, .name = "_Dict#Real", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude__USDict_HTShow_symbol = {.tag = Prelude__USDict_HTShow_TAG, .arity = 3, .name = "_Dict#Show", .hnf = &CTR_hnf, .hnf_RET = &CTR_RET_hnf};
static Symbol Prelude_flip_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "flip", .hnf = &Prelude_flip_hnf, .hnf_RET = &Prelude_flip_RET_hnf};
static Symbol Prelude__DL_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "$", .hnf = &Prelude__DL_hnf, .hnf_RET = &Prelude__DL_RET_hnf};
static Symbol Prelude_failed_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "failed", .hnf = &Prelude_failed_hnf, .hnf_RET = &Prelude_failed_RET_hnf};
static Symbol Prelude__AN_AN_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "&&", .hnf = &Prelude__AN_AN_hnf, .hnf_RET = &Prelude__AN_AN_RET_hnf};
static Symbol Prelude__OR_OR_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "||", .hnf = &Prelude__OR_OR_hnf, .hnf_RET = &Prelude__OR_OR_RET_hnf};
static Symbol Prelude_not_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "not", .hnf = &Prelude_not_hnf, .hnf_RET = &Prelude_not_RET_hnf};
static Symbol Prelude_otherwise_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "otherwise", .hnf = &Prelude_otherwise_hnf, .hnf_RET = &Prelude_otherwise_RET_hnf};
static Symbol Prelude_if_USthen_USelse_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "if_then_else", .hnf = &Prelude_if_USthen_USelse_hnf, .hnf_RET = &Prelude_if_USthen_USelse_RET_hnf};
static Symbol Prelude_solve_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "solve", .hnf = &Prelude_solve_hnf, .hnf_RET = &Prelude_solve_RET_hnf};
static Symbol Prelude__AN_GT_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "&>", .hnf = &Prelude__AN_GT_hnf, .hnf_RET = &Prelude__AN_GT_RET_hnf};
static Symbol Prelude__EQ_CO_EQ_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "=:=", .hnf = &Prelude__EQ_CO_EQ_hnf, .hnf_RET = &Prelude__EQ_CO_EQ_RET_hnf};
static Symbol Prelude_fst_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fst", .hnf = &Prelude_fst_hnf, .hnf_RET = &Prelude_fst_RET_hnf};
static Symbol Prelude_snd_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "snd", .hnf = &Prelude_snd_hnf, .hnf_RET = &Prelude_snd_RET_hnf};
static Symbol Prelude_head_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "head", .hnf = &Prelude_head_hnf, .hnf_RET = &Prelude_head_RET_hnf};
static Symbol Prelude_tail_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "tail", .hnf = &Prelude_tail_hnf, .hnf_RET = &Prelude_tail_RET_hnf};
static Symbol Prelude_success_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "success", .hnf = &Prelude_success_hnf, .hnf_RET = &Prelude_success_RET_hnf};
static Symbol Prelude_catch_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "catch", .hnf = &Prelude_catch_hnf, .hnf_RET = &Prelude_catch_RET_hnf};
static Symbol Prelude__QU_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "?", .hnf = &Prelude__QU_hnf, .hnf_RET = &Prelude__QU_RET_hnf};
static Symbol Prelude_unknown_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "unknown", .hnf = &Prelude_unknown_hnf, .hnf_RET = &Prelude_unknown_RET_hnf};
static Symbol Prelude_PEVAL_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "PEVAL", .hnf = &Prelude_PEVAL_hnf, .hnf_RET = &Prelude_PEVAL_RET_hnf};
static Symbol Prelude_letrec_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "letrec", .hnf = &Prelude_letrec_hnf, .hnf_RET = &Prelude_letrec_RET_hnf};
static Symbol Prelude__EQ_CO_LT_EQ_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "=:<=", .hnf = &Prelude__EQ_CO_LT_EQ_hnf, .hnf_RET = &Prelude__EQ_CO_LT_EQ_RET_hnf};
static Symbol Prelude__EQ_CO_LT_LT_EQ_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "=:<<=", .hnf = &Prelude__EQ_CO_LT_LT_EQ_hnf, .hnf_RET = &Prelude__EQ_CO_LT_LT_EQ_RET_hnf};
static Symbol Prelude__AN_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "&", .hnf = &Prelude__AN_hnf, .hnf_RET = &Prelude__AN_RET_hnf};
static Symbol Prelude_eqChar_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqChar", .hnf = &Prelude_eqChar_hnf, .hnf_RET = &Prelude_eqChar_RET_hnf};
static Symbol Prelude_eqInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqInt", .hnf = &Prelude_eqInt_hnf, .hnf_RET = &Prelude_eqInt_RET_hnf};
static Symbol Prelude_eqFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqFloat", .hnf = &Prelude_eqFloat_hnf, .hnf_RET = &Prelude_eqFloat_RET_hnf};
static Symbol Prelude_ltEqChar_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqChar", .hnf = &Prelude_ltEqChar_hnf, .hnf_RET = &Prelude_ltEqChar_RET_hnf};
static Symbol Prelude_ltEqInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqInt", .hnf = &Prelude_ltEqInt_hnf, .hnf_RET = &Prelude_ltEqInt_RET_hnf};
static Symbol Prelude_ltEqFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqFloat", .hnf = &Prelude_ltEqFloat_hnf, .hnf_RET = &Prelude_ltEqFloat_RET_hnf};
static Symbol Prelude_ord_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ord", .hnf = &Prelude_ord_hnf, .hnf_RET = &Prelude_ord_RET_hnf};
static Symbol Prelude_chr_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "chr", .hnf = &Prelude_chr_hnf, .hnf_RET = &Prelude_chr_RET_hnf};
static Symbol Prelude_cond_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "cond", .hnf = &Prelude_cond_hnf, .hnf_RET = &Prelude_cond_RET_hnf};
static Symbol Prelude_build_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "build", .hnf = &Prelude_build_hnf, .hnf_RET = &Prelude_build_RET_hnf};
static Symbol Prelude_mk_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "mk_build", .hnf = &Prelude_mk_USbuild_hnf, .hnf_RET = &Prelude_mk_USbuild_RET_hnf};
static Symbol Prelude_prim_USappendFile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "prim_appendFile", .hnf = &Prelude_prim_USappendFile_hnf, .hnf_RET = &Prelude_prim_USappendFile_RET_hnf};
static Symbol Prelude_prim_USwriteFile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "prim_writeFile", .hnf = &Prelude_prim_USwriteFile_hnf, .hnf_RET = &Prelude_prim_USwriteFile_RET_hnf};
static Symbol Prelude_prim_USreadFile_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "prim_readFile", .hnf = &Prelude_prim_USreadFile_hnf, .hnf_RET = &Prelude_prim_USreadFile_RET_hnf};
static Symbol Prelude_prim_USputChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "prim_putChar", .hnf = &Prelude_prim_USputChar_hnf, .hnf_RET = &Prelude_prim_USputChar_RET_hnf};
static Symbol Prelude_putChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "putChar", .hnf = &Prelude_putChar_hnf, .hnf_RET = &Prelude_putChar_RET_hnf};
static Symbol Prelude_build_USfold_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "build_fold", .hnf = &Prelude_build_USfold_hnf, .hnf_RET = &Prelude_build_USfold_RET_hnf};
static Symbol Prelude_prim_USerror_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "prim_error", .hnf = &Prelude_prim_USerror_hnf, .hnf_RET = &Prelude_prim_USerror_RET_hnf};
static Symbol Prelude__DL_HT_HT_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "$##", .hnf = &Prelude__DL_HT_HT_hnf, .hnf_RET = &Prelude__DL_HT_HT_RET_hnf};
static Symbol Prelude_appendFile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "appendFile", .hnf = &Prelude_appendFile_hnf, .hnf_RET = &Prelude_appendFile_RET_hnf};
static Symbol Prelude_writeFile_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "writeFile", .hnf = &Prelude_writeFile_hnf, .hnf_RET = &Prelude_writeFile_RET_hnf};
static Symbol Prelude_readFile_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "readFile", .hnf = &Prelude_readFile_hnf, .hnf_RET = &Prelude_readFile_RET_hnf};
static Symbol Prelude_error_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "error", .hnf = &Prelude_error_hnf, .hnf_RET = &Prelude_error_RET_hnf};
static Symbol Prelude__DL_EX_EX_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "$!!", .hnf = &Prelude__DL_EX_EX_hnf, .hnf_RET = &Prelude__DL_EX_EX_RET_hnf};
static Symbol Prelude__DL_EX_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "$!", .hnf = &Prelude__DL_EX_hnf, .hnf_RET = &Prelude__DL_EX_RET_hnf};
static Symbol Prelude_ensureNotFree_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ensureNotFree", .hnf = &Prelude_ensureNotFree_hnf, .hnf_RET = &Prelude_ensureNotFree_RET_hnf};
static Symbol Prelude__DL_HT_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "$#", .hnf = &Prelude__DL_HT_hnf, .hnf_RET = &Prelude__DL_HT_RET_hnf};
static Symbol Prelude_ensureSpine_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ensureSpine", .hnf = &Prelude_ensureSpine_hnf, .hnf_RET = &Prelude_ensureSpine_RET_hnf};
static Symbol Prelude_const_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "const", .hnf = &Prelude_const_hnf, .hnf_RET = &Prelude_const_RET_hnf};
static Symbol Prelude_asTypeOf_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "asTypeOf", .hnf = &Prelude_asTypeOf_hnf, .hnf_RET = &Prelude_asTypeOf_RET_hnf};
static Symbol Prelude_seq_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "seq", .hnf = &Prelude_seq_hnf, .hnf_RET = &Prelude_seq_RET_hnf};
static Symbol Prelude_id_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "id", .hnf = &Prelude_id_hnf, .hnf_RET = &Prelude_id_RET_hnf};
static Symbol Prelude_groundNormalForm_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "groundNormalForm", .hnf = &Prelude_groundNormalForm_hnf, .hnf_RET = &Prelude_groundNormalForm_RET_hnf};
static Symbol Prelude_normalForm_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "normalForm", .hnf = &Prelude_normalForm_hnf, .hnf_RET = &Prelude_normalForm_RET_hnf};
static Symbol Prelude__DO_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = ".", .hnf = &Prelude__DO_hnf, .hnf_RET = &Prelude__DO_RET_hnf};
static Symbol Prelude_foldr_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldr", .hnf = &Prelude_foldr_hnf, .hnf_RET = &Prelude_foldr_RET_hnf};
static Symbol Prelude_ensureSpine_DOensureList_DO20_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ensureSpine.ensureList.20", .hnf = &Prelude_ensureSpine_DOensureList_DO20_hnf, .hnf_RET = &Prelude_ensureSpine_DOensureList_DO20_RET_hnf};
static Symbol Prelude_until_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "until", .hnf = &Prelude_until_hnf, .hnf_RET = &Prelude_until_RET_hnf};
static Symbol Prelude__AN_AN__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "&&@[]", .hnf = Prelude__AN_AN__hnf, .hnf_RET = NULL};
static Symbol Prelude__AN_AN__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "&&@[0]", .hnf = Prelude__AN_AN__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__OR_OR__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "||@[]", .hnf = Prelude__OR_OR__hnf, .hnf_RET = NULL};
static Symbol Prelude__OR_OR__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "||@[1]", .hnf = Prelude__OR_OR__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_not__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "not@[]", .hnf = Prelude_not__hnf, .hnf_RET = NULL};
static Symbol Prelude_if_USthen_USelse__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "if_then_else@[]", .hnf = Prelude_if_USthen_USelse__hnf, .hnf_RET = NULL};
static Symbol Prelude_if_USthen_USelse__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "if_then_else@[0]", .hnf = Prelude_if_USthen_USelse__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_if_USthen_USelse__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "if_then_else@[1]", .hnf = Prelude_if_USthen_USelse__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_solve__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "solve@[]", .hnf = Prelude_solve__hnf, .hnf_RET = NULL};
static Symbol Prelude__AN_GT__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "&>@[]", .hnf = Prelude__AN_GT__hnf, .hnf_RET = NULL};
static Symbol Prelude__AN_GT__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "&>@[0]", .hnf = Prelude__AN_GT__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_fst__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fst@[]", .hnf = Prelude_fst__hnf, .hnf_RET = NULL};
static Symbol Prelude_fst__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fst@[0]", .hnf = Prelude_fst__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_snd__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "snd@[]", .hnf = Prelude_snd__hnf, .hnf_RET = NULL};
static Symbol Prelude_snd__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "snd@[0]", .hnf = Prelude_snd__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_head__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "head@[]", .hnf = Prelude_head__hnf, .hnf_RET = NULL};
static Symbol Prelude_head__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "head@[1]", .hnf = Prelude_head__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_tail__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "tail@[]", .hnf = Prelude_tail__hnf, .hnf_RET = NULL};
static Symbol Prelude_tail__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "tail@[1]", .hnf = Prelude_tail__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_unknown__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "unknown@[]", .hnf = Prelude_unknown__hnf, .hnf_RET = NULL};
static Symbol Prelude_PEVAL__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "PEVAL@[]", .hnf = Prelude_PEVAL__hnf, .hnf_RET = NULL};
static Symbol Prelude__AN__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "&@[]", .hnf = Prelude__AN__hnf, .hnf_RET = NULL};
static Symbol Prelude__AN__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "&@[0]", .hnf = Prelude__AN__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_eqChar__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqChar@[]", .hnf = Prelude_eqChar__hnf, .hnf_RET = NULL};
static Symbol Prelude_eqChar__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqChar@[0]", .hnf = Prelude_eqChar__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_eqInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqInt@[]", .hnf = Prelude_eqInt__hnf, .hnf_RET = NULL};
static Symbol Prelude_eqInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqInt@[0]", .hnf = Prelude_eqInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_eqFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqFloat@[]", .hnf = Prelude_eqFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude_eqFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "eqFloat@[0]", .hnf = Prelude_eqFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_ltEqChar__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqChar@[]", .hnf = Prelude_ltEqChar__hnf, .hnf_RET = NULL};
static Symbol Prelude_ltEqChar__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqChar@[0]", .hnf = Prelude_ltEqChar__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_ltEqInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqInt@[]", .hnf = Prelude_ltEqInt__hnf, .hnf_RET = NULL};
static Symbol Prelude_ltEqInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqInt@[0]", .hnf = Prelude_ltEqInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_ltEqFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqFloat@[]", .hnf = Prelude_ltEqFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude_ltEqFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "ltEqFloat@[0]", .hnf = Prelude_ltEqFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_ord__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ord@[]", .hnf = Prelude_ord__hnf, .hnf_RET = NULL};
static Symbol Prelude_chr__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "chr@[]", .hnf = Prelude_chr__hnf, .hnf_RET = NULL};
static Symbol Prelude_cond__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "cond@[]", .hnf = Prelude_cond__hnf, .hnf_RET = NULL};
static Symbol Prelude_cond__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "cond@[0]", .hnf = Prelude_cond__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_putChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "putChar@[]", .hnf = Prelude_putChar__hnf, .hnf_RET = NULL};
static Symbol Prelude_const__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "const@[]", .hnf = Prelude_const__hnf, .hnf_RET = NULL};
static Symbol Prelude_asTypeOf__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "asTypeOf@[]", .hnf = Prelude_asTypeOf__hnf, .hnf_RET = NULL};
static Symbol Prelude_id__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "id@[]", .hnf = Prelude_id__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldr@[]", .hnf = Prelude_foldr__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldr__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "foldr@[0]", .hnf = Prelude_foldr__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_ensureSpine_DOensureList_DO20__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ensureSpine.ensureList.20@[]", .hnf = Prelude_ensureSpine_DOensureList_DO20__hnf, .hnf_RET = NULL};
static Symbol Prelude_until__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "until@[]", .hnf = Prelude_until__hnf, .hnf_RET = NULL};
static Symbol Prelude_until__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "until@[0]", .hnf = Prelude_until__0_hnf, .hnf_RET = NULL};

extern field Prelude__LP_RP;
extern field Prelude_True;
extern field Prelude_False;
extern field Prelude_Nothing;
extern field Prelude_LT;
extern field Prelude_GT;
extern field Prelude_EQ;
extern field Prelude__LB_RB;
// ()
__attribute__((always_inline)) 
static inline void set_Prelude__LP_RP(field root, int missing)
{
  root.n->symbol = &Prelude__LP_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// (,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_RP(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__LP_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// (,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_RP(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// (,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// (,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// (,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = v6;
  child_at(root, 1) = v5;
  child_at(root, 2) = v4;
  child_at(root, 3) = v3;
  child_at(root, 4) = v2;
  child_at(root, 5) = scrutinee;
}

// (,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = v7;
  child_at(root, 1) = v6;
  child_at(root, 2) = v5;
  child_at(root, 3) = v4;
  child_at(root, 4) = v3;
  child_at(root, 5) = v2;
  child_at(root, 6) = scrutinee;
}

// (,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = v8;
  child_at(root, 1) = v7;
  child_at(root, 2) = v6;
  child_at(root, 3) = v5;
  child_at(root, 4) = v4;
  child_at(root, 5) = v3;
  child_at(root, 6) = v2;
  child_at(root, 7) = scrutinee;
}

// (,,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(6 * sizeof(field));
  child_at(root, 0) = v9;
  child_at(root, 1) = v8;
  child_at(root, 2) = v7;
  child_at(root, 3) = v6;
  child_at(root, 4) = v5;
  child_at(root, 5) = v4;
  child_at(root, 6) = v3;
  child_at(root, 7) = v2;
  child_at(root, 8) = scrutinee;
}

// (,,,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(7 * sizeof(field));
  child_at(root, 0) = v10;
  child_at(root, 1) = v9;
  child_at(root, 2) = v8;
  child_at(root, 3) = v7;
  child_at(root, 4) = v6;
  child_at(root, 5) = v5;
  child_at(root, 6) = v4;
  child_at(root, 7) = v3;
  child_at(root, 8) = v2;
  child_at(root, 9) = scrutinee;
}

// (,,,,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(8 * sizeof(field));
  child_at(root, 0) = v11;
  child_at(root, 1) = v10;
  child_at(root, 2) = v9;
  child_at(root, 3) = v8;
  child_at(root, 4) = v7;
  child_at(root, 5) = v6;
  child_at(root, 6) = v5;
  child_at(root, 7) = v4;
  child_at(root, 8) = v3;
  child_at(root, 9) = v2;
  child_at(root, 10) = scrutinee;
}

// (,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(9 * sizeof(field));
  child_at(root, 0) = v12;
  child_at(root, 1) = v11;
  child_at(root, 2) = v10;
  child_at(root, 3) = v9;
  child_at(root, 4) = v8;
  child_at(root, 5) = v7;
  child_at(root, 6) = v6;
  child_at(root, 7) = v5;
  child_at(root, 8) = v4;
  child_at(root, 9) = v3;
  child_at(root, 10) = v2;
  child_at(root, 11) = scrutinee;
}

// (,,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, field v13, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(10 * sizeof(field));
  child_at(root, 0) = v13;
  child_at(root, 1) = v12;
  child_at(root, 2) = v11;
  child_at(root, 3) = v10;
  child_at(root, 4) = v9;
  child_at(root, 5) = v8;
  child_at(root, 6) = v7;
  child_at(root, 7) = v6;
  child_at(root, 8) = v5;
  child_at(root, 9) = v4;
  child_at(root, 10) = v3;
  child_at(root, 11) = v2;
  child_at(root, 12) = scrutinee;
}

// (,,,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, field v13, field v14, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(11 * sizeof(field));
  child_at(root, 0) = v14;
  child_at(root, 1) = v13;
  child_at(root, 2) = v12;
  child_at(root, 3) = v11;
  child_at(root, 4) = v10;
  child_at(root, 5) = v9;
  child_at(root, 6) = v8;
  child_at(root, 7) = v7;
  child_at(root, 8) = v6;
  child_at(root, 9) = v5;
  child_at(root, 10) = v4;
  child_at(root, 11) = v3;
  child_at(root, 12) = v2;
  child_at(root, 13) = scrutinee;
}

// (,,,,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, field v13, field v14, field v15, int missing)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(12 * sizeof(field));
  child_at(root, 0) = v15;
  child_at(root, 1) = v14;
  child_at(root, 2) = v13;
  child_at(root, 3) = v12;
  child_at(root, 4) = v11;
  child_at(root, 5) = v10;
  child_at(root, 6) = v9;
  child_at(root, 7) = v8;
  child_at(root, 8) = v7;
  child_at(root, 9) = v6;
  child_at(root, 10) = v5;
  child_at(root, 11) = v4;
  child_at(root, 12) = v3;
  child_at(root, 13) = v2;
  child_at(root, 14) = scrutinee;
}

// True
__attribute__((always_inline)) 
static inline void set_Prelude_True(field root, int missing)
{
  root.n->symbol = &Prelude_True_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// False
__attribute__((always_inline)) 
static inline void set_Prelude_False(field root, int missing)
{
  root.n->symbol = &Prelude_False_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// Right
__attribute__((always_inline)) 
static inline void set_Prelude_Right(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_Right_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// Left
__attribute__((always_inline)) 
static inline void set_Prelude_Left(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_Left_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// UserError
__attribute__((always_inline)) 
static inline void set_Prelude_UserError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_UserError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// NondetError
__attribute__((always_inline)) 
static inline void set_Prelude_NondetError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_NondetError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// IOError
__attribute__((always_inline)) 
static inline void set_Prelude_IOError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_IOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// FailError
__attribute__((always_inline)) 
static inline void set_Prelude_FailError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_FailError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// Nothing
__attribute__((always_inline)) 
static inline void set_Prelude_Nothing(field root, int missing)
{
  root.n->symbol = &Prelude_Nothing_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// Just
__attribute__((always_inline)) 
static inline void set_Prelude_Just(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_Just_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// LT
__attribute__((always_inline)) 
static inline void set_Prelude_LT(field root, int missing)
{
  root.n->symbol = &Prelude_LT_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// GT
__attribute__((always_inline)) 
static inline void set_Prelude_GT(field root, int missing)
{
  root.n->symbol = &Prelude_GT_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// EQ
__attribute__((always_inline)) 
static inline void set_Prelude_EQ(field root, int missing)
{
  root.n->symbol = &Prelude_EQ_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// []
__attribute__((always_inline)) 
static inline void set_Prelude__LB_RB(field root, int missing)
{
  root.n->symbol = &Prelude__LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// :
__attribute__((always_inline)) 
static inline void set_Prelude__CO(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__CO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// _Dict#Bounded
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTBounded(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USDict_HTBounded_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// _Dict#Enum
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTEnum(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, int missing)
{
  root.n->symbol = &Prelude__USDict_HTEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = v8;
  child_at(root, 1) = v7;
  child_at(root, 2) = v6;
  child_at(root, 3) = v5;
  child_at(root, 4) = v4;
  child_at(root, 5) = v3;
  child_at(root, 6) = v2;
  child_at(root, 7) = scrutinee;
}

// _Dict#Eq
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTEq(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USDict_HTEq_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// _Dict#Fractional
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTFractional(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USDict_HTFractional_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// _Dict#Functor
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTFunctor(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USDict_HTFunctor_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// _Dict#Integral
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTIntegral(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, int missing)
{
  root.n->symbol = &Prelude__USDict_HTIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = v7;
  child_at(root, 1) = v6;
  child_at(root, 2) = v5;
  child_at(root, 3) = v4;
  child_at(root, 4) = v3;
  child_at(root, 5) = v2;
  child_at(root, 6) = scrutinee;
}

// _Dict#Monad
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTMonad(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USDict_HTMonad_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// _Dict#Num
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTNum(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, int missing)
{
  root.n->symbol = &Prelude__USDict_HTNum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = v7;
  child_at(root, 1) = v6;
  child_at(root, 2) = v5;
  child_at(root, 3) = v4;
  child_at(root, 4) = v3;
  child_at(root, 5) = v2;
  child_at(root, 6) = scrutinee;
}

// _Dict#Ord
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTOrd(field root, field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, int missing)
{
  root.n->symbol = &Prelude__USDict_HTOrd_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = v8;
  child_at(root, 1) = v7;
  child_at(root, 2) = v6;
  child_at(root, 3) = v5;
  child_at(root, 4) = v4;
  child_at(root, 5) = v3;
  child_at(root, 6) = v2;
  child_at(root, 7) = scrutinee;
}

// _Dict#Read
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTRead(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USDict_HTRead_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// _Dict#Real
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTReal(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USDict_HTReal_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// _Dict#Show
__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTShow(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USDict_HTShow_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// flip
__attribute__((always_inline)) 
static inline void set_Prelude_flip(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_flip_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// $
__attribute__((always_inline)) 
static inline void set_Prelude__DL(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__DL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// failed
__attribute__((always_inline)) 
static inline void set_Prelude_failed(field root, int missing)
{
  root.n->symbol = &Prelude_failed_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// &&
__attribute__((always_inline)) 
static inline void set_Prelude__AN_AN(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__AN_AN_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ||
__attribute__((always_inline)) 
static inline void set_Prelude__OR_OR(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__OR_OR_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// not
__attribute__((always_inline)) 
static inline void set_Prelude_not(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_not_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// otherwise
__attribute__((always_inline)) 
static inline void set_Prelude_otherwise(field root, int missing)
{
  root.n->symbol = &Prelude_otherwise_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// if_then_else
__attribute__((always_inline)) 
static inline void set_Prelude_if_USthen_USelse(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_if_USthen_USelse_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// solve
__attribute__((always_inline)) 
static inline void set_Prelude_solve(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_solve_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// &>
__attribute__((always_inline)) 
static inline void set_Prelude__AN_GT(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__AN_GT_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// =:=
__attribute__((always_inline)) 
static inline void set_Prelude__EQ_CO_EQ(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__EQ_CO_EQ_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// fst
__attribute__((always_inline)) 
static inline void set_Prelude_fst(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_fst_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// snd
__attribute__((always_inline)) 
static inline void set_Prelude_snd(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_snd_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// head
__attribute__((always_inline)) 
static inline void set_Prelude_head(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_head_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// tail
__attribute__((always_inline)) 
static inline void set_Prelude_tail(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_tail_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// success
__attribute__((always_inline)) 
static inline void set_Prelude_success(field root, int missing)
{
  root.n->symbol = &Prelude_success_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// catch
__attribute__((always_inline)) 
static inline void set_Prelude_catch(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_catch_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ?
__attribute__((always_inline)) 
static inline void set_Prelude__QU(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__QU_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// unknown
__attribute__((always_inline)) 
static inline void set_Prelude_unknown(field root, int missing)
{
  root.n->symbol = &Prelude_unknown_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// PEVAL
__attribute__((always_inline)) 
static inline void set_Prelude_PEVAL(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_PEVAL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// letrec
__attribute__((always_inline)) 
static inline void set_Prelude_letrec(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_letrec_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// =:<=
__attribute__((always_inline)) 
static inline void set_Prelude__EQ_CO_LT_EQ(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__EQ_CO_LT_EQ_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// =:<<=
__attribute__((always_inline)) 
static inline void set_Prelude__EQ_CO_LT_LT_EQ(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__EQ_CO_LT_LT_EQ_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// &
__attribute__((always_inline)) 
static inline void set_Prelude__AN(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__AN_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// eqChar
__attribute__((always_inline)) 
static inline void set_Prelude_eqChar(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_eqChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// eqInt
__attribute__((always_inline)) 
static inline void set_Prelude_eqInt(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_eqInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// eqFloat
__attribute__((always_inline)) 
static inline void set_Prelude_eqFloat(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_eqFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ltEqChar
__attribute__((always_inline)) 
static inline void set_Prelude_ltEqChar(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_ltEqChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ltEqInt
__attribute__((always_inline)) 
static inline void set_Prelude_ltEqInt(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_ltEqInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ltEqFloat
__attribute__((always_inline)) 
static inline void set_Prelude_ltEqFloat(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_ltEqFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ord
__attribute__((always_inline)) 
static inline void set_Prelude_ord(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_ord_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// chr
__attribute__((always_inline)) 
static inline void set_Prelude_chr(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_chr_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// cond
__attribute__((always_inline)) 
static inline void set_Prelude_cond(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_cond_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// build
__attribute__((always_inline)) 
static inline void set_Prelude_build(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_build_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// mk_build
__attribute__((always_inline)) 
static inline void set_Prelude_mk_USbuild(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_mk_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// prim_appendFile
__attribute__((always_inline)) 
static inline void set_Prelude_prim_USappendFile(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_prim_USappendFile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// prim_writeFile
__attribute__((always_inline)) 
static inline void set_Prelude_prim_USwriteFile(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_prim_USwriteFile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// prim_readFile
__attribute__((always_inline)) 
static inline void set_Prelude_prim_USreadFile(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_prim_USreadFile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// prim_putChar
__attribute__((always_inline)) 
static inline void set_Prelude_prim_USputChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_prim_USputChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// putChar
__attribute__((always_inline)) 
static inline void set_Prelude_putChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_putChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// build_fold
__attribute__((always_inline)) 
static inline void set_Prelude_build_USfold(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_build_USfold_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// prim_error
__attribute__((always_inline)) 
static inline void set_Prelude_prim_USerror(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_prim_USerror_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// $##
__attribute__((always_inline)) 
static inline void set_Prelude__DL_HT_HT(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__DL_HT_HT_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// appendFile
__attribute__((always_inline)) 
static inline void set_Prelude_appendFile(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_appendFile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// writeFile
__attribute__((always_inline)) 
static inline void set_Prelude_writeFile(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_writeFile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// readFile
__attribute__((always_inline)) 
static inline void set_Prelude_readFile(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_readFile_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// error
__attribute__((always_inline)) 
static inline void set_Prelude_error(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_error_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// $!!
__attribute__((always_inline)) 
static inline void set_Prelude__DL_EX_EX(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__DL_EX_EX_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// $!
__attribute__((always_inline)) 
static inline void set_Prelude__DL_EX(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__DL_EX_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ensureNotFree
__attribute__((always_inline)) 
static inline void set_Prelude_ensureNotFree(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_ensureNotFree_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// $#
__attribute__((always_inline)) 
static inline void set_Prelude__DL_HT(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__DL_HT_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// ensureSpine
__attribute__((always_inline)) 
static inline void set_Prelude_ensureSpine(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_ensureSpine_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// const
__attribute__((always_inline)) 
static inline void set_Prelude_const(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_const_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// asTypeOf
__attribute__((always_inline)) 
static inline void set_Prelude_asTypeOf(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_asTypeOf_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// seq
__attribute__((always_inline)) 
static inline void set_Prelude_seq(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_seq_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// id
__attribute__((always_inline)) 
static inline void set_Prelude_id(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_id_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// groundNormalForm
__attribute__((always_inline)) 
static inline void set_Prelude_groundNormalForm(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_groundNormalForm_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// normalForm
__attribute__((always_inline)) 
static inline void set_Prelude_normalForm(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_normalForm_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// .
__attribute__((always_inline)) 
static inline void set_Prelude__DO(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__DO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// foldr
__attribute__((always_inline)) 
static inline void set_Prelude_foldr(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_foldr_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// ensureSpine.ensureList.20
__attribute__((always_inline)) 
static inline void set_Prelude_ensureSpine_DOensureList_DO20(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_ensureSpine_DOensureList_DO20_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// until
__attribute__((always_inline)) 
static inline void set_Prelude_until(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_until_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// ()
__attribute__((always_inline)) 
static inline field make_Prelude__LP_RP(int missing)
{
  return Prelude__LP_RP;
}

// (,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_RP(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_RP_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// (,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_RP(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_RP_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// (,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// (,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// (,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_RP_symbol;
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

// (,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = v7;
  child_at(root, 1) = v6;
  child_at(root, 2) = v5;
  child_at(root, 3) = v4;
  child_at(root, 4) = v3;
  child_at(root, 5) = v2;
  child_at(root, 6) = scrutinee;
  return root;
}

// (,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = v8;
  child_at(root, 1) = v7;
  child_at(root, 2) = v6;
  child_at(root, 3) = v5;
  child_at(root, 4) = v4;
  child_at(root, 5) = v3;
  child_at(root, 6) = v2;
  child_at(root, 7) = scrutinee;
  return root;
}

// (,,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(6 * sizeof(field));
  child_at(root, 0) = v9;
  child_at(root, 1) = v8;
  child_at(root, 2) = v7;
  child_at(root, 3) = v6;
  child_at(root, 4) = v5;
  child_at(root, 5) = v4;
  child_at(root, 6) = v3;
  child_at(root, 7) = v2;
  child_at(root, 8) = scrutinee;
  return root;
}

// (,,,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(7 * sizeof(field));
  child_at(root, 0) = v10;
  child_at(root, 1) = v9;
  child_at(root, 2) = v8;
  child_at(root, 3) = v7;
  child_at(root, 4) = v6;
  child_at(root, 5) = v5;
  child_at(root, 6) = v4;
  child_at(root, 7) = v3;
  child_at(root, 8) = v2;
  child_at(root, 9) = scrutinee;
  return root;
}

// (,,,,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(8 * sizeof(field));
  child_at(root, 0) = v11;
  child_at(root, 1) = v10;
  child_at(root, 2) = v9;
  child_at(root, 3) = v8;
  child_at(root, 4) = v7;
  child_at(root, 5) = v6;
  child_at(root, 6) = v5;
  child_at(root, 7) = v4;
  child_at(root, 8) = v3;
  child_at(root, 9) = v2;
  child_at(root, 10) = scrutinee;
  return root;
}

// (,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(9 * sizeof(field));
  child_at(root, 0) = v12;
  child_at(root, 1) = v11;
  child_at(root, 2) = v10;
  child_at(root, 3) = v9;
  child_at(root, 4) = v8;
  child_at(root, 5) = v7;
  child_at(root, 6) = v6;
  child_at(root, 7) = v5;
  child_at(root, 8) = v4;
  child_at(root, 9) = v3;
  child_at(root, 10) = v2;
  child_at(root, 11) = scrutinee;
  return root;
}

// (,,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, field v13, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(10 * sizeof(field));
  child_at(root, 0) = v13;
  child_at(root, 1) = v12;
  child_at(root, 2) = v11;
  child_at(root, 3) = v10;
  child_at(root, 4) = v9;
  child_at(root, 5) = v8;
  child_at(root, 6) = v7;
  child_at(root, 7) = v6;
  child_at(root, 8) = v5;
  child_at(root, 9) = v4;
  child_at(root, 10) = v3;
  child_at(root, 11) = v2;
  child_at(root, 12) = scrutinee;
  return root;
}

// (,,,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, field v13, field v14, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(11 * sizeof(field));
  child_at(root, 0) = v14;
  child_at(root, 1) = v13;
  child_at(root, 2) = v12;
  child_at(root, 3) = v11;
  child_at(root, 4) = v10;
  child_at(root, 5) = v9;
  child_at(root, 6) = v8;
  child_at(root, 7) = v7;
  child_at(root, 8) = v6;
  child_at(root, 9) = v5;
  child_at(root, 10) = v4;
  child_at(root, 11) = v3;
  child_at(root, 12) = v2;
  child_at(root, 13) = scrutinee;
  return root;
}

// (,,,,,,,,,,,,,,)
__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, field v9, field v10, field v11, field v12, field v13, field v14, field v15, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(12 * sizeof(field));
  child_at(root, 0) = v15;
  child_at(root, 1) = v14;
  child_at(root, 2) = v13;
  child_at(root, 3) = v12;
  child_at(root, 4) = v11;
  child_at(root, 5) = v10;
  child_at(root, 6) = v9;
  child_at(root, 7) = v8;
  child_at(root, 8) = v7;
  child_at(root, 9) = v6;
  child_at(root, 10) = v5;
  child_at(root, 11) = v4;
  child_at(root, 12) = v3;
  child_at(root, 13) = v2;
  child_at(root, 14) = scrutinee;
  return root;
}

// True
__attribute__((always_inline)) 
static inline field make_Prelude_True(int missing)
{
  return Prelude_True;
}

// False
__attribute__((always_inline)) 
static inline field make_Prelude_False(int missing)
{
  return Prelude_False;
}

// Right
__attribute__((always_inline)) 
static inline field make_Prelude_Right(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_Right_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// Left
__attribute__((always_inline)) 
static inline field make_Prelude_Left(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_Left_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// UserError
__attribute__((always_inline)) 
static inline field make_Prelude_UserError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_UserError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// NondetError
__attribute__((always_inline)) 
static inline field make_Prelude_NondetError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_NondetError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// IOError
__attribute__((always_inline)) 
static inline field make_Prelude_IOError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_IOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// FailError
__attribute__((always_inline)) 
static inline field make_Prelude_FailError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_FailError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// Just
__attribute__((always_inline)) 
static inline field make_Prelude_Just(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_Just_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// Nothing
__attribute__((always_inline)) 
static inline field make_Prelude_Nothing(int missing)
{
  return Prelude_Nothing;
}

// LT
__attribute__((always_inline)) 
static inline field make_Prelude_LT(int missing)
{
  return Prelude_LT;
}

// GT
__attribute__((always_inline)) 
static inline field make_Prelude_GT(int missing)
{
  return Prelude_GT;
}

// EQ
__attribute__((always_inline)) 
static inline field make_Prelude_EQ(int missing)
{
  return Prelude_EQ;
}

// :
__attribute__((always_inline)) 
static inline field make_Prelude__CO(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__CO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// []
__attribute__((always_inline)) 
static inline field make_Prelude__LB_RB(int missing)
{
  return Prelude__LB_RB;
}

// _Dict#Bounded
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTBounded(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTBounded_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// _Dict#Enum
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTEnum(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTEnum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = v8;
  child_at(root, 1) = v7;
  child_at(root, 2) = v6;
  child_at(root, 3) = v5;
  child_at(root, 4) = v4;
  child_at(root, 5) = v3;
  child_at(root, 6) = v2;
  child_at(root, 7) = scrutinee;
  return root;
}

// _Dict#Eq
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTEq(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTEq_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// _Dict#Fractional
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTFractional(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTFractional_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// _Dict#Functor
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTFunctor(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTFunctor_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// _Dict#Integral
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTIntegral(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = v7;
  child_at(root, 1) = v6;
  child_at(root, 2) = v5;
  child_at(root, 3) = v4;
  child_at(root, 4) = v3;
  child_at(root, 5) = v2;
  child_at(root, 6) = scrutinee;
  return root;
}

// _Dict#Monad
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTMonad(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTMonad_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// _Dict#Num
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTNum(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTNum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = v7;
  child_at(root, 1) = v6;
  child_at(root, 2) = v5;
  child_at(root, 3) = v4;
  child_at(root, 4) = v3;
  child_at(root, 5) = v2;
  child_at(root, 6) = scrutinee;
  return root;
}

// _Dict#Ord
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTOrd(field scrutinee, field v2, field v3, field v4, field v5, field v6, field v7, field v8, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTOrd_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = v8;
  child_at(root, 1) = v7;
  child_at(root, 2) = v6;
  child_at(root, 3) = v5;
  child_at(root, 4) = v4;
  child_at(root, 5) = v3;
  child_at(root, 6) = v2;
  child_at(root, 7) = scrutinee;
  return root;
}

// _Dict#Read
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTRead(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTRead_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// _Dict#Real
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTReal(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTReal_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// _Dict#Show
__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTShow(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USDict_HTShow_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// flip
__attribute__((always_inline)) 
static inline field make_Prelude_flip(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_flip_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// $
__attribute__((always_inline)) 
static inline field make_Prelude__DL(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__DL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// failed
__attribute__((always_inline)) 
static inline field make_Prelude_failed(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_failed_symbol;
  root.n->missing = missing;
  return root;
}

// &&
__attribute__((always_inline)) 
static inline field make_Prelude__AN_AN(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN_AN_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ||
__attribute__((always_inline)) 
static inline field make_Prelude__OR_OR(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__OR_OR_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// not
__attribute__((always_inline)) 
static inline field make_Prelude_not(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_not_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// otherwise
__attribute__((always_inline)) 
static inline field make_Prelude_otherwise(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_otherwise_symbol;
  root.n->missing = missing;
  return root;
}

// if_then_else
__attribute__((always_inline)) 
static inline field make_Prelude_if_USthen_USelse(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_if_USthen_USelse_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// solve
__attribute__((always_inline)) 
static inline field make_Prelude_solve(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_solve_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// &>
__attribute__((always_inline)) 
static inline field make_Prelude__AN_GT(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN_GT_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// =:=
__attribute__((always_inline)) 
static inline field make_Prelude__EQ_CO_EQ(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EQ_CO_EQ_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// fst
__attribute__((always_inline)) 
static inline field make_Prelude_fst(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fst_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// snd
__attribute__((always_inline)) 
static inline field make_Prelude_snd(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_snd_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// head
__attribute__((always_inline)) 
static inline field make_Prelude_head(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_head_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// tail
__attribute__((always_inline)) 
static inline field make_Prelude_tail(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_tail_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// success
__attribute__((always_inline)) 
static inline field make_Prelude_success(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_success_symbol;
  root.n->missing = missing;
  return root;
}

// catch
__attribute__((always_inline)) 
static inline field make_Prelude_catch(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_catch_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ?
__attribute__((always_inline)) 
static inline field make_Prelude__QU(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__QU_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// unknown
__attribute__((always_inline)) 
static inline field make_Prelude_unknown(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unknown_symbol;
  root.n->missing = missing;
  return root;
}

// PEVAL
__attribute__((always_inline)) 
static inline field make_Prelude_PEVAL(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_PEVAL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// letrec
__attribute__((always_inline)) 
static inline field make_Prelude_letrec(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_letrec_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// =:<=
__attribute__((always_inline)) 
static inline field make_Prelude__EQ_CO_LT_EQ(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EQ_CO_LT_EQ_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// =:<<=
__attribute__((always_inline)) 
static inline field make_Prelude__EQ_CO_LT_LT_EQ(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__EQ_CO_LT_LT_EQ_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// &
__attribute__((always_inline)) 
static inline field make_Prelude__AN(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqChar
__attribute__((always_inline)) 
static inline field make_Prelude_eqChar(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqInt
__attribute__((always_inline)) 
static inline field make_Prelude_eqInt(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqFloat
__attribute__((always_inline)) 
static inline field make_Prelude_eqFloat(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqChar
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqChar(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqInt
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqInt(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqFloat
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqFloat(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ord
__attribute__((always_inline)) 
static inline field make_Prelude_ord(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ord_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// chr
__attribute__((always_inline)) 
static inline field make_Prelude_chr(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_chr_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// cond
__attribute__((always_inline)) 
static inline field make_Prelude_cond(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_cond_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// build
__attribute__((always_inline)) 
static inline field make_Prelude_build(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_build_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// mk_build
__attribute__((always_inline)) 
static inline field make_Prelude_mk_USbuild(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mk_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// prim_appendFile
__attribute__((always_inline)) 
static inline field make_Prelude_prim_USappendFile(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_prim_USappendFile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// prim_writeFile
__attribute__((always_inline)) 
static inline field make_Prelude_prim_USwriteFile(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_prim_USwriteFile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// prim_readFile
__attribute__((always_inline)) 
static inline field make_Prelude_prim_USreadFile(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_prim_USreadFile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// prim_putChar
__attribute__((always_inline)) 
static inline field make_Prelude_prim_USputChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_prim_USputChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// putChar
__attribute__((always_inline)) 
static inline field make_Prelude_putChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_putChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// build_fold
__attribute__((always_inline)) 
static inline field make_Prelude_build_USfold(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_build_USfold_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// prim_error
__attribute__((always_inline)) 
static inline field make_Prelude_prim_USerror(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_prim_USerror_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// $##
__attribute__((always_inline)) 
static inline field make_Prelude__DL_HT_HT(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__DL_HT_HT_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// appendFile
__attribute__((always_inline)) 
static inline field make_Prelude_appendFile(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_appendFile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// writeFile
__attribute__((always_inline)) 
static inline field make_Prelude_writeFile(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_writeFile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// readFile
__attribute__((always_inline)) 
static inline field make_Prelude_readFile(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readFile_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// error
__attribute__((always_inline)) 
static inline field make_Prelude_error(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_error_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// $!!
__attribute__((always_inline)) 
static inline field make_Prelude__DL_EX_EX(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__DL_EX_EX_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// $!
__attribute__((always_inline)) 
static inline field make_Prelude__DL_EX(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__DL_EX_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ensureNotFree
__attribute__((always_inline)) 
static inline field make_Prelude_ensureNotFree(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ensureNotFree_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// $#
__attribute__((always_inline)) 
static inline field make_Prelude__DL_HT(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__DL_HT_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ensureSpine
__attribute__((always_inline)) 
static inline field make_Prelude_ensureSpine(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ensureSpine_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// const
__attribute__((always_inline)) 
static inline field make_Prelude_const(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_const_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// asTypeOf
__attribute__((always_inline)) 
static inline field make_Prelude_asTypeOf(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_asTypeOf_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// seq
__attribute__((always_inline)) 
static inline field make_Prelude_seq(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_seq_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// id
__attribute__((always_inline)) 
static inline field make_Prelude_id(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_id_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// groundNormalForm
__attribute__((always_inline)) 
static inline field make_Prelude_groundNormalForm(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_groundNormalForm_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// normalForm
__attribute__((always_inline)) 
static inline field make_Prelude_normalForm(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_normalForm_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// .
__attribute__((always_inline)) 
static inline field make_Prelude__DO(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__DO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// foldr
__attribute__((always_inline)) 
static inline field make_Prelude_foldr(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// ensureSpine.ensureList.20
__attribute__((always_inline)) 
static inline field make_Prelude_ensureSpine_DOensureList_DO20(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ensureSpine_DOensureList_DO20_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// until
__attribute__((always_inline)) 
static inline field make_Prelude_until(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_until_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// && @ []
__attribute__((always_inline)) 
static inline field make_Prelude__AN_AN_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN_AN__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// && @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__AN_AN__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN_AN__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// || @ []
__attribute__((always_inline)) 
static inline field make_Prelude__OR_OR_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__OR_OR__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// || @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__OR_OR__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__OR_OR__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// not @ []
__attribute__((always_inline)) 
static inline field make_Prelude_not_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_not__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// if_then_else @ []
__attribute__((always_inline)) 
static inline field make_Prelude_if_USthen_USelse_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_if_USthen_USelse__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// if_then_else @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_if_USthen_USelse__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_if_USthen_USelse__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// if_then_else @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_if_USthen_USelse__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_if_USthen_USelse__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// solve @ []
__attribute__((always_inline)) 
static inline field make_Prelude_solve_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_solve__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// &> @ []
__attribute__((always_inline)) 
static inline field make_Prelude__AN_GT_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN_GT__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// &> @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__AN_GT__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN_GT__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fst @ []
__attribute__((always_inline)) 
static inline field make_Prelude_fst_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fst__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fst @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_fst__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fst__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// snd @ []
__attribute__((always_inline)) 
static inline field make_Prelude_snd_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_snd__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// snd @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_snd__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_snd__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// head @ []
__attribute__((always_inline)) 
static inline field make_Prelude_head_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_head__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// head @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_head__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_head__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// tail @ []
__attribute__((always_inline)) 
static inline field make_Prelude_tail_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_tail__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// tail @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_tail__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_tail__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// unknown @ []
__attribute__((always_inline)) 
static inline field make_Prelude_unknown_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unknown__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// PEVAL @ []
__attribute__((always_inline)) 
static inline field make_Prelude_PEVAL_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_PEVAL__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// & @ []
__attribute__((always_inline)) 
static inline field make_Prelude__AN_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// & @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__AN__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__AN__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// eqChar @ []
__attribute__((always_inline)) 
static inline field make_Prelude_eqChar_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqChar @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_eqChar__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqChar__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqInt @ []
__attribute__((always_inline)) 
static inline field make_Prelude_eqInt_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqInt @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_eqInt__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqFloat @ []
__attribute__((always_inline)) 
static inline field make_Prelude_eqFloat_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// eqFloat @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_eqFloat__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_eqFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqChar @ []
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqChar_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqChar @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqChar__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqChar__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqInt @ []
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqInt_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqInt @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqInt__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqFloat @ []
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqFloat_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ltEqFloat @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_ltEqFloat__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ltEqFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// ord @ []
__attribute__((always_inline)) 
static inline field make_Prelude_ord_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ord__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// chr @ []
__attribute__((always_inline)) 
static inline field make_Prelude_chr_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_chr__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// cond @ []
__attribute__((always_inline)) 
static inline field make_Prelude_cond_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_cond__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// cond @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_cond__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_cond__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// putChar @ []
__attribute__((always_inline)) 
static inline field make_Prelude_putChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_putChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// const @ []
__attribute__((always_inline)) 
static inline field make_Prelude_const_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_const__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// asTypeOf @ []
__attribute__((always_inline)) 
static inline field make_Prelude_asTypeOf_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_asTypeOf__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// id @ []
__attribute__((always_inline)) 
static inline field make_Prelude_id_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_id__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// foldr @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldr_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// foldr @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_foldr__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldr__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// ensureSpine.ensureList.20 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_ensureSpine_DOensureList_DO20_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ensureSpine_DOensureList_DO20__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// until @ []
__attribute__((always_inline)) 
static inline field make_Prelude_until_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_until__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// until @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_until__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_until__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(6 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(7 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(8 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(9 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(10 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
  child_at(root, 12) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(11 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
  child_at(root, 12) = free_var();
  child_at(root, 13) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free(field root)
{
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(12 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
  child_at(root, 12) = free_var();
  child_at(root, 13) = free_var();
  child_at(root, 14) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_True_free(field root)
{
  root.n->symbol = &Prelude_True_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude_False_free(field root)
{
  root.n->symbol = &Prelude_False_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude_Right_free(field root)
{
  root.n->symbol = &Prelude_Right_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_Left_free(field root)
{
  root.n->symbol = &Prelude_Left_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_UserError_free(field root)
{
  root.n->symbol = &Prelude_UserError_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_NondetError_free(field root)
{
  root.n->symbol = &Prelude_NondetError_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_IOError_free(field root)
{
  root.n->symbol = &Prelude_IOError_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_FailError_free(field root)
{
  root.n->symbol = &Prelude_FailError_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_Nothing_free(field root)
{
  root.n->symbol = &Prelude_Nothing_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude_Just_free(field root)
{
  root.n->symbol = &Prelude_Just_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude_LT_free(field root)
{
  root.n->symbol = &Prelude_LT_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude_GT_free(field root)
{
  root.n->symbol = &Prelude_GT_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude_EQ_free(field root)
{
  root.n->symbol = &Prelude_EQ_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude__LB_RB_free(field root)
{
  root.n->symbol = &Prelude__LB_RB_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_Prelude__CO_free(field root)
{
  root.n->symbol = &Prelude__CO_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTBounded_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTBounded_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTEnum_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTEnum_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTEq_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTEq_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTFractional_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTFractional_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTFunctor_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTFunctor_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTIntegral_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTIntegral_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTMonad_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTMonad_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTNum_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTNum_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTOrd_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTOrd_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTRead_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTRead_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTReal_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTReal_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
}

__attribute__((always_inline)) 
static inline void set_Prelude__USDict_HTShow_free(field root)
{
  root.n->symbol = &Prelude__USDict_HTShow_symbol;
  root.n->nondet = true;
  root.n->missing = 0;
  root.n->children[3].a = NULL;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_RP_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_RP_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_RP_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(3 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(6 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(7 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(8 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(9 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(10 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
  child_at(root, 12) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(11 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
  child_at(root, 12) = free_var();
  child_at(root, 13) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LP_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_CM_RP_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(12 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  child_at(root, 8) = free_var();
  child_at(root, 9) = free_var();
  child_at(root, 10) = free_var();
  child_at(root, 11) = free_var();
  child_at(root, 12) = free_var();
  child_at(root, 13) = free_var();
  child_at(root, 14) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_True_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_True_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_False_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_False_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_Right_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_Right_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_Left_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_Left_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_UserError_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_UserError_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_NondetError_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_NondetError_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_IOError_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_IOError_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_FailError_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_FailError_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_Nothing_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_Nothing_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_Just_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_Just_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_LT_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_LT_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_GT_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_GT_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude_EQ_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude_EQ_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__LB_RB_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__LB_RB_symbol;
  root.n->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__CO_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__CO_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTBounded_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTBounded_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTEnum_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTEnum_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTEq_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTEq_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTFractional_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTFractional_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTFunctor_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTFunctor_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTIntegral_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTIntegral_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTMonad_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTMonad_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTNum_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTNum_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(4 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTOrd_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTOrd_symbol;
  root.n->missing = 0;
  root.n->children[3].a = (field*)alloc(5 * sizeof(field));
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  child_at(root, 3) = free_var();
  child_at(root, 4) = free_var();
  child_at(root, 5) = free_var();
  child_at(root, 6) = free_var();
  child_at(root, 7) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTRead_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTRead_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTReal_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTReal_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline field make_Prelude__USDict_HTShow_free()
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->nondet = true;
  root.n->symbol = &Prelude__USDict_HTShow_symbol;
  root.n->missing = 0;
  child_at(root, 0) = free_var();
  child_at(root, 1) = free_var();
  child_at(root, 2) = free_var();
  return root;
}

#endif //PreludeBase_H