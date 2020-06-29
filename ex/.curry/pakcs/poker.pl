%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(poker).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('poker.rank',rank,1,'poker.rank',nofix,'FuncType'('TCons'('poker.Card',[]),'TCons'('poker.Rank',[]))).
functiontype('poker.suit',suit,1,'poker.suit',nofix,'FuncType'('TCons'('poker.Card',[]),'TCons'('poker.Suit',[]))).
functiontype('poker.four',four,1,'poker.four',nofix,'FuncType'('TCons'([],['TCons'('poker.Card',[])]),'TCons'('Prelude.Bool',[]))).
functiontype('poker.testYes',testYes,0,'poker.testYes',nofix,'TCons'([],['TCons'('poker.Card',[])])).
functiontype('poker.main',main,0,'poker.main',nofix,'TCons'('Prelude.Bool',[])).
functiontype('poker.four._\'23caseor0','poker.four._#caseor0',4,'poker.four._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'([],['TCons'('poker.Card',[])]),'FuncType'('TCons'([],['TCons'('poker.Card',[])]),'FuncType'('TCons'('poker.Rank',[]),'TCons'('Prelude.Bool',[])))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('poker.Club','Club',0,'Club',0,'TCons'('poker.Suit',[]),['poker.Spade'/0,'poker.Heart'/0,'poker.Diamond'/0]).
constructortype('poker.Spade','Spade',0,'Spade',1,'TCons'('poker.Suit',[]),['poker.Club'/0,'poker.Heart'/0,'poker.Diamond'/0]).
constructortype('poker.Heart','Heart',0,'Heart',2,'TCons'('poker.Suit',[]),['poker.Club'/0,'poker.Spade'/0,'poker.Diamond'/0]).
constructortype('poker.Diamond','Diamond',0,'Diamond',3,'TCons'('poker.Suit',[]),['poker.Club'/0,'poker.Spade'/0,'poker.Heart'/0]).
constructortype('poker.Ace','Ace',0,'Ace',0,'TCons'('poker.Rank',[]),['poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.King','King',0,'King',1,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Queen','Queen',0,'Queen',2,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Jack','Jack',0,'Jack',3,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Ten','Ten',0,'Ten',4,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Nine','Nine',0,'Nine',5,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Eight','Eight',0,'Eight',6,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Seven','Seven',0,'Seven',7,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Six','Six',0,'Six',8,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Five','Five',0,'Five',9,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Four'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Four','Four',0,'Four',10,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Three'/0,'poker.Two'/0]).
constructortype('poker.Three','Three',0,'Three',11,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Two'/0]).
constructortype('poker.Two','Two',0,'Two',12,'TCons'('poker.Rank',[]),['poker.Ace'/0,'poker.King'/0,'poker.Queen'/0,'poker.Jack'/0,'poker.Ten'/0,'poker.Nine'/0,'poker.Eight'/0,'poker.Seven'/0,'poker.Six'/0,'poker.Five'/0,'poker.Four'/0,'poker.Three'/0]).
constructortype('poker.Card','Card',2,'Card',0,'FuncType'('TCons'('poker.Rank',[]),'FuncType'('TCons'('poker.Suit',[]),'TCons'('poker.Card',[]))),[]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'poker.rank'(_1020190,_1020192,_1020194,_1020196):-freeze(_1020194,'blocked_poker.rank'(_1020190,_1020192,_1020194,_1020196)).
'blocked_poker.rank'(_1020266,_1020548,_1020554,_1020560):-hnf(_1020266,_1021284,_1020554,_1021266),'blocked_poker.rank_1'(_1021284,_1020548,_1021266,_1020560).

'blocked_poker.rank_1'(_1021544,_1021546,_1021548,_1021550):-freeze(_1021548,'blocked_blocked_poker.rank_1'(_1021544,_1021546,_1021548,_1021550)).
'blocked_blocked_poker.rank_1'('poker.Card'(_1020374,_1020392),_1021864,_1021870,_1021876):-!,hnf(_1020374,_1021864,_1021870,_1021876).
'blocked_blocked_poker.rank_1'('FAIL'(_1022272),'FAIL'(_1022272),_1022286,_1022286):-nonvar(_1022272).

'poker.suit'(_1022804,_1022806,_1022808,_1022810):-freeze(_1022808,'blocked_poker.suit'(_1022804,_1022806,_1022808,_1022810)).
'blocked_poker.suit'(_1022880,_1023162,_1023168,_1023174):-hnf(_1022880,_1023898,_1023168,_1023880),'blocked_poker.suit_1'(_1023898,_1023162,_1023880,_1023174).

'blocked_poker.suit_1'(_1024158,_1024160,_1024162,_1024164):-freeze(_1024162,'blocked_blocked_poker.suit_1'(_1024158,_1024160,_1024162,_1024164)).
'blocked_blocked_poker.suit_1'('poker.Card'(_1022988,_1023006),_1024478,_1024484,_1024490):-!,hnf(_1023006,_1024478,_1024484,_1024490).
'blocked_blocked_poker.suit_1'('FAIL'(_1024886),'FAIL'(_1024886),_1024900,_1024900):-nonvar(_1024886).

'poker.four'(_1025418,_1025420,_1025422,_1025424):-freeze(_1025422,'blocked_poker.four'(_1025418,_1025420,_1025422,_1025424)).
'blocked_poker.four'(_1025494,_1026476,_1026482,_1026488):-makeShare(_1025536,_1026704),makeShare(_1025554,_1026724),hnf('poker.four._\'23caseor0'('Prelude.=:='(_1025494,'Prelude.++'(_1026704,'Prelude.++'(['Prelude.unknown'],_1026724))),_1026704,_1026724,_1025518),_1026476,_1026482,_1026488).

'poker.testYes'(_1029802,_1029804,_1029806):-freeze(_1029804,'blocked_poker.testYes'(_1029802,_1029804,_1029806)).
'blocked_poker.testYes'(['poker.Card'('poker.Six','poker.Club'),'poker.Card'('poker.Six','poker.Spade'),'poker.Card'('poker.Five','poker.Heart'),'poker.Card'('poker.Six','poker.Heart'),'poker.Card'('poker.Six','poker.Diamond')],_1031484,_1031484).

'poker.main'(_1034966,_1034968,_1034970):-freeze(_1034968,'blocked_poker.main'(_1034966,_1034968,_1034970)).
'blocked_poker.main'(_1035122,_1035128,_1035134):-hnf('poker.four'('poker.testYes'),_1035122,_1035128,_1035134).

'poker.four._\'23caseor0'(_1036414,_1036416,_1036418,_1036420,_1036422,_1036424,_1036426):-freeze(_1036424,'blocked_poker.four._\'23caseor0'(_1036414,_1036416,_1036418,_1036420,_1036422,_1036424,_1036426)).
'blocked_poker.four._\'23caseor0'(_1036520,_1036538,_1036556,_1036574,_1038342,_1038348,_1038354):-hnf(_1036520,_1039570,_1038348,_1039534),'blocked_poker.four._\'23caseor0_1'(_1039570,_1036538,_1036556,_1036574,_1038342,_1039534,_1038354).

'blocked_poker.four._\'23caseor0_1'(_1039914,_1039916,_1039918,_1039920,_1039922,_1039924,_1039926):-freeze(_1039924,freeze(_1039914,'blocked_blocked_poker.four._\'23caseor0_1'(_1039914,_1039916,_1039918,_1039920,_1039922,_1039924,_1039926))).
'blocked_blocked_poker.four._\'23caseor0_1'('Prelude.True',_1036538,_1036556,_1036574,_1040276,_1040282,_1040288):-makeShare(_1036574,_1040528),hnf('Prelude.=:='('Prelude.map'(partcall(1,'poker.rank',[]),'Prelude.++'(_1036538,_1036556)),[_1040528,_1040528,_1040528,_1040528]),_1040276,_1040282,_1040288).
'blocked_blocked_poker.four._\'23caseor0_1'('Prelude.False',_1036538,_1036556,_1036574,_1043112,_1043118,_1043124):-!,hnf('Prelude.failure'('poker.four._\'23caseor0',['Prelude.False']),_1043112,_1043118,_1043124).
'blocked_blocked_poker.four._\'23caseor0_1'('FAIL'(_1044366),_1036538,_1036556,_1036574,'FAIL'(_1044366),_1044380,_1044380).

:-costCenters(['']).




%%%%% Number of shared variables: 3
