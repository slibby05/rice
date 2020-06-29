%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(nd).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('nd.main',main,0,'nd.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'nd.main'(_757684,_757686,_757688):-freeze(_757686,'blocked_nd.main'(_757684,_757686,_757688)).
'blocked_nd.main'(_758506,_758512,_758518):-makeShare(_757756,_758582),hnf('Prelude.cond'('Prelude.letrec'(_758582,'Prelude.?'(0,1)),'Prelude.?'(_758582,'Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_758582,1))),_758506,_758512,_758518).

:-costCenters(['']).




%%%%% Number of shared variables: 1
