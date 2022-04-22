%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(test).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('test.t2',t2,0,'test.t2',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).
functiontype('test.t2._\'23lambda1','test.t2._#lambda1',1,'test.t2._\'23lambda1',nofix,'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[]))).
functiontype('test.t3',t3,0,'test.t3',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).
functiontype('test.t4',t4,0,'test.t4',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).
functiontype('test.t4._\'23lambda2','test.t4._#lambda2',1,'test.t4._\'23lambda2',nofix,'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('test.t4._\'23lambda2._\'23lambda3','test.t4._#lambda2._#lambda3',2,'test.t4._\'23lambda2._\'23lambda3',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'test.t2'(_816982,_816984,_816986):-freeze(_816984,'blocked_test.t2'(_816982,_816984,_816986)).
'blocked_test.t2'(_817656,_817662,_817668):-hnf('Prelude.map'(partcall(1,'test.t2._\'23lambda1',[]),[1,2,3]),_817656,_817662,_817668).

'test.t2._\'23lambda1'(_819470,_819472,_819474,_819476):-freeze(_819474,'blocked_test.t2._\'23lambda1'(_819470,_819472,_819474,_819476)).
'blocked_test.t2._\'23lambda1'(_819546,_819560,_819566,_819572):-hnf(_819546,_819560,_819566,_819572).

'test.t3'(_820242,_820244,_820246):-freeze(_820244,'blocked_test.t3'(_820242,_820244,_820246)).
'blocked_test.t3'(_821066,_821072,_821078):-hnf('Prelude.True',_821746,_821072,_821728),'blocked_test.t3_ComplexCase'(_821746,_821066,_821728,_821078).

'blocked_test.t3_ComplexCase'(_822054,_822056,_822058,_822060):-freeze(_822058,freeze(_822054,'blocked_blocked_test.t3_ComplexCase'(_822054,_822056,_822058,_822060))).
'blocked_blocked_test.t3_ComplexCase'('Prelude.True',[1],_822392,_822392).
'blocked_blocked_test.t3_ComplexCase'('Prelude.False',[],_823126,_823126):-!.
'blocked_blocked_test.t3_ComplexCase'('FAIL'(_823432),'FAIL'(_823432),_823446,_823446).

'test.t4'(_823852,_823854,_823856):-freeze(_823854,'blocked_test.t4'(_823852,_823854,_823856)).
'blocked_test.t4'(_824606,_824612,_824618):-hnf('Prelude.apply'('Prelude.concatMap'(partcall(1,'test.t4._\'23lambda2',[])),[1,2,3]),_824606,_824612,_824618).

'test.t4._\'23lambda2'(_826630,_826632,_826634,_826636):-freeze(_826634,'blocked_test.t4._\'23lambda2'(_826630,_826632,_826634,_826636)).
'blocked_test.t4._\'23lambda2'(_826706,_827398,_827404,_827410):-hnf('Prelude.map'(partcall(1,'test.t4._\'23lambda2._\'23lambda3',[_826706]),[4,5,6]),_827398,_827404,_827410).

'test.t4._\'23lambda2._\'23lambda3'(_829900,_829902,_829904,_829906,_829908):-freeze(_829906,'blocked_test.t4._\'23lambda2._\'23lambda3'(_829900,_829902,_829904,_829906,_829908)).
'blocked_test.t4._\'23lambda2._\'23lambda3'(_829986,_830004,_830164,_830170,_830176):-hnf('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_829986,_830004),_830164,_830170,_830176).

:-costCenters(['']).




%%%%% Number of shared variables: 0
