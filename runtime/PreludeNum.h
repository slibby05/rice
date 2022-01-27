#ifndef PreludeNum_H
#define PreludeNum_H

#include "runtime.h"
#include "PreludeBase.h"
#include "PreludeCompare.h"

void Prelude_powaux_hnf(field root);
void Prelude__USdef_HT_PL_HTPrelude_DONum_hnf(field root);
void Prelude__USdef_HT_ST_HTPrelude_DONum_hnf(field root);
void Prelude__USdef_HTabs_HTPrelude_DONum_hnf(field root);
void Prelude__USdef_HTsignum_HTPrelude_DONum_hnf(field root);
void Prelude__USdef_HTfromInt_HTPrelude_DONum_hnf(field root);
void Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_hnf(field root);
void Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_hnf(field root);
void Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_hnf(field root);
void Prelude_abs_hnf(field root);
void Prelude_signum_hnf(field root);
void Prelude_fromFloat_hnf(field root);
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_hnf(field root);
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_hnf(field root);
void Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_hnf(field root);
void Prelude_div_hnf(field root);
void Prelude_mod_hnf(field root);
void Prelude_quot_hnf(field root);
void Prelude_rem_hnf(field root);
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude__FS_DO_hnf(field root);
void Prelude__ST_DO_hnf(field root);
void Prelude__MI_DO_hnf(field root);
void Prelude__PL_DO_hnf(field root);
void Prelude_negateFloat_hnf(field root);
void Prelude_rem_US_hnf(field root);
void Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root);
void Prelude_quot_US_hnf(field root);
void Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root);
void Prelude_mod_US_hnf(field root);
void Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root);
void Prelude_div_US_hnf(field root);
void Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root);
void Prelude_halve_hnf(field root);
void Prelude__ST_DL_hnf(field root);
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude__MI_DL_hnf(field root);
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude_negate_US_hnf(field root);
void Prelude__PL_DL_hnf(field root);
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root);
void Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_hnf(field root);
void Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root);
void Prelude_i2f_hnf(field root);
void Prelude_quotRem_hnf(field root);
void Prelude_divMod_hnf(field root);
void Prelude_recip_hnf(field root);
void Prelude__FS_hnf(field root);
void Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_hnf(field root);
void Prelude_fromInt_hnf(field root);
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_hnf(field root);
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_hnf(field root);
void Prelude_negate_hnf(field root);
void Prelude__ST_hnf(field root);
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_hnf(field root);
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_hnf(field root);
void Prelude__MI_hnf(field root);
void Prelude__USdef_HTnegate_HTPrelude_DONum_hnf(field root);
void Prelude__PL_hnf(field root);
void Prelude__USdef_HT_MI_HTPrelude_DONum_hnf(field root);
void Prelude__USdef_HTrem_HTPrelude_DOIntegral_hnf(field root);
void Prelude__USdef_HTquot_HTPrelude_DOIntegral_hnf(field root);
void Prelude__USdef_HTmod_HTPrelude_DOIntegral_hnf(field root);
void Prelude__USdef_HTdiv_HTPrelude_DOIntegral_hnf(field root);
void Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude_square_hnf(field root);
void Prelude_pow_hnf(field root);
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root);
void Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_hnf(field root);
void Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root);
void Prelude_powaux_HTworker_hnf(field root);
void Prelude_powaux_HTworker_HTA2_hnf(field root);
void Prelude_powaux__hnf(field root);
void Prelude_powaux__0_hnf(field root);
Node* Prelude_powaux_RET_hnf(Node* backup);
Node* Prelude__USdef_HT_PL_HTPrelude_DONum_RET_hnf(Node* backup);
Node* Prelude__USdef_HT_ST_HTPrelude_DONum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTabs_HTPrelude_DONum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTsignum_HTPrelude_DONum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTfromInt_HTPrelude_DONum_RET_hnf(Node* backup);
Node* Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_RET_hnf(Node* backup);
Node* Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_RET_hnf(Node* backup);
Node* Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_RET_hnf(Node* backup);
void Prelude_abs__hnf(field root);
void Prelude_abs__0_hnf(field root);
Node* Prelude_abs_RET_hnf(Node* backup);
void Prelude_signum__hnf(field root);
void Prelude_signum__0_hnf(field root);
Node* Prelude_signum_RET_hnf(Node* backup);
void Prelude_fromFloat__hnf(field root);
void Prelude_fromFloat__0_hnf(field root);
Node* Prelude_fromFloat_RET_hnf(Node* backup);
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__hnf(field root);
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__0_hnf(field root);
Node* Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_RET_hnf(Node* backup);
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__hnf(field root);
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__0_hnf(field root);
Node* Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_RET_hnf(Node* backup);
void Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__hnf(field root);
void Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__0_hnf(field root);
Node* Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_RET_hnf(Node* backup);
void Prelude_div__hnf(field root);
void Prelude_div__0_hnf(field root);
Node* Prelude_div_RET_hnf(Node* backup);
void Prelude_mod__hnf(field root);
void Prelude_mod__0_hnf(field root);
Node* Prelude_mod_RET_hnf(Node* backup);
void Prelude_quot__hnf(field root);
void Prelude_quot__0_hnf(field root);
Node* Prelude_quot_RET_hnf(Node* backup);
void Prelude_rem__hnf(field root);
void Prelude_rem__0_hnf(field root);
Node* Prelude_rem_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__FS_DO__hnf(field root);
void Prelude__FS_DO__0_hnf(field root);
Node* Prelude__FS_DO_RET_hnf(Node* backup);
void Prelude__ST_DO__hnf(field root);
void Prelude__ST_DO__0_hnf(field root);
Node* Prelude__ST_DO_RET_hnf(Node* backup);
void Prelude__MI_DO__hnf(field root);
void Prelude__MI_DO__0_hnf(field root);
Node* Prelude__MI_DO_RET_hnf(Node* backup);
void Prelude__PL_DO__hnf(field root);
void Prelude__PL_DO__0_hnf(field root);
Node* Prelude__PL_DO_RET_hnf(Node* backup);
void Prelude_negateFloat__hnf(field root);
Node* Prelude_negateFloat_RET_hnf(Node* backup);
void Prelude_rem_US__hnf(field root);
void Prelude_rem_US__0_hnf(field root);
Node* Prelude_rem_US_RET_hnf(Node* backup);
void Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_quot_US__hnf(field root);
void Prelude_quot_US__0_hnf(field root);
Node* Prelude_quot_US_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_mod_US__hnf(field root);
void Prelude_mod_US__0_hnf(field root);
Node* Prelude_mod_US_RET_hnf(Node* backup);
void Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_div_US__hnf(field root);
void Prelude_div_US__0_hnf(field root);
Node* Prelude_div_US_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_halve__hnf(field root);
void Prelude_halve__0_hnf(field root);
Node* Prelude_halve_RET_hnf(Node* backup);
void Prelude__ST_DL__hnf(field root);
void Prelude__ST_DL__0_hnf(field root);
Node* Prelude__ST_DL_RET_hnf(Node* backup);
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__MI_DL__hnf(field root);
void Prelude__MI_DL__0_hnf(field root);
Node* Prelude__MI_DL_RET_hnf(Node* backup);
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_0_hnf(field root);
Node* Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_0_hnf(field root);
Node* Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_negate_US__hnf(field root);
void Prelude_negate_US__0_hnf(field root);
Node* Prelude_negate_US_RET_hnf(Node* backup);
void Prelude__PL_DL__hnf(field root);
void Prelude__PL_DL__0_hnf(field root);
Node* Prelude__PL_DL_RET_hnf(Node* backup);
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root);
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root);
Node* Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup);
void Prelude_i2f__hnf(field root);
Node* Prelude_i2f_RET_hnf(Node* backup);
void Prelude_quotRem__hnf(field root);
void Prelude_quotRem__0_hnf(field root);
Node* Prelude_quotRem_RET_hnf(Node* backup);
void Prelude_divMod__hnf(field root);
void Prelude_divMod__0_hnf(field root);
Node* Prelude_divMod_RET_hnf(Node* backup);
void Prelude_recip__hnf(field root);
void Prelude_recip__0_hnf(field root);
Node* Prelude_recip_RET_hnf(Node* backup);
void Prelude__FS__hnf(field root);
void Prelude__FS__0_hnf(field root);
Node* Prelude__FS_RET_hnf(Node* backup);
void Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__hnf(field root);
void Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__0_hnf(field root);
Node* Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_RET_hnf(Node* backup);
void Prelude_fromInt__hnf(field root);
void Prelude_fromInt__0_hnf(field root);
Node* Prelude_fromInt_RET_hnf(Node* backup);
Node* Prelude__USdef_HTrecip_HTPrelude_DOFractional_RET_hnf(Node* backup);
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__hnf(field root);
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__0_hnf(field root);
Node* Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_RET_hnf(Node* backup);
void Prelude_negate__hnf(field root);
void Prelude_negate__0_hnf(field root);
Node* Prelude_negate_RET_hnf(Node* backup);
void Prelude__ST__hnf(field root);
void Prelude__ST__0_hnf(field root);
Node* Prelude__ST_RET_hnf(Node* backup);
Node* Prelude__USdef_HT_FS_HTPrelude_DOFractional_RET_hnf(Node* backup);
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__hnf(field root);
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__0_hnf(field root);
Node* Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_RET_hnf(Node* backup);
void Prelude__MI__hnf(field root);
void Prelude__MI__0_hnf(field root);
Node* Prelude__MI_RET_hnf(Node* backup);
Node* Prelude__USdef_HTnegate_HTPrelude_DONum_RET_hnf(Node* backup);
void Prelude__PL__hnf(field root);
void Prelude__PL__0_hnf(field root);
Node* Prelude__PL_RET_hnf(Node* backup);
Node* Prelude__USdef_HT_MI_HTPrelude_DONum_RET_hnf(Node* backup);
void Prelude__USdef_HTrem_HTPrelude_DOIntegral__hnf(field root);
void Prelude__USdef_HTrem_HTPrelude_DOIntegral__0_hnf(field root);
Node* Prelude__USdef_HTrem_HTPrelude_DOIntegral_RET_hnf(Node* backup);
void Prelude__USdef_HTquot_HTPrelude_DOIntegral__hnf(field root);
void Prelude__USdef_HTquot_HTPrelude_DOIntegral__0_hnf(field root);
Node* Prelude__USdef_HTquot_HTPrelude_DOIntegral_RET_hnf(Node* backup);
void Prelude__USdef_HTmod_HTPrelude_DOIntegral__hnf(field root);
void Prelude__USdef_HTmod_HTPrelude_DOIntegral__0_hnf(field root);
Node* Prelude__USdef_HTmod_HTPrelude_DOIntegral_RET_hnf(Node* backup);
void Prelude__USdef_HTdiv_HTPrelude_DOIntegral__hnf(field root);
void Prelude__USdef_HTdiv_HTPrelude_DOIntegral__0_hnf(field root);
Node* Prelude__USdef_HTdiv_HTPrelude_DOIntegral_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf(field root);
Node* Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf(field root);
void Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0_hnf(field root);
Node* Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf(field root);
void Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__0_hnf(field root);
Node* Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root);
Node* Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root);
Node* Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_hnf(field root);
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_0_1_hnf(field root);
Node* Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_hnf(field root);
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_1_hnf(field root);
Node* Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root);
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root);
Node* Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude_square__hnf(field root);
void Prelude_square__0_hnf(field root);
Node* Prelude_square_RET_hnf(Node* backup);
void Prelude_pow__hnf(field root);
void Prelude_pow__0_hnf(field root);
void Prelude_pow__0_0_0_hnf(field root);
void Prelude_pow__0_0_0_0_hnf(field root);
void Prelude_pow__0_0_1_hnf(field root);
void Prelude_pow__0_0_1_0_hnf(field root);
void Prelude_pow__0_0_1_0_0_hnf(field root);
void Prelude_pow__0_0_1_0_0_0_hnf(field root);
void Prelude_pow__0_0_1_0_0_0_0_hnf(field root);
void Prelude_pow__0_0_1_0_0_0_0_0_hnf(field root);
Node* Prelude_pow_RET_hnf(Node* backup);
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root);
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root);
Node* Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root);
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root);
Node* Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup);
void Prelude_powaux_HTworker__hnf(field root);
void Prelude_powaux_HTworker__0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_hnf(field root);
void Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_0_hnf(field root);
Node* Prelude_powaux_HTworker_RET_hnf(Node* backup);
void Prelude_powaux_HTworker_HTA2__hnf(field root);
void Prelude_powaux_HTworker_HTA2__0_hnf(field root);
Node* Prelude_powaux_HTworker_HTA2_RET_hnf(Node* backup);

