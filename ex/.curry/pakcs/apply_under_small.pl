%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(apply_under_small).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('apply_under_small.f',f,2,'apply_under_small.f',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_793952]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),_793952)))).
functiontype('apply_under_small.g',g,2,'apply_under_small.g',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_805104]),'FuncType'('TCons'('Prelude.Int',[]),_805104))).
functiontype('apply_under_small.main',main,0,'apply_under_small.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'apply_under_small.f'(_831984,_831986,_831988,_831990,_831992):-freeze(_831990,'blocked_apply_under_small.f'(_831984,_831986,_831988,_831990,_831992)).
'blocked_apply_under_small.f'(_832070,_832088,_832460,_832466,_832472):-hnf(_832088,_833540,_832466,_833516),'blocked_apply_under_small.f_2'(_833540,_832070,_832460,_833516,_832472).

'blocked_apply_under_small.f_2'(_833856,_833858,_833860,_833862,_833864):-freeze(_833862,'blocked_blocked_apply_under_small.f_2'(_833856,_833858,_833860,_833862,_833864)).
'blocked_blocked_apply_under_small.f_2'(0,_832070,_833964,_833970,_833976):-hnf(partcall(1,'apply_under_small.g',[_832070]),_833964,_833970,_833976).
'blocked_blocked_apply_under_small.f_2'('FAIL'(_834568),_832070,'FAIL'(_834568),_834582,_834582):-nonvar(_834568).

'apply_under_small.g'(_835432,_835434,_835436,_835438,_835440):-freeze(_835438,'blocked_apply_under_small.g'(_835432,_835434,_835436,_835438,_835440)).
'blocked_apply_under_small.g'(_835518,_835536,_836054,_836060,_836066):-hnf(_835536,_837134,_836060,_837110),'blocked_apply_under_small.g_2'(_837134,_835518,_836054,_837110,_836066).

'blocked_apply_under_small.g_2'(_837450,_837452,_837454,_837456,_837458):-freeze(_837456,'blocked_blocked_apply_under_small.g_2'(_837450,_837452,_837454,_837456,_837458)).
'blocked_blocked_apply_under_small.g_2'(1,_835518,_837558,_837564,_837570):-hnf('Prelude.apply'('Prelude.fromInt'(_835518),2),_837558,_837564,_837570).
'blocked_blocked_apply_under_small.g_2'('FAIL'(_838382),_835518,'FAIL'(_838382),_838396,_838396):-nonvar(_838382).

'apply_under_small.main'(_839354,_839356,_839358):-freeze(_839356,'blocked_apply_under_small.main'(_839354,_839356,_839358)).
'blocked_apply_under_small.main'(_839722,_839728,_839734):-hnf('Prelude.apply'('apply_under_small.f'('Prelude._inst\'23Prelude.Num\'23Prelude.Int',0),1),_839722,_839728,_839734).

:-costCenters(['']).




%%%%% Number of shared variables: 0
