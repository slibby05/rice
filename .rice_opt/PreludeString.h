#ifndef PreludeString_H
#define PreludeString_H

#include "runtime.h"
#include "PreludeBase.h"
#include "PreludeCompare.h"
#include "PreludeNum.h"
#include "PreludeList.h"

void Prelude_unlines_hnf(field root);
void Prelude_unlines_HTP0_hnf(field root);
void Prelude_getChar_hnf(field root);
void Prelude_showError_hnf(field root);
void Prelude_showError_HTP4_hnf(field root);
void Prelude_showError_HTP3_hnf(field root);
void Prelude_showError_HTP2_hnf(field root);
void Prelude_showError_HTP1_hnf(field root);
void Prelude_isSpace_hnf(field root);
void Prelude_isSpace_HTP6_hnf(field root);
void Prelude_isSpace_HTP5_hnf(field root);
void Prelude_lex_USlexString_USbuild_hnf(field root);
void Prelude_lex_USlexPMExp_USsgn_hnf(field root);
void Prelude_makeTriple_hnf(field root);
void Prelude_lex_USlexFracExp_USdot_hnf(field root);
void Prelude_lex_USisSym_hnf(field root);
void Prelude_lex_USisSym_HTP7_hnf(field root);
void Prelude_lex_USisSingle_hnf(field root);
void Prelude_lex_USisSingle_HTP8_hnf(field root);
void Prelude_lex_USelse_USfrac_hnf(field root);
void Prelude_lex_USlexDoubleQuote_hnf(field root);
void Prelude_lex_USfilterSingleQuote_hnf(field root);
void Prelude_lex_USlexSingleQuote_hnf(field root);
void Prelude_lex_USlexSingleQuote_HTP9_hnf(field root);
void Prelude_lexLitChar_USlexPrefix_hnf(field root);
void Prelude_lexLitChar_USisAt_hnf(field root);
void Prelude_lexLitChar_USrunEsc_US6_hnf(field root);
void Prelude_showList_hnf(field root);
void Prelude_showsPrec_hnf(field root);
void Prelude_show_hnf(field root);
void Prelude__USdef_HTshowsPrec_HTPrelude_DOShow_hnf(field root);
void Prelude_isOctDigit_hnf(field root);
void Prelude_isBinDigit_hnf(field root);
void Prelude_isDigit_hnf(field root);
void Prelude_isHexDigit_hnf(field root);
void Prelude_lexLitChar_USisCharName_hnf(field root);
void Prelude_lexLitChar_USrunEsc_US5_hnf(field root);
void Prelude_lexLitChar_USrunEsc_US4_hnf(field root);
void Prelude_lexLitChar_USrunEsc_US3_hnf(field root);
void Prelude_lexLitChar_USrunEsc_US2_hnf(field root);
void Prelude_lexLitChar_USrunEsc_US1_hnf(field root);
void Prelude_lexLitChar_USrunEsc_hnf(field root);
void Prelude_lexLitChar_USrunEsc_HTP10_hnf(field root);
void Prelude_lexLitChar_USlexEsc_hnf(field root);
void Prelude_lexLitChar_hnf(field root);
void Prelude_lexLitChar_HTA0_hnf(field root);
void Prelude_lexLitChar_HTP11_hnf(field root);
void Prelude_lex_USlexStrItem_hnf(field root);
void Prelude_lex_USlexStrItem_HTA1_hnf(field root);
void Prelude_lex_USlexStrItem_HTP14_hnf(field root);
void Prelude_lex_USlexStrItem_HTP13_hnf(field root);
void Prelude_lex_USlexStrItem_HTP12_hnf(field root);
void Prelude_lex_USlexString_USstring_hnf(field root);
void Prelude_lex_USlexString_USstring_HTP15_hnf(field root);
void Prelude_isAlphaNum_hnf(field root);
void Prelude_lex_USisIdChar_hnf(field root);
void Prelude_lex_USisIdChar_HTP16_hnf(field root);
void Prelude_nonNull_DO_US_HTlambda452_hnf(field root);
void Prelude_lexDigits_hnf(field root);
void Prelude_lex_USlexPMExp_hnf(field root);
void Prelude_lex_USlexPMExp_HTP20_hnf(field root);
void Prelude_lex_USlexPMExp_HTP19_hnf(field root);
void Prelude_lex_USlexPMExp_HTP18_hnf(field root);
void Prelude_lex_USlexPMExp_HTP17_hnf(field root);
void Prelude_lex_USlexExp_hnf(field root);
void Prelude_lex_USlexFracExp_USexp_hnf(field root);
void Prelude_lex_USlexFracExp_USexp_HTP21_hnf(field root);
void Prelude_lex_USlexFracExp_hnf(field root);
void Prelude_lex_USlexFracExp_HTP23_hnf(field root);
void Prelude_lex_USlexFracExp_HTP22_hnf(field root);
void Prelude_lex_USlexFracExp_HTP22_HTP24_hnf(field root);
void Prelude_lex_hnf(field root);
void Prelude_lex_HTP27_hnf(field root);
void Prelude_lex_HTP26_hnf(field root);
void Prelude_lex_HTP25_hnf(field root);
void Prelude_lex_HTP25_HTP28_hnf(field root);
void Prelude_showChar_hnf(field root);
void Prelude_showParen_hnf(field root);
void Prelude_showParen_HTP29_hnf(field root);
void Prelude_showSigned_hnf(field root);
void Prelude_showSigned_HTA5_hnf(field root);
void Prelude_showSigned_HTA4_hnf(field root);
void Prelude_showSigned_HTA3_hnf(field root);
void Prelude_showSigned_HTA2_hnf(field root);
void Prelude_showSigned_HTP31_hnf(field root);
void Prelude_showSigned_HTP30_hnf(field root);
void Prelude_showString_hnf(field root);
void Prelude_shows_hnf(field root);
void Prelude_showList_SQ_HTP32_hnf(field root);
void Prelude_prim_USshow_hnf(field root);
void Prelude_unwords_DO_US_HTlambda282_hnf(field root);
void Prelude_unwords_DO_US_HTlambda282_HTP33_hnf(field root);
void Prelude_unwords_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_hnf(field root);
void Prelude__USdef_HTshowList_HTPrelude_DOShow_hnf(field root);
void Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49_hnf(field root);
void Prelude__USdef_HTshow_HTPrelude_DOShow_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HT_LB_RB_hnf(field root);
void Prelude_words_hnf(field root);
void Prelude_words_HTP50_hnf(field root);
void Prelude_splitline_hnf(field root);
void Prelude_lines_hnf(field root);
void Prelude_lex_USlexString_hnf(field root);
void Prelude_lex_USlexString_HTP54_hnf(field root);
void Prelude_lex_USlexString_HTP53_hnf(field root);
void Prelude_lex_USlexString_HTP53_HTP55_hnf(field root);
void Prelude_lex_USlexString_HTP52_hnf(field root);
void Prelude_lex_USlexString_HTP51_hnf(field root);
void Prelude_lex_USlexString_HTP51_HTP56_hnf(field root);
void Prelude_lex_USelse_hnf(field root);
void Prelude_lex_USelse_HTP62_hnf(field root);
void Prelude_lex_USelse_HTP61_hnf(field root);
void Prelude_lex_USelse_HTP60_hnf(field root);
void Prelude_lex_USelse_HTP59_hnf(field root);
void Prelude_lex_USelse_HTP58_hnf(field root);
void Prelude_lex_USelse_HTP57_hnf(field root);
void Prelude_showList_SQ_DOshowl_DO429_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB_hnf(field root);
Node* Prelude_unlines_RET_hnf(Node* backup);
Node* Prelude_unlines_HTP0_RET_hnf(Node* backup);
Node* Prelude_getChar_RET_hnf(Node* backup);
void Prelude_showError__hnf(field root);
Node* Prelude_showError_RET_hnf(Node* backup);
Node* Prelude_showError_HTP4_RET_hnf(Node* backup);
Node* Prelude_showError_HTP3_RET_hnf(Node* backup);
Node* Prelude_showError_HTP2_RET_hnf(Node* backup);
Node* Prelude_showError_HTP1_RET_hnf(Node* backup);
void Prelude_isSpace__hnf(field root);
Node* Prelude_isSpace_RET_hnf(Node* backup);
void Prelude_isSpace_HTP6__hnf(field root);
void Prelude_isSpace_HTP6__0_hnf(field root);
void Prelude_isSpace_HTP6__0_0_1_hnf(field root);
Node* Prelude_isSpace_HTP6_RET_hnf(Node* backup);
void Prelude_isSpace_HTP5__hnf(field root);
void Prelude_isSpace_HTP5__0_hnf(field root);
void Prelude_isSpace_HTP5__0_0_1_hnf(field root);
Node* Prelude_isSpace_HTP5_RET_hnf(Node* backup);
void Prelude_lex_USlexString_USbuild__hnf(field root);
Node* Prelude_lex_USlexString_USbuild_RET_hnf(Node* backup);
void Prelude_lex_USlexPMExp_USsgn__hnf(field root);
Node* Prelude_lex_USlexPMExp_USsgn_RET_hnf(Node* backup);
void Prelude_makeTriple__hnf(field root);
Node* Prelude_makeTriple_RET_hnf(Node* backup);
void Prelude_lex_USlexFracExp_USdot__hnf(field root);
Node* Prelude_lex_USlexFracExp_USdot_RET_hnf(Node* backup);
Node* Prelude_lex_USisSym_RET_hnf(Node* backup);
void Prelude_lex_USisSym_HTP7__hnf(field root);
void Prelude_lex_USisSym_HTP7__0_hnf(field root);
void Prelude_lex_USisSym_HTP7__0_0_1_hnf(field root);
Node* Prelude_lex_USisSym_HTP7_RET_hnf(Node* backup);
Node* Prelude_lex_USisSingle_RET_hnf(Node* backup);
void Prelude_lex_USisSingle_HTP8__hnf(field root);
void Prelude_lex_USisSingle_HTP8__0_hnf(field root);
void Prelude_lex_USisSingle_HTP8__0_0_1_hnf(field root);
Node* Prelude_lex_USisSingle_HTP8_RET_hnf(Node* backup);
void Prelude_lex_USelse_USfrac__hnf(field root);
Node* Prelude_lex_USelse_USfrac_RET_hnf(Node* backup);
void Prelude_lex_USlexDoubleQuote__hnf(field root);
Node* Prelude_lex_USlexDoubleQuote_RET_hnf(Node* backup);
void Prelude_lex_USfilterSingleQuote__hnf(field root);
void Prelude_lex_USfilterSingleQuote__0_hnf(field root);
void Prelude_lex_USfilterSingleQuote__0_1_hnf(field root);
void Prelude_lex_USfilterSingleQuote__0_1_0_0_hnf(field root);
Node* Prelude_lex_USfilterSingleQuote_RET_hnf(Node* backup);
void Prelude_lex_USlexSingleQuote__hnf(field root);
void Prelude_lex_USlexSingleQuote__0_hnf(field root);
Node* Prelude_lex_USlexSingleQuote_RET_hnf(Node* backup);
Node* Prelude_lex_USlexSingleQuote_HTP9_RET_hnf(Node* backup);
void Prelude_lexLitChar_USlexPrefix__hnf(field root);
Node* Prelude_lexLitChar_USlexPrefix_RET_hnf(Node* backup);
void Prelude_lexLitChar_USisAt__hnf(field root);
void Prelude_lexLitChar_USisAt__1_hnf(field root);
Node* Prelude_lexLitChar_USisAt_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc_US6__hnf(field root);
void Prelude_lexLitChar_USrunEsc_US6__0_0_hnf(field root);
void Prelude_lexLitChar_USrunEsc_US6__0_0_1_hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_US6_RET_hnf(Node* backup);
void Prelude_showList__hnf(field root);
void Prelude_showList__0_hnf(field root);
Node* Prelude_showList_RET_hnf(Node* backup);
void Prelude_showsPrec__hnf(field root);
void Prelude_showsPrec__0_hnf(field root);
Node* Prelude_showsPrec_RET_hnf(Node* backup);
void Prelude_show__hnf(field root);
void Prelude_show__0_hnf(field root);
Node* Prelude_show_RET_hnf(Node* backup);
Node* Prelude__USdef_HTshowsPrec_HTPrelude_DOShow_RET_hnf(Node* backup);
void Prelude_isOctDigit__hnf(field root);
Node* Prelude_isOctDigit_RET_hnf(Node* backup);
void Prelude_isBinDigit__hnf(field root);
Node* Prelude_isBinDigit_RET_hnf(Node* backup);
void Prelude_isDigit__hnf(field root);
Node* Prelude_isDigit_RET_hnf(Node* backup);
void Prelude_isHexDigit__hnf(field root);
Node* Prelude_isHexDigit_RET_hnf(Node* backup);
void Prelude_lexLitChar_USisCharName__hnf(field root);
Node* Prelude_lexLitChar_USisCharName_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc_US5__hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_US5_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc_US4__hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_US4_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc_US3__hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_US3_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc_US2__hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_US2_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc_US1__hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_US1_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc__hnf(field root);
void Prelude_lexLitChar_USrunEsc__1_hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_RET_hnf(Node* backup);
void Prelude_lexLitChar_USrunEsc_HTP10__hnf(field root);
void Prelude_lexLitChar_USrunEsc_HTP10__0_hnf(field root);
void Prelude_lexLitChar_USrunEsc_HTP10__0_0_1_hnf(field root);
Node* Prelude_lexLitChar_USrunEsc_HTP10_RET_hnf(Node* backup);
void Prelude_lexLitChar_USlexEsc__hnf(field root);
Node* Prelude_lexLitChar_USlexEsc_RET_hnf(Node* backup);
void Prelude_lexLitChar__hnf(field root);
void Prelude_lexLitChar__1_hnf(field root);
Node* Prelude_lexLitChar_RET_hnf(Node* backup);
void Prelude_lexLitChar_HTA0__hnf(field root);
Node* Prelude_lexLitChar_HTA0_RET_hnf(Node* backup);
Node* Prelude_lexLitChar_HTP11_RET_hnf(Node* backup);
void Prelude_lex_USlexStrItem__hnf(field root);
void Prelude_lex_USlexStrItem__1_hnf(field root);
void Prelude_lex_USlexStrItem__1_0_0_hnf(field root);
void Prelude_lex_USlexStrItem__1_0_0_1_hnf(field root);
void Prelude_lex_USlexStrItem__1_0_0_1_0_1_hnf(field root);
void Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_hnf(field root);
void Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_1_hnf(field root);
Node* Prelude_lex_USlexStrItem_RET_hnf(Node* backup);
void Prelude_lex_USlexStrItem_HTA1__hnf(field root);
Node* Prelude_lex_USlexStrItem_HTA1_RET_hnf(Node* backup);
Node* Prelude_lex_USlexStrItem_HTP14_RET_hnf(Node* backup);
Node* Prelude_lex_USlexStrItem_HTP13_RET_hnf(Node* backup);
Node* Prelude_lex_USlexStrItem_HTP12_RET_hnf(Node* backup);
void Prelude_lex_USlexString_USstring__hnf(field root);
Node* Prelude_lex_USlexString_USstring_RET_hnf(Node* backup);
Node* Prelude_lex_USlexString_USstring_HTP15_RET_hnf(Node* backup);
void Prelude_isAlphaNum__hnf(field root);
Node* Prelude_isAlphaNum_RET_hnf(Node* backup);
void Prelude_lex_USisIdChar__hnf(field root);
Node* Prelude_lex_USisIdChar_RET_hnf(Node* backup);
void Prelude_lex_USisIdChar_HTP16__hnf(field root);
void Prelude_lex_USisIdChar_HTP16__0_hnf(field root);
void Prelude_lex_USisIdChar_HTP16__0_0_1_hnf(field root);
Node* Prelude_lex_USisIdChar_HTP16_RET_hnf(Node* backup);
void Prelude_nonNull_DO_US_HTlambda452__hnf(field root);
void Prelude_nonNull_DO_US_HTlambda452__0_hnf(field root);
void Prelude_nonNull_DO_US_HTlambda452__0_0_hnf(field root);
Node* Prelude_nonNull_DO_US_HTlambda452_RET_hnf(Node* backup);
Node* Prelude_lexDigits_RET_hnf(Node* backup);
void Prelude_lex_USlexPMExp__hnf(field root);
void Prelude_lex_USlexPMExp__1_hnf(field root);
Node* Prelude_lex_USlexPMExp_RET_hnf(Node* backup);
Node* Prelude_lex_USlexPMExp_HTP20_RET_hnf(Node* backup);
Node* Prelude_lex_USlexPMExp_HTP19_RET_hnf(Node* backup);
Node* Prelude_lex_USlexPMExp_HTP18_RET_hnf(Node* backup);
Node* Prelude_lex_USlexPMExp_HTP17_RET_hnf(Node* backup);
void Prelude_lex_USlexExp__hnf(field root);
void Prelude_lex_USlexExp__1_hnf(field root);
Node* Prelude_lex_USlexExp_RET_hnf(Node* backup);
void Prelude_lex_USlexFracExp_USexp__hnf(field root);
Node* Prelude_lex_USlexFracExp_USexp_RET_hnf(Node* backup);
Node* Prelude_lex_USlexFracExp_USexp_HTP21_RET_hnf(Node* backup);
void Prelude_lex_USlexFracExp__hnf(field root);
void Prelude_lex_USlexFracExp__1_hnf(field root);
void Prelude_lex_USlexFracExp__1_0_0_hnf(field root);
void Prelude_lex_USlexFracExp__1_0_0_1_hnf(field root);
Node* Prelude_lex_USlexFracExp_RET_hnf(Node* backup);
void Prelude_lex_USlexFracExp_HTP23__hnf(field root);
Node* Prelude_lex_USlexFracExp_HTP23_RET_hnf(Node* backup);
Node* Prelude_lex_USlexFracExp_HTP22_RET_hnf(Node* backup);
Node* Prelude_lex_USlexFracExp_HTP22_HTP24_RET_hnf(Node* backup);
void Prelude_lex__hnf(field root);
void Prelude_lex__1_hnf(field root);
Node* Prelude_lex_RET_hnf(Node* backup);
Node* Prelude_lex_HTP27_RET_hnf(Node* backup);
void Prelude_lex_HTP26__hnf(field root);
Node* Prelude_lex_HTP26_RET_hnf(Node* backup);
void Prelude_lex_HTP25__hnf(field root);
void Prelude_lex_HTP25__0_hnf(field root);
void Prelude_lex_HTP25__0_0_hnf(field root);
void Prelude_lex_HTP25__0_1_hnf(field root);
void Prelude_lex_HTP25__0_1_0_0_hnf(field root);
void Prelude_lex_HTP25__0_1_0_0_0_hnf(field root);
void Prelude_lex_HTP25__0_1_0_1_hnf(field root);
Node* Prelude_lex_HTP25_RET_hnf(Node* backup);
Node* Prelude_lex_HTP25_HTP28_RET_hnf(Node* backup);
Node* Prelude_showChar_RET_hnf(Node* backup);
void Prelude_showParen__hnf(field root);
void Prelude_showParen__1_hnf(field root);
Node* Prelude_showParen_RET_hnf(Node* backup);
Node* Prelude_showParen_HTP29_RET_hnf(Node* backup);
void Prelude_showSigned__hnf(field root);
void Prelude_showSigned__0_hnf(field root);
Node* Prelude_showSigned_RET_hnf(Node* backup);
void Prelude_showSigned_HTA5__hnf(field root);
void Prelude_showSigned_HTA5__0_hnf(field root);
Node* Prelude_showSigned_HTA5_RET_hnf(Node* backup);
void Prelude_showSigned_HTA4__hnf(field root);
void Prelude_showSigned_HTA4__0_hnf(field root);
Node* Prelude_showSigned_HTA4_RET_hnf(Node* backup);
void Prelude_showSigned_HTA3__hnf(field root);
void Prelude_showSigned_HTA3__0_hnf(field root);
Node* Prelude_showSigned_HTA3_RET_hnf(Node* backup);
void Prelude_showSigned_HTA2__hnf(field root);
void Prelude_showSigned_HTA2__0_hnf(field root);
Node* Prelude_showSigned_HTA2_RET_hnf(Node* backup);
Node* Prelude_showSigned_HTP31_RET_hnf(Node* backup);
Node* Prelude_showSigned_HTP30_RET_hnf(Node* backup);
Node* Prelude_showString_RET_hnf(Node* backup);
Node* Prelude_shows_RET_hnf(Node* backup);
Node* Prelude_showList_SQ_HTP32_RET_hnf(Node* backup);
Node* Prelude_prim_USshow_RET_hnf(Node* backup);
Node* Prelude_unwords_DO_US_HTlambda282_RET_hnf(Node* backup);
Node* Prelude_unwords_DO_US_HTlambda282_HTP33_RET_hnf(Node* backup);
void Prelude_unwords__hnf(field root);
Node* Prelude_unwords_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__0_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__1_hnf(field root);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__1_hnf(field root);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__0_hnf(field root);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USdef_HTshowList_HTPrelude_DOShow__hnf(field root);
Node* Prelude__USdef_HTshowList_HTPrelude_DOShow_RET_hnf(Node* backup);
Node* Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49_RET_hnf(Node* backup);
Node* Prelude__USdef_HTshow_HTPrelude_DOShow_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HT_LB_RB_RET_hnf(Node* backup);
void Prelude_words__hnf(field root);
void Prelude_words__1_hnf(field root);
Node* Prelude_words_RET_hnf(Node* backup);
void Prelude_words_HTP50__hnf(field root);
Node* Prelude_words_HTP50_RET_hnf(Node* backup);
void Prelude_splitline__hnf(field root);
void Prelude_splitline__1_hnf(field root);
void Prelude_splitline__1_0_1_hnf(field root);
Node* Prelude_splitline_RET_hnf(Node* backup);
void Prelude_lines__hnf(field root);
void Prelude_lines__1_hnf(field root);
Node* Prelude_lines_RET_hnf(Node* backup);
void Prelude_lex_USlexString__hnf(field root);
void Prelude_lex_USlexString__1_hnf(field root);
Node* Prelude_lex_USlexString_RET_hnf(Node* backup);
void Prelude_lex_USlexString_HTP54__hnf(field root);
Node* Prelude_lex_USlexString_HTP54_RET_hnf(Node* backup);
Node* Prelude_lex_USlexString_HTP53_RET_hnf(Node* backup);
Node* Prelude_lex_USlexString_HTP53_HTP55_RET_hnf(Node* backup);
void Prelude_lex_USlexString_HTP52__hnf(field root);
Node* Prelude_lex_USlexString_HTP52_RET_hnf(Node* backup);
Node* Prelude_lex_USlexString_HTP51_RET_hnf(Node* backup);
Node* Prelude_lex_USlexString_HTP51_HTP56_RET_hnf(Node* backup);
void Prelude_lex_USelse__hnf(field root);
void Prelude_lex_USelse__1_hnf(field root);
void Prelude_lex_USelse__1_1_hnf(field root);
void Prelude_lex_USelse__1_1_0_hnf(field root);
void Prelude_lex_USelse__1_1_1_hnf(field root);
void Prelude_lex_USelse__1_1_1_0_0_0_hnf(field root);
void Prelude_lex_USelse__1_1_1_0_0_1_0_0_hnf(field root);
void Prelude_lex_USelse__1_1_1_0_0_1_0_1_0_0_hnf(field root);
void Prelude_lex_USelse__1_1_1_0_0_1_1_0_0_hnf(field root);
void Prelude_lex_USelse__1_1_1_0_1_0_0_hnf(field root);
void Prelude_lex_USelse__1_1_1_0_1_0_1_0_0_hnf(field root);
void Prelude_lex_USelse__1_1_1_0_1_1_0_0_hnf(field root);
Node* Prelude_lex_USelse_RET_hnf(Node* backup);
void Prelude_lex_USelse_HTP62__hnf(field root);
void Prelude_lex_USelse_HTP62__0_hnf(field root);
void Prelude_lex_USelse_HTP62__0_0_1_hnf(field root);
Node* Prelude_lex_USelse_HTP62_RET_hnf(Node* backup);
void Prelude_lex_USelse_HTP61__hnf(field root);
void Prelude_lex_USelse_HTP61__0_hnf(field root);
void Prelude_lex_USelse_HTP61__0_0_1_hnf(field root);
Node* Prelude_lex_USelse_HTP61_RET_hnf(Node* backup);
Node* Prelude_lex_USelse_HTP60_RET_hnf(Node* backup);
Node* Prelude_lex_USelse_HTP59_RET_hnf(Node* backup);
Node* Prelude_lex_USelse_HTP58_RET_hnf(Node* backup);
Node* Prelude_lex_USelse_HTP57_RET_hnf(Node* backup);
void Prelude_showList_SQ_DOshowl_DO429__hnf(field root);
Node* Prelude_showList_SQ_DOshowl_DO429_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB_RET_hnf(Node* backup);

static Symbol Prelude_unlines_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "unlines", .hnf = &Prelude_unlines_hnf, .hnf_RET = &Prelude_unlines_RET_hnf};
static Symbol Prelude_unlines_HTP0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "unlines#P0", .hnf = &Prelude_unlines_HTP0_hnf, .hnf_RET = &Prelude_unlines_HTP0_RET_hnf};
static Symbol Prelude_getChar_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "getChar", .hnf = &Prelude_getChar_hnf, .hnf_RET = &Prelude_getChar_RET_hnf};
static Symbol Prelude_showError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showError", .hnf = &Prelude_showError_hnf, .hnf_RET = &Prelude_showError_RET_hnf};
static Symbol Prelude_showError_HTP4_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "showError#P4", .hnf = &Prelude_showError_HTP4_hnf, .hnf_RET = &Prelude_showError_HTP4_RET_hnf};
static Symbol Prelude_showError_HTP3_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "showError#P3", .hnf = &Prelude_showError_HTP3_hnf, .hnf_RET = &Prelude_showError_HTP3_RET_hnf};
static Symbol Prelude_showError_HTP2_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "showError#P2", .hnf = &Prelude_showError_HTP2_hnf, .hnf_RET = &Prelude_showError_HTP2_RET_hnf};
static Symbol Prelude_showError_HTP1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "showError#P1", .hnf = &Prelude_showError_HTP1_hnf, .hnf_RET = &Prelude_showError_HTP1_RET_hnf};
static Symbol Prelude_isSpace_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isSpace", .hnf = &Prelude_isSpace_hnf, .hnf_RET = &Prelude_isSpace_RET_hnf};
static Symbol Prelude_isSpace_HTP6_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "isSpace#P6", .hnf = &Prelude_isSpace_HTP6_hnf, .hnf_RET = &Prelude_isSpace_HTP6_RET_hnf};
static Symbol Prelude_isSpace_HTP5_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "isSpace#P5", .hnf = &Prelude_isSpace_HTP5_hnf, .hnf_RET = &Prelude_isSpace_HTP5_RET_hnf};
static Symbol Prelude_lex_USlexString_USbuild_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString_build", .hnf = &Prelude_lex_USlexString_USbuild_hnf, .hnf_RET = &Prelude_lex_USlexString_USbuild_RET_hnf};
static Symbol Prelude_lex_USlexPMExp_USsgn_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexPMExp_sgn", .hnf = &Prelude_lex_USlexPMExp_USsgn_hnf, .hnf_RET = &Prelude_lex_USlexPMExp_USsgn_RET_hnf};
static Symbol Prelude_makeTriple_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "makeTriple", .hnf = &Prelude_makeTriple_hnf, .hnf_RET = &Prelude_makeTriple_RET_hnf};
static Symbol Prelude_lex_USlexFracExp_USdot_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp_dot", .hnf = &Prelude_lex_USlexFracExp_USdot_hnf, .hnf_RET = &Prelude_lex_USlexFracExp_USdot_RET_hnf};
static Symbol Prelude_lex_USisSym_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_isSym", .hnf = &Prelude_lex_USisSym_hnf, .hnf_RET = &Prelude_lex_USisSym_RET_hnf};
static Symbol Prelude_lex_USisSym_HTP7_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isSym#P7", .hnf = &Prelude_lex_USisSym_HTP7_hnf, .hnf_RET = &Prelude_lex_USisSym_HTP7_RET_hnf};
static Symbol Prelude_lex_USisSingle_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_isSingle", .hnf = &Prelude_lex_USisSingle_hnf, .hnf_RET = &Prelude_lex_USisSingle_RET_hnf};
static Symbol Prelude_lex_USisSingle_HTP8_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isSingle#P8", .hnf = &Prelude_lex_USisSingle_HTP8_hnf, .hnf_RET = &Prelude_lex_USisSingle_HTP8_RET_hnf};
static Symbol Prelude_lex_USelse_USfrac_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else_frac", .hnf = &Prelude_lex_USelse_USfrac_hnf, .hnf_RET = &Prelude_lex_USelse_USfrac_RET_hnf};
static Symbol Prelude_lex_USlexDoubleQuote_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexDoubleQuote", .hnf = &Prelude_lex_USlexDoubleQuote_hnf, .hnf_RET = &Prelude_lex_USlexDoubleQuote_RET_hnf};
static Symbol Prelude_lex_USfilterSingleQuote_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_filterSingleQuote", .hnf = &Prelude_lex_USfilterSingleQuote_hnf, .hnf_RET = &Prelude_lex_USfilterSingleQuote_RET_hnf};
static Symbol Prelude_lex_USlexSingleQuote_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexSingleQuote", .hnf = &Prelude_lex_USlexSingleQuote_hnf, .hnf_RET = &Prelude_lex_USlexSingleQuote_RET_hnf};
static Symbol Prelude_lex_USlexSingleQuote_HTP9_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexSingleQuote#P9", .hnf = &Prelude_lex_USlexSingleQuote_HTP9_hnf, .hnf_RET = &Prelude_lex_USlexSingleQuote_HTP9_RET_hnf};
static Symbol Prelude_lexLitChar_USlexPrefix_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_lexPrefix", .hnf = &Prelude_lexLitChar_USlexPrefix_hnf, .hnf_RET = &Prelude_lexLitChar_USlexPrefix_RET_hnf};
static Symbol Prelude_lexLitChar_USisAt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_isAt", .hnf = &Prelude_lexLitChar_USisAt_hnf, .hnf_RET = &Prelude_lexLitChar_USisAt_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_US6_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_6", .hnf = &Prelude_lexLitChar_USrunEsc_US6_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_US6_RET_hnf};
static Symbol Prelude_showList_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showList", .hnf = &Prelude_showList_hnf, .hnf_RET = &Prelude_showList_RET_hnf};
static Symbol Prelude_showsPrec_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showsPrec", .hnf = &Prelude_showsPrec_hnf, .hnf_RET = &Prelude_showsPrec_RET_hnf};
static Symbol Prelude_show_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "show", .hnf = &Prelude_show_hnf, .hnf_RET = &Prelude_show_RET_hnf};
static Symbol Prelude__USdef_HTshowsPrec_HTPrelude_DOShow_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_def#showsPrec#Prelude.Show", .hnf = &Prelude__USdef_HTshowsPrec_HTPrelude_DOShow_hnf, .hnf_RET = &Prelude__USdef_HTshowsPrec_HTPrelude_DOShow_RET_hnf};
static Symbol Prelude_isOctDigit_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isOctDigit", .hnf = &Prelude_isOctDigit_hnf, .hnf_RET = &Prelude_isOctDigit_RET_hnf};
static Symbol Prelude_isBinDigit_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isBinDigit", .hnf = &Prelude_isBinDigit_hnf, .hnf_RET = &Prelude_isBinDigit_RET_hnf};
static Symbol Prelude_isDigit_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isDigit", .hnf = &Prelude_isDigit_hnf, .hnf_RET = &Prelude_isDigit_RET_hnf};
static Symbol Prelude_isHexDigit_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isHexDigit", .hnf = &Prelude_isHexDigit_hnf, .hnf_RET = &Prelude_isHexDigit_RET_hnf};
static Symbol Prelude_lexLitChar_USisCharName_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_isCharName", .hnf = &Prelude_lexLitChar_USisCharName_hnf, .hnf_RET = &Prelude_lexLitChar_USisCharName_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_US5_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_5", .hnf = &Prelude_lexLitChar_USrunEsc_US5_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_US5_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_US4_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_4", .hnf = &Prelude_lexLitChar_USrunEsc_US4_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_US4_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_US3_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_3", .hnf = &Prelude_lexLitChar_USrunEsc_US3_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_US3_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_US2_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_2", .hnf = &Prelude_lexLitChar_USrunEsc_US2_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_US2_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_US1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_1", .hnf = &Prelude_lexLitChar_USrunEsc_US1_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_US1_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc", .hnf = &Prelude_lexLitChar_USrunEsc_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_RET_hnf};
static Symbol Prelude_lexLitChar_USrunEsc_HTP10_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lexLitChar_runEsc#P10", .hnf = &Prelude_lexLitChar_USrunEsc_HTP10_hnf, .hnf_RET = &Prelude_lexLitChar_USrunEsc_HTP10_RET_hnf};
static Symbol Prelude_lexLitChar_USlexEsc_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_lexEsc", .hnf = &Prelude_lexLitChar_USlexEsc_hnf, .hnf_RET = &Prelude_lexLitChar_USlexEsc_RET_hnf};
static Symbol Prelude_lexLitChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar", .hnf = &Prelude_lexLitChar_hnf, .hnf_RET = &Prelude_lexLitChar_RET_hnf};
static Symbol Prelude_lexLitChar_HTA0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar#A0", .hnf = &Prelude_lexLitChar_HTA0_hnf, .hnf_RET = &Prelude_lexLitChar_HTA0_RET_hnf};
static Symbol Prelude_lexLitChar_HTP11_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lexLitChar#P11", .hnf = &Prelude_lexLitChar_HTP11_hnf, .hnf_RET = &Prelude_lexLitChar_HTP11_RET_hnf};
static Symbol Prelude_lex_USlexStrItem_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexStrItem", .hnf = &Prelude_lex_USlexStrItem_hnf, .hnf_RET = &Prelude_lex_USlexStrItem_RET_hnf};
static Symbol Prelude_lex_USlexStrItem_HTA1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexStrItem#A1", .hnf = &Prelude_lex_USlexStrItem_HTA1_hnf, .hnf_RET = &Prelude_lex_USlexStrItem_HTA1_RET_hnf};
static Symbol Prelude_lex_USlexStrItem_HTP14_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexStrItem#P14", .hnf = &Prelude_lex_USlexStrItem_HTP14_hnf, .hnf_RET = &Prelude_lex_USlexStrItem_HTP14_RET_hnf};
static Symbol Prelude_lex_USlexStrItem_HTP13_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexStrItem#P13", .hnf = &Prelude_lex_USlexStrItem_HTP13_hnf, .hnf_RET = &Prelude_lex_USlexStrItem_HTP13_RET_hnf};
static Symbol Prelude_lex_USlexStrItem_HTP12_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexStrItem#P12", .hnf = &Prelude_lex_USlexStrItem_HTP12_hnf, .hnf_RET = &Prelude_lex_USlexStrItem_HTP12_RET_hnf};
static Symbol Prelude_lex_USlexString_USstring_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString_string", .hnf = &Prelude_lex_USlexString_USstring_hnf, .hnf_RET = &Prelude_lex_USlexString_USstring_RET_hnf};
static Symbol Prelude_lex_USlexString_USstring_HTP15_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex_lexString_string#P15", .hnf = &Prelude_lex_USlexString_USstring_HTP15_hnf, .hnf_RET = &Prelude_lex_USlexString_USstring_HTP15_RET_hnf};
static Symbol Prelude_isAlphaNum_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isAlphaNum", .hnf = &Prelude_isAlphaNum_hnf, .hnf_RET = &Prelude_isAlphaNum_RET_hnf};
static Symbol Prelude_lex_USisIdChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_isIdChar", .hnf = &Prelude_lex_USisIdChar_hnf, .hnf_RET = &Prelude_lex_USisIdChar_RET_hnf};
static Symbol Prelude_lex_USisIdChar_HTP16_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isIdChar#P16", .hnf = &Prelude_lex_USisIdChar_HTP16_hnf, .hnf_RET = &Prelude_lex_USisIdChar_HTP16_RET_hnf};
static Symbol Prelude_nonNull_DO_US_HTlambda452_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "nonNull._#lambda452", .hnf = &Prelude_nonNull_DO_US_HTlambda452_hnf, .hnf_RET = &Prelude_nonNull_DO_US_HTlambda452_RET_hnf};
static Symbol Prelude_lexDigits_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexDigits", .hnf = &Prelude_lexDigits_hnf, .hnf_RET = &Prelude_lexDigits_RET_hnf};
static Symbol Prelude_lex_USlexPMExp_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexPMExp", .hnf = &Prelude_lex_USlexPMExp_hnf, .hnf_RET = &Prelude_lex_USlexPMExp_RET_hnf};
static Symbol Prelude_lex_USlexPMExp_HTP20_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex_lexPMExp#P20", .hnf = &Prelude_lex_USlexPMExp_HTP20_hnf, .hnf_RET = &Prelude_lex_USlexPMExp_HTP20_RET_hnf};
static Symbol Prelude_lex_USlexPMExp_HTP19_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex_lexPMExp#P19", .hnf = &Prelude_lex_USlexPMExp_HTP19_hnf, .hnf_RET = &Prelude_lex_USlexPMExp_HTP19_RET_hnf};
static Symbol Prelude_lex_USlexPMExp_HTP18_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex_lexPMExp#P18", .hnf = &Prelude_lex_USlexPMExp_HTP18_hnf, .hnf_RET = &Prelude_lex_USlexPMExp_HTP18_RET_hnf};
static Symbol Prelude_lex_USlexPMExp_HTP17_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex_lexPMExp#P17", .hnf = &Prelude_lex_USlexPMExp_HTP17_hnf, .hnf_RET = &Prelude_lex_USlexPMExp_HTP17_RET_hnf};
static Symbol Prelude_lex_USlexExp_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexExp", .hnf = &Prelude_lex_USlexExp_hnf, .hnf_RET = &Prelude_lex_USlexExp_RET_hnf};
static Symbol Prelude_lex_USlexFracExp_USexp_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp_exp", .hnf = &Prelude_lex_USlexFracExp_USexp_hnf, .hnf_RET = &Prelude_lex_USlexFracExp_USexp_RET_hnf};
static Symbol Prelude_lex_USlexFracExp_USexp_HTP21_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex_lexFracExp_exp#P21", .hnf = &Prelude_lex_USlexFracExp_USexp_HTP21_hnf, .hnf_RET = &Prelude_lex_USlexFracExp_USexp_HTP21_RET_hnf};
static Symbol Prelude_lex_USlexFracExp_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp", .hnf = &Prelude_lex_USlexFracExp_hnf, .hnf_RET = &Prelude_lex_USlexFracExp_RET_hnf};
static Symbol Prelude_lex_USlexFracExp_HTP23_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp#P23", .hnf = &Prelude_lex_USlexFracExp_HTP23_hnf, .hnf_RET = &Prelude_lex_USlexFracExp_HTP23_RET_hnf};
static Symbol Prelude_lex_USlexFracExp_HTP22_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexFracExp#P22", .hnf = &Prelude_lex_USlexFracExp_HTP22_hnf, .hnf_RET = &Prelude_lex_USlexFracExp_HTP22_RET_hnf};
static Symbol Prelude_lex_USlexFracExp_HTP22_HTP24_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexFracExp#P22#P24", .hnf = &Prelude_lex_USlexFracExp_HTP22_HTP24_hnf, .hnf_RET = &Prelude_lex_USlexFracExp_HTP22_HTP24_RET_hnf};
static Symbol Prelude_lex_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex", .hnf = &Prelude_lex_hnf, .hnf_RET = &Prelude_lex_RET_hnf};
static Symbol Prelude_lex_HTP27_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex#P27", .hnf = &Prelude_lex_HTP27_hnf, .hnf_RET = &Prelude_lex_HTP27_RET_hnf};
static Symbol Prelude_lex_HTP26_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex#P26", .hnf = &Prelude_lex_HTP26_hnf, .hnf_RET = &Prelude_lex_HTP26_RET_hnf};
static Symbol Prelude_lex_HTP25_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex#P25", .hnf = &Prelude_lex_HTP25_hnf, .hnf_RET = &Prelude_lex_HTP25_RET_hnf};
static Symbol Prelude_lex_HTP25_HTP28_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex#P25#P28", .hnf = &Prelude_lex_HTP25_HTP28_hnf, .hnf_RET = &Prelude_lex_HTP25_HTP28_RET_hnf};
static Symbol Prelude_showChar_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "showChar", .hnf = &Prelude_showChar_hnf, .hnf_RET = &Prelude_showChar_RET_hnf};
static Symbol Prelude_showParen_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "showParen", .hnf = &Prelude_showParen_hnf, .hnf_RET = &Prelude_showParen_RET_hnf};
static Symbol Prelude_showParen_HTP29_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "showParen#P29", .hnf = &Prelude_showParen_HTP29_hnf, .hnf_RET = &Prelude_showParen_HTP29_RET_hnf};
static Symbol Prelude_showSigned_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "showSigned", .hnf = &Prelude_showSigned_hnf, .hnf_RET = &Prelude_showSigned_RET_hnf};
static Symbol Prelude_showSigned_HTA5_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A5", .hnf = &Prelude_showSigned_HTA5_hnf, .hnf_RET = &Prelude_showSigned_HTA5_RET_hnf};
static Symbol Prelude_showSigned_HTA4_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A4", .hnf = &Prelude_showSigned_HTA4_hnf, .hnf_RET = &Prelude_showSigned_HTA4_RET_hnf};
static Symbol Prelude_showSigned_HTA3_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A3", .hnf = &Prelude_showSigned_HTA3_hnf, .hnf_RET = &Prelude_showSigned_HTA3_RET_hnf};
static Symbol Prelude_showSigned_HTA2_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A2", .hnf = &Prelude_showSigned_HTA2_hnf, .hnf_RET = &Prelude_showSigned_HTA2_RET_hnf};
static Symbol Prelude_showSigned_HTP31_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "showSigned#P31", .hnf = &Prelude_showSigned_HTP31_hnf, .hnf_RET = &Prelude_showSigned_HTP31_RET_hnf};
static Symbol Prelude_showSigned_HTP30_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "showSigned#P30", .hnf = &Prelude_showSigned_HTP30_hnf, .hnf_RET = &Prelude_showSigned_HTP30_RET_hnf};
static Symbol Prelude_showString_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "showString", .hnf = &Prelude_showString_hnf, .hnf_RET = &Prelude_showString_RET_hnf};
static Symbol Prelude_shows_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "shows", .hnf = &Prelude_shows_hnf, .hnf_RET = &Prelude_shows_RET_hnf};
static Symbol Prelude_showList_SQ_HTP32_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "showList'#P32", .hnf = &Prelude_showList_SQ_HTP32_hnf, .hnf_RET = &Prelude_showList_SQ_HTP32_RET_hnf};
static Symbol Prelude_prim_USshow_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "prim_show", .hnf = &Prelude_prim_USshow_hnf, .hnf_RET = &Prelude_prim_USshow_RET_hnf};
static Symbol Prelude_unwords_DO_US_HTlambda282_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "unwords._#lambda282", .hnf = &Prelude_unwords_DO_US_HTlambda282_hnf, .hnf_RET = &Prelude_unwords_DO_US_HTlambda282_RET_hnf};
static Symbol Prelude_unwords_DO_US_HTlambda282_HTP33_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "unwords._#lambda282#P33", .hnf = &Prelude_unwords_DO_US_HTlambda282_HTP33_hnf, .hnf_RET = &Prelude_unwords_DO_US_HTlambda282_HTP33_RET_hnf};
static Symbol Prelude_unwords_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "unwords", .hnf = &Prelude_unwords_hnf, .hnf_RET = &Prelude_unwords_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either#P37", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either#P36", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either#P35", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either#P34", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showsPrec#Prelude.Show#Prelude.Maybe", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Maybe#P40", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Maybe#P39", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Maybe#P38", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Ordering", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Ordering#P43", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Ordering#P42", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Ordering#P41", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Bool", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Bool#P45", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Bool#P44", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Float", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Float#P46", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Int", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.Int#P47", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Char", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Char#P48", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showsPrec#Prelude.Show#Prelude.Char", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#[]", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_RET_hnf};
static Symbol Prelude__USdef_HTshowList_HTPrelude_DOShow_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#showList#Prelude.Show", .hnf = &Prelude__USdef_HTshowList_HTPrelude_DOShow_hnf, .hnf_RET = &Prelude__USdef_HTshowList_HTPrelude_DOShow_RET_hnf};
static Symbol Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#showList#Prelude.Show#P49", .hnf = &Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49_hnf, .hnf_RET = &Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49_RET_hnf};
static Symbol Prelude__USdef_HTshow_HTPrelude_DOShow_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#show#Prelude.Show", .hnf = &Prelude__USdef_HTshow_HTPrelude_DOShow_hnf, .hnf_RET = &Prelude__USdef_HTshow_HTPrelude_DOShow_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_inst#Prelude.Show#Prelude.Either", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_inst#Prelude.Show#Prelude.Maybe", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Show#Prelude.Ordering", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Show#Prelude.Bool", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Show#Prelude.Float", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Show#Prelude.Int", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#show#Prelude.Show#Prelude.Char", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_inst#Prelude.Show#[]", .hnf = &Prelude__USinst_HTPrelude_DOShow_HT_LB_RB_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HT_LB_RB_RET_hnf};
static Symbol Prelude_words_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "words", .hnf = &Prelude_words_hnf, .hnf_RET = &Prelude_words_RET_hnf};
static Symbol Prelude_words_HTP50_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "words#P50", .hnf = &Prelude_words_HTP50_hnf, .hnf_RET = &Prelude_words_HTP50_RET_hnf};
static Symbol Prelude_splitline_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "splitline", .hnf = &Prelude_splitline_hnf, .hnf_RET = &Prelude_splitline_RET_hnf};
static Symbol Prelude_lines_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lines", .hnf = &Prelude_lines_hnf, .hnf_RET = &Prelude_lines_RET_hnf};
static Symbol Prelude_lex_USlexString_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString", .hnf = &Prelude_lex_USlexString_hnf, .hnf_RET = &Prelude_lex_USlexString_RET_hnf};
static Symbol Prelude_lex_USlexString_HTP54_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString#P54", .hnf = &Prelude_lex_USlexString_HTP54_hnf, .hnf_RET = &Prelude_lex_USlexString_HTP54_RET_hnf};
static Symbol Prelude_lex_USlexString_HTP53_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexString#P53", .hnf = &Prelude_lex_USlexString_HTP53_hnf, .hnf_RET = &Prelude_lex_USlexString_HTP53_RET_hnf};
static Symbol Prelude_lex_USlexString_HTP53_HTP55_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexString#P53#P55", .hnf = &Prelude_lex_USlexString_HTP53_HTP55_hnf, .hnf_RET = &Prelude_lex_USlexString_HTP53_HTP55_RET_hnf};
static Symbol Prelude_lex_USlexString_HTP52_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString#P52", .hnf = &Prelude_lex_USlexString_HTP52_hnf, .hnf_RET = &Prelude_lex_USlexString_HTP52_RET_hnf};
static Symbol Prelude_lex_USlexString_HTP51_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexString#P51", .hnf = &Prelude_lex_USlexString_HTP51_hnf, .hnf_RET = &Prelude_lex_USlexString_HTP51_RET_hnf};
static Symbol Prelude_lex_USlexString_HTP51_HTP56_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexString#P51#P56", .hnf = &Prelude_lex_USlexString_HTP51_HTP56_hnf, .hnf_RET = &Prelude_lex_USlexString_HTP51_HTP56_RET_hnf};
static Symbol Prelude_lex_USelse_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else", .hnf = &Prelude_lex_USelse_hnf, .hnf_RET = &Prelude_lex_USelse_RET_hnf};
static Symbol Prelude_lex_USelse_HTP62_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else#P62", .hnf = &Prelude_lex_USelse_HTP62_hnf, .hnf_RET = &Prelude_lex_USelse_HTP62_RET_hnf};
static Symbol Prelude_lex_USelse_HTP61_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else#P61", .hnf = &Prelude_lex_USelse_HTP61_hnf, .hnf_RET = &Prelude_lex_USelse_HTP61_RET_hnf};
static Symbol Prelude_lex_USelse_HTP60_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "lex_else#P60", .hnf = &Prelude_lex_USelse_HTP60_hnf, .hnf_RET = &Prelude_lex_USelse_HTP60_RET_hnf};
static Symbol Prelude_lex_USelse_HTP59_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "lex_else#P59", .hnf = &Prelude_lex_USelse_HTP59_hnf, .hnf_RET = &Prelude_lex_USelse_HTP59_RET_hnf};
static Symbol Prelude_lex_USelse_HTP58_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "lex_else#P58", .hnf = &Prelude_lex_USelse_HTP58_hnf, .hnf_RET = &Prelude_lex_USelse_HTP58_RET_hnf};
static Symbol Prelude_lex_USelse_HTP57_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "lex_else#P57", .hnf = &Prelude_lex_USelse_HTP57_hnf, .hnf_RET = &Prelude_lex_USelse_HTP57_RET_hnf};
static Symbol Prelude_showList_SQ_DOshowl_DO429_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "showList'.showl.429", .hnf = &Prelude_showList_SQ_DOshowl_DO429_hnf, .hnf_RET = &Prelude_showList_SQ_DOshowl_DO429_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#showList#Prelude.Show#Prelude.Either", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Either#P63", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#show#Prelude.Show#Prelude.Either", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Maybe", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Maybe#P64", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#show#Prelude.Show#Prelude.Maybe", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Ordering", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Ordering#P66", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Ordering#P66#P69", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Ordering#P66#P68", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Ordering#P66#P67", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Ordering#P65", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#show#Prelude.Show#Prelude.Ordering", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Bool", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Bool#P71", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Bool#P71#P73", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Bool#P71#P72", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Bool#P70", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#show#Prelude.Show#Prelude.Bool", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Float", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Float#P76", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Float#P76#P77", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Float#P75", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Float#P74", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#show#Prelude.Show#Prelude.Float", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#show#Prelude.Show#Prelude.Float#P78", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Int", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Int#P81", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Int#P81#P82", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Int#P80", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Int#P79", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#show#Prelude.Show#Prelude.Int", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#show#Prelude.Show#Prelude.Int#P83", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Show#Prelude.Char", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#[]", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#[]#P84", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#show#Prelude.Show#[]", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB_RET_hnf};
static Symbol Prelude_showError__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showError@[]", .hnf = Prelude_showError__hnf, .hnf_RET = NULL};
static Symbol Prelude_isSpace__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "isSpace@[]", .hnf = Prelude_isSpace__hnf, .hnf_RET = NULL};
static Symbol Prelude_isSpace_HTP6__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "isSpace#P6@[]", .hnf = Prelude_isSpace_HTP6__hnf, .hnf_RET = NULL};
static Symbol Prelude_isSpace_HTP6__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "isSpace#P6@[0]", .hnf = Prelude_isSpace_HTP6__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_isSpace_HTP6__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isSpace#P6@[0,0,1]", .hnf = Prelude_isSpace_HTP6__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_isSpace_HTP5__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "isSpace#P5@[]", .hnf = Prelude_isSpace_HTP5__hnf, .hnf_RET = NULL};
static Symbol Prelude_isSpace_HTP5__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "isSpace#P5@[0]", .hnf = Prelude_isSpace_HTP5__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_isSpace_HTP5__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isSpace#P5@[0,0,1]", .hnf = Prelude_isSpace_HTP5__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexString_USbuild__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString_build@[]", .hnf = Prelude_lex_USlexString_USbuild__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexPMExp_USsgn__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexPMExp_sgn@[]", .hnf = Prelude_lex_USlexPMExp_USsgn__hnf, .hnf_RET = NULL};
static Symbol Prelude_makeTriple__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "makeTriple@[]", .hnf = Prelude_makeTriple__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexFracExp_USdot__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp_dot@[]", .hnf = Prelude_lex_USlexFracExp_USdot__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisSym_HTP7__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isSym#P7@[]", .hnf = Prelude_lex_USisSym_HTP7__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisSym_HTP7__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isSym#P7@[0]", .hnf = Prelude_lex_USisSym_HTP7__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisSym_HTP7__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_isSym#P7@[0,0,1]", .hnf = Prelude_lex_USisSym_HTP7__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisSingle_HTP8__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isSingle#P8@[]", .hnf = Prelude_lex_USisSingle_HTP8__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisSingle_HTP8__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isSingle#P8@[0]", .hnf = Prelude_lex_USisSingle_HTP8__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisSingle_HTP8__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_isSingle#P8@[0,0,1]", .hnf = Prelude_lex_USisSingle_HTP8__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse_USfrac__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else_frac@[]", .hnf = Prelude_lex_USelse_USfrac__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexDoubleQuote__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexDoubleQuote@[]", .hnf = Prelude_lex_USlexDoubleQuote__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USfilterSingleQuote__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_filterSingleQuote@[]", .hnf = Prelude_lex_USfilterSingleQuote__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USfilterSingleQuote__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_filterSingleQuote@[0]", .hnf = Prelude_lex_USfilterSingleQuote__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USfilterSingleQuote__0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_filterSingleQuote@[0,1]", .hnf = Prelude_lex_USfilterSingleQuote__0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USfilterSingleQuote__0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_filterSingleQuote@[0,1,0,0]", .hnf = Prelude_lex_USfilterSingleQuote__0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexSingleQuote__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexSingleQuote@[]", .hnf = Prelude_lex_USlexSingleQuote__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexSingleQuote__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexSingleQuote@[0]", .hnf = Prelude_lex_USlexSingleQuote__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USlexPrefix__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_lexPrefix@[]", .hnf = Prelude_lexLitChar_USlexPrefix__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USisAt__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_isAt@[]", .hnf = Prelude_lexLitChar_USisAt__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USisAt__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_isAt@[1]", .hnf = Prelude_lexLitChar_USisAt__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US6__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_6@[]", .hnf = Prelude_lexLitChar_USrunEsc_US6__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US6__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_6@[0,0]", .hnf = Prelude_lexLitChar_USrunEsc_US6__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US6__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lexLitChar_runEsc_6@[0,0,1]", .hnf = Prelude_lexLitChar_USrunEsc_US6__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_showList__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showList@[]", .hnf = Prelude_showList__hnf, .hnf_RET = NULL};
static Symbol Prelude_showList__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showList@[0]", .hnf = Prelude_showList__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_showsPrec__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showsPrec@[]", .hnf = Prelude_showsPrec__hnf, .hnf_RET = NULL};
static Symbol Prelude_showsPrec__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showsPrec@[0]", .hnf = Prelude_showsPrec__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_show__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "show@[]", .hnf = Prelude_show__hnf, .hnf_RET = NULL};
static Symbol Prelude_show__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "show@[0]", .hnf = Prelude_show__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_isOctDigit__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isOctDigit@[]", .hnf = Prelude_isOctDigit__hnf, .hnf_RET = NULL};
static Symbol Prelude_isBinDigit__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isBinDigit@[]", .hnf = Prelude_isBinDigit__hnf, .hnf_RET = NULL};
static Symbol Prelude_isDigit__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isDigit@[]", .hnf = Prelude_isDigit__hnf, .hnf_RET = NULL};
static Symbol Prelude_isHexDigit__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isHexDigit@[]", .hnf = Prelude_isHexDigit__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USisCharName__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_isCharName@[]", .hnf = Prelude_lexLitChar_USisCharName__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US5__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_5@[]", .hnf = Prelude_lexLitChar_USrunEsc_US5__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US4__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_4@[]", .hnf = Prelude_lexLitChar_USrunEsc_US4__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US3__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_3@[]", .hnf = Prelude_lexLitChar_USrunEsc_US3__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US2__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_2@[]", .hnf = Prelude_lexLitChar_USrunEsc_US2__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_US1__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc_1@[]", .hnf = Prelude_lexLitChar_USrunEsc_US1__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lexLitChar_runEsc@[]", .hnf = Prelude_lexLitChar_USrunEsc__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar_runEsc@[1]", .hnf = Prelude_lexLitChar_USrunEsc__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_HTP10__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lexLitChar_runEsc#P10@[]", .hnf = Prelude_lexLitChar_USrunEsc_HTP10__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_HTP10__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lexLitChar_runEsc#P10@[0]", .hnf = Prelude_lexLitChar_USrunEsc_HTP10__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USrunEsc_HTP10__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_runEsc#P10@[0,0,1]", .hnf = Prelude_lexLitChar_USrunEsc_HTP10__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_USlexEsc__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar_lexEsc@[]", .hnf = Prelude_lexLitChar_USlexEsc__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar@[]", .hnf = Prelude_lexLitChar__hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lexLitChar@[1]", .hnf = Prelude_lexLitChar__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lexLitChar_HTA0__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lexLitChar#A0@[]", .hnf = Prelude_lexLitChar_HTA0__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexStrItem@[]", .hnf = Prelude_lex_USlexStrItem__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexStrItem@[1]", .hnf = Prelude_lex_USlexStrItem__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem__1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexStrItem@[1,0,0]", .hnf = Prelude_lex_USlexStrItem__1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem__1_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexStrItem@[1,0,0,1]", .hnf = Prelude_lex_USlexStrItem__1_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem__1_0_0_1_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex_lexStrItem@[1,0,0,1,0,1]", .hnf = Prelude_lex_USlexStrItem__1_0_0_1_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexStrItem@[1,0,0,1,0,1,0]", .hnf = Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexStrItem@[1,0,0,1,0,1,0,1]", .hnf = Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexStrItem_HTA1__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexStrItem#A1@[]", .hnf = Prelude_lex_USlexStrItem_HTA1__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexString_USstring__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString_string@[]", .hnf = Prelude_lex_USlexString_USstring__hnf, .hnf_RET = NULL};
static Symbol Prelude_isAlphaNum__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "isAlphaNum@[]", .hnf = Prelude_isAlphaNum__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisIdChar__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_isIdChar@[]", .hnf = Prelude_lex_USisIdChar__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisIdChar_HTP16__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isIdChar#P16@[]", .hnf = Prelude_lex_USisIdChar_HTP16__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisIdChar_HTP16__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_isIdChar#P16@[0]", .hnf = Prelude_lex_USisIdChar_HTP16__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USisIdChar_HTP16__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_isIdChar#P16@[0,0,1]", .hnf = Prelude_lex_USisIdChar_HTP16__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_nonNull_DO_US_HTlambda452__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "nonNull._#lambda452@[]", .hnf = Prelude_nonNull_DO_US_HTlambda452__hnf, .hnf_RET = NULL};
static Symbol Prelude_nonNull_DO_US_HTlambda452__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "nonNull._#lambda452@[0]", .hnf = Prelude_nonNull_DO_US_HTlambda452__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_nonNull_DO_US_HTlambda452__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "nonNull._#lambda452@[0,0]", .hnf = Prelude_nonNull_DO_US_HTlambda452__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexPMExp__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexPMExp@[]", .hnf = Prelude_lex_USlexPMExp__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexPMExp__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexPMExp@[1]", .hnf = Prelude_lex_USlexPMExp__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexExp__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexExp@[]", .hnf = Prelude_lex_USlexExp__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexExp__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexExp@[1]", .hnf = Prelude_lex_USlexExp__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexFracExp_USexp__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp_exp@[]", .hnf = Prelude_lex_USlexFracExp_USexp__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexFracExp__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp@[]", .hnf = Prelude_lex_USlexFracExp__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexFracExp__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexFracExp@[1]", .hnf = Prelude_lex_USlexFracExp__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexFracExp__1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexFracExp@[1,0,0]", .hnf = Prelude_lex_USlexFracExp__1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexFracExp__1_0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_lexFracExp@[1,0,0,1]", .hnf = Prelude_lex_USlexFracExp__1_0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexFracExp_HTP23__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexFracExp#P23@[]", .hnf = Prelude_lex_USlexFracExp_HTP23__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex@[]", .hnf = Prelude_lex__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex@[1]", .hnf = Prelude_lex__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP26__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex#P26@[]", .hnf = Prelude_lex_HTP26__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP25__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex#P25@[]", .hnf = Prelude_lex_HTP25__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP25__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "lex#P25@[0]", .hnf = Prelude_lex_HTP25__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP25__0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex#P25@[0,0]", .hnf = Prelude_lex_HTP25__0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP25__0_1_symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "lex#P25@[0,1]", .hnf = Prelude_lex_HTP25__0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP25__0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 6, .name = "lex#P25@[0,1,0,0]", .hnf = Prelude_lex_HTP25__0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP25__0_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex#P25@[0,1,0,0,0]", .hnf = Prelude_lex_HTP25__0_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_HTP25__0_1_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex#P25@[0,1,0,1]", .hnf = Prelude_lex_HTP25__0_1_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_showParen__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "showParen@[]", .hnf = Prelude_showParen__hnf, .hnf_RET = NULL};
static Symbol Prelude_showParen__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showParen@[1]", .hnf = Prelude_showParen__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned__symbol = {.tag = FUNCTION_TAG, .arity = 5, .name = "showSigned@[]", .hnf = Prelude_showSigned__hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned__0_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "showSigned@[0]", .hnf = Prelude_showSigned__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA5__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A5@[]", .hnf = Prelude_showSigned_HTA5__hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA5__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A5@[0]", .hnf = Prelude_showSigned_HTA5__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA4__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A4@[]", .hnf = Prelude_showSigned_HTA4__hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA4__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A4@[0]", .hnf = Prelude_showSigned_HTA4__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA3__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A3@[]", .hnf = Prelude_showSigned_HTA3__hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA3__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A3@[0]", .hnf = Prelude_showSigned_HTA3__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA2__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A2@[]", .hnf = Prelude_showSigned_HTA2__hnf, .hnf_RET = NULL};
static Symbol Prelude_showSigned_HTA2__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "showSigned#A2@[0]", .hnf = Prelude_showSigned_HTA2__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_unwords__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "unwords@[]", .hnf = Prelude_unwords__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either@[]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either@[0]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showsPrec#Prelude.Show#Prelude.Either@[1]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showsPrec#Prelude.Show#Prelude.Maybe@[]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showsPrec#Prelude.Show#Prelude.Maybe@[1]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Char@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#[]@[]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showsPrec#Prelude.Show#[]@[0]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HTshowList_HTPrelude_DOShow__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#showList#Prelude.Show@[]", .hnf = Prelude__USdef_HTshowList_HTPrelude_DOShow__hnf, .hnf_RET = NULL};
static Symbol Prelude_words__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "words@[]", .hnf = Prelude_words__hnf, .hnf_RET = NULL};
static Symbol Prelude_words__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "words@[1]", .hnf = Prelude_words__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_words_HTP50__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "words#P50@[]", .hnf = Prelude_words_HTP50__hnf, .hnf_RET = NULL};
static Symbol Prelude_splitline__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "splitline@[]", .hnf = Prelude_splitline__hnf, .hnf_RET = NULL};
static Symbol Prelude_splitline__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitline@[1]", .hnf = Prelude_splitline__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_splitline__1_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "splitline@[1,0,1]", .hnf = Prelude_splitline__1_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lines__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lines@[]", .hnf = Prelude_lines__hnf, .hnf_RET = NULL};
static Symbol Prelude_lines__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lines@[1]", .hnf = Prelude_lines__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexString__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString@[]", .hnf = Prelude_lex_USlexString__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexString__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_lexString@[1]", .hnf = Prelude_lex_USlexString__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexString_HTP54__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString#P54@[]", .hnf = Prelude_lex_USlexString_HTP54__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USlexString_HTP52__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_lexString#P52@[]", .hnf = Prelude_lex_USlexString_HTP52__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else@[]", .hnf = Prelude_lex_USelse__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else@[1]", .hnf = Prelude_lex_USelse__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else@[1,1]", .hnf = Prelude_lex_USelse__1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,0]", .hnf = Prelude_lex_USelse__1_1_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1]", .hnf = Prelude_lex_USelse__1_1_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_0_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1,0,0,0]", .hnf = Prelude_lex_USelse__1_1_1_0_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_0_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1,0,0,1,0,0]", .hnf = Prelude_lex_USelse__1_1_1_0_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_0_0_1_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1,0,0,1,0,1,0,0]", .hnf = Prelude_lex_USelse__1_1_1_0_0_1_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_0_0_1_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1,0,0,1,1,0,0]", .hnf = Prelude_lex_USelse__1_1_1_0_0_1_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1,0,1,0,0]", .hnf = Prelude_lex_USelse__1_1_1_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_0_1_0_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1,0,1,0,1,0,0]", .hnf = Prelude_lex_USelse__1_1_1_0_1_0_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse__1_1_1_0_1_1_0_0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "lex_else@[1,1,1,0,1,1,0,0]", .hnf = Prelude_lex_USelse__1_1_1_0_1_1_0_0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse_HTP62__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else#P62@[]", .hnf = Prelude_lex_USelse_HTP62__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse_HTP62__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else#P62@[0]", .hnf = Prelude_lex_USelse_HTP62__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse_HTP62__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_else#P62@[0,0,1]", .hnf = Prelude_lex_USelse_HTP62__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse_HTP61__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else#P61@[]", .hnf = Prelude_lex_USelse_HTP61__hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse_HTP61__0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "lex_else#P61@[0]", .hnf = Prelude_lex_USelse_HTP61__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_lex_USelse_HTP61__0_0_1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "lex_else#P61@[0,0,1]", .hnf = Prelude_lex_USelse_HTP61__0_0_1_hnf, .hnf_RET = NULL};
static Symbol Prelude_showList_SQ_DOshowl_DO429__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "showList'.showl.429@[]", .hnf = Prelude_showList_SQ_DOshowl_DO429__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#showList#Prelude.Show#Prelude.Either@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#Prelude.Maybe@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Ordering@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Ordering#P66@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Bool@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#showList#Prelude.Show#Prelude.Bool#P71@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Float@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.Int@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#showList#Prelude.Show#[]@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB__hnf, .hnf_RET = NULL};