static Symbol Prelude_powaux_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux", .hnf = &Prelude_powaux_hnf, .hnf_RET = &Prelude_powaux_RET_hnf};
static Symbol Prelude__USdef_HT_PL_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#+#Prelude.Num", .hnf = &Prelude__USdef_HT_PL_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USdef_HT_PL_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__USdef_HT_ST_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#*#Prelude.Num", .hnf = &Prelude__USdef_HT_ST_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USdef_HT_ST_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__USdef_HTabs_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#abs#Prelude.Num", .hnf = &Prelude__USdef_HTabs_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USdef_HTabs_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__USdef_HTsignum_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#signum#Prelude.Num", .hnf = &Prelude__USdef_HTsignum_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USdef_HTsignum_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__USdef_HTfromInt_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#fromInt#Prelude.Num", .hnf = &Prelude__USdef_HTfromInt_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USdef_HTfromInt_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#fromFloat#Prelude.Fractional", .hnf = &Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_hnf, .hnf_RET = &Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_RET_hnf};
static Symbol Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#divMod#Prelude.Integral", .hnf = &Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_hnf, .hnf_RET = &Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_RET_hnf};
static Symbol Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#quotRem#Prelude.Integral", .hnf = &Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_hnf, .hnf_RET = &Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_RET_hnf};
static Symbol Prelude_abs_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "abs", .hnf = &Prelude_abs_hnf, .hnf_RET = &Prelude_abs_RET_hnf};
static Symbol Prelude_signum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "signum", .hnf = &Prelude_signum_hnf, .hnf_RET = &Prelude_signum_RET_hnf};
static Symbol Prelude_fromFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromFloat", .hnf = &Prelude_fromFloat_hnf, .hnf_RET = &Prelude_fromFloat_RET_hnf};
static Symbol Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Real#Prelude.Num", .hnf = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Real#Prelude.Ord", .hnf = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_hnf, .hnf_RET = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_RET_hnf};
static Symbol Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Integral#Prelude.Real", .hnf = &Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_hnf, .hnf_RET = &Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_RET_hnf};
static Symbol Prelude_div_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "div", .hnf = &Prelude_div_hnf, .hnf_RET = &Prelude_div_RET_hnf};
static Symbol Prelude_mod_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "mod", .hnf = &Prelude_mod_hnf, .hnf_RET = &Prelude_mod_RET_hnf};
static Symbol Prelude_quot_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "quot", .hnf = &Prelude_quot_hnf, .hnf_RET = &Prelude_quot_RET_hnf};
static Symbol Prelude_rem_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "rem", .hnf = &Prelude_rem_hnf, .hnf_RET = &Prelude_rem_RET_hnf};
static Symbol Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromInt#Prelude.Num#Prelude.Int", .hnf = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__FS_DO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "/.", .hnf = &Prelude__FS_DO_hnf, .hnf_RET = &Prelude__FS_DO_RET_hnf};
static Symbol Prelude__ST_DO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "*.", .hnf = &Prelude__ST_DO_hnf, .hnf_RET = &Prelude__ST_DO_RET_hnf};
static Symbol Prelude__MI_DO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "-.", .hnf = &Prelude__MI_DO_hnf, .hnf_RET = &Prelude__MI_DO_RET_hnf};
static Symbol Prelude__PL_DO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "+.", .hnf = &Prelude__PL_DO_hnf, .hnf_RET = &Prelude__PL_DO_RET_hnf};
static Symbol Prelude_negateFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "negateFloat", .hnf = &Prelude_negateFloat_hnf, .hnf_RET = &Prelude_negateFloat_RET_hnf};
static Symbol Prelude_rem_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "rem_", .hnf = &Prelude_rem_US_hnf, .hnf_RET = &Prelude_rem_US_RET_hnf};
static Symbol Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#rem#Prelude.Integral#Prelude.Int", .hnf = &Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_quot_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "quot_", .hnf = &Prelude_quot_US_hnf, .hnf_RET = &Prelude_quot_US_RET_hnf};
static Symbol Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#quotRem#Prelude.Integral#Prelude.Int", .hnf = &Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#quot#Prelude.Integral#Prelude.Int", .hnf = &Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_mod_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "mod_", .hnf = &Prelude_mod_US_hnf, .hnf_RET = &Prelude_mod_US_RET_hnf};
static Symbol Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#mod#Prelude.Integral#Prelude.Int", .hnf = &Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_div_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "div_", .hnf = &Prelude_div_US_hnf, .hnf_RET = &Prelude_div_US_RET_hnf};
static Symbol Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#divMod#Prelude.Integral#Prelude.Int", .hnf = &Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#div#Prelude.Integral#Prelude.Int", .hnf = &Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_halve_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "halve", .hnf = &Prelude_halve_hnf, .hnf_RET = &Prelude_halve_RET_hnf};
static Symbol Prelude__ST_DL_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "*$", .hnf = &Prelude__ST_DL_hnf, .hnf_RET = &Prelude__ST_DL_RET_hnf};
static Symbol Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#*#Prelude.Num#Prelude.Int", .hnf = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__MI_DL_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "-$", .hnf = &Prelude__MI_DL_hnf, .hnf_RET = &Prelude__MI_DL_RET_hnf};
static Symbol Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#negate#Prelude.Num#Prelude.Int", .hnf = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Int", .hnf = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#abs#Prelude.Num#Prelude.Int", .hnf = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#-#Prelude.Num#Prelude.Int", .hnf = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_negate_US_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "negate_", .hnf = &Prelude_negate_US_hnf, .hnf_RET = &Prelude_negate_US_RET_hnf};
static Symbol Prelude__PL_DL_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "+$", .hnf = &Prelude__PL_DL_hnf, .hnf_RET = &Prelude__PL_DL_RET_hnf};
static Symbol Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#+#Prelude.Num#Prelude.Int", .hnf = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Num#Prelude.Int", .hnf = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Real#Prelude.Int", .hnf = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Integral#Prelude.Int", .hnf = &Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude_i2f_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "i2f", .hnf = &Prelude_i2f_hnf, .hnf_RET = &Prelude_i2f_RET_hnf};
static Symbol Prelude_quotRem_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "quotRem", .hnf = &Prelude_quotRem_hnf, .hnf_RET = &Prelude_quotRem_RET_hnf};
static Symbol Prelude_divMod_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "divMod", .hnf = &Prelude_divMod_hnf, .hnf_RET = &Prelude_divMod_RET_hnf};
static Symbol Prelude_recip_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "recip", .hnf = &Prelude_recip_hnf, .hnf_RET = &Prelude_recip_RET_hnf};
static Symbol Prelude__FS_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "/", .hnf = &Prelude__FS_hnf, .hnf_RET = &Prelude__FS_RET_hnf};
static Symbol Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Fractional#Prelude.Num", .hnf = &Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_RET_hnf};
static Symbol Prelude_fromInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromInt", .hnf = &Prelude_fromInt_hnf, .hnf_RET = &Prelude_fromInt_RET_hnf};
static Symbol Prelude__USdef_HTrecip_HTPrelude_DOFractional_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#recip#Prelude.Fractional", .hnf = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_hnf, .hnf_RET = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_RET_hnf};
static Symbol Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#recip#Prelude.Fractional#A0", .hnf = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_hnf, .hnf_RET = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_RET_hnf};
static Symbol Prelude_negate_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "negate", .hnf = &Prelude_negate_hnf, .hnf_RET = &Prelude_negate_RET_hnf};
static Symbol Prelude__ST_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "*", .hnf = &Prelude__ST_hnf, .hnf_RET = &Prelude__ST_RET_hnf};
static Symbol Prelude__USdef_HT_FS_HTPrelude_DOFractional_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#/#Prelude.Fractional", .hnf = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_hnf, .hnf_RET = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_RET_hnf};
static Symbol Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#/#Prelude.Fractional#A1", .hnf = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_hnf, .hnf_RET = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_RET_hnf};
static Symbol Prelude__MI_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "-", .hnf = &Prelude__MI_hnf, .hnf_RET = &Prelude__MI_RET_hnf};
static Symbol Prelude__USdef_HTnegate_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#negate#Prelude.Num", .hnf = &Prelude__USdef_HTnegate_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USdef_HTnegate_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__PL_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "+", .hnf = &Prelude__PL_hnf, .hnf_RET = &Prelude__PL_RET_hnf};
static Symbol Prelude__USdef_HT_MI_HTPrelude_DONum_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#-#Prelude.Num", .hnf = &Prelude__USdef_HT_MI_HTPrelude_DONum_hnf, .hnf_RET = &Prelude__USdef_HT_MI_HTPrelude_DONum_RET_hnf};
static Symbol Prelude__USdef_HTrem_HTPrelude_DOIntegral_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#rem#Prelude.Integral", .hnf = &Prelude__USdef_HTrem_HTPrelude_DOIntegral_hnf, .hnf_RET = &Prelude__USdef_HTrem_HTPrelude_DOIntegral_RET_hnf};
static Symbol Prelude__USdef_HTquot_HTPrelude_DOIntegral_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#quot#Prelude.Integral", .hnf = &Prelude__USdef_HTquot_HTPrelude_DOIntegral_hnf, .hnf_RET = &Prelude__USdef_HTquot_HTPrelude_DOIntegral_RET_hnf};
static Symbol Prelude__USdef_HTmod_HTPrelude_DOIntegral_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#mod#Prelude.Integral", .hnf = &Prelude__USdef_HTmod_HTPrelude_DOIntegral_hnf, .hnf_RET = &Prelude__USdef_HTmod_HTPrelude_DOIntegral_RET_hnf};
static Symbol Prelude__USdef_HTdiv_HTPrelude_DOIntegral_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#div#Prelude.Integral", .hnf = &Prelude__USdef_HTdiv_HTPrelude_DOIntegral_hnf, .hnf_RET = &Prelude__USdef_HTdiv_HTPrelude_DOIntegral_RET_hnf};
static Symbol Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromFloat#Prelude.Fractional#Prelude.Float", .hnf = &Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#/#Prelude.Fractional#Prelude.Float", .hnf = &Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#recip#Prelude.Fractional#Prelude.Float", .hnf = &Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromInt#Prelude.Num#Prelude.Float", .hnf = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#negate#Prelude.Num#Prelude.Float", .hnf = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Float", .hnf = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#abs#Prelude.Num#Prelude.Float", .hnf = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#*#Prelude.Num#Prelude.Float", .hnf = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude_square_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "square", .hnf = &Prelude_square_hnf, .hnf_RET = &Prelude_square_RET_hnf};
static Symbol Prelude_pow_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "pow", .hnf = &Prelude_pow_hnf, .hnf_RET = &Prelude_pow_RET_hnf};
static Symbol Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#-#Prelude.Num#Prelude.Float", .hnf = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#+#Prelude.Num#Prelude.Float", .hnf = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Num#Prelude.Float", .hnf = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Real#Prelude.Float", .hnf = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Fractional#Prelude.Float", .hnf = &Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude_powaux_HTworker_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker", .hnf = &Prelude_powaux_HTworker_hnf, .hnf_RET = &Prelude_powaux_HTworker_RET_hnf};
static Symbol Prelude_powaux_HTworker_HTA2_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "powaux#worker#A2", .hnf = &Prelude_powaux_HTworker_HTA2_hnf, .hnf_RET = &Prelude_powaux_HTworker_HTA2_RET_hnf};
static Symbol Prelude_powaux__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux@[]", .hnf = Prelude_powaux__hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux@[0]", .hnf = Prelude_powaux__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_abs__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "abs@[]", .hnf = Prelude_abs__hnf, .hnf_RET = NULL};
static Symbol Prelude_abs__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "abs@[0]", .hnf = Prelude_abs__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_signum__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "signum@[]", .hnf = Prelude_signum__hnf, .hnf_RET = NULL};
static Symbol Prelude_signum__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "signum@[0]", .hnf = Prelude_signum__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_fromFloat__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromFloat@[]", .hnf = Prelude_fromFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude_fromFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromFloat@[0]", .hnf = Prelude_fromFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Real#Prelude.Num@[]", .hnf = Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Real#Prelude.Num@[0]", .hnf = Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Real#Prelude.Ord@[]", .hnf = Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Real#Prelude.Ord@[0]", .hnf = Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Integral#Prelude.Real@[]", .hnf = Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Integral#Prelude.Real@[0]", .hnf = Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_div__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "div@[]", .hnf = Prelude_div__hnf, .hnf_RET = NULL};
static Symbol Prelude_div__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "div@[0]", .hnf = Prelude_div__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_mod__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "mod@[]", .hnf = Prelude_mod__hnf, .hnf_RET = NULL};
static Symbol Prelude_mod__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "mod@[0]", .hnf = Prelude_mod__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_quot__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "quot@[]", .hnf = Prelude_quot__hnf, .hnf_RET = NULL};
static Symbol Prelude_quot__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "quot@[0]", .hnf = Prelude_quot__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_rem__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "rem@[]", .hnf = Prelude_rem__hnf, .hnf_RET = NULL};
static Symbol Prelude_rem__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "rem@[0]", .hnf = Prelude_rem__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromInt#Prelude.Num#Prelude.Int@[]", .hnf = Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__FS_DO__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "/.@[]", .hnf = Prelude__FS_DO__hnf, .hnf_RET = NULL};
static Symbol Prelude__FS_DO__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "/.@[0]", .hnf = Prelude__FS_DO__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__ST_DO__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "*.@[]", .hnf = Prelude__ST_DO__hnf, .hnf_RET = NULL};
static Symbol Prelude__ST_DO__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "*.@[0]", .hnf = Prelude__ST_DO__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__MI_DO__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "-.@[]", .hnf = Prelude__MI_DO__hnf, .hnf_RET = NULL};
static Symbol Prelude__MI_DO__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "-.@[0]", .hnf = Prelude__MI_DO__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__PL_DO__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "+.@[]", .hnf = Prelude__PL_DO__hnf, .hnf_RET = NULL};
static Symbol Prelude__PL_DO__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "+.@[0]", .hnf = Prelude__PL_DO__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_negateFloat__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "negateFloat@[]", .hnf = Prelude_negateFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude_rem_US__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "rem_@[]", .hnf = Prelude_rem_US__hnf, .hnf_RET = NULL};
static Symbol Prelude_rem_US__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "rem_@[0]", .hnf = Prelude_rem_US__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#rem#Prelude.Integral#Prelude.Int@[]", .hnf = Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#rem#Prelude.Integral#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_quot_US__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "quot_@[]", .hnf = Prelude_quot_US__hnf, .hnf_RET = NULL};
static Symbol Prelude_quot_US__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "quot_@[0]", .hnf = Prelude_quot_US__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#quot#Prelude.Integral#Prelude.Int@[]", .hnf = Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#quot#Prelude.Integral#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_mod_US__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "mod_@[]", .hnf = Prelude_mod_US__hnf, .hnf_RET = NULL};
static Symbol Prelude_mod_US__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "mod_@[0]", .hnf = Prelude_mod_US__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#mod#Prelude.Integral#Prelude.Int@[]", .hnf = Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#mod#Prelude.Integral#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_div_US__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "div_@[]", .hnf = Prelude_div_US__hnf, .hnf_RET = NULL};
static Symbol Prelude_div_US__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "div_@[0]", .hnf = Prelude_div_US__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#div#Prelude.Integral#Prelude.Int@[]", .hnf = Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#div#Prelude.Integral#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_halve__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "halve@[]", .hnf = Prelude_halve__hnf, .hnf_RET = NULL};
static Symbol Prelude_halve__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "halve@[0]", .hnf = Prelude_halve__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__ST_DL__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "*$@[]", .hnf = Prelude__ST_DL__hnf, .hnf_RET = NULL};
static Symbol Prelude__ST_DL__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "*$@[0]", .hnf = Prelude__ST_DL__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#*#Prelude.Num#Prelude.Int@[]", .hnf = Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#*#Prelude.Num#Prelude.Int@[0]", .hnf = Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__MI_DL__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "-$@[]", .hnf = Prelude__MI_DL__hnf, .hnf_RET = NULL};
static Symbol Prelude__MI_DL__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "-$@[0]", .hnf = Prelude__MI_DL__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#negate#Prelude.Num#Prelude.Int@[]", .hnf = Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#negate#Prelude.Num#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Int@[]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#signum#Prelude.Num#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Int@[0,0,0]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#signum#Prelude.Num#Prelude.Int@[0,0,0,0]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Int@[0,0,0,0,0,1]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#signum#Prelude.Num#Prelude.Int@[0,0,0,0,0,1,0]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#abs#Prelude.Num#Prelude.Int@[]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#abs#Prelude.Num#Prelude.Int@[0]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#abs#Prelude.Num#Prelude.Int@[0,0,0]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#abs#Prelude.Num#Prelude.Int@[0,0,1]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#abs#Prelude.Num#Prelude.Int@[0,0,1,0]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#-#Prelude.Num#Prelude.Int@[]", .hnf = Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#-#Prelude.Num#Prelude.Int@[0]", .hnf = Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_negate_US__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "negate_@[]", .hnf = Prelude_negate_US__hnf, .hnf_RET = NULL};
static Symbol Prelude_negate_US__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "negate_@[0]", .hnf = Prelude_negate_US__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__PL_DL__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "+$@[]", .hnf = Prelude__PL_DL__hnf, .hnf_RET = NULL};
static Symbol Prelude__PL_DL__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "+$@[0]", .hnf = Prelude__PL_DL__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#+#Prelude.Num#Prelude.Int@[]", .hnf = Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#+#Prelude.Num#Prelude.Int@[0]", .hnf = Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_i2f__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "i2f@[]", .hnf = Prelude_i2f__hnf, .hnf_RET = NULL};
static Symbol Prelude_quotRem__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "quotRem@[]", .hnf = Prelude_quotRem__hnf, .hnf_RET = NULL};
static Symbol Prelude_quotRem__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "quotRem@[0]", .hnf = Prelude_quotRem__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_divMod__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "divMod@[]", .hnf = Prelude_divMod__hnf, .hnf_RET = NULL};
static Symbol Prelude_divMod__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "divMod@[0]", .hnf = Prelude_divMod__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_recip__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "recip@[]", .hnf = Prelude_recip__hnf, .hnf_RET = NULL};
static Symbol Prelude_recip__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "recip@[0]", .hnf = Prelude_recip__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__FS__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "/@[]", .hnf = Prelude__FS__hnf, .hnf_RET = NULL};
static Symbol Prelude__FS__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "/@[0]", .hnf = Prelude__FS__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Fractional#Prelude.Num@[]", .hnf = Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__hnf, .hnf_RET = NULL};
static Symbol Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_super#Prelude.Fractional#Prelude.Num@[0]", .hnf = Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_fromInt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromInt@[]", .hnf = Prelude_fromInt__hnf, .hnf_RET = NULL};
static Symbol Prelude_fromInt__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fromInt@[0]", .hnf = Prelude_fromInt__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#recip#Prelude.Fractional#A0@[]", .hnf = Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#recip#Prelude.Fractional#A0@[0]", .hnf = Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_negate__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "negate@[]", .hnf = Prelude_negate__hnf, .hnf_RET = NULL};
static Symbol Prelude_negate__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "negate@[0]", .hnf = Prelude_negate__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__ST__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "*@[]", .hnf = Prelude__ST__hnf, .hnf_RET = NULL};
static Symbol Prelude__ST__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "*@[0]", .hnf = Prelude__ST__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#/#Prelude.Fractional#A1@[]", .hnf = Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#/#Prelude.Fractional#A1@[0]", .hnf = Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__MI__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "-@[]", .hnf = Prelude__MI__hnf, .hnf_RET = NULL};
static Symbol Prelude__MI__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "-@[0]", .hnf = Prelude__MI__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__PL__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "+@[]", .hnf = Prelude__PL__hnf, .hnf_RET = NULL};
static Symbol Prelude__PL__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "+@[0]", .hnf = Prelude__PL__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTrem_HTPrelude_DOIntegral__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#rem#Prelude.Integral@[]", .hnf = Prelude__USdef_HTrem_HTPrelude_DOIntegral__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTrem_HTPrelude_DOIntegral__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#rem#Prelude.Integral@[0]", .hnf = Prelude__USdef_HTrem_HTPrelude_DOIntegral__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTquot_HTPrelude_DOIntegral__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#quot#Prelude.Integral@[]", .hnf = Prelude__USdef_HTquot_HTPrelude_DOIntegral__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTquot_HTPrelude_DOIntegral__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#quot#Prelude.Integral@[0]", .hnf = Prelude__USdef_HTquot_HTPrelude_DOIntegral__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTmod_HTPrelude_DOIntegral__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#mod#Prelude.Integral@[]", .hnf = Prelude__USdef_HTmod_HTPrelude_DOIntegral__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTmod_HTPrelude_DOIntegral__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#mod#Prelude.Integral@[0]", .hnf = Prelude__USdef_HTmod_HTPrelude_DOIntegral__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTdiv_HTPrelude_DOIntegral__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#div#Prelude.Integral@[]", .hnf = Prelude__USdef_HTdiv_HTPrelude_DOIntegral__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTdiv_HTPrelude_DOIntegral__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#div#Prelude.Integral@[0]", .hnf = Prelude__USdef_HTdiv_HTPrelude_DOIntegral__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromFloat#Prelude.Fractional#Prelude.Float@[]", .hnf = Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#/#Prelude.Fractional#Prelude.Float@[]", .hnf = Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#/#Prelude.Fractional#Prelude.Float@[0]", .hnf = Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#recip#Prelude.Fractional#Prelude.Float@[]", .hnf = Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#recip#Prelude.Fractional#Prelude.Float@[0]", .hnf = Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fromInt#Prelude.Num#Prelude.Float@[]", .hnf = Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#negate#Prelude.Num#Prelude.Float@[]", .hnf = Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Float@[]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#signum#Prelude.Num#Prelude.Float@[0]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Float@[0,0,0]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#signum#Prelude.Num#Prelude.Float@[0,0,0,0]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#signum#Prelude.Num#Prelude.Float@[0,0,0,0,0,1]", .hnf = Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#abs#Prelude.Num#Prelude.Float@[]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#abs#Prelude.Num#Prelude.Float@[0]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#abs#Prelude.Num#Prelude.Float@[0,0,0]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#abs#Prelude.Num#Prelude.Float@[0,0,1]", .hnf = Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#*#Prelude.Num#Prelude.Float@[]", .hnf = Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#*#Prelude.Num#Prelude.Float@[0]", .hnf = Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_square__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "square@[]", .hnf = Prelude_square__hnf, .hnf_RET = NULL};
static Symbol Prelude_square__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "square@[0]", .hnf = Prelude_square__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "pow@[]", .hnf = Prelude_pow__hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "pow@[0]", .hnf = Prelude_pow__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "pow@[0,0,0]", .hnf = Prelude_pow__0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "pow@[0,0,0,0]", .hnf = Prelude_pow__0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "pow@[0,0,1]", .hnf = Prelude_pow__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "pow@[0,0,1,0]", .hnf = Prelude_pow__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "pow@[0,0,1,0,0]", .hnf = Prelude_pow__0_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "pow@[0,0,1,0,0,0]", .hnf = Prelude_pow__0_0_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_1_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "pow@[0,0,1,0,0,0,0]", .hnf = Prelude_pow__0_0_1_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_pow__0_0_1_0_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "pow@[0,0,1,0,0,0,0,0]", .hnf = Prelude_pow__0_0_1_0_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#-#Prelude.Num#Prelude.Float@[]", .hnf = Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#-#Prelude.Num#Prelude.Float@[0]", .hnf = Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#+#Prelude.Num#Prelude.Float@[]", .hnf = Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#+#Prelude.Num#Prelude.Float@[0]", .hnf = Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[]", .hnf = Prelude_powaux_HTworker__hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "powaux#worker@[0]", .hnf = Prelude_powaux_HTworker__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1]", .hnf = Prelude_powaux_HTworker__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "powaux#worker@[0,0,1,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "powaux#worker@[0,0,1,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "powaux#worker@[0,0,1,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,0,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "powaux#worker@[0,0,1,0,0,0,0,0,0,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,0,0,0,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,1]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,1,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "powaux#worker@[0,0,1,0,0,0,0,1,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "powaux#worker@[0,0,1,0,0,0,0,1,0,0,0]", .hnf = Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker_HTA2__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "powaux#worker#A2@[]", .hnf = Prelude_powaux_HTworker_HTA2__hnf, .hnf_RET = NULL};
static Symbol Prelude_powaux_HTworker_HTA2__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "powaux#worker#A2@[0]", .hnf = Prelude_powaux_HTworker_HTA2__0_hnf, .hnf_RET = NULL};

