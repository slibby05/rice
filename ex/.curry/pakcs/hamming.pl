%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(hamming).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('hamming.hamming',hamming,2,'hamming.hamming',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_920580]),'FuncType'('TCons'('Prelude._Dict\'23Ord',[_920580]),'TCons'([],[_920580])))).
functiontype('hamming.merge',merge,3,'hamming.merge',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_931630]),'FuncType'('TCons'([],[_931630]),'FuncType'('TCons'([],[_931630]),'TCons'([],[_931630]))))).
functiontype('hamming.main',main,0,'hamming.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'hamming.hamming'(_958168,_958170,_958172,_958174,_958176):-freeze(_958174,'blocked_hamming.hamming'(_958168,_958170,_958172,_958174,_958176)).
'blocked_hamming.hamming'(_958254,_958272,['Prelude.apply'('Prelude.fromInt'(_961610),1)|'hamming.merge'(_961630,'Prelude.map'(partcall(1,'Prelude.flip',['Prelude.apply'('Prelude.fromInt'(_961610),2),'Prelude.*'(_961610)]),'hamming.hamming'(_961610,_961630)),'hamming.merge'(_961630,'Prelude.map'('Prelude.apply'('Prelude.*'(_961610),'Prelude.apply'('Prelude.fromInt'(_961610),3)),'hamming.hamming'(_961610,_961630)),'Prelude.map'('Prelude.apply'('Prelude.*'(_961610),'Prelude.apply'('Prelude.fromInt'(_961610),5)),'hamming.hamming'(_961610,_961630))))],_961320,_961326):-makeShare(_958254,_961610),makeShare(_958272,_961630),_961320=_961326.

'hamming.merge'(_968288,_968290,_968292,_968294,_968296,_968298):-freeze(_968296,'blocked_hamming.merge'(_968288,_968290,_968292,_968294,_968296,_968298)).
'blocked_hamming.merge'(_968384,_968402,_968420,_972754,_972760,_972766):-hnf(_968402,_973638,_972760,_973608),'blocked_hamming.merge_2'(_973638,_968384,_968420,_972754,_973608,_972766).

'blocked_hamming.merge_2'(_973920,_973922,_973924,_973926,_973928,_973930):-freeze(_973928,'blocked_blocked_hamming.merge_2'(_973920,_973922,_973924,_973926,_973928,_973930)).
'blocked_blocked_hamming.merge_2'([_968528|_968546],_968384,_968420,_974468,_974474,_974480):-!,hnf(_968420,_975844,_974474,_975808),'blocked_blocked_hamming.merge_2_[|]_4'(_975844,_968528,_968546,_968384,_974468,_975808,_974480).

'blocked_blocked_hamming.merge_2_[|]_4'(_976230,_976232,_976234,_976236,_976238,_976240,_976242):-freeze(_976240,'blocked_blocked_blocked_hamming.merge_2_[|]_4'(_976230,_976232,_976234,_976236,_976238,_976240,_976242)).
'blocked_blocked_blocked_hamming.merge_2_[|]_4'([_968666|_968684],_968528,_968546,_968384,_980376,_980382,_980388):-!,makeShare(_968384,_977250),makeShare(_968528,_977270),makeShare(_968666,_977290),hnf('Prelude.apply'('Prelude.apply'('Prelude.=='('Prelude._super\'23Prelude.Ord\'23Prelude.Eq'(_977250)),_977270),_977290),_982318,_980382,_982270),'blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase'(_982318,_977290,_968684,_977270,_968546,_977250,_980376,_982270,_980388).

'blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase'(_982894,_982896,_982898,_982900,_982902,_982904,_982906,_982908,_982910):-freeze(_982908,freeze(_982894,'blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase'(_982894,_982896,_982898,_982900,_982902,_982904,_982906,_982908,_982910))).
'blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase'('Prelude.True',_977290,_968684,_977270,_968546,_977250,[_977270|'hamming.merge'(_977250,_968546,_968684)],_983282,_983282).
'blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase'('Prelude.False',_977290,_968684,_977270,_968546,_977250,_988064,_988070,_988076):-!,makeShare(_977250,_985452),makeShare(_977270,_985472),makeShare(_977290,_985492),hnf('Prelude.apply'('Prelude.apply'('Prelude.<'(_985452),_985472),_985492),_991186,_988070,_991138),'blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase'(_991186,_985492,_968684,_985472,_968546,_985452,_988064,_991138,_988076).

'blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase'(_991966,_991968,_991970,_991972,_991974,_991976,_991978,_991980,_991982):-freeze(_991980,freeze(_991966,'blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase'(_991966,_991968,_991970,_991972,_991974,_991976,_991978,_991980,_991982))).
'blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase'('Prelude.True',_985492,_968684,_985472,_968546,_985452,[_985472|'hamming.merge'(_985452,_968546,[_985492|_968684])],_992354,_992354).
'blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase'('Prelude.False',_985492,_968684,_985472,_968546,_985452,_996050,_996056,_996062):-!,hnf('Prelude.otherwise',_1000396,_996056,_1000348),'blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'(_1000396,_985492,_968684,_985472,_968546,_985452,_996050,_1000348,_996062).

'blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'(_1001344,_1001346,_1001348,_1001350,_1001352,_1001354,_1001356,_1001358,_1001360):-freeze(_1001358,freeze(_1001344,'blocked_blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'(_1001344,_1001346,_1001348,_1001350,_1001352,_1001354,_1001356,_1001358,_1001360))).
'blocked_blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'('Prelude.True',_985492,_968684,_985472,_968546,_985452,[_985492|'hamming.merge'(_985452,[_985472|_968546],_968684)],_1001732,_1001732).
'blocked_blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'('Prelude.False',_985492,_968684,_985472,_968546,_985452,_1004074,_1004080,_1004086):-!,hnf('Prelude.failure'('hamming.merge',['Prelude.False']),_1004074,_1004080,_1004086).
'blocked_blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'('FAIL'(_1005996),_985492,_968684,_985472,_968546,_985452,'FAIL'(_1005996),_1006010,_1006010).
'blocked_blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase_Prelude.False_ComplexCase'('FAIL'(_1006096),_985492,_968684,_985472,_968546,_985452,'FAIL'(_1006096),_1006110,_1006110).
'blocked_blocked_blocked_blocked_hamming.merge_2_[|]_4_[|]_ComplexCase'('FAIL'(_1006196),_977290,_968684,_977270,_968546,_977250,'FAIL'(_1006196),_1006210,_1006210).
'blocked_blocked_blocked_hamming.merge_2_[|]_4'([],_968528,_968546,_968384,_1006416,_1006422,_1006428):-!,hnf('Prelude.failure'('hamming.merge',[[]]),_1006416,_1006422,_1006428).
'blocked_blocked_blocked_hamming.merge_2_[|]_4'('FAIL'(_1007568),_968528,_968546,_968384,'FAIL'(_1007568),_1007582,_1007582).
'blocked_blocked_hamming.merge_2'([],_968384,_968420,_1007772,_1007778,_1007784):-!,hnf('Prelude.failure'('hamming.merge',[[]]),_1007772,_1007778,_1007784).
'blocked_blocked_hamming.merge_2'('FAIL'(_1008770),_968384,_968420,'FAIL'(_1008770),_1008784,_1008784).

'hamming.main'(_1009386,_1009388,_1009390):-freeze(_1009388,'blocked_hamming.main'(_1009386,_1009388,_1009390)).
'blocked_hamming.main'(_1009768,_1009774,_1009780):-hnf('Prelude.take'(8,'hamming.hamming'('Prelude._inst\'23Prelude.Num\'23Prelude.Int','Prelude._inst\'23Prelude.Ord\'23Prelude.Int')),_1009768,_1009774,_1009780).

:-costCenters(['']).




%%%%% Number of shared variables: 8
