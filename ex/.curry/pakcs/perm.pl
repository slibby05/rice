%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(perm).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('perm.perm',perm,1,'perm.perm',nofix,'FuncType'('TCons'([],[_797570]),'TCons'([],[_797570]))).
functiontype('perm.insert',insert,2,'perm.insert',nofix,'FuncType'(_808320,'FuncType'('TCons'([],[_808320]),'TCons'([],[_808320])))).
functiontype('perm.main',main,0,'perm.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'perm.perm'(_834570,_834572,_834574,_834576):-freeze(_834574,'blocked_perm.perm'(_834570,_834572,_834574,_834576)).
'blocked_perm.perm'(_834646,_835240,_835246,_835252):-hnf(_834646,_835940,_835246,_835922),'blocked_perm.perm_1'(_835940,_835240,_835922,_835252).

'blocked_perm.perm_1'(_836194,_836196,_836198,_836200):-freeze(_836198,'blocked_blocked_perm.perm_1'(_836194,_836196,_836198,_836200)).
'blocked_blocked_perm.perm_1'([],[],_836394,_836394).
'blocked_blocked_perm.perm_1'([_834846|_834864],_836784,_836790,_836796):-!,hnf('perm.insert'(_834846,'perm.perm'(_834864)),_836784,_836790,_836796).
'blocked_blocked_perm.perm_1'('FAIL'(_837596),'FAIL'(_837596),_837610,_837610):-nonvar(_837596).

'perm.insert'(_838164,_838166,_838168,_838170,_838172):-freeze(_838170,'blocked_perm.insert'(_838164,_838166,_838168,_838170,_838172)).
'blocked_perm.insert'(_838250,_838268,_839394,_839400,_839406):-hnf(_838268,_840186,_839400,_840162),'blocked_perm.insert_2'(_840186,_838250,_839394,_840162,_839406).

'blocked_perm.insert_2'(_840454,_840456,_840458,_840460,_840462):-freeze(_840460,'blocked_blocked_perm.insert_2'(_840454,_840456,_840458,_840460,_840462)).
'blocked_blocked_perm.insert_2'([],_838250,[_838250],_840664,_840664).
'blocked_blocked_perm.insert_2'([_838614|_838632],_838250,[_838250,_838614|_838632],_841468,_841468).
'blocked_blocked_perm.insert_2'([_838614|_838632],_838250,[_838614|'perm.insert'(_838250,_838632)],_842312,_842312).
'blocked_blocked_perm.insert_2'('FAIL'(_843222),_838250,'FAIL'(_843222),_843236,_843236):-nonvar(_843222).

'perm.main'(_843726,_843728,_843730):-freeze(_843728,'blocked_perm.main'(_843726,_843728,_843730)).
'blocked_perm.main'(_844174,_844180,_844186):-hnf('perm.perm'('Prelude.apply'('Prelude.apply'('Prelude._impl\'23enumFromTo\'23Prelude.Enum\'23Prelude.Int',1),8)),_844174,_844180,_844186).

:-costCenters(['']).




%%%%% Number of shared variables: 0
