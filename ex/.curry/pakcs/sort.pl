%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(sort).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('sort.sorted',sorted,1,'sort.sorted',nofix,'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('Prelude.Bool',[]))).
functiontype('sort.perm',perm,1,'sort.perm',nofix,'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('sort.insert',insert,2,'sort.insert',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])])))).
functiontype('sort.sort',sort,1,'sort.sort',nofix,'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('sort.main',main,0,'sort.main',nofix,'TCons'([],['TCons'('Prelude.Int',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'sort.sorted'(_940970,_940972,_940974,_940976):-freeze(_940974,'blocked_sort.sorted'(_940970,_940972,_940974,_940976)).
'blocked_sort.sorted'(_941046,_942340,_942346,_942352):-hnf(_941046,_943112,_942346,_943094),'blocked_sort.sorted_1'(_943112,_942340,_943094,_942352).

'blocked_sort.sorted_1'(_943378,_943380,_943382,_943384):-freeze(_943382,'blocked_blocked_sort.sorted_1'(_943378,_943380,_943382,_943384)).
'blocked_blocked_sort.sorted_1'([],'Prelude.True',_943578,_943578).
'blocked_blocked_sort.sorted_1'([_941246|_941264],_944248,_944254,_944260):-!,hnf(_941264,_945512,_944254,_945488),'blocked_blocked_sort.sorted_1_[|]_2'(_945512,_941246,_944248,_945488,_944260).

'blocked_blocked_sort.sorted_1_[|]_2'(_945882,_945884,_945886,_945888,_945890):-freeze(_945888,'blocked_blocked_blocked_sort.sorted_1_[|]_2'(_945882,_945884,_945886,_945888,_945890)).
'blocked_blocked_blocked_sort.sorted_1_[|]_2'([],_941246,'Prelude.True',_946092,_946092).
'blocked_blocked_blocked_sort.sorted_1_[|]_2'([_941476|_941494],_941246,_946720,_946726,_946732):-!,makeShare(_941476,_946872),hnf('Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude._impl\'23\'3C\'23Prelude.Ord\'23Prelude.Int',_941246),_946872),'sort.sorted'([_946872|_941494])),_946720,_946726,_946732).
'blocked_blocked_blocked_sort.sorted_1_[|]_2'('FAIL'(_949026),_941246,'FAIL'(_949026),_949040,_949040):-nonvar(_949026).
'blocked_blocked_sort.sorted_1'('FAIL'(_949098),'FAIL'(_949098),_949112,_949112):-nonvar(_949098).

'sort.perm'(_949594,_949596,_949598,_949600):-freeze(_949598,'blocked_sort.perm'(_949594,_949596,_949598,_949600)).
'blocked_sort.perm'(_949670,_950264,_950270,_950276):-hnf(_949670,_950964,_950270,_950946),'blocked_sort.perm_1'(_950964,_950264,_950946,_950276).

'blocked_sort.perm_1'(_951218,_951220,_951222,_951224):-freeze(_951222,'blocked_blocked_sort.perm_1'(_951218,_951220,_951222,_951224)).
'blocked_blocked_sort.perm_1'([],[],_951418,_951418).
'blocked_blocked_sort.perm_1'([_949870|_949888],_951808,_951814,_951820):-!,hnf('sort.insert'(_949870,'sort.perm'(_949888)),_951808,_951814,_951820).
'blocked_blocked_sort.perm_1'('FAIL'(_952620),'FAIL'(_952620),_952634,_952634):-nonvar(_952620).

'sort.insert'(_953188,_953190,_953192,_953194,_953196):-freeze(_953194,'blocked_sort.insert'(_953188,_953190,_953192,_953194,_953196)).
'blocked_sort.insert'(_953274,_953292,_954418,_954424,_954430):-hnf(_953292,_955210,_954424,_955186),'blocked_sort.insert_2'(_955210,_953274,_954418,_955186,_954430).

'blocked_sort.insert_2'(_955478,_955480,_955482,_955484,_955486):-freeze(_955484,'blocked_blocked_sort.insert_2'(_955478,_955480,_955482,_955484,_955486)).
'blocked_blocked_sort.insert_2'([],_953274,[_953274],_955688,_955688).
'blocked_blocked_sort.insert_2'([_953638|_953656],_953274,[_953274,_953638|_953656],_956492,_956492).
'blocked_blocked_sort.insert_2'([_953638|_953656],_953274,[_953638|'sort.insert'(_953274,_953656)],_957336,_957336).
'blocked_blocked_sort.insert_2'('FAIL'(_958246),_953274,'FAIL'(_958246),_958260,_958260):-nonvar(_958246).

'sort.sort'(_958750,_958752,_958754,_958756):-freeze(_958754,'blocked_sort.sort'(_958750,_958752,_958754,_958756)).
'blocked_sort.sort'(_958826,_959468,_959474,_959480):-makeShare(_958850,_959576),hnf('Prelude.cond'('Prelude.letrec'(_959576,'sort.perm'(_958826)),'Prelude.&>'('sort.sorted'(_959576),_959576)),_959468,_959474,_959480).

'sort.main'(_961620,_961622,_961624):-freeze(_961622,'blocked_sort.main'(_961620,_961622,_961624)).
'blocked_sort.main'(_962228,_962234,_962240):-hnf('sort.sort'('Prelude.apply'('Prelude.reverse','Prelude.apply'('Prelude.apply'('Prelude._impl\'23enumFromTo\'23Prelude.Enum\'23Prelude.Int',1),14))),_962228,_962234,_962240).

:-costCenters(['']).




%%%%% Number of shared variables: 2
