%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(coin).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('coin.coin',coin,1,'coin.coin',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_781958]),_781958)).
functiontype('coin.double',double,2,'coin.double',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_792958]),'FuncType'(_792958,_792958))).
functiontype('coin.main',main,0,'coin.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'coin.coin'(_819172,_819174,_819176,_819178):-freeze(_819176,'blocked_coin.coin'(_819172,_819174,_819176,_819178)).
'blocked_coin.coin'(_819248,_819772,_819778,_819784):-hnf('Prelude.apply'('Prelude.fromInt'(_819248),0),_819772,_819778,_819784).
'blocked_coin.coin'(_819248,_820462,_820468,_820474):-hnf('Prelude.apply'('Prelude.fromInt'(_819248),1),_820462,_820468,_820474).

'coin.double'(_821662,_821664,_821666,_821668,_821670):-freeze(_821668,'blocked_coin.double'(_821662,_821664,_821666,_821668,_821670)).
'blocked_coin.double'(_821748,_821766,_822152,_822158,_822164):-makeShare(_821766,_822268),hnf('Prelude.apply'('Prelude.apply'('Prelude.+'(_821748),_822268),_822268),_822152,_822158,_822164).

'coin.main'(_823888,_823890,_823892):-freeze(_823890,'blocked_coin.main'(_823888,_823890,_823892)).
'blocked_coin.main'(_824204,_824210,_824216):-hnf('coin.double'('Prelude._inst\'23Prelude.Num\'23Prelude.Int','coin.coin'('Prelude._inst\'23Prelude.Num\'23Prelude.Int')),_824204,_824210,_824216).

:-costCenters(['']).




%%%%% Number of shared variables: 1
