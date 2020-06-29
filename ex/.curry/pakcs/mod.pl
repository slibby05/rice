%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(mod).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('mod.average',average,3,'mod.average',nofix,'FuncType'('TCons'('Prelude.Float',[]),'FuncType'('TCons'('Prelude.Float',[]),'FuncType'('TCons'('Prelude.Float',[]),'TCons'('Prelude.Float',[]))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'mod.average'(_786192,_786194,_786196,_786198,_786200,_786202):-freeze(_786200,'blocked_mod.average'(_786192,_786194,_786196,_786198,_786200,_786202)).
'blocked_mod.average'(_786288,_786306,_786324,_786776,_786782,_786788):-hnf('Prelude._impl\'23\'2F\'23Prelude.Fractional\'23Prelude.Float'('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Float'('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Float'(_786288,_786306),_786324),3.0),_786776,_786782,_786788).

:-costCenters(['']).




%%%%% Number of shared variables: 0
