%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(list_build).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('list_build.main',main,0,'list_build.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'list_build.main'(_772386,_772388,_772390):-freeze(_772388,'blocked_list_build.main'(_772386,_772388,_772390)).
'blocked_list_build.main'(_772834,_772840,_772846):-hnf('Prelude.apply'('Prelude.apply'('Prelude._impl\'23enumFromTo\'23Prelude.Enum\'23Prelude.Int','Prelude._impl\'23negate\'23Prelude.Num\'23Prelude.Int'(2)),2),_772834,_772840,_772846).

:-costCenters(['']).




%%%%% Number of shared variables: 0
