%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(free_arith_fail).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('free_arith_fail.test',test,2,'free_arith_fail.test',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_782856]),'FuncType'(_782856,_782856))).
functiontype('free_arith_fail.main',main,0,'free_arith_fail.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'free_arith_fail.test'(_809616,_809618,_809620,_809622,_809624):-freeze(_809622,'blocked_free_arith_fail.test'(_809616,_809618,_809620,_809622,_809624)).
'blocked_free_arith_fail.test'(_809702,_809720,_811056,_811062,_811068):-makeShare(_809774,_811292),makeShare(_809702,_811312),hnf('Prelude.cond'('Prelude.letrec'(_811292,'Prelude.apply'('Prelude.apply'('Prelude.+'(_811312),'Prelude.apply'('Prelude.fromInt'(_811312),2)),_809720)),'Prelude.apply'('Prelude.apply'('Prelude.+'(_811312),_809744),_811292)),_811056,_811062,_811068).

'free_arith_fail.main'(_815390,_815392,_815394):-freeze(_815392,'blocked_free_arith_fail.main'(_815390,_815392,_815394)).
'blocked_free_arith_fail.main'(_815612,_815618,_815624):-hnf('free_arith_fail.test'('Prelude._inst\'23Prelude.Num\'23Prelude.Int',3),_815612,_815618,_815624).

:-costCenters(['']).




%%%%% Number of shared variables: 2
