%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(insert).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('insert.insert',insert,2,'insert.insert',nofix,'FuncType'(_777604,'FuncType'('TCons'([],[_777604]),'TCons'([],[_777604])))).
functiontype('insert.main',main,0,'insert.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'insert.insert'(_803986,_803988,_803990,_803992,_803994):-freeze(_803992,'blocked_insert.insert'(_803986,_803988,_803990,_803992,_803994)).
'blocked_insert.insert'(_804072,_804090,_805228,_805234,_805240):-hnf(_804090,_806092,_805234,_806068),'blocked_insert.insert_2'(_806092,_804072,_805228,_806068,_805240).

'blocked_insert.insert_2'(_806372,_806374,_806376,_806378,_806380):-freeze(_806378,'blocked_blocked_insert.insert_2'(_806372,_806374,_806376,_806378,_806380)).
'blocked_blocked_insert.insert_2'([],_804072,[_804072],_806582,_806582).
'blocked_blocked_insert.insert_2'([_804436|_804454],_804072,[_804072,_804436|_804454],_807398,_807398).
'blocked_blocked_insert.insert_2'([_804436|_804454],_804072,[_804436|'insert.insert'(_804072,_804454)],_808254,_808254).
'blocked_blocked_insert.insert_2'('FAIL'(_809188),_804072,'FAIL'(_809188),_809202,_809202):-nonvar(_809188).

'insert.main'(_809764,_809766,_809768):-freeze(_809766,'blocked_insert.main'(_809764,_809766,_809768)).
'blocked_insert.main'(_810424,_810430,_810436):-hnf('insert.insert'(1,[2,3,4]),_810424,_810430,_810436).

:-costCenters(['']).




%%%%% Number of shared variables: 0