// powaux
__attribute__((always_inline)) 
static inline void set_Prelude_powaux(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_powaux_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// default for + in Num
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_PL_HTPrelude_DONum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_PL_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for * in Num
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_ST_HTPrelude_DONum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_ST_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for abs in Num
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTabs_HTPrelude_DONum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTabs_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for signum in Num
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTsignum_HTPrelude_DONum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTsignum_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for fromInt in Num
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTfromInt_HTPrelude_DONum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTfromInt_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for fromFloat in Fractional
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTfromFloat_HTPrelude_DOFractional(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for divMod in Integral
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTdivMod_HTPrelude_DOIntegral(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for quotRem in Integral
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTquotRem_HTPrelude_DOIntegral(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// abs
__attribute__((always_inline)) 
static inline void set_Prelude_abs(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_abs_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// signum
__attribute__((always_inline)) 
static inline void set_Prelude_signum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_signum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// fromFloat
__attribute__((always_inline)) 
static inline void set_Prelude_fromFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_fromFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// _super#Prelude.Real#Prelude.Num
__attribute__((always_inline)) 
static inline void set_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// _super#Prelude.Real#Prelude.Ord
__attribute__((always_inline)) 
static inline void set_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// _super#Prelude.Integral#Prelude.Real
__attribute__((always_inline)) 
static inline void set_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// div
__attribute__((always_inline)) 
static inline void set_Prelude_div(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_div_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// mod
__attribute__((always_inline)) 
static inline void set_Prelude_mod(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_mod_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// quot
__attribute__((always_inline)) 
static inline void set_Prelude_quot(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_quot_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// rem
__attribute__((always_inline)) 
static inline void set_Prelude_rem(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_rem_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of fromInt in Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// /.
__attribute__((always_inline)) 
static inline void set_Prelude__FS_DO(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__FS_DO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// *.
__attribute__((always_inline)) 
static inline void set_Prelude__ST_DO(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__ST_DO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// -.
__attribute__((always_inline)) 
static inline void set_Prelude__MI_DO(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__MI_DO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// +.
__attribute__((always_inline)) 
static inline void set_Prelude__PL_DO(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__PL_DO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// negateFloat
__attribute__((always_inline)) 
static inline void set_Prelude_negateFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_negateFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// rem_
__attribute__((always_inline)) 
static inline void set_Prelude_rem_US(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_rem_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of rem in Integral for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// quot_
__attribute__((always_inline)) 
static inline void set_Prelude_quot_US(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_quot_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of quotRem in Integral for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of quot in Integral for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// mod_
__attribute__((always_inline)) 
static inline void set_Prelude_mod_US(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_mod_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of mod in Integral for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// div_
__attribute__((always_inline)) 
static inline void set_Prelude_div_US(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_div_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of divMod in Integral for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of div in Integral for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// halve
__attribute__((always_inline)) 
static inline void set_Prelude_halve(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_halve_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// *$
__attribute__((always_inline)) 
static inline void set_Prelude__ST_DL(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__ST_DL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of * in Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// -$
__attribute__((always_inline)) 
static inline void set_Prelude__MI_DL(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__MI_DL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of negate in Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of signum in Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of abs in Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of - in Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// negate_
__attribute__((always_inline)) 
static inline void set_Prelude_negate_US(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_negate_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// +$
__attribute__((always_inline)) 
static inline void set_Prelude__PL_DL(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__PL_DL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of + in Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// instance of Num for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Real for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Integral for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// i2f
__attribute__((always_inline)) 
static inline void set_Prelude_i2f(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_i2f_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// quotRem
__attribute__((always_inline)) 
static inline void set_Prelude_quotRem(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_quotRem_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// divMod
__attribute__((always_inline)) 
static inline void set_Prelude_divMod(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_divMod_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// recip
__attribute__((always_inline)) 
static inline void set_Prelude_recip(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_recip_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// /
__attribute__((always_inline)) 
static inline void set_Prelude__FS(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__FS_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// _super#Prelude.Fractional#Prelude.Num
__attribute__((always_inline)) 
static inline void set_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// fromInt
__attribute__((always_inline)) 
static inline void set_Prelude_fromInt(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_fromInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for recip in Fractional
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTrecip_HTPrelude_DOFractional(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// default for recip in Fractional
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// negate
__attribute__((always_inline)) 
static inline void set_Prelude_negate(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_negate_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// *
__attribute__((always_inline)) 
static inline void set_Prelude__ST(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__ST_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for / in Fractional
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_FS_HTPrelude_DOFractional(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// default for / in Fractional
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// -
__attribute__((always_inline)) 
static inline void set_Prelude__MI(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__MI_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for negate in Num
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTnegate_HTPrelude_DONum(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTnegate_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// +
__attribute__((always_inline)) 
static inline void set_Prelude__PL(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__PL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for - in Num
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_MI_HTPrelude_DONum(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_MI_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// default for rem in Integral
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTrem_HTPrelude_DOIntegral(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTrem_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// default for quot in Integral
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTquot_HTPrelude_DOIntegral(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTquot_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// default for mod in Integral
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTmod_HTPrelude_DOIntegral(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTmod_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// default for div in Integral
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTdiv_HTPrelude_DOIntegral(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTdiv_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// implementation of fromFloat in Fractional for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of / in Fractional for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of recip in Fractional for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of fromInt in Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of negate in Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of signum in Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of abs in Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat(field root, field v1, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of * in Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// square
__attribute__((always_inline)) 
static inline void set_Prelude_square(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_square_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// pow
__attribute__((always_inline)) 
static inline void set_Prelude_pow(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude_pow_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of - in Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// implementation of + in Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat(field root, field v1, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  child_at(root, 2).n = NULL;
}

// instance of Num for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Real for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Fractional for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// powaux#worker
__attribute__((always_inline)) 
static inline void set_Prelude_powaux_HTworker(field root, field v1, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_powaux_HTworker_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
}

// powaux#worker#A2
__attribute__((always_inline)) 
static inline void set_Prelude_powaux_HTworker_HTA2(field root, field v1, int missing)
{
  root.n->symbol = &Prelude_powaux_HTworker_HTA2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v1;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// powaux
__attribute__((always_inline)) 
static inline field make_Prelude_powaux(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// default for + in Num
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_PL_HTPrelude_DONum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_PL_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for * in Num
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_ST_HTPrelude_DONum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_ST_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for abs in Num
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTabs_HTPrelude_DONum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTabs_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for signum in Num
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTsignum_HTPrelude_DONum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTsignum_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for fromInt in Num
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTfromInt_HTPrelude_DONum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTfromInt_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for fromFloat in Fractional
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTfromFloat_HTPrelude_DOFractional(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for divMod in Integral
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTdivMod_HTPrelude_DOIntegral(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for quotRem in Integral
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTquotRem_HTPrelude_DOIntegral(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// abs
__attribute__((always_inline)) 
static inline field make_Prelude_abs(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_abs_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// signum
__attribute__((always_inline)) 
static inline field make_Prelude_signum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_signum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromFloat
__attribute__((always_inline)) 
static inline field make_Prelude_fromFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Real#Prelude.Num
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Real#Prelude.Ord
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Integral#Prelude.Real
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// div
__attribute__((always_inline)) 
static inline field make_Prelude_div(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_div_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// mod
__attribute__((always_inline)) 
static inline field make_Prelude_mod(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mod_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// quot
__attribute__((always_inline)) 
static inline field make_Prelude_quot(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quot_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// rem
__attribute__((always_inline)) 
static inline field make_Prelude_rem(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_rem_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of fromInt in Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// /.
__attribute__((always_inline)) 
static inline field make_Prelude__FS_DO(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__FS_DO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// *.
__attribute__((always_inline)) 
static inline field make_Prelude__ST_DO(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST_DO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// -.
__attribute__((always_inline)) 
static inline field make_Prelude__MI_DO(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI_DO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// +.
__attribute__((always_inline)) 
static inline field make_Prelude__PL_DO(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_DO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// negateFloat
__attribute__((always_inline)) 
static inline field make_Prelude_negateFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negateFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// rem_
__attribute__((always_inline)) 
static inline field make_Prelude_rem_US(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_rem_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of rem in Integral for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// quot_
__attribute__((always_inline)) 
static inline field make_Prelude_quot_US(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quot_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of quotRem in Integral for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of quot in Integral for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// mod_
__attribute__((always_inline)) 
static inline field make_Prelude_mod_US(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mod_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of mod in Integral for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// div_
__attribute__((always_inline)) 
static inline field make_Prelude_div_US(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_div_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of divMod in Integral for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of div in Integral for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// halve
__attribute__((always_inline)) 
static inline field make_Prelude_halve(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_halve_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// *$
__attribute__((always_inline)) 
static inline field make_Prelude__ST_DL(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST_DL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of * in Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// -$
__attribute__((always_inline)) 
static inline field make_Prelude__MI_DL(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI_DL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of negate in Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of abs in Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of - in Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// negate_
__attribute__((always_inline)) 
static inline field make_Prelude_negate_US(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negate_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// +$
__attribute__((always_inline)) 
static inline field make_Prelude__PL_DL(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_DL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of + in Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// instance of Num for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Real for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Integral for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  return root;
}

// i2f
__attribute__((always_inline)) 
static inline field make_Prelude_i2f(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_i2f_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// quotRem
__attribute__((always_inline)) 
static inline field make_Prelude_quotRem(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quotRem_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// divMod
__attribute__((always_inline)) 
static inline field make_Prelude_divMod(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_divMod_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// recip
__attribute__((always_inline)) 
static inline field make_Prelude_recip(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_recip_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// /
__attribute__((always_inline)) 
static inline field make_Prelude__FS(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__FS_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Fractional#Prelude.Num
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromInt
__attribute__((always_inline)) 
static inline field make_Prelude_fromInt(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for recip in Fractional
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTrecip_HTPrelude_DOFractional(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// default for recip in Fractional
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// negate
__attribute__((always_inline)) 
static inline field make_Prelude_negate(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negate_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// *
__attribute__((always_inline)) 
static inline field make_Prelude__ST(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for / in Fractional
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_FS_HTPrelude_DOFractional(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// default for / in Fractional
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// -
__attribute__((always_inline)) 
static inline field make_Prelude__MI(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for negate in Num
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTnegate_HTPrelude_DONum(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTnegate_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// +
__attribute__((always_inline)) 
static inline field make_Prelude__PL(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for - in Num
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_MI_HTPrelude_DONum(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_MI_HTPrelude_DONum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// default for rem in Integral
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTrem_HTPrelude_DOIntegral(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTrem_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// default for quot in Integral
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTquot_HTPrelude_DOIntegral(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTquot_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// default for mod in Integral
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTmod_HTPrelude_DOIntegral(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTmod_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// default for div in Integral
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTdiv_HTPrelude_DOIntegral_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of fromFloat in Fractional for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of / in Fractional for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of recip in Fractional for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of fromInt in Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of negate in Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of abs in Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of * in Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// square
__attribute__((always_inline)) 
static inline field make_Prelude_square(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_square_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// pow
__attribute__((always_inline)) 
static inline field make_Prelude_pow(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of - in Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of + in Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// instance of Num for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Real for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Fractional for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  return root;
}

// powaux#worker
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker#A2
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker_HTA2(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker_HTA2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// powaux @ []
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// abs @ []
__attribute__((always_inline)) 
static inline field make_Prelude_abs_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_abs__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// abs @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_abs__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_abs__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// signum @ []
__attribute__((always_inline)) 
static inline field make_Prelude_signum_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_signum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// signum @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_signum__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_signum__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromFloat @ []
__attribute__((always_inline)) 
static inline field make_Prelude_fromFloat_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromFloat @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_fromFloat__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Real#Prelude.Num @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Real#Prelude.Num @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Real#Prelude.Ord @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Real#Prelude.Ord @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Integral#Prelude.Real @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Integral#Prelude.Real @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// div @ []
__attribute__((always_inline)) 
static inline field make_Prelude_div_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_div__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// div @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_div__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_div__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// mod @ []
__attribute__((always_inline)) 
static inline field make_Prelude_mod_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mod__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// mod @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_mod__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mod__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// quot @ []
__attribute__((always_inline)) 
static inline field make_Prelude_quot_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quot__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// quot @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_quot__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quot__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// rem @ []
__attribute__((always_inline)) 
static inline field make_Prelude_rem_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_rem__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// rem @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_rem__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_rem__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of fromInt in Num for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// /. @ []
__attribute__((always_inline)) 
static inline field make_Prelude__FS_DO_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__FS_DO__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// /. @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__FS_DO__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__FS_DO__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// *. @ []
__attribute__((always_inline)) 
static inline field make_Prelude__ST_DO_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST_DO__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// *. @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__ST_DO__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST_DO__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// -. @ []
__attribute__((always_inline)) 
static inline field make_Prelude__MI_DO_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI_DO__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// -. @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__MI_DO__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI_DO__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// +. @ []
__attribute__((always_inline)) 
static inline field make_Prelude__PL_DO_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_DO__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// +. @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__PL_DO__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_DO__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// negateFloat @ []
__attribute__((always_inline)) 
static inline field make_Prelude_negateFloat_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negateFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// rem_ @ []
__attribute__((always_inline)) 
static inline field make_Prelude_rem_US_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_rem_US__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// rem_ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_rem_US__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_rem_US__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of rem in Integral for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of rem in Integral for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// quot_ @ []
__attribute__((always_inline)) 
static inline field make_Prelude_quot_US_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quot_US__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// quot_ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_quot_US__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quot_US__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of quot in Integral for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of quot in Integral for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// mod_ @ []
__attribute__((always_inline)) 
static inline field make_Prelude_mod_US_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mod_US__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// mod_ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_mod_US__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mod_US__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of mod in Integral for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of mod in Integral for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// div_ @ []
__attribute__((always_inline)) 
static inline field make_Prelude_div_US_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_div_US__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// div_ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_div_US__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_div_US__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of div in Integral for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of div in Integral for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// halve @ []
__attribute__((always_inline)) 
static inline field make_Prelude_halve_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_halve__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// halve @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_halve__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_halve__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// *$ @ []
__attribute__((always_inline)) 
static inline field make_Prelude__ST_DL_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST_DL__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// *$ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__ST_DL__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST_DL__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of * in Num for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of * in Num for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// -$ @ []
__attribute__((always_inline)) 
static inline field make_Prelude__MI_DL_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI_DL__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// -$ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__MI_DL__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI_DL__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of negate in Num for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of negate in Num for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of signum in Num for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of signum in Num for Int @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Int @ [0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of signum in Num for Int @ [0,0,0,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Int @ [0,0,0,0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of abs in Num for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of abs in Num for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of abs in Num for Int @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of abs in Num for Int @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of abs in Num for Int @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of - in Num for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of - in Num for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// negate_ @ []
__attribute__((always_inline)) 
static inline field make_Prelude_negate_US_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negate_US__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// negate_ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_negate_US__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negate_US__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// +$ @ []
__attribute__((always_inline)) 
static inline field make_Prelude__PL_DL_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_DL__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// +$ @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__PL_DL__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL_DL__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of + in Num for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of + in Num for Int @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// i2f @ []
__attribute__((always_inline)) 
static inline field make_Prelude_i2f_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_i2f__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// quotRem @ []
__attribute__((always_inline)) 
static inline field make_Prelude_quotRem_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quotRem__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// quotRem @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_quotRem__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_quotRem__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// divMod @ []
__attribute__((always_inline)) 
static inline field make_Prelude_divMod_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_divMod__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// divMod @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_divMod__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_divMod__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// recip @ []
__attribute__((always_inline)) 
static inline field make_Prelude_recip_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_recip__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// recip @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_recip__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_recip__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// / @ []
__attribute__((always_inline)) 
static inline field make_Prelude__FS_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__FS__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// / @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__FS__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__FS__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Fractional#Prelude.Num @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// _super#Prelude.Fractional#Prelude.Num @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromInt @ []
__attribute__((always_inline)) 
static inline field make_Prelude_fromInt_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// fromInt @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_fromInt__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fromInt__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for recip in Fractional @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for recip in Fractional @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// negate @ []
__attribute__((always_inline)) 
static inline field make_Prelude_negate_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negate__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// negate @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_negate__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_negate__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// * @ []
__attribute__((always_inline)) 
static inline field make_Prelude__ST_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// * @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__ST__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__ST__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for / in Fractional @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for / in Fractional @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// - @ []
__attribute__((always_inline)) 
static inline field make_Prelude__MI_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// - @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__MI__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__MI__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// + @ []
__attribute__((always_inline)) 
static inline field make_Prelude__PL_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// + @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__PL__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__PL__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for rem in Integral @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTrem_HTPrelude_DOIntegral_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTrem_HTPrelude_DOIntegral__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for rem in Integral @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTrem_HTPrelude_DOIntegral__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTrem_HTPrelude_DOIntegral__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for quot in Integral @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTquot_HTPrelude_DOIntegral_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTquot_HTPrelude_DOIntegral__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for quot in Integral @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTquot_HTPrelude_DOIntegral__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTquot_HTPrelude_DOIntegral__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for mod in Integral @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTmod_HTPrelude_DOIntegral_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTmod_HTPrelude_DOIntegral__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for mod in Integral @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTmod_HTPrelude_DOIntegral__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTmod_HTPrelude_DOIntegral__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for div in Integral @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTdiv_HTPrelude_DOIntegral__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// default for div in Integral @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral__0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTdiv_HTPrelude_DOIntegral__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of fromFloat in Fractional for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of / in Fractional for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of / in Fractional for Float @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of recip in Fractional for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of recip in Fractional for Float @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of fromInt in Num for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of negate in Num for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Float @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// implementation of signum in Num for Float @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of signum in Num for Float @ [0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of signum in Num for Float @ [0,0,0,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of abs in Num for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of abs in Num for Float @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of abs in Num for Float @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of abs in Num for Float @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_1(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// implementation of * in Num for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of * in Num for Float @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// square @ []
__attribute__((always_inline)) 
static inline field make_Prelude_square_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_square__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// square @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_square__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_square__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// pow @ []
__attribute__((always_inline)) 
static inline field make_Prelude_pow_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// pow @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// pow @ [0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// pow @ [0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// pow @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_1(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// pow @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_1_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_1_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// pow @ [0,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_1_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_1_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// pow @ [0,0,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_1_0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_1_0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// pow @ [0,0,1,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_1_0_0_0_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_1_0_0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// pow @ [0,0,1,0,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_pow__0_0_1_0_0_0_0_0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_pow__0_0_1_0_0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of - in Num for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of - in Num for Float @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of + in Num for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// implementation of + in Num for Float @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

// powaux#worker @ []
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker_(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// powaux#worker @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0(field v1, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,0,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,0,0,0,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_0_0_0_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_1(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0(field v1, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = v1;
  return root;
}

// powaux#worker @ [0,0,1,0,0,0,0,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_0(field v1, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker__0_0_1_0_0_0_0_1_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = v1;
  return root;
}

// powaux#worker#A2 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker_HTA2_(field v1, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker_HTA2__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v1;
  return root;
}

// powaux#worker#A2 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_powaux_HTworker_HTA2__0(field v1, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_powaux_HTworker_HTA2__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = v1;
  return root;
}

#endif //PreludeNum_H