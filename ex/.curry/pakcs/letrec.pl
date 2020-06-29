%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(letrec).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('letrec.t',t,1,'letrec.t',nofix,'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('letrec.main',main,0,'letrec.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'letrec.t'(_791246,_791248,_791250,_791252):-freeze(_791250,'blocked_letrec.t'(_791246,_791248,_791250,_791252)).
'blocked_letrec.t'(_791322,_792346,_792352,_792358):-makeShare(_791346,_792550),makeShare(_791364,_792570),hnf('Prelude.cond'('Prelude.letrec'(_792550,'Prelude.map'(partcall(1,'Prelude._impl\'23\'2A\'23Prelude.Num\'23Prelude.Int',[_791322]),_792570)),'Prelude.cond'('Prelude.letrec'(_792570,[1|_792550]),_792570)),_792346,_792352,_792358).

'letrec.main'(_795634,_795636,_795638):-freeze(_795636,'blocked_letrec.main'(_795634,_795636,_795638)).
'blocked_letrec.main'(_795922,_795928,_795934):-hnf('Prelude.take'(5,'letrec.t'(2)),_795922,_795928,_795934).

:-costCenters(['']).




%%%%% Number of shared variables: 2
