%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(recursion).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('recursion.main',main,0,'recursion.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'recursion.main'(_759618,_759620,_759622):-freeze(_759620,'blocked_recursion.main'(_759618,_759620,_759622)).
'blocked_recursion.main'(_760294,_760300,_760306):-makeShare(_759690,_760370),hnf('Prelude.cond'('Prelude.letrec'(_760370,[1|_760370]),'Prelude.take'(5,_760370)),_760294,_760300,_760306).

:-costCenters(['']).




%%%%% Number of shared variables: 1
