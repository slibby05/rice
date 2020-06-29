%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').
:-importModule(mod).

:-curryModule(imp).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('imp.main',main,0,'imp.main',nofix,'TCons'('Prelude.Float',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'imp.main'(_1219200,_1219202,_1219204):-freeze(_1219202,'blocked_imp.main'(_1219200,_1219202,_1219204)).
'blocked_imp.main'(_1219474,_1219480,_1219486):-hnf('mod.average'(7.0,8.0,9.0),_1219474,_1219480,_1219486).

:-costCenters(['']).




%%%%% Number of shared variables: 0
