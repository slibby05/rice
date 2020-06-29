%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(mutual_recursion).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('mutual_recursion.main',main,0,'mutual_recursion.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'mutual_recursion.main'(_774056,_774058,_774060):-freeze(_774058,'blocked_mutual_recursion.main'(_774056,_774058,_774060)).
'blocked_mutual_recursion.main'(_775486,_775492,_775498):-makeShare(_774128,_775634),makeShare(_774146,_775654),hnf('Prelude.cond'('Prelude.letrec'(_775634,[2|_775654]),'Prelude.cond'('Prelude.letrec'(_775654,[3|_775634]),'Prelude.++'('Prelude.take'(5,_775634),'Prelude.take'(5,_775654)))),_775486,_775492,_775498).

:-costCenters(['']).




%%%%% Number of shared variables: 2
