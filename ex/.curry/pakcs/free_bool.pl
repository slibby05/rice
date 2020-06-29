%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(free_bool).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('free_bool.f',f,1,'free_bool.f',nofix,'FuncType'(_772288,'TCons'([],[_772288]))).
functiontype('free_bool.main',main,0,'free_bool.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'free_bool.f'(_798622,_798624,_798626,_798628):-freeze(_798626,'blocked_free_bool.f'(_798622,_798624,_798626,_798628)).
'blocked_free_bool.f'(_798698,[_798698|_798862],_798894,_798894).

'free_bool.main'(_800036,_800038,_800040):-freeze(_800038,'blocked_free_bool.main'(_800036,_800038,_800040)).
'blocked_free_bool.main'(_805564,_805570,_805576):-hnf('free_bool.f'('Prelude.True'),_806496,_805570,_806478),'blocked_free_bool.main_ComplexCase'(_806496,_805564,_806478,_805576).

'blocked_free_bool.main_ComplexCase'(_806846,_806848,_806850,_806852):-freeze(_806850,freeze(_806846,'blocked_blocked_free_bool.main_ComplexCase'(_806846,_806848,_806850,_806852))).
'blocked_blocked_free_bool.main_ComplexCase'([_800286|_800304],_807338,_807344,_807350):-hnf(_800286,_809070,_807344,_809046),'blocked_blocked_free_bool.main_ComplexCase_[|]_1'(_809070,_800304,_807338,_809046,_807350).

'blocked_blocked_free_bool.main_ComplexCase_[|]_1'(_809506,_809508,_809510,_809512,_809514):-freeze(_809512,freeze(_809506,'blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1'(_809506,_809508,_809510,_809512,_809514))).
'blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1'('Prelude.True',_800304,_810200,_810206,_810212):-hnf(_800304,_812702,_810206,_812684),'blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1'(_812702,_810200,_812684,_810212).

'blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1'(_813274,_813276,_813278,_813280):-freeze(_813278,freeze(_813274,'blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1'(_813274,_813276,_813278,_813280))).
'blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1'([_800514|_800532],_813988,_813994,_814000):-hnf(_800514,_817052,_813994,_817028),'blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1'(_817052,_800532,_813988,_817028,_814000).

'blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1'(_817710,_817712,_817714,_817716,_817718):-freeze(_817716,freeze(_817710,'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1'(_817710,_817712,_817714,_817716,_817718))).
'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1'('Prelude.True',_800532,_818626,_818632,_818638):-hnf(_800532,_822460,_818632,_822442),'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.True_1'(_822460,_818626,_822442,_818638).

'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.True_1'(_823254,_823256,_823258,_823260):-freeze(_823258,freeze(_823254,'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.True_1'(_823254,_823256,_823258,_823260))).
'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.True_1'([],2,_823460,_823460).
'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.True_1'([_800820|_800838],_824364,_824370,_824376):-!,hnf('Prelude.failure'('free_bool.main',[[_800820|_800838]]),_824364,_824370,_824376).
'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.True_1'('FAIL'(_826048),'FAIL'(_826048),_826062,_826062).
'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1'('Prelude.False',_800532,_826946,_826952,_826958):-!,hnf(_800532,_830810,_826952,_830792),'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.False_1'(_830810,_826946,_830792,_826958).

'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.False_1'(_831628,_831630,_831632,_831634):-freeze(_831632,freeze(_831628,'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.False_1'(_831628,_831630,_831632,_831634))).
'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.False_1'([],1,_831834,_831834).
'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.False_1'([_801586|_801604],_832744,_832750,_832756):-!,hnf('Prelude.failure'('free_bool.main',[[_801586|_801604]]),_832744,_832750,_832756).
'blocked_blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1_Prelude.False_1'('FAIL'(_834434),'FAIL'(_834434),_834448,_834448).
'blocked_blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1_[|]_1'('FAIL'(_834494),_800532,'FAIL'(_834494),_834508,_834508).
'blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1'([],_834682,_834688,_834694):-!,hnf('Prelude.failure'('free_bool.main',[[]]),_834682,_834688,_834694).
'blocked_blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1_Prelude.True_1'('FAIL'(_835834),'FAIL'(_835834),_835848,_835848).
'blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1'('Prelude.False',_800304,_836158,_836164,_836170):-!,hnf('Prelude.failure'('free_bool.main',['Prelude.False']),_836158,_836164,_836170).
'blocked_blocked_blocked_free_bool.main_ComplexCase_[|]_1'('FAIL'(_837320),_800304,'FAIL'(_837320),_837334,_837334).
'blocked_blocked_free_bool.main_ComplexCase'([],_837508,_837514,_837520):-!,hnf('Prelude.failure'('free_bool.main',[[]]),_837508,_837514,_837520).
'blocked_blocked_free_bool.main_ComplexCase'('FAIL'(_838438),'FAIL'(_838438),_838452,_838452).

:-costCenters(['']).




%%%%% Number of shared variables: 0