// unlines
__attribute__((always_inline)) 
static inline void set_Prelude_unlines(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_unlines_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// unlines#P0
__attribute__((always_inline)) 
static inline void set_Prelude_unlines_HTP0(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_unlines_HTP0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// getChar
__attribute__((always_inline)) 
static inline void set_Prelude_getChar(field root, int missing)
{
  root.n->symbol = &Prelude_getChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showError
__attribute__((always_inline)) 
static inline void set_Prelude_showError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_showError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showError#P4
__attribute__((always_inline)) 
static inline void set_Prelude_showError_HTP4(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_showError_HTP4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// showError#P3
__attribute__((always_inline)) 
static inline void set_Prelude_showError_HTP3(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_showError_HTP3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// showError#P2
__attribute__((always_inline)) 
static inline void set_Prelude_showError_HTP2(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_showError_HTP2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// showError#P1
__attribute__((always_inline)) 
static inline void set_Prelude_showError_HTP1(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_showError_HTP1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// isSpace
__attribute__((always_inline)) 
static inline void set_Prelude_isSpace(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_isSpace_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// isSpace#P6
__attribute__((always_inline)) 
static inline void set_Prelude_isSpace_HTP6(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_isSpace_HTP6_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// isSpace#P5
__attribute__((always_inline)) 
static inline void set_Prelude_isSpace_HTP5(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_isSpace_HTP5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexString_build
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_USbuild(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_USbuild_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexPMExp_sgn
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexPMExp_USsgn(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexPMExp_USsgn_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// makeTriple
__attribute__((always_inline)) 
static inline void set_Prelude_makeTriple(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_makeTriple_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lex_lexFracExp_dot
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexFracExp_USdot(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexFracExp_USdot_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_isSym
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USisSym(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USisSym_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_isSym#P7
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USisSym_HTP7(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USisSym_HTP7_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_isSingle
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USisSingle(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USisSingle_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_isSingle#P8
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USisSingle_HTP8(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USisSingle_HTP8_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_else_frac
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse_USfrac(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_USfrac_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexDoubleQuote
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexDoubleQuote(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexDoubleQuote_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_filterSingleQuote
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USfilterSingleQuote(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USfilterSingleQuote_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexSingleQuote
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexSingleQuote(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexSingleQuote_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexSingleQuote#P9
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexSingleQuote_HTP9(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexSingleQuote_HTP9_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lexLitChar_lexPrefix
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USlexPrefix(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USlexPrefix_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexLitChar_isAt
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USisAt(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USisAt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc_6
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc_US6(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US6_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// showList
__attribute__((always_inline)) 
static inline void set_Prelude_showList(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_showList_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showsPrec
__attribute__((always_inline)) 
static inline void set_Prelude_showsPrec(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_showsPrec_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// show
__attribute__((always_inline)) 
static inline void set_Prelude_show(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_show_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for showsPrec in Show
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTshowsPrec_HTPrelude_DOShow(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USdef_HTshowsPrec_HTPrelude_DOShow_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// isOctDigit
__attribute__((always_inline)) 
static inline void set_Prelude_isOctDigit(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_isOctDigit_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// isBinDigit
__attribute__((always_inline)) 
static inline void set_Prelude_isBinDigit(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_isBinDigit_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// isDigit
__attribute__((always_inline)) 
static inline void set_Prelude_isDigit(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_isDigit_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// isHexDigit
__attribute__((always_inline)) 
static inline void set_Prelude_isHexDigit(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_isHexDigit_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lexLitChar_isCharName
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USisCharName(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USisCharName_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc_5
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc_US5(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc_4
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc_US4(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc_3
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc_US3(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc_2
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc_US2(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc_1
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc_US1(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexLitChar_runEsc#P10
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USrunEsc_HTP10(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_HTP10_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lexLitChar_lexEsc
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_USlexEsc(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_USlexEsc_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lexLitChar
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lexLitChar#A0
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_HTA0(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_HTA0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lexLitChar#P11
__attribute__((always_inline)) 
static inline void set_Prelude_lexLitChar_HTP11(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lexLitChar_HTP11_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexStrItem
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexStrItem(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexStrItem_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexStrItem#A1
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexStrItem_HTA1(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexStrItem_HTA1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexStrItem#P14
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexStrItem_HTP14(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexStrItem_HTP14_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexStrItem#P13
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexStrItem_HTP13(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexStrItem_HTP13_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexStrItem#P12
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexStrItem_HTP12(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexStrItem_HTP12_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexString_string
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_USstring(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_USstring_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexString_string#P15
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_USstring_HTP15(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_USstring_HTP15_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// isAlphaNum
__attribute__((always_inline)) 
static inline void set_Prelude_isAlphaNum(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_isAlphaNum_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_isIdChar
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USisIdChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USisIdChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_isIdChar#P16
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USisIdChar_HTP16(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USisIdChar_HTP16_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// nonNull._#lambda452
__attribute__((always_inline)) 
static inline void set_Prelude_nonNull_DO_US_HTlambda452(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_nonNull_DO_US_HTlambda452_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lexDigits
__attribute__((always_inline)) 
static inline void set_Prelude_lexDigits(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lexDigits_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexPMExp
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexPMExp(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lex_USlexPMExp_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lex_lexPMExp#P20
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexPMExp_HTP20(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP20_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// lex_lexPMExp#P19
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexPMExp_HTP19(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP19_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// lex_lexPMExp#P18
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexPMExp_HTP18(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP18_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// lex_lexPMExp#P17
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexPMExp_HTP17(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP17_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// lex_lexExp
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexExp(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexExp_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexFracExp_exp
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexFracExp_USexp(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexFracExp_USexp_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexFracExp_exp#P21
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexFracExp_USexp_HTP21(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_lex_USlexFracExp_USexp_HTP21_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// lex_lexFracExp
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexFracExp(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexFracExp_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexFracExp#P23
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexFracExp_HTP23(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexFracExp_HTP23_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexFracExp#P22
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexFracExp_HTP22(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexFracExp_HTP22_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexFracExp#P22#P24
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexFracExp_HTP22_HTP24(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexFracExp_HTP22_HTP24_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex
__attribute__((always_inline)) 
static inline void set_Prelude_lex(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex#P27
__attribute__((always_inline)) 
static inline void set_Prelude_lex_HTP27(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_HTP27_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex#P26
__attribute__((always_inline)) 
static inline void set_Prelude_lex_HTP26(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_HTP26_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex#P25
__attribute__((always_inline)) 
static inline void set_Prelude_lex_HTP25(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_HTP25_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex#P25#P28
__attribute__((always_inline)) 
static inline void set_Prelude_lex_HTP25_HTP28(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_HTP25_HTP28_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// showChar
__attribute__((always_inline)) 
static inline void set_Prelude_showChar(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_showChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// showParen
__attribute__((always_inline)) 
static inline void set_Prelude_showParen(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_showParen_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// showParen#P29
__attribute__((always_inline)) 
static inline void set_Prelude_showParen_HTP29(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_showParen_HTP29_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// showSigned
__attribute__((always_inline)) 
static inline void set_Prelude_showSigned(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_showSigned_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// showSigned#A5
__attribute__((always_inline)) 
static inline void set_Prelude_showSigned_HTA5(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_showSigned_HTA5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showSigned#A4
__attribute__((always_inline)) 
static inline void set_Prelude_showSigned_HTA4(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_showSigned_HTA4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showSigned#A3
__attribute__((always_inline)) 
static inline void set_Prelude_showSigned_HTA3(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_showSigned_HTA3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showSigned#A2
__attribute__((always_inline)) 
static inline void set_Prelude_showSigned_HTA2(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_showSigned_HTA2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showSigned#P31
__attribute__((always_inline)) 
static inline void set_Prelude_showSigned_HTP31(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_showSigned_HTP31_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// showSigned#P30
__attribute__((always_inline)) 
static inline void set_Prelude_showSigned_HTP30(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_showSigned_HTP30_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// showString
__attribute__((always_inline)) 
static inline void set_Prelude_showString(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_showString_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// shows
__attribute__((always_inline)) 
static inline void set_Prelude_shows(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_shows_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// showList'#P32
__attribute__((always_inline)) 
static inline void set_Prelude_showList_SQ_HTP32(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_showList_SQ_HTP32_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// prim_show
__attribute__((always_inline)) 
static inline void set_Prelude_prim_USshow(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_prim_USshow_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// unwords._#lambda282
__attribute__((always_inline)) 
static inline void set_Prelude_unwords_DO_US_HTlambda282(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_unwords_DO_US_HTlambda282_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// unwords._#lambda282#P33
__attribute__((always_inline)) 
static inline void set_Prelude_unwords_DO_US_HTlambda282_HTP33(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_unwords_DO_US_HTlambda282_HTP33_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// unwords
__attribute__((always_inline)) 
static inline void set_Prelude_unwords(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_unwords_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of showsPrec in Show for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for showList in Show
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTshowList_HTPrelude_DOShow(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTshowList_HTPrelude_DOShow_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// default for showList in Show
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// default for show in Show
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTshow_HTPrelude_DOShow(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTshow_HTPrelude_DOShow_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// instance of Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// instance of Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of show in Show for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Show for []
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HT_LB_RB(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// words
__attribute__((always_inline)) 
static inline void set_Prelude_words(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_words_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// words#P50
__attribute__((always_inline)) 
static inline void set_Prelude_words_HTP50(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_words_HTP50_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// splitline
__attribute__((always_inline)) 
static inline void set_Prelude_splitline(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_splitline_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lines
__attribute__((always_inline)) 
static inline void set_Prelude_lines(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lines_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexString
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexString#P54
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_HTP54(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_HTP54_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexString#P53
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_HTP53(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_HTP53_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexString#P53#P55
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_HTP53_HTP55(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_HTP53_HTP55_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexString#P52
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_HTP52(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_HTP52_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// lex_lexString#P51
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_HTP51(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_HTP51_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_lexString#P51#P56
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USlexString_HTP51_HTP56(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USlexString_HTP51_HTP56_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_else
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// lex_else#P62
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse_HTP62(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_HTP62_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_else#P61
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse_HTP61(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_HTP61_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// lex_else#P60
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse_HTP60(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_HTP60_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// lex_else#P59
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse_HTP59(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_HTP59_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// lex_else#P58
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse_HTP58(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_HTP58_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// lex_else#P57
__attribute__((always_inline)) 
static inline void set_Prelude_lex_USelse_HTP57(field root, field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  root.n->symbol = &Prelude_lex_USelse_HTP57_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
}

// showList'.showl.429
__attribute__((always_inline)) 
static inline void set_Prelude_showList_SQ_DOshowl_DO429(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_showList_SQ_DOshowl_DO429_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of showList in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// implementation of showList in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of show in Show for Either
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of showList in Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of showList in Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of show in Show for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of show in Show for Ordering
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of show in Show for Bool
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of show in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of show in Show for Float
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of show in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of show in Show for Int
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// instance of Show for Char
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of showList in Show for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of show in Show for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// unlines
__attribute__((always_inline)) 
static inline field make_Prelude_unlines(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unlines_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// unlines#P0
__attribute__((always_inline)) 
static inline field make_Prelude_unlines_HTP0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unlines_HTP0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// getChar
__attribute__((always_inline)) 
static inline field make_Prelude_getChar(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_getChar_symbol;
  root.n->missing = missing;
  return root;
}

// showError
__attribute__((always_inline)) 
static inline field make_Prelude_showError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showError#P4
__attribute__((always_inline)) 
static inline field make_Prelude_showError_HTP4(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showError_HTP4_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// showError#P3
__attribute__((always_inline)) 
static inline field make_Prelude_showError_HTP3(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showError_HTP3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// showError#P2
__attribute__((always_inline)) 
static inline field make_Prelude_showError_HTP2(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showError_HTP2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// showError#P1
__attribute__((always_inline)) 
static inline field make_Prelude_showError_HTP1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showError_HTP1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// isSpace
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isSpace#P6
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP6(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP6_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// isSpace#P5
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP5(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP5_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexString_build
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_USbuild(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_USbuild_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexPMExp_sgn
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp_USsgn(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp_USsgn_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// makeTriple
__attribute__((always_inline)) 
static inline field make_Prelude_makeTriple(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeTriple_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexFracExp_dot
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_USdot(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_USdot_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isSym
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSym(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSym_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isSym#P7
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSym_HTP7(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSym_HTP7_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_isSingle
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSingle(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSingle_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isSingle#P8
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSingle_HTP8(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSingle_HTP8_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else_frac
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_USfrac(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_USfrac_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexDoubleQuote
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexDoubleQuote(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexDoubleQuote_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_filterSingleQuote
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USfilterSingleQuote(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USfilterSingleQuote_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexSingleQuote
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexSingleQuote(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexSingleQuote_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexSingleQuote#P9
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexSingleQuote_HTP9(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexSingleQuote_HTP9_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lexLitChar_lexPrefix
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USlexPrefix(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USlexPrefix_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_isAt
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USisAt(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USisAt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_runEsc_6
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US6(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US6_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showList
__attribute__((always_inline)) 
static inline field make_Prelude_showList(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showList_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showsPrec
__attribute__((always_inline)) 
static inline field make_Prelude_showsPrec(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showsPrec_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// show
__attribute__((always_inline)) 
static inline field make_Prelude_show(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_show_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for showsPrec in Show
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTshowsPrec_HTPrelude_DOShow(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTshowsPrec_HTPrelude_DOShow_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// isOctDigit
__attribute__((always_inline)) 
static inline field make_Prelude_isOctDigit(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isOctDigit_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isBinDigit
__attribute__((always_inline)) 
static inline field make_Prelude_isBinDigit(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isBinDigit_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isDigit
__attribute__((always_inline)) 
static inline field make_Prelude_isDigit(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isDigit_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isHexDigit
__attribute__((always_inline)) 
static inline field make_Prelude_isHexDigit(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isHexDigit_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_isCharName
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USisCharName(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USisCharName_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_runEsc_5
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US5(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US5_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_4
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US4(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US4_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_3
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US3(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_2
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US2(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_1
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc#P10
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_HTP10(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_HTP10_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lexLitChar_lexEsc
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USlexEsc(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USlexEsc_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar#A0
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_HTA0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_HTA0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar#P11
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_HTP11(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_HTP11_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexStrItem
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexStrItem#A1
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem_HTA1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem_HTA1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexStrItem#P14
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem_HTP14(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem_HTP14_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexStrItem#P13
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem_HTP13(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem_HTP13_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexStrItem#P12
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem_HTP12(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem_HTP12_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexString_string
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_USstring(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_USstring_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString_string#P15
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_USstring_HTP15(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_USstring_HTP15_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// isAlphaNum
__attribute__((always_inline)) 
static inline field make_Prelude_isAlphaNum(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isAlphaNum_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isIdChar
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisIdChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisIdChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isIdChar#P16
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisIdChar_HTP16(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisIdChar_HTP16_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// nonNull._#lambda452
__attribute__((always_inline)) 
static inline field make_Prelude_nonNull_DO_US_HTlambda452(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_nonNull_DO_US_HTlambda452_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexDigits
__attribute__((always_inline)) 
static inline field make_Prelude_lexDigits(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexDigits_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexPMExp
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexPMExp#P20
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp_HTP20(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP20_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lex_lexPMExp#P19
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp_HTP19(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP19_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lex_lexPMExp#P18
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp_HTP18(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP18_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lex_lexPMExp#P17
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp_HTP17(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp_HTP17_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lex_lexExp
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexExp(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexExp_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexFracExp_exp
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_USexp(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_USexp_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexFracExp_exp#P21
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_USexp_HTP21(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_USexp_HTP21_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lex_lexFracExp
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexFracExp#P23
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_HTP23(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_HTP23_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexFracExp#P22
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_HTP22(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_HTP22_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexFracExp#P22#P24
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_HTP22_HTP24(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_HTP22_HTP24_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex
__attribute__((always_inline)) 
static inline field make_Prelude_lex(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex#P27
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP27(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP27_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex#P26
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP26(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP26_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex#P25
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex#P25#P28
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25_HTP28(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25_HTP28_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// showChar
__attribute__((always_inline)) 
static inline field make_Prelude_showChar(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showParen
__attribute__((always_inline)) 
static inline field make_Prelude_showParen(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showParen_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showParen#P29
__attribute__((always_inline)) 
static inline field make_Prelude_showParen_HTP29(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showParen_HTP29_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showSigned
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// showSigned#A5
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA5(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA5_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A4
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA4(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA4_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A3
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA3(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A2
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA2(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#P31
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTP31(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTP31_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showSigned#P30
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTP30(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTP30_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showString
__attribute__((always_inline)) 
static inline field make_Prelude_showString(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showString_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// shows
__attribute__((always_inline)) 
static inline field make_Prelude_shows(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_shows_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showList'#P32
__attribute__((always_inline)) 
static inline field make_Prelude_showList_SQ_HTP32(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showList_SQ_HTP32_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// prim_show
__attribute__((always_inline)) 
static inline field make_Prelude_prim_USshow(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_prim_USshow_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// unwords._#lambda282
__attribute__((always_inline)) 
static inline field make_Prelude_unwords_DO_US_HTlambda282(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unwords_DO_US_HTlambda282_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// unwords._#lambda282#P33
__attribute__((always_inline)) 
static inline field make_Prelude_unwords_DO_US_HTlambda282_HTP33(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unwords_DO_US_HTlambda282_HTP33_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// unwords
__attribute__((always_inline)) 
static inline field make_Prelude_unwords(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unwords_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP37_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP36_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP35_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_HTP34_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP40_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP39_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP38_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP43_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP42_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP41_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP45_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_HTP44_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOFloat_HTP46_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOInt_HTP47_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_HTP48_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for showList in Show
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTshowList_HTPrelude_DOShow(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTshowList_HTPrelude_DOShow_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// default for showList in Show
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// default for show in Show
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTshow_HTPrelude_DOShow(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTshow_HTPrelude_DOShow_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// instance of Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// instance of Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of show in Show for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Show for []
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HT_LB_RB(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// words
__attribute__((always_inline)) 
static inline field make_Prelude_words(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_words_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// words#P50
__attribute__((always_inline)) 
static inline field make_Prelude_words_HTP50(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_words_HTP50_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// splitline
__attribute__((always_inline)) 
static inline field make_Prelude_splitline(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitline_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lines
__attribute__((always_inline)) 
static inline field make_Prelude_lines(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lines_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString#P54
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP54(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP54_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString#P53
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP53(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP53_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexString#P53#P55
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP53_HTP55(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP53_HTP55_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexString#P52
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP52(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP52_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString#P51
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP51(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP51_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexString#P51#P56
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP51_HTP56(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP51_HTP56_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else#P62
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP62(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP62_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else#P61
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP61(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP61_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else#P60
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP60(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP60_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// lex_else#P59
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP59(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP59_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// lex_else#P58
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP58(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP58_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// lex_else#P57
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP57(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP57_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// showList'.showl.429
__attribute__((always_inline)) 
static inline field make_Prelude_showList_SQ_DOshowl_DO429(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showList_SQ_DOshowl_DO429_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showList in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of showList in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_HTP63_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of show in Show for Either
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOEither_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showList in Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showList in Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_HTP64_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of show in Show for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP69_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP68_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_HTP67_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP65_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of show in Show for Ordering
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOOrdering_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP73_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_HTP72_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP70_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of show in Show for Bool
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOBool_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP76_HTP77_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP75_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_HTP74_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of show in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of show in Show for Float
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOFloat_HTP78_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP81_HTP82_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP80_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_HTP79_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of show in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of show in Show for Int
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOInt_HTP83_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// instance of Show for Char
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOChar_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of showList in Show for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showList in Show for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_HTP84_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of show in Show for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showError_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isSpace @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// isSpace#P6 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP6_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP6__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// isSpace#P6 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP6__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP6__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// isSpace#P6 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP6__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP6__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isSpace#P5 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP5_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP5__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// isSpace#P5 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP5__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP5__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// isSpace#P5 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_isSpace_HTP5__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isSpace_HTP5__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString_build @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_USbuild_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_USbuild__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexPMExp_sgn @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp_USsgn_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp_USsgn__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// makeTriple @ []
__attribute__((always_inline)) 
static inline field make_Prelude_makeTriple_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeTriple__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexFracExp_dot @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_USdot_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_USdot__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isSym#P7 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSym_HTP7_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSym_HTP7__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_isSym#P7 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSym_HTP7__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSym_HTP7__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_isSym#P7 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSym_HTP7__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSym_HTP7__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isSingle#P8 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSingle_HTP8_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSingle_HTP8__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_isSingle#P8 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSingle_HTP8__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSingle_HTP8__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_isSingle#P8 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisSingle_HTP8__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisSingle_HTP8__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_else_frac @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_USfrac_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_USfrac__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexDoubleQuote @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexDoubleQuote_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexDoubleQuote__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_filterSingleQuote @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USfilterSingleQuote_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USfilterSingleQuote__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_filterSingleQuote @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USfilterSingleQuote__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USfilterSingleQuote__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_filterSingleQuote @ [0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USfilterSingleQuote__0_1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USfilterSingleQuote__0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_filterSingleQuote @ [0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USfilterSingleQuote__0_1_0_0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USfilterSingleQuote__0_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexSingleQuote @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexSingleQuote_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexSingleQuote__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexSingleQuote @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexSingleQuote__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexSingleQuote__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_lexPrefix @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USlexPrefix_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USlexPrefix__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_isAt @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USisAt_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USisAt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_isAt @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USisAt__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USisAt__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_runEsc_6 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US6_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US6__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_6 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US6__0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US6__0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_6 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US6__0_0_1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US6__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// showList @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showList_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showList__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showList @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_showList__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showList__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showsPrec @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showsPrec_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showsPrec__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showsPrec @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_showsPrec__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showsPrec__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// show @ []
__attribute__((always_inline)) 
static inline field make_Prelude_show_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_show__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// show @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_show__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_show__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isOctDigit @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isOctDigit_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isOctDigit__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isBinDigit @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isBinDigit_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isBinDigit__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isDigit @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isDigit_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isDigit__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isHexDigit @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isHexDigit_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isHexDigit__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_isCharName @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USisCharName_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USisCharName__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_runEsc_5 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US5_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US5__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_4 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US4_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US4__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_3 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US3_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US3__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_2 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US2_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US2__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc_1 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_US1_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_US1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lexLitChar_runEsc @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar_runEsc#P10 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_HTP10_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_HTP10__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lexLitChar_runEsc#P10 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_HTP10__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_HTP10__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lexLitChar_runEsc#P10 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USrunEsc_HTP10__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USrunEsc_HTP10__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar_lexEsc @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_USlexEsc_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_USlexEsc__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lexLitChar @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lexLitChar#A0 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lexLitChar_HTA0_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lexLitChar_HTA0__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexStrItem @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexStrItem @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexStrItem @ [1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem__1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem__1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexStrItem @ [1,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem__1_0_0_1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem__1_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexStrItem @ [1,0,0,1,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem__1_0_0_1_0_1(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem__1_0_0_1_0_1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lex_lexStrItem @ [1,0,0,1,0,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem__1_0_0_1_0_1_0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexStrItem @ [1,0,0,1,0,1,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem__1_0_0_1_0_1_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexStrItem#A1 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexStrItem_HTA1_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexStrItem_HTA1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString_string @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_USstring_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_USstring__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// isAlphaNum @ []
__attribute__((always_inline)) 
static inline field make_Prelude_isAlphaNum_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_isAlphaNum__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_isIdChar @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisIdChar_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisIdChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_isIdChar#P16 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisIdChar_HTP16_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisIdChar_HTP16__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_isIdChar#P16 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisIdChar_HTP16__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisIdChar_HTP16__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_isIdChar#P16 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USisIdChar_HTP16__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USisIdChar_HTP16__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// nonNull._#lambda452 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_nonNull_DO_US_HTlambda452_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_nonNull_DO_US_HTlambda452__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// nonNull._#lambda452 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_nonNull_DO_US_HTlambda452__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_nonNull_DO_US_HTlambda452__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// nonNull._#lambda452 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_nonNull_DO_US_HTlambda452__0_0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_nonNull_DO_US_HTlambda452__0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexPMExp @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexPMExp @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexPMExp__1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexPMExp__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexExp @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexExp_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexExp__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexExp @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexExp__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexExp__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexFracExp_exp @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_USexp_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_USexp__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexFracExp @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexFracExp @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexFracExp @ [1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp__1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp__1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexFracExp @ [1,0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp__1_0_0_1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp__1_0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_lexFracExp#P23 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexFracExp_HTP23_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexFracExp_HTP23__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex#P26 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP26_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP26__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex#P25 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex#P25 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25__0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// lex#P25 @ [0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25__0_0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25__0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex#P25 @ [0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25__0_1(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25__0_1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// lex#P25 @ [0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25__0_1_0_0(field scrutinee, field v2, field v3, field v4, field v5, field v6, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25__0_1_0_0_symbol;
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

// lex#P25 @ [0,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25__0_1_0_0_0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25__0_1_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex#P25 @ [0,1,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_HTP25__0_1_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_HTP25__0_1_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showParen @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showParen_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showParen__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// showParen @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_showParen__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showParen__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_(field scrutinee, field v2, field v3, field v4, field v5, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(2 * sizeof(field));
  child_at(root, 0) = v5;
  child_at(root, 1) = v4;
  child_at(root, 2) = v3;
  child_at(root, 3) = v2;
  child_at(root, 4) = scrutinee;
  return root;
}

// showSigned @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned__0(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned__0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// showSigned#A5 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA5_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA5__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A5 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA5__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA5__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A4 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA4_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA4__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A4 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA4__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA4__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A3 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA3_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA3__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A3 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA3__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA3__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A2 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA2_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA2__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showSigned#A2 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_showSigned_HTA2__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showSigned_HTA2__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// unwords @ []
__attribute__((always_inline)) 
static inline field make_Prelude_unwords_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unwords__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Either @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOEither__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Maybe @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Maybe @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOMaybe__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Char @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for [] @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HT_LB_RB__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for showList in Show @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTshowList_HTPrelude_DOShow_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTshowList_HTPrelude_DOShow__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// words @ []
__attribute__((always_inline)) 
static inline field make_Prelude_words_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_words__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// words @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_words__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_words__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// words#P50 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_words_HTP50_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_words_HTP50__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// splitline @ []
__attribute__((always_inline)) 
static inline field make_Prelude_splitline_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitline__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// splitline @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_splitline__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitline__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// splitline @ [1,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_splitline__1_0_1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_splitline__1_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lines @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lines_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lines__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lines @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lines__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lines__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_lexString#P54 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP54_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP54__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_lexString#P52 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USlexString_HTP52_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USlexString_HTP52__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_else @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else @ [1,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else @ [1,1,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1,0,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1_0_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_0_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1,0,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1_0_0_1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_0_0_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1,0,0,1,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1_0_0_1_0_1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_0_0_1_0_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1,0,0,1,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1_0_0_1_1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_0_0_1_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1_0_1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_0_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1,0,1,0,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1_0_1_0_1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_0_1_0_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else @ [1,1,1,0,1,1,0,0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse__1_1_1_0_1_1_0_0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse__1_1_1_0_1_1_0_0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// lex_else#P62 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP62_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP62__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else#P62 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP62__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP62__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else#P62 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP62__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP62__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// lex_else#P61 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP61_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP61__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else#P61 @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP61__0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP61__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// lex_else#P61 @ [0,0,1]
__attribute__((always_inline)) 
static inline field make_Prelude_lex_USelse_HTP61__0_0_1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_lex_USelse_HTP61__0_0_1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// showList'.showl.429 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_showList_SQ_DOshowl_DO429_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_showList_SQ_DOshowl_DO429__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showList in Show for Either @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOEither__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of showList in Show for Maybe @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOMaybe__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Ordering @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOOrdering_HTP66__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Bool @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOBool_HTP71__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for Float @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOFloat__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for Int @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOInt__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showList in Show for [] @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HT_LB_RB__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

#endif //PreludeString_H