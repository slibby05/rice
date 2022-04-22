#ifndef PreludeMonad_H
#define PreludeMonad_H

#include "runtime.h"
#include "PreludeBase.h"
#include "PreludeCompare.h"
#include "PreludeNum.h"
#include "PreludeList.h"
#include "PreludeString.h"
#include "PreludeRead.h"

void Prelude__USdef_HTfmap_HTPrelude_DOFunctor_hnf(field root);
void Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_hnf(field root);
void Prelude__USdef_HTreturn_HTPrelude_DOMonad_hnf(field root);
void Prelude_maybe_hnf(field root);
void Prelude_either_hnf(field root);
void Prelude_userError_hnf(field root);
void Prelude_ioError_hnf(field root);
void Prelude_ioError_HTA0_hnf(field root);
void Prelude_fmap_hnf(field root);
void Prelude_fail_hnf(field root);
void Prelude_makeNondetError_hnf(field root);
void Prelude_readNondetError_hnf(field root);
void Prelude_readNondetError_HTP0_hnf(field root);
void Prelude_makeFailError_hnf(field root);
void Prelude_readFailError_hnf(field root);
void Prelude_readFailError_HTP1_hnf(field root);
void Prelude_makeUserError_hnf(field root);
void Prelude_readUserError_hnf(field root);
void Prelude_readUserError_HTP2_hnf(field root);
void Prelude_makeIOError_hnf(field root);
void Prelude_readIOError_hnf(field root);
void Prelude_readIOError_HTP3_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_hnf(field root);
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_hnf(field root);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_hnf(field root);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_hnf(field root);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_hnf(field root);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_hnf(field root);
void Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_hnf(field root);
void Prelude_return_hnf(field root);
void Prelude_whenM_hnf(field root);
void Prelude_unlessM_hnf(field root);
void Prelude__GT_GT_hnf(field root);
void Prelude__GT_GT_EQ_hnf(field root);
void Prelude_liftM_hnf(field root);
void Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_hnf(field root);
void Prelude_liftM2_DO_US_HTlambda460_hnf(field root);
void Prelude_liftM2_hnf(field root);
void Prelude_foldM_DO_US_HTlambda457_hnf(field root);
void Prelude_sequence_US_hnf(field root);
void Prelude_mapM_US_hnf(field root);
void Prelude_forM_US_hnf(field root);
void Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_hnf(field root);
void Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_hnf(field root);
void Prelude_sequence_DO_US_HTlambda454_hnf(field root);
void Prelude_sequence_hnf(field root);
void Prelude_mapM_hnf(field root);
void Prelude_mapM_HTP12_hnf(field root);
void Prelude_forM_hnf(field root);
void Prelude_forM_HTP13_hnf(field root);
void Prelude__GT_GT_DL_DO_US_HTlambda283_hnf(field root);
void Prelude_returnIO_hnf(field root);
void Prelude__GT_GT_EQ_DL_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_hnf(field root);
void Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_hnf(field root);
void Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_hnf(field root);
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_hnf(field root);
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_hnf(field root);
void Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root);
void Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_hnf(field root);
void Prelude_done_hnf(field root);
void Prelude_when_hnf(field root);
void Prelude_unless_hnf(field root);
void Prelude_doSolve_hnf(field root);
void Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root);
void Prelude_sequenceIO_US_hnf(field root);
void Prelude_mapIO_US_hnf(field root);
void Prelude_mapIO_US_HTP17_hnf(field root);
void Prelude_forIO_US_hnf(field root);
void Prelude_forIO_US_HTP18_hnf(field root);
void Prelude_putStrLn_hnf(field root);
void Prelude_print_hnf(field root);
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root);
void Prelude_liftIO_hnf(field root);
void Prelude_liftIO_HTP19_hnf(field root);
void Prelude_foldIO_DO_US_HTlambda296_hnf(field root);
void Prelude_sequenceIO_DO_US_HTlambda292_hnf(field root);
void Prelude_mapIO_hnf(field root);
void Prelude_forIO_hnf(field root);
void Prelude_getLine_hnf(field root);
void Prelude__USdef_HTfail_HTPrelude_DOMonad_hnf(field root);
void Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root);
void Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_hnf(field root);
void Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_hnf(field root);
void Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root);
void Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_hnf(field root);
void Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_hnf(field root);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root);
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root);
void Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_hnf(field root);
void Prelude_foldM_hnf(field root);
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_hnf(field root);
void Prelude_putStr_hnf(field root);
void Prelude_foldIO_hnf(field root);
void Prelude_sequenceIO_hnf(field root);
void Prelude_getLine_DO_US_HTlambda285_hnf(field root);
void Prelude_getLine_DO_US_HTlambda285_HTP20_hnf(field root);
void Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root);
void Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_hnf(field root);
void Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root);
Node* Prelude__USdef_HTfmap_HTPrelude_DOFunctor_RET_hnf(Node* backup);
Node* Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_RET_hnf(Node* backup);
Node* Prelude__USdef_HTreturn_HTPrelude_DOMonad_RET_hnf(Node* backup);
void Prelude_maybe__hnf(field root);
void Prelude_maybe__0_hnf(field root);
Node* Prelude_maybe_RET_hnf(Node* backup);
void Prelude_either__hnf(field root);
Node* Prelude_either_RET_hnf(Node* backup);
Node* Prelude_userError_RET_hnf(Node* backup);
Node* Prelude_ioError_RET_hnf(Node* backup);
void Prelude_ioError_HTA0__hnf(field root);
Node* Prelude_ioError_HTA0_RET_hnf(Node* backup);
void Prelude_fmap__hnf(field root);
void Prelude_fmap__0_hnf(field root);
Node* Prelude_fmap_RET_hnf(Node* backup);
void Prelude_fail__hnf(field root);
void Prelude_fail__0_hnf(field root);
Node* Prelude_fail_RET_hnf(Node* backup);
void Prelude_makeNondetError__hnf(field root);
Node* Prelude_makeNondetError_RET_hnf(Node* backup);
void Prelude_readNondetError__hnf(field root);
Node* Prelude_readNondetError_RET_hnf(Node* backup);
Node* Prelude_readNondetError_HTP0_RET_hnf(Node* backup);
void Prelude_makeFailError__hnf(field root);
Node* Prelude_makeFailError_RET_hnf(Node* backup);
void Prelude_readFailError__hnf(field root);
Node* Prelude_readFailError_RET_hnf(Node* backup);
Node* Prelude_readFailError_HTP1_RET_hnf(Node* backup);
void Prelude_makeUserError__hnf(field root);
Node* Prelude_makeUserError_RET_hnf(Node* backup);
void Prelude_readUserError__hnf(field root);
Node* Prelude_readUserError_RET_hnf(Node* backup);
Node* Prelude_readUserError_HTP2_RET_hnf(Node* backup);
void Prelude_makeIOError__hnf(field root);
Node* Prelude_makeIOError_RET_hnf(Node* backup);
void Prelude_readIOError__hnf(field root);
Node* Prelude_readIOError_RET_hnf(Node* backup);
Node* Prelude_readIOError_HTP3_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2_hnf(field root);
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3_hnf(field root);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf(Node* backup);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4__hnf(field root);
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_RET_hnf(Node* backup);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3__hnf(field root);
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_RET_hnf(Node* backup);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2__hnf(field root);
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_RET_hnf(Node* backup);
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1__hnf(field root);
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf(Node* backup);
void Prelude_return__hnf(field root);
void Prelude_return__0_hnf(field root);
Node* Prelude_return_RET_hnf(Node* backup);
void Prelude_whenM__hnf(field root);
void Prelude_whenM__0_hnf(field root);
Node* Prelude_whenM_RET_hnf(Node* backup);
void Prelude_unlessM__hnf(field root);
void Prelude_unlessM__1_hnf(field root);
Node* Prelude_unlessM_RET_hnf(Node* backup);
void Prelude__GT_GT__hnf(field root);
void Prelude__GT_GT__0_hnf(field root);
Node* Prelude__GT_GT_RET_hnf(Node* backup);
void Prelude__GT_GT_EQ__hnf(field root);
void Prelude__GT_GT_EQ__0_hnf(field root);
Node* Prelude__GT_GT_EQ_RET_hnf(Node* backup);
Node* Prelude_liftM_RET_hnf(Node* backup);
Node* Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_RET_hnf(Node* backup);
Node* Prelude_liftM2_DO_US_HTlambda460_RET_hnf(Node* backup);
Node* Prelude_liftM2_RET_hnf(Node* backup);
Node* Prelude_foldM_DO_US_HTlambda457_RET_hnf(Node* backup);
Node* Prelude_sequence_US_RET_hnf(Node* backup);
Node* Prelude_mapM_US_RET_hnf(Node* backup);
Node* Prelude_forM_US_RET_hnf(Node* backup);
Node* Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_RET_hnf(Node* backup);
Node* Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_RET_hnf(Node* backup);
Node* Prelude_sequence_DO_US_HTlambda454_RET_hnf(Node* backup);
Node* Prelude_sequence_RET_hnf(Node* backup);
Node* Prelude_mapM_RET_hnf(Node* backup);
Node* Prelude_mapM_HTP12_RET_hnf(Node* backup);
Node* Prelude_forM_RET_hnf(Node* backup);
Node* Prelude_forM_HTP13_RET_hnf(Node* backup);
void Prelude__GT_GT_DL_DO_US_HTlambda283__hnf(field root);
Node* Prelude__GT_GT_DL_DO_US_HTlambda283_RET_hnf(Node* backup);
Node* Prelude_returnIO_RET_hnf(Node* backup);
Node* Prelude__GT_GT_EQ_DL_RET_hnf(Node* backup);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2_hnf(field root);
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3_hnf(field root);
Node* Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup);
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe__hnf(field root);
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup);
Node* Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_RET_hnf(Node* backup);
Node* Prelude_done_RET_hnf(Node* backup);
void Prelude_when__hnf(field root);
void Prelude_when__0_hnf(field root);
Node* Prelude_when_RET_hnf(Node* backup);
void Prelude_unless__hnf(field root);
void Prelude_unless__1_hnf(field root);
Node* Prelude_unless_RET_hnf(Node* backup);
void Prelude_doSolve__hnf(field root);
Node* Prelude_doSolve_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup);
Node* Prelude_sequenceIO_US_RET_hnf(Node* backup);
Node* Prelude_mapIO_US_RET_hnf(Node* backup);
Node* Prelude_mapIO_US_HTP17_RET_hnf(Node* backup);
Node* Prelude_forIO_US_RET_hnf(Node* backup);
Node* Prelude_forIO_US_HTP18_RET_hnf(Node* backup);
Node* Prelude_putStrLn_RET_hnf(Node* backup);
Node* Prelude_print_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup);
Node* Prelude_liftIO_RET_hnf(Node* backup);
Node* Prelude_liftIO_HTP19_RET_hnf(Node* backup);
Node* Prelude_foldIO_DO_US_HTlambda296_RET_hnf(Node* backup);
Node* Prelude_sequenceIO_DO_US_HTlambda292_RET_hnf(Node* backup);
Node* Prelude_mapIO_RET_hnf(Node* backup);
Node* Prelude_forIO_RET_hnf(Node* backup);
Node* Prelude_getLine_RET_hnf(Node* backup);
Node* Prelude__USdef_HTfail_HTPrelude_DOMonad_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup);
void Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183__hnf(field root);
Node* Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_RET_hnf(Node* backup);
Node* Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_RET_hnf(Node* backup);
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError__hnf(field root);
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup);
Node* Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf(Node* backup);
void Prelude_foldM__hnf(field root);
Node* Prelude_foldM_RET_hnf(Node* backup);
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__hnf(field root);
Node* Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(Node* backup);
void Prelude_putStr__hnf(field root);
Node* Prelude_putStr_RET_hnf(Node* backup);
void Prelude_foldIO__hnf(field root);
Node* Prelude_foldIO_RET_hnf(Node* backup);
void Prelude_sequenceIO__hnf(field root);
Node* Prelude_sequenceIO_RET_hnf(Node* backup);
void Prelude_getLine_DO_US_HTlambda285__hnf(field root);
Node* Prelude_getLine_DO_US_HTlambda285_RET_hnf(Node* backup);
Node* Prelude_getLine_DO_US_HTlambda285_HTP20_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup);
Node* Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup);

static Symbol Prelude__USdef_HTfmap_HTPrelude_DOFunctor_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#fmap#Prelude.Functor", .hnf = &Prelude__USdef_HTfmap_HTPrelude_DOFunctor_hnf, .hnf_RET = &Prelude__USdef_HTfmap_HTPrelude_DOFunctor_RET_hnf};
static Symbol Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#>>=#Prelude.Monad", .hnf = &Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_hnf, .hnf_RET = &Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_RET_hnf};
static Symbol Prelude__USdef_HTreturn_HTPrelude_DOMonad_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#return#Prelude.Monad", .hnf = &Prelude__USdef_HTreturn_HTPrelude_DOMonad_hnf, .hnf_RET = &Prelude__USdef_HTreturn_HTPrelude_DOMonad_RET_hnf};
static Symbol Prelude_maybe_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "maybe", .hnf = &Prelude_maybe_hnf, .hnf_RET = &Prelude_maybe_RET_hnf};
static Symbol Prelude_either_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "either", .hnf = &Prelude_either_hnf, .hnf_RET = &Prelude_either_RET_hnf};
static Symbol Prelude_userError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "userError", .hnf = &Prelude_userError_hnf, .hnf_RET = &Prelude_userError_RET_hnf};
static Symbol Prelude_ioError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ioError", .hnf = &Prelude_ioError_hnf, .hnf_RET = &Prelude_ioError_RET_hnf};
static Symbol Prelude_ioError_HTA0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ioError#A0", .hnf = &Prelude_ioError_HTA0_hnf, .hnf_RET = &Prelude_ioError_HTA0_RET_hnf};
static Symbol Prelude_fmap_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fmap", .hnf = &Prelude_fmap_hnf, .hnf_RET = &Prelude_fmap_RET_hnf};
static Symbol Prelude_fail_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fail", .hnf = &Prelude_fail_hnf, .hnf_RET = &Prelude_fail_RET_hnf};
static Symbol Prelude_makeNondetError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeNondetError", .hnf = &Prelude_makeNondetError_hnf, .hnf_RET = &Prelude_makeNondetError_RET_hnf};
static Symbol Prelude_readNondetError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "readNondetError", .hnf = &Prelude_readNondetError_hnf, .hnf_RET = &Prelude_readNondetError_RET_hnf};
static Symbol Prelude_readNondetError_HTP0_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "readNondetError#P0", .hnf = &Prelude_readNondetError_HTP0_hnf, .hnf_RET = &Prelude_readNondetError_HTP0_RET_hnf};
static Symbol Prelude_makeFailError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeFailError", .hnf = &Prelude_makeFailError_hnf, .hnf_RET = &Prelude_makeFailError_RET_hnf};
static Symbol Prelude_readFailError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "readFailError", .hnf = &Prelude_readFailError_hnf, .hnf_RET = &Prelude_readFailError_RET_hnf};
static Symbol Prelude_readFailError_HTP1_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "readFailError#P1", .hnf = &Prelude_readFailError_HTP1_hnf, .hnf_RET = &Prelude_readFailError_HTP1_RET_hnf};
static Symbol Prelude_makeUserError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeUserError", .hnf = &Prelude_makeUserError_hnf, .hnf_RET = &Prelude_makeUserError_RET_hnf};
static Symbol Prelude_readUserError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "readUserError", .hnf = &Prelude_readUserError_hnf, .hnf_RET = &Prelude_readUserError_RET_hnf};
static Symbol Prelude_readUserError_HTP2_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "readUserError#P2", .hnf = &Prelude_readUserError_HTP2_hnf, .hnf_RET = &Prelude_readUserError_HTP2_RET_hnf};
static Symbol Prelude_makeIOError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeIOError", .hnf = &Prelude_makeIOError_hnf, .hnf_RET = &Prelude_makeIOError_RET_hnf};
static Symbol Prelude_readIOError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "readIOError", .hnf = &Prelude_readIOError_hnf, .hnf_RET = &Prelude_readIOError_RET_hnf};
static Symbol Prelude_readIOError_HTP3_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "readIOError#P3", .hnf = &Prelude_readIOError_HTP3_hnf, .hnf_RET = &Prelude_readIOError_HTP3_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P11", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P10", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P9", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P8", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P7", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P6", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P5", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_RET_hnf};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError#P4", .hnf = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_hnf, .hnf_RET = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Show#Prelude.IOError", .hnf = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError", .hnf = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A4", .hnf = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_hnf, .hnf_RET = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_RET_hnf};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A3", .hnf = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_hnf, .hnf_RET = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_RET_hnf};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A2", .hnf = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_hnf, .hnf_RET = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_RET_hnf};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A1", .hnf = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_hnf, .hnf_RET = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Read#Prelude.IOError", .hnf = &Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude_return_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "return", .hnf = &Prelude_return_hnf, .hnf_RET = &Prelude_return_RET_hnf};
static Symbol Prelude_whenM_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "whenM", .hnf = &Prelude_whenM_hnf, .hnf_RET = &Prelude_whenM_RET_hnf};
static Symbol Prelude_unlessM_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "unlessM", .hnf = &Prelude_unlessM_hnf, .hnf_RET = &Prelude_unlessM_RET_hnf};
static Symbol Prelude__GT_GT_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = ">>", .hnf = &Prelude__GT_GT_hnf, .hnf_RET = &Prelude__GT_GT_RET_hnf};
static Symbol Prelude__GT_GT_EQ_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = ">>=", .hnf = &Prelude__GT_GT_EQ_hnf, .hnf_RET = &Prelude__GT_GT_EQ_RET_hnf};
static Symbol Prelude_liftM_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "liftM", .hnf = &Prelude_liftM_hnf, .hnf_RET = &Prelude_liftM_RET_hnf};
static Symbol Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "liftM2._#lambda460._#lambda462", .hnf = &Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_hnf, .hnf_RET = &Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_RET_hnf};
static Symbol Prelude_liftM2_DO_US_HTlambda460_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "liftM2._#lambda460", .hnf = &Prelude_liftM2_DO_US_HTlambda460_hnf, .hnf_RET = &Prelude_liftM2_DO_US_HTlambda460_RET_hnf};
static Symbol Prelude_liftM2_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "liftM2", .hnf = &Prelude_liftM2_hnf, .hnf_RET = &Prelude_liftM2_RET_hnf};
static Symbol Prelude_foldM_DO_US_HTlambda457_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "foldM._#lambda457", .hnf = &Prelude_foldM_DO_US_HTlambda457_hnf, .hnf_RET = &Prelude_foldM_DO_US_HTlambda457_RET_hnf};
static Symbol Prelude_sequence_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "sequence_", .hnf = &Prelude_sequence_US_hnf, .hnf_RET = &Prelude_sequence_US_RET_hnf};
static Symbol Prelude_mapM_US_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "mapM_", .hnf = &Prelude_mapM_US_hnf, .hnf_RET = &Prelude_mapM_US_RET_hnf};
static Symbol Prelude_forM_US_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "forM_", .hnf = &Prelude_forM_US_hnf, .hnf_RET = &Prelude_forM_US_RET_hnf};
static Symbol Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "sequence._#lambda454._#lambda455._#lambda456", .hnf = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_hnf, .hnf_RET = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_RET_hnf};
static Symbol Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "sequence._#lambda454._#lambda455", .hnf = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_hnf, .hnf_RET = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_RET_hnf};
static Symbol Prelude_sequence_DO_US_HTlambda454_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "sequence._#lambda454", .hnf = &Prelude_sequence_DO_US_HTlambda454_hnf, .hnf_RET = &Prelude_sequence_DO_US_HTlambda454_RET_hnf};
static Symbol Prelude_sequence_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "sequence", .hnf = &Prelude_sequence_hnf, .hnf_RET = &Prelude_sequence_RET_hnf};
static Symbol Prelude_mapM_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "mapM", .hnf = &Prelude_mapM_hnf, .hnf_RET = &Prelude_mapM_RET_hnf};
static Symbol Prelude_mapM_HTP12_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "mapM#P12", .hnf = &Prelude_mapM_HTP12_hnf, .hnf_RET = &Prelude_mapM_HTP12_RET_hnf};
static Symbol Prelude_forM_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "forM", .hnf = &Prelude_forM_hnf, .hnf_RET = &Prelude_forM_RET_hnf};
static Symbol Prelude_forM_HTP13_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "forM#P13", .hnf = &Prelude_forM_HTP13_hnf, .hnf_RET = &Prelude_forM_HTP13_RET_hnf};
static Symbol Prelude__GT_GT_DL_DO_US_HTlambda283_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = ">>$._#lambda283", .hnf = &Prelude__GT_GT_DL_DO_US_HTlambda283_hnf, .hnf_RET = &Prelude__GT_GT_DL_DO_US_HTlambda283_RET_hnf};
static Symbol Prelude_returnIO_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "returnIO", .hnf = &Prelude_returnIO_hnf, .hnf_RET = &Prelude_returnIO_RET_hnf};
static Symbol Prelude__GT_GT_EQ_DL_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = ">>=$", .hnf = &Prelude__GT_GT_EQ_DL_hnf, .hnf_RET = &Prelude__GT_GT_EQ_DL_RET_hnf};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#==#Prelude.Eq#Prelude.IOError", .hnf = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Eq#Prelude.IOError", .hnf = &Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fail#Prelude.Monad#[]", .hnf = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#return#Prelude.Monad#[]", .hnf = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#>>=#Prelude.Monad#[]._#lambda184#P14", .hnf = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#>>=#Prelude.Monad#[]", .hnf = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "_impl#>>=#Prelude.Monad#[]#P15", .hnf = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_impl#>>=#Prelude.Monad#[]#P15#P16", .hnf = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_RET_hnf};
static Symbol Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fail#Prelude.Monad#Prelude.Maybe", .hnf = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#return#Prelude.Monad#Prelude.Maybe", .hnf = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#>>=#Prelude.Monad#Prelude.Maybe", .hnf = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#return#Prelude.Monad#Prelude.IO", .hnf = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_hnf, .hnf_RET = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf};
static Symbol Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "sequenceIO._#lambda292._#lambda294", .hnf = &Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_hnf, .hnf_RET = &Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_RET_hnf};
static Symbol Prelude_done_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "done", .hnf = &Prelude_done_hnf, .hnf_RET = &Prelude_done_RET_hnf};
static Symbol Prelude_when_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "when", .hnf = &Prelude_when_hnf, .hnf_RET = &Prelude_when_RET_hnf};
static Symbol Prelude_unless_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "unless", .hnf = &Prelude_unless_hnf, .hnf_RET = &Prelude_unless_RET_hnf};
static Symbol Prelude_doSolve_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "doSolve", .hnf = &Prelude_doSolve_hnf, .hnf_RET = &Prelude_doSolve_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#>>#Prelude.Monad#Prelude.IO", .hnf = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf};
static Symbol Prelude_sequenceIO_US_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "sequenceIO_", .hnf = &Prelude_sequenceIO_US_hnf, .hnf_RET = &Prelude_sequenceIO_US_RET_hnf};
static Symbol Prelude_mapIO_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "mapIO_", .hnf = &Prelude_mapIO_US_hnf, .hnf_RET = &Prelude_mapIO_US_RET_hnf};
static Symbol Prelude_mapIO_US_HTP17_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "mapIO_#P17", .hnf = &Prelude_mapIO_US_HTP17_hnf, .hnf_RET = &Prelude_mapIO_US_HTP17_RET_hnf};
static Symbol Prelude_forIO_US_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "forIO_", .hnf = &Prelude_forIO_US_hnf, .hnf_RET = &Prelude_forIO_US_RET_hnf};
static Symbol Prelude_forIO_US_HTP18_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "forIO_#P18", .hnf = &Prelude_forIO_US_HTP18_hnf, .hnf_RET = &Prelude_forIO_US_HTP18_RET_hnf};
static Symbol Prelude_putStrLn_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "putStrLn", .hnf = &Prelude_putStrLn_hnf, .hnf_RET = &Prelude_putStrLn_RET_hnf};
static Symbol Prelude_print_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "print", .hnf = &Prelude_print_hnf, .hnf_RET = &Prelude_print_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#>>=#Prelude.Monad#Prelude.IO", .hnf = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf};
static Symbol Prelude_liftIO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "liftIO", .hnf = &Prelude_liftIO_hnf, .hnf_RET = &Prelude_liftIO_RET_hnf};
static Symbol Prelude_liftIO_HTP19_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "liftIO#P19", .hnf = &Prelude_liftIO_HTP19_hnf, .hnf_RET = &Prelude_liftIO_HTP19_RET_hnf};
static Symbol Prelude_foldIO_DO_US_HTlambda296_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldIO._#lambda296", .hnf = &Prelude_foldIO_DO_US_HTlambda296_hnf, .hnf_RET = &Prelude_foldIO_DO_US_HTlambda296_RET_hnf};
static Symbol Prelude_sequenceIO_DO_US_HTlambda292_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "sequenceIO._#lambda292", .hnf = &Prelude_sequenceIO_DO_US_HTlambda292_hnf, .hnf_RET = &Prelude_sequenceIO_DO_US_HTlambda292_RET_hnf};
static Symbol Prelude_mapIO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "mapIO", .hnf = &Prelude_mapIO_hnf, .hnf_RET = &Prelude_mapIO_RET_hnf};
static Symbol Prelude_forIO_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "forIO", .hnf = &Prelude_forIO_hnf, .hnf_RET = &Prelude_forIO_RET_hnf};
static Symbol Prelude_getLine_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "getLine", .hnf = &Prelude_getLine_hnf, .hnf_RET = &Prelude_getLine_RET_hnf};
static Symbol Prelude__USdef_HTfail_HTPrelude_DOMonad_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#fail#Prelude.Monad", .hnf = &Prelude__USdef_HTfail_HTPrelude_DOMonad_hnf, .hnf_RET = &Prelude__USdef_HTfail_HTPrelude_DOMonad_RET_hnf};
static Symbol Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#fail#Prelude.Monad#Prelude.IO", .hnf = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_hnf, .hnf_RET = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf};
static Symbol Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_def#>>#Prelude.Monad._#lambda183", .hnf = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_hnf, .hnf_RET = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_RET_hnf};
static Symbol Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "_def#>>#Prelude.Monad", .hnf = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_hnf, .hnf_RET = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#>>#Prelude.Monad#[]", .hnf = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#>>#Prelude.Monad#Prelude.Maybe", .hnf = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#fmap#Prelude.Functor#[]", .hnf = &Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_hnf, .hnf_RET = &Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Functor#[]", .hnf = &Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_RET_hnf};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.IOError", .hnf = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#show#Prelude.Show#Prelude.IOError", .hnf = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readList#Prelude.Read#Prelude.IOError", .hnf = &Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude_foldM_symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "foldM", .hnf = &Prelude_foldM_hnf, .hnf_RET = &Prelude_foldM_RET_hnf};
static Symbol Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#/=#Prelude.Eq#Prelude.IOError", .hnf = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_hnf, .hnf_RET = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf};
static Symbol Prelude_putStr_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "putStr", .hnf = &Prelude_putStr_hnf, .hnf_RET = &Prelude_putStr_RET_hnf};
static Symbol Prelude_foldIO_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldIO", .hnf = &Prelude_foldIO_hnf, .hnf_RET = &Prelude_foldIO_RET_hnf};
static Symbol Prelude_sequenceIO_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "sequenceIO", .hnf = &Prelude_sequenceIO_hnf, .hnf_RET = &Prelude_sequenceIO_RET_hnf};
static Symbol Prelude_getLine_DO_US_HTlambda285_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "getLine._#lambda285", .hnf = &Prelude_getLine_DO_US_HTlambda285_hnf, .hnf_RET = &Prelude_getLine_DO_US_HTlambda285_RET_hnf};
static Symbol Prelude_getLine_DO_US_HTlambda285_HTP20_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "getLine._#lambda285#P20", .hnf = &Prelude_getLine_DO_US_HTlambda285_HTP20_hnf, .hnf_RET = &Prelude_getLine_DO_US_HTlambda285_HTP20_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Monad#Prelude.IO", .hnf = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Monad#[]", .hnf = &Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_RET_hnf};
static Symbol Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol = {.tag = FUNCTION_TAG, .arity = 0, .name = "_inst#Prelude.Monad#Prelude.Maybe", .hnf = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf, .hnf_RET = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf};
static Symbol Prelude_maybe__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "maybe@[]", .hnf = Prelude_maybe__hnf, .hnf_RET = NULL};
static Symbol Prelude_maybe__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "maybe@[0]", .hnf = Prelude_maybe__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_either__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "either@[]", .hnf = Prelude_either__hnf, .hnf_RET = NULL};
static Symbol Prelude_ioError_HTA0__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "ioError#A0@[]", .hnf = Prelude_ioError_HTA0__hnf, .hnf_RET = NULL};
static Symbol Prelude_fmap__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fmap@[]", .hnf = Prelude_fmap__hnf, .hnf_RET = NULL};
static Symbol Prelude_fmap__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fmap@[0]", .hnf = Prelude_fmap__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_fail__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fail@[]", .hnf = Prelude_fail__hnf, .hnf_RET = NULL};
static Symbol Prelude_fail__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "fail@[0]", .hnf = Prelude_fail__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_makeNondetError__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeNondetError@[]", .hnf = Prelude_makeNondetError__hnf, .hnf_RET = NULL};
static Symbol Prelude_readNondetError__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "readNondetError@[]", .hnf = Prelude_readNondetError__hnf, .hnf_RET = NULL};
static Symbol Prelude_makeFailError__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeFailError@[]", .hnf = Prelude_makeFailError__hnf, .hnf_RET = NULL};
static Symbol Prelude_readFailError__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "readFailError@[]", .hnf = Prelude_readFailError__hnf, .hnf_RET = NULL};
static Symbol Prelude_makeUserError__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeUserError@[]", .hnf = Prelude_makeUserError__hnf, .hnf_RET = NULL};
static Symbol Prelude_readUserError__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "readUserError@[]", .hnf = Prelude_readUserError__hnf, .hnf_RET = NULL};
static Symbol Prelude_makeIOError__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "makeIOError@[]", .hnf = Prelude_makeIOError__hnf, .hnf_RET = NULL};
static Symbol Prelude_readIOError__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "readIOError@[]", .hnf = Prelude_readIOError__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError@[]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError@[0]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError@[1]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError@[2]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showsPrec#Prelude.Show#Prelude.IOError@[3]", .hnf = Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A4@[]", .hnf = Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A3@[]", .hnf = Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A2@[]", .hnf = Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#readsPrec#Prelude.Read#Prelude.IOError#A1@[]", .hnf = Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1__hnf, .hnf_RET = NULL};
static Symbol Prelude_return__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "return@[]", .hnf = Prelude_return__hnf, .hnf_RET = NULL};
static Symbol Prelude_return__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "return@[0]", .hnf = Prelude_return__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_whenM__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "whenM@[]", .hnf = Prelude_whenM__hnf, .hnf_RET = NULL};
static Symbol Prelude_whenM__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "whenM@[0]", .hnf = Prelude_whenM__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_unlessM__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "unlessM@[]", .hnf = Prelude_unlessM__hnf, .hnf_RET = NULL};
static Symbol Prelude_unlessM__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "unlessM@[1]", .hnf = Prelude_unlessM__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__GT_GT__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = ">>@[]", .hnf = Prelude__GT_GT__hnf, .hnf_RET = NULL};
static Symbol Prelude__GT_GT__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = ">>@[0]", .hnf = Prelude__GT_GT__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__GT_GT_EQ__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = ">>=@[]", .hnf = Prelude__GT_GT_EQ__hnf, .hnf_RET = NULL};
static Symbol Prelude__GT_GT_EQ__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = ">>=@[0]", .hnf = Prelude__GT_GT_EQ__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__GT_GT_DL_DO_US_HTlambda283__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = ">>$._#lambda283@[]", .hnf = Prelude__GT_GT_DL_DO_US_HTlambda283__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#==#Prelude.Eq#Prelude.IOError@[]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#==#Prelude.Eq#Prelude.IOError@[0]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#==#Prelude.Eq#Prelude.IOError@[1]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#==#Prelude.Eq#Prelude.IOError@[2]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#==#Prelude.Eq#Prelude.IOError@[3]", .hnf = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3_hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#>>=#Prelude.Monad#Prelude.Maybe@[]", .hnf = Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe__hnf, .hnf_RET = NULL};
static Symbol Prelude_when__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "when@[]", .hnf = Prelude_when__hnf, .hnf_RET = NULL};
static Symbol Prelude_when__0_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "when@[0]", .hnf = Prelude_when__0_hnf, .hnf_RET = NULL};
static Symbol Prelude_unless__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "unless@[]", .hnf = Prelude_unless__hnf, .hnf_RET = NULL};
static Symbol Prelude_unless__1_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "unless@[1]", .hnf = Prelude_unless__1_hnf, .hnf_RET = NULL};
static Symbol Prelude_doSolve__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "doSolve@[]", .hnf = Prelude_doSolve__hnf, .hnf_RET = NULL};
static Symbol Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_def#>>#Prelude.Monad._#lambda183@[]", .hnf = Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError__symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "_impl#showList#Prelude.Show#Prelude.IOError@[]", .hnf = Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldM__symbol = {.tag = FUNCTION_TAG, .arity = 4, .name = "foldM@[]", .hnf = Prelude_foldM__hnf, .hnf_RET = NULL};
static Symbol Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "_impl#/=#Prelude.Eq#Prelude.IOError@[]", .hnf = Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__hnf, .hnf_RET = NULL};
static Symbol Prelude_putStr__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "putStr@[]", .hnf = Prelude_putStr__hnf, .hnf_RET = NULL};
static Symbol Prelude_foldIO__symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "foldIO@[]", .hnf = Prelude_foldIO__hnf, .hnf_RET = NULL};
static Symbol Prelude_sequenceIO__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "sequenceIO@[]", .hnf = Prelude_sequenceIO__hnf, .hnf_RET = NULL};
static Symbol Prelude_getLine_DO_US_HTlambda285__symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "getLine._#lambda285@[]", .hnf = Prelude_getLine_DO_US_HTlambda285__hnf, .hnf_RET = NULL};

// default for fmap in Functor
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTfmap_HTPrelude_DOFunctor(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HTfmap_HTPrelude_DOFunctor_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for >>= in Monad
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for return in Monad
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTreturn_HTPrelude_DOMonad(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USdef_HTreturn_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// maybe
__attribute__((always_inline)) 
static inline void set_Prelude_maybe(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_maybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// either
__attribute__((always_inline)) 
static inline void set_Prelude_either(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_either_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// userError
__attribute__((always_inline)) 
static inline void set_Prelude_userError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_userError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// ioError
__attribute__((always_inline)) 
static inline void set_Prelude_ioError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_ioError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// ioError#A0
__attribute__((always_inline)) 
static inline void set_Prelude_ioError_HTA0(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_ioError_HTA0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// fmap
__attribute__((always_inline)) 
static inline void set_Prelude_fmap(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_fmap_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// fail
__attribute__((always_inline)) 
static inline void set_Prelude_fail(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_fail_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// makeNondetError
__attribute__((always_inline)) 
static inline void set_Prelude_makeNondetError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_makeNondetError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readNondetError
__attribute__((always_inline)) 
static inline void set_Prelude_readNondetError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_readNondetError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readNondetError#P0
__attribute__((always_inline)) 
static inline void set_Prelude_readNondetError_HTP0(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_readNondetError_HTP0_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// makeFailError
__attribute__((always_inline)) 
static inline void set_Prelude_makeFailError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_makeFailError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readFailError
__attribute__((always_inline)) 
static inline void set_Prelude_readFailError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_readFailError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readFailError#P1
__attribute__((always_inline)) 
static inline void set_Prelude_readFailError_HTP1(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_readFailError_HTP1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// makeUserError
__attribute__((always_inline)) 
static inline void set_Prelude_makeUserError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_makeUserError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readUserError
__attribute__((always_inline)) 
static inline void set_Prelude_readUserError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_readUserError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readUserError#P2
__attribute__((always_inline)) 
static inline void set_Prelude_readUserError_HTP2(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_readUserError_HTP2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// makeIOError
__attribute__((always_inline)) 
static inline void set_Prelude_makeIOError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_makeIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readIOError
__attribute__((always_inline)) 
static inline void set_Prelude_readIOError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_readIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// readIOError#P3
__attribute__((always_inline)) 
static inline void set_Prelude_readIOError_HTP3(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_readIOError_HTP3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// instance of Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Read for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// return
__attribute__((always_inline)) 
static inline void set_Prelude_return(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_return_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// whenM
__attribute__((always_inline)) 
static inline void set_Prelude_whenM(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_whenM_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// unlessM
__attribute__((always_inline)) 
static inline void set_Prelude_unlessM(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_unlessM_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// >>
__attribute__((always_inline)) 
static inline void set_Prelude__GT_GT(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__GT_GT_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// >>=
__attribute__((always_inline)) 
static inline void set_Prelude__GT_GT_EQ(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__GT_GT_EQ_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// liftM
__attribute__((always_inline)) 
static inline void set_Prelude_liftM(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_liftM_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// liftM2._#lambda460._#lambda462
__attribute__((always_inline)) 
static inline void set_Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// liftM2._#lambda460
__attribute__((always_inline)) 
static inline void set_Prelude_liftM2_DO_US_HTlambda460(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_liftM2_DO_US_HTlambda460_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// liftM2
__attribute__((always_inline)) 
static inline void set_Prelude_liftM2(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_liftM2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// foldM._#lambda457
__attribute__((always_inline)) 
static inline void set_Prelude_foldM_DO_US_HTlambda457(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_foldM_DO_US_HTlambda457_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// sequence_
__attribute__((always_inline)) 
static inline void set_Prelude_sequence_US(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_sequence_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// mapM_
__attribute__((always_inline)) 
static inline void set_Prelude_mapM_US(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_mapM_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// forM_
__attribute__((always_inline)) 
static inline void set_Prelude_forM_US(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_forM_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// sequence._#lambda454._#lambda455._#lambda456
__attribute__((always_inline)) 
static inline void set_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// sequence._#lambda454._#lambda455
__attribute__((always_inline)) 
static inline void set_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// sequence._#lambda454
__attribute__((always_inline)) 
static inline void set_Prelude_sequence_DO_US_HTlambda454(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_sequence_DO_US_HTlambda454_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// sequence
__attribute__((always_inline)) 
static inline void set_Prelude_sequence(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_sequence_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// mapM
__attribute__((always_inline)) 
static inline void set_Prelude_mapM(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_mapM_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// mapM#P12
__attribute__((always_inline)) 
static inline void set_Prelude_mapM_HTP12(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_mapM_HTP12_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// forM
__attribute__((always_inline)) 
static inline void set_Prelude_forM(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_forM_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// forM#P13
__attribute__((always_inline)) 
static inline void set_Prelude_forM_HTP13(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_forM_HTP13_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// >>$._#lambda283
__attribute__((always_inline)) 
static inline void set_Prelude__GT_GT_DL_DO_US_HTlambda283(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__GT_GT_DL_DO_US_HTlambda283_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// returnIO
__attribute__((always_inline)) 
static inline void set_Prelude_returnIO(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_returnIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// >>=$
__attribute__((always_inline)) 
static inline void set_Prelude__GT_GT_EQ_DL(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__GT_GT_EQ_DL_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of == in Eq for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// instance of Eq for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of fail in Monad for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of return in Monad for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of >>= in Monad for _
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of >>= in Monad for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of >>= in Monad for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// implementation of >>= in Monad for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of fail in Monad for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of return in Monad for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of >>= in Monad for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of return in Monad for IO
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// sequenceIO._#lambda292._#lambda294
__attribute__((always_inline)) 
static inline void set_Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// done
__attribute__((always_inline)) 
static inline void set_Prelude_done(field root, int missing)
{
  root.n->symbol = &Prelude_done_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// when
__attribute__((always_inline)) 
static inline void set_Prelude_when(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_when_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// unless
__attribute__((always_inline)) 
static inline void set_Prelude_unless(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_unless_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// doSolve
__attribute__((always_inline)) 
static inline void set_Prelude_doSolve(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_doSolve_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of >> in Monad for IO
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// sequenceIO_
__attribute__((always_inline)) 
static inline void set_Prelude_sequenceIO_US(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_sequenceIO_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// mapIO_
__attribute__((always_inline)) 
static inline void set_Prelude_mapIO_US(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_mapIO_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// mapIO_#P17
__attribute__((always_inline)) 
static inline void set_Prelude_mapIO_US_HTP17(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_mapIO_US_HTP17_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// forIO_
__attribute__((always_inline)) 
static inline void set_Prelude_forIO_US(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_forIO_US_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// forIO_#P18
__attribute__((always_inline)) 
static inline void set_Prelude_forIO_US_HTP18(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_forIO_US_HTP18_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// putStrLn
__attribute__((always_inline)) 
static inline void set_Prelude_putStrLn(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_putStrLn_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// print
__attribute__((always_inline)) 
static inline void set_Prelude_print(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_print_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of >>= in Monad for IO
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// liftIO
__attribute__((always_inline)) 
static inline void set_Prelude_liftIO(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_liftIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// liftIO#P19
__attribute__((always_inline)) 
static inline void set_Prelude_liftIO_HTP19(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_liftIO_HTP19_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// foldIO._#lambda296
__attribute__((always_inline)) 
static inline void set_Prelude_foldIO_DO_US_HTlambda296(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_foldIO_DO_US_HTlambda296_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// sequenceIO._#lambda292
__attribute__((always_inline)) 
static inline void set_Prelude_sequenceIO_DO_US_HTlambda292(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_sequenceIO_DO_US_HTlambda292_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// mapIO
__attribute__((always_inline)) 
static inline void set_Prelude_mapIO(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_mapIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// forIO
__attribute__((always_inline)) 
static inline void set_Prelude_forIO(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_forIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// getLine
__attribute__((always_inline)) 
static inline void set_Prelude_getLine(field root, int missing)
{
  root.n->symbol = &Prelude_getLine_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for fail in Monad
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HTfail_HTPrelude_DOMonad(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HTfail_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of fail in Monad for IO
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for >> in Monad._
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// default for >> in Monad
__attribute__((always_inline)) 
static inline void set_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// implementation of >> in Monad for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of >> in Monad for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of fmap in Functor for []
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// instance of Functor for []
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of showList in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// implementation of show in Show for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// implementation of readList in Read for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// foldM
__attribute__((always_inline)) 
static inline void set_Prelude_foldM(field root, field scrutinee, field v2, field v3, field v4, int missing)
{
  root.n->symbol = &Prelude_foldM_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
}

// implementation of /= in Eq for IOError
__attribute__((always_inline)) 
static inline void set_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// putStr
__attribute__((always_inline)) 
static inline void set_Prelude_putStr(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_putStr_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// foldIO
__attribute__((always_inline)) 
static inline void set_Prelude_foldIO(field root, field scrutinee, field v2, field v3, int missing)
{
  root.n->symbol = &Prelude_foldIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
}

// sequenceIO
__attribute__((always_inline)) 
static inline void set_Prelude_sequenceIO(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_sequenceIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// getLine._#lambda285
__attribute__((always_inline)) 
static inline void set_Prelude_getLine_DO_US_HTlambda285(field root, field scrutinee, int missing)
{
  root.n->symbol = &Prelude_getLine_DO_US_HTlambda285_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = scrutinee;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// getLine._#lambda285#P20
__attribute__((always_inline)) 
static inline void set_Prelude_getLine_DO_US_HTlambda285_HTP20(field root, field scrutinee, field v2, int missing)
{
  root.n->symbol = &Prelude_getLine_DO_US_HTlambda285_HTP20_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  child_at(root, 2).n = NULL;
}

// instance of Monad for IO
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Monad for []
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// instance of Monad for Maybe
__attribute__((always_inline)) 
static inline void set_Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe(field root, int missing)
{
  root.n->symbol = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  root.n->children[3].a = NULL;
  child_at(root, 0).n = NULL;
  child_at(root, 1).n = NULL;
  child_at(root, 2).n = NULL;
}

// default for fmap in Functor
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTfmap_HTPrelude_DOFunctor(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTfmap_HTPrelude_DOFunctor_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for >>= in Monad
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for return in Monad
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTreturn_HTPrelude_DOMonad(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTreturn_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// maybe
__attribute__((always_inline)) 
static inline field make_Prelude_maybe(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// either
__attribute__((always_inline)) 
static inline field make_Prelude_either(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_either_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// userError
__attribute__((always_inline)) 
static inline field make_Prelude_userError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_userError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// ioError
__attribute__((always_inline)) 
static inline field make_Prelude_ioError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ioError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// ioError#A0
__attribute__((always_inline)) 
static inline field make_Prelude_ioError_HTA0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ioError_HTA0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fmap
__attribute__((always_inline)) 
static inline field make_Prelude_fmap(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fmap_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fail
__attribute__((always_inline)) 
static inline field make_Prelude_fail(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fail_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// makeNondetError
__attribute__((always_inline)) 
static inline field make_Prelude_makeNondetError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeNondetError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readNondetError
__attribute__((always_inline)) 
static inline field make_Prelude_readNondetError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readNondetError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readNondetError#P0
__attribute__((always_inline)) 
static inline field make_Prelude_readNondetError_HTP0(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readNondetError_HTP0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// makeFailError
__attribute__((always_inline)) 
static inline field make_Prelude_makeFailError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeFailError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readFailError
__attribute__((always_inline)) 
static inline field make_Prelude_readFailError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readFailError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readFailError#P1
__attribute__((always_inline)) 
static inline field make_Prelude_readFailError_HTP1(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readFailError_HTP1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// makeUserError
__attribute__((always_inline)) 
static inline field make_Prelude_makeUserError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeUserError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readUserError
__attribute__((always_inline)) 
static inline field make_Prelude_readUserError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readUserError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readUserError#P2
__attribute__((always_inline)) 
static inline field make_Prelude_readUserError_HTP2(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readUserError_HTP2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// makeIOError
__attribute__((always_inline)) 
static inline field make_Prelude_makeIOError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readIOError
__attribute__((always_inline)) 
static inline field make_Prelude_readIOError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readIOError#P3
__attribute__((always_inline)) 
static inline field make_Prelude_readIOError_HTP3(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readIOError_HTP3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// instance of Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// instance of Read for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  return root;
}

// return
__attribute__((always_inline)) 
static inline field make_Prelude_return(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_return_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// whenM
__attribute__((always_inline)) 
static inline field make_Prelude_whenM(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_whenM_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// unlessM
__attribute__((always_inline)) 
static inline field make_Prelude_unlessM(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unlessM_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// >>
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// >>=
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT_EQ(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT_EQ_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// liftM
__attribute__((always_inline)) 
static inline field make_Prelude_liftM(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_liftM_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// liftM2._#lambda460._#lambda462
__attribute__((always_inline)) 
static inline field make_Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// liftM2._#lambda460
__attribute__((always_inline)) 
static inline field make_Prelude_liftM2_DO_US_HTlambda460(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_liftM2_DO_US_HTlambda460_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// liftM2
__attribute__((always_inline)) 
static inline field make_Prelude_liftM2(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_liftM2_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// foldM._#lambda457
__attribute__((always_inline)) 
static inline field make_Prelude_foldM_DO_US_HTlambda457(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldM_DO_US_HTlambda457_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// sequence_
__attribute__((always_inline)) 
static inline field make_Prelude_sequence_US(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequence_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// mapM_
__attribute__((always_inline)) 
static inline field make_Prelude_mapM_US(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mapM_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// forM_
__attribute__((always_inline)) 
static inline field make_Prelude_forM_US(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_forM_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// sequence._#lambda454._#lambda455._#lambda456
__attribute__((always_inline)) 
static inline field make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// sequence._#lambda454._#lambda455
__attribute__((always_inline)) 
static inline field make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// sequence._#lambda454
__attribute__((always_inline)) 
static inline field make_Prelude_sequence_DO_US_HTlambda454(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequence_DO_US_HTlambda454_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// sequence
__attribute__((always_inline)) 
static inline field make_Prelude_sequence(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequence_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// mapM
__attribute__((always_inline)) 
static inline field make_Prelude_mapM(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mapM_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// mapM#P12
__attribute__((always_inline)) 
static inline field make_Prelude_mapM_HTP12(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mapM_HTP12_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// forM
__attribute__((always_inline)) 
static inline field make_Prelude_forM(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_forM_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// forM#P13
__attribute__((always_inline)) 
static inline field make_Prelude_forM_HTP13(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_forM_HTP13_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// >>$._#lambda283
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT_DL_DO_US_HTlambda283(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT_DL_DO_US_HTlambda283_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// returnIO
__attribute__((always_inline)) 
static inline field make_Prelude_returnIO(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_returnIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// >>=$
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT_EQ_DL(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT_EQ_DL_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of == in Eq for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// instance of Eq for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of fail in Monad for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of return in Monad for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of >>= in Monad for _
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of >>= in Monad for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of >>= in Monad for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of >>= in Monad for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of fail in Monad for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of return in Monad for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of >>= in Monad for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of return in Monad for IO
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// sequenceIO._#lambda292._#lambda294
__attribute__((always_inline)) 
static inline field make_Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// done
__attribute__((always_inline)) 
static inline field make_Prelude_done(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_done_symbol;
  root.n->missing = missing;
  return root;
}

// when
__attribute__((always_inline)) 
static inline field make_Prelude_when(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_when_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// unless
__attribute__((always_inline)) 
static inline field make_Prelude_unless(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unless_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// doSolve
__attribute__((always_inline)) 
static inline field make_Prelude_doSolve(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_doSolve_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of >> in Monad for IO
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// sequenceIO_
__attribute__((always_inline)) 
static inline field make_Prelude_sequenceIO_US(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequenceIO_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// mapIO_
__attribute__((always_inline)) 
static inline field make_Prelude_mapIO_US(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mapIO_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// mapIO_#P17
__attribute__((always_inline)) 
static inline field make_Prelude_mapIO_US_HTP17(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mapIO_US_HTP17_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// forIO_
__attribute__((always_inline)) 
static inline field make_Prelude_forIO_US(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_forIO_US_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// forIO_#P18
__attribute__((always_inline)) 
static inline field make_Prelude_forIO_US_HTP18(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_forIO_US_HTP18_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// putStrLn
__attribute__((always_inline)) 
static inline field make_Prelude_putStrLn(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_putStrLn_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// print
__attribute__((always_inline)) 
static inline field make_Prelude_print(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_print_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of >>= in Monad for IO
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// liftIO
__attribute__((always_inline)) 
static inline field make_Prelude_liftIO(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_liftIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// liftIO#P19
__attribute__((always_inline)) 
static inline field make_Prelude_liftIO_HTP19(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_liftIO_HTP19_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// foldIO._#lambda296
__attribute__((always_inline)) 
static inline field make_Prelude_foldIO_DO_US_HTlambda296(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldIO_DO_US_HTlambda296_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// sequenceIO._#lambda292
__attribute__((always_inline)) 
static inline field make_Prelude_sequenceIO_DO_US_HTlambda292(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequenceIO_DO_US_HTlambda292_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// mapIO
__attribute__((always_inline)) 
static inline field make_Prelude_mapIO(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_mapIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// forIO
__attribute__((always_inline)) 
static inline field make_Prelude_forIO(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_forIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// getLine
__attribute__((always_inline)) 
static inline field make_Prelude_getLine(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_getLine_symbol;
  root.n->missing = missing;
  return root;
}

// default for fail in Monad
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HTfail_HTPrelude_DOMonad(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HTfail_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of fail in Monad for IO
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for >> in Monad._
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// default for >> in Monad
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// implementation of >> in Monad for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of >> in Monad for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of fmap in Functor for []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// instance of Functor for []
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_symbol;
  root.n->missing = missing;
  return root;
}

// implementation of showList in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of show in Show for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of readList in Read for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// foldM
__attribute__((always_inline)) 
static inline field make_Prelude_foldM(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldM_symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of /= in Eq for IOError
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// putStr
__attribute__((always_inline)) 
static inline field make_Prelude_putStr(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_putStr_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// foldIO
__attribute__((always_inline)) 
static inline field make_Prelude_foldIO(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// sequenceIO
__attribute__((always_inline)) 
static inline field make_Prelude_sequenceIO(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequenceIO_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// getLine._#lambda285
__attribute__((always_inline)) 
static inline field make_Prelude_getLine_DO_US_HTlambda285(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_getLine_DO_US_HTlambda285_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// getLine._#lambda285#P20
__attribute__((always_inline)) 
static inline field make_Prelude_getLine_DO_US_HTlambda285_HTP20(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_getLine_DO_US_HTlambda285_HTP20_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// instance of Monad for IO
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Monad for []
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_symbol;
  root.n->missing = missing;
  return root;
}

// instance of Monad for Maybe
__attribute__((always_inline)) 
static inline field make_Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe(int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_symbol;
  root.n->missing = missing;
  return root;
}

// maybe @ []
__attribute__((always_inline)) 
static inline field make_Prelude_maybe_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maybe__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// maybe @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_maybe__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_maybe__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// either @ []
__attribute__((always_inline)) 
static inline field make_Prelude_either_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_either__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// ioError#A0 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_ioError_HTA0_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_ioError_HTA0__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fmap @ []
__attribute__((always_inline)) 
static inline field make_Prelude_fmap_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fmap__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fmap @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_fmap__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fmap__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fail @ []
__attribute__((always_inline)) 
static inline field make_Prelude_fail_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fail__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// fail @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_fail__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_fail__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// makeNondetError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_makeNondetError_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeNondetError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readNondetError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_readNondetError_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readNondetError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// makeFailError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_makeFailError_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeFailError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readFailError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_readFailError_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readFailError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// makeUserError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_makeUserError_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeUserError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readUserError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_readUserError_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readUserError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// makeIOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_makeIOError_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_makeIOError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// readIOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude_readIOError_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_readIOError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError @ [2]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of showsPrec in Show for IOError @ [3]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of readsPrec in Read for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// return @ []
__attribute__((always_inline)) 
static inline field make_Prelude_return_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_return__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// return @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_return__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_return__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// whenM @ []
__attribute__((always_inline)) 
static inline field make_Prelude_whenM_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_whenM__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// whenM @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_whenM__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_whenM__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// unlessM @ []
__attribute__((always_inline)) 
static inline field make_Prelude_unlessM_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unlessM__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// unlessM @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_unlessM__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unlessM__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// >> @ []
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// >> @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// >>= @ []
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT_EQ_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT_EQ__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// >>= @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT_EQ__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT_EQ__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// >>$._#lambda283 @ []
__attribute__((always_inline)) 
static inline field make_Prelude__GT_GT_DL_DO_US_HTlambda283_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__GT_GT_DL_DO_US_HTlambda283__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of == in Eq for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of == in Eq for IOError @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of == in Eq for IOError @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of == in Eq for IOError @ [2]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of == in Eq for IOError @ [3]
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3_symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// implementation of >>= in Monad for Maybe @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// when @ []
__attribute__((always_inline)) 
static inline field make_Prelude_when_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_when__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// when @ [0]
__attribute__((always_inline)) 
static inline field make_Prelude_when__0(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_when__0_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// unless @ []
__attribute__((always_inline)) 
static inline field make_Prelude_unless_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unless__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// unless @ [1]
__attribute__((always_inline)) 
static inline field make_Prelude_unless__1(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_unless__1_symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// doSolve @ []
__attribute__((always_inline)) 
static inline field make_Prelude_doSolve_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_doSolve__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// default for >> in Monad._ @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// implementation of showList in Show for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(field scrutinee, field v2, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v2;
  child_at(root, 1) = scrutinee;
  return root;
}

// foldM @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldM_(field scrutinee, field v2, field v3, field v4, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldM__symbol;
  root.n->missing = missing;
  root.n->children[3].a = (field*)alloc(sizeof(field));
  child_at(root, 0) = v4;
  child_at(root, 1) = v3;
  child_at(root, 2) = v2;
  child_at(root, 3) = scrutinee;
  return root;
}

// implementation of /= in Eq for IOError @ []
__attribute__((always_inline)) 
static inline field make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// putStr @ []
__attribute__((always_inline)) 
static inline field make_Prelude_putStr_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_putStr__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// foldIO @ []
__attribute__((always_inline)) 
static inline field make_Prelude_foldIO_(field scrutinee, field v2, field v3, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_foldIO__symbol;
  root.n->missing = missing;
  child_at(root, 0) = v3;
  child_at(root, 1) = v2;
  child_at(root, 2) = scrutinee;
  return root;
}

// sequenceIO @ []
__attribute__((always_inline)) 
static inline field make_Prelude_sequenceIO_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_sequenceIO__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

// getLine._#lambda285 @ []
__attribute__((always_inline)) 
static inline field make_Prelude_getLine_DO_US_HTlambda285_(field scrutinee, int missing)
{
  field root;
  root.n = (Node*)alloc(sizeof(Node));
  root.n->symbol = &Prelude_getLine_DO_US_HTlambda285__symbol;
  root.n->missing = missing;
  child_at(root, 0) = scrutinee;
  return root;
}

#endif //PreludeMonad_H