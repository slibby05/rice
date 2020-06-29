%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(chrOrd).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('chrOrd.strange',strange,0,'chrOrd.strange',nofix,'TCons'([],['TCons'('Prelude.Char',[])])).
functiontype('chrOrd.main',main,0,'chrOrd.main',nofix,'TCons'([],['TCons'('Prelude.Char',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'chrOrd.strange'(_833998,_834000,_834002):-freeze(_834000,'blocked_chrOrd.strange'(_833998,_834000,_834002)).
'blocked_chrOrd.strange'(['^1','^2','^3','^\'','^x','^y','^z'],_835102,_835102).

'chrOrd.main'(_837088,_837090,_837092):-freeze(_837090,'blocked_chrOrd.main'(_837088,_837090,_837092)).
'blocked_chrOrd.main'(_839024,_839030,_839036):-hnf('Prelude.map'(partcall(1,'Prelude.chr',[]),'Prelude.map'(partcall(1,'Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int',[1]),'Prelude.map'(partcall(1,'Prelude.ord',[]),['^a','^b','^c','^D','^E','^F','^0','^1','^2']))),_839024,_839030,_839036).

:-costCenters(['']).




%%%%% Number of shared variables: 0
