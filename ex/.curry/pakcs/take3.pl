%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(take3).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('take3.take3',take3,1,'take3.take3',nofix,'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('take3.third',third,1,'take3.third',nofix,'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('Prelude.Int',[]))).
functiontype('take3.main',main,0,'take3.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'take3.take3'(_861638,_861640,_861642,_861644):-freeze(_861642,'blocked_take3.take3'(_861638,_861640,_861642,_861644)).
'blocked_take3.take3'(_861714,_863456,_863462,_863468):-hnf(_861714,_864228,_863462,_864210),'blocked_take3.take3_1'(_864228,_863456,_864210,_863468).

'blocked_take3.take3_1'(_864494,_864496,_864498,_864500):-freeze(_864498,'blocked_blocked_take3.take3_1'(_864494,_864496,_864498,_864500)).
'blocked_blocked_take3.take3_1'([],[],_864694,_864694).
'blocked_blocked_take3.take3_1'([_861914|_861932],_865292,_865298,_865304):-!,hnf(_861932,_866556,_865298,_866532),'blocked_blocked_take3.take3_1_[|]_2'(_866556,_861914,_865292,_866532,_865304).

'blocked_blocked_take3.take3_1_[|]_2'(_866926,_866928,_866930,_866932,_866934):-freeze(_866932,'blocked_blocked_blocked_take3.take3_1_[|]_2'(_866926,_866928,_866930,_866932,_866934)).
'blocked_blocked_blocked_take3.take3_1_[|]_2'([],_861914,[_861914],_867136,_867136).
'blocked_blocked_blocked_take3.take3_1_[|]_2'([_862290|_862308],_861914,_868154,_868160,_868166):-!,hnf(_862308,_869942,_868160,_869912),'blocked_blocked_blocked_take3.take3_1_[|]_2_[|]_2'(_869942,_862290,_861914,_868154,_869912,_868166).

'blocked_blocked_blocked_take3.take3_1_[|]_2_[|]_2'(_870398,_870400,_870402,_870404,_870406,_870408):-freeze(_870406,'blocked_blocked_blocked_blocked_take3.take3_1_[|]_2_[|]_2'(_870398,_870400,_870402,_870404,_870406,_870408)).
'blocked_blocked_blocked_blocked_take3.take3_1_[|]_2_[|]_2'([],_862290,_861914,[_861914,_862290],_870618,_870618).
'blocked_blocked_blocked_blocked_take3.take3_1_[|]_2_[|]_2'([_862812|_862830],_862290,_861914,[_861914,_862290,_862812],_871710,_871710):-!.
'blocked_blocked_blocked_blocked_take3.take3_1_[|]_2_[|]_2'('FAIL'(_872994),_862290,_861914,'FAIL'(_872994),_873008,_873008):-nonvar(_872994).
'blocked_blocked_blocked_take3.take3_1_[|]_2'('FAIL'(_873074),_861914,'FAIL'(_873074),_873088,_873088):-nonvar(_873074).
'blocked_blocked_take3.take3_1'('FAIL'(_873146),'FAIL'(_873146),_873160,_873160):-nonvar(_873146).

'take3.third'(_873714,_873716,_873718,_873720):-freeze(_873718,'blocked_take3.third'(_873714,_873716,_873718,_873720)).
'blocked_take3.third'(_873790,_875602,_875608,_875614):-hnf(_873790,_876374,_875608,_876356),'blocked_take3.third_1'(_876374,_875602,_876356,_875614).

'blocked_take3.third_1'(_876640,_876642,_876644,_876646):-freeze(_876644,'blocked_blocked_take3.third_1'(_876640,_876642,_876644,_876646)).
'blocked_blocked_take3.third_1'([_873898|_873916],_877144,_877150,_877156):-!,hnf(_873916,_878408,_877150,_878384),'blocked_blocked_take3.third_1_[|]_2'(_878408,_873898,_877144,_878384,_877156).

'blocked_blocked_take3.third_1_[|]_2'(_878778,_878780,_878782,_878784,_878786):-freeze(_878784,'blocked_blocked_blocked_take3.third_1_[|]_2'(_878778,_878780,_878782,_878784,_878786)).
'blocked_blocked_blocked_take3.third_1_[|]_2'([_874036|_874054],_873898,_879376,_879382,_879388):-!,hnf(_874054,_881164,_879382,_881134),'blocked_blocked_blocked_take3.third_1_[|]_2_[|]_2'(_881164,_874036,_873898,_879376,_881134,_879388).

'blocked_blocked_blocked_take3.third_1_[|]_2_[|]_2'(_881620,_881622,_881624,_881626,_881628,_881630):-freeze(_881628,'blocked_blocked_blocked_blocked_take3.third_1_[|]_2_[|]_2'(_881620,_881622,_881624,_881626,_881628,_881630)).
'blocked_blocked_blocked_blocked_take3.third_1_[|]_2_[|]_2'([_874174|_874192],_874036,_873898,_881948,_881954,_881960):-!,hnf(_874174,_881948,_881954,_881960).
'blocked_blocked_blocked_blocked_take3.third_1_[|]_2_[|]_2'([],_874036,_873898,_882790,_882796,_882802):-!,hnf('Prelude.failure'('take3.third',[[]]),_882790,_882796,_882802).
'blocked_blocked_blocked_blocked_take3.third_1_[|]_2_[|]_2'('FAIL'(_883932),_874036,_873898,'FAIL'(_883932),_883946,_883946).
'blocked_blocked_blocked_take3.third_1_[|]_2'([],_873898,_884128,_884134,_884140):-!,hnf('Prelude.failure'('take3.third',[[]]),_884128,_884134,_884140).
'blocked_blocked_blocked_take3.third_1_[|]_2'('FAIL'(_885116),_873898,'FAIL'(_885116),_885130,_885130).
'blocked_blocked_take3.third_1'([],_885304,_885310,_885316):-!,hnf('Prelude.failure'('take3.third',[[]]),_885304,_885310,_885316).
'blocked_blocked_take3.third_1'('FAIL'(_886138),'FAIL'(_886138),_886152,_886152).

'take3.main'(_886666,_886668,_886670):-freeze(_886668,'blocked_take3.main'(_886666,_886668,_886670)).
'blocked_take3.main'(_887698,_887704,_887710):-hnf('take3.third'([1,2,'Prelude.?'(3,4),4,5]),_887698,_887704,_887710).

:-costCenters(['']).




%%%%% Number of shared variables: 0
