%PAKCS2.1 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(test).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('test.eqbool',eqbool,2,'test.eqbool',nofix,'FuncType'('TCons'('test.BOOL',[]),'FuncType'('TCons'('test.BOOL',[]),'TCons'('test.BOOL',[])))).
functiontype('test.eqlist',eqlist,2,'test.eqlist',nofix,'FuncType'('TCons'('test.LIST',['TCons'('test.BOOL',[])]),'FuncType'('TCons'('test.LIST',['TCons'('test.BOOL',[])]),'TCons'('test.BOOL',[])))).
functiontype('test.append',append,2,'test.append',nofix,'FuncType'('TCons'('test.LIST',[_896170]),'FuncType'('TCons'('test.LIST',[_896170]),'TCons'('test.LIST',[_896170])))).
functiontype('test.ifte',ifte,3,'test.ifte',nofix,'FuncType'('TCons'('test.BOOL',[]),'FuncType'(_907172,'FuncType'(_907172,_907172)))).
functiontype('test.ift',ift,2,'test.ift',nofix,'FuncType'('TCons'('test.BOOL',[]),'FuncType'(_918036,_918036))).
functiontype('test.last',last,1,'test.last',nofix,'FuncType'('TCons'('test.LIST',['TCons'('test.BOOL',[])]),'TCons'('test.BOOL',[]))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('test.TRUE','TRUE',0,'TRUE',0,'TCons'('test.BOOL',[]),['test.FALSE'/0]).
constructortype('test.FALSE','FALSE',0,'FALSE',1,'TCons'('test.BOOL',[]),['test.TRUE'/0]).
constructortype('test.NIL','NIL',0,'NIL',0,'TCons'('test.LIST',[_940542]),['test.CONS'/2]).
constructortype('test.CONS','CONS',2,'CONS',1,'FuncType'(_940786,'FuncType'('TCons'('test.LIST',[_940786]),'TCons'('test.LIST',[_940786]))),['test.NIL'/0]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'test.eqbool'(_946468,_946470,_946472,_946474,_946476):-freeze(_946474,'blocked_test.eqbool'(_946468,_946470,_946472,_946474,_946476)).
'blocked_test.eqbool'(_946554,_946572,_947294,_947300,_947306):-hnf(_946554,_948086,_947300,_948062),'blocked_test.eqbool_1'(_948086,_946572,_947294,_948062,_947306).

'blocked_test.eqbool_1'(_948354,_948356,_948358,_948360,_948362):-freeze(_948360,'blocked_blocked_test.eqbool_1'(_948354,_948356,_948358,_948360,_948362)).
'blocked_blocked_test.eqbool_1'('test.TRUE',_946572,_948844,_948850,_948856):-hnf(_946572,_950284,_948850,_950266),'blocked_blocked_test.eqbool_1_test.TRUE_1'(_950284,_948844,_950266,_948856).

'blocked_blocked_test.eqbool_1_test.TRUE_1'(_950670,_950672,_950674,_950676):-freeze(_950674,'blocked_blocked_blocked_test.eqbool_1_test.TRUE_1'(_950670,_950672,_950674,_950676)).
'blocked_blocked_blocked_test.eqbool_1_test.TRUE_1'('test.TRUE','test.TRUE',_950966,_950966).
'blocked_blocked_blocked_test.eqbool_1_test.TRUE_1'('test.FALSE','test.FALSE',_951632,_951632):-!.
'blocked_blocked_blocked_test.eqbool_1_test.TRUE_1'('FAIL'(_952082),'FAIL'(_952082),_952096,_952096):-nonvar(_952082).
'blocked_blocked_test.eqbool_1'('test.FALSE',_946572,_952564,_952570,_952576):-!,hnf(_946572,_954034,_952570,_954016),'blocked_blocked_test.eqbool_1_test.FALSE_1'(_954034,_952564,_954016,_952576).

'blocked_blocked_test.eqbool_1_test.FALSE_1'(_954444,_954446,_954448,_954450):-freeze(_954448,'blocked_blocked_blocked_test.eqbool_1_test.FALSE_1'(_954444,_954446,_954448,_954450)).
'blocked_blocked_blocked_test.eqbool_1_test.FALSE_1'('test.TRUE','test.FALSE',_954740,_954740).
'blocked_blocked_blocked_test.eqbool_1_test.FALSE_1'('test.FALSE','test.TRUE',_955418,_955418):-!.
'blocked_blocked_blocked_test.eqbool_1_test.FALSE_1'('FAIL'(_955868),'FAIL'(_955868),_955882,_955882):-nonvar(_955868).
'blocked_blocked_test.eqbool_1'('FAIL'(_955932),_946572,'FAIL'(_955932),_955946,_955946):-nonvar(_955932).

'test.eqlist'(_956508,_956510,_956512,_956514,_956516):-freeze(_956514,'blocked_test.eqlist'(_956508,_956510,_956512,_956514,_956516)).
'blocked_test.eqlist'(_956594,_956612,_957982,_957988,_957994):-hnf(_956594,_958774,_957988,_958750),'blocked_test.eqlist_1'(_958774,_956612,_957982,_958750,_957994).

'blocked_test.eqlist_1'(_959042,_959044,_959046,_959048,_959050):-freeze(_959048,'blocked_blocked_test.eqlist_1'(_959042,_959044,_959046,_959048,_959050)).
'blocked_blocked_test.eqlist_1'('test.NIL',_956612,_959520,_959526,_959532):-hnf(_956612,_960930,_959526,_960912),'blocked_blocked_test.eqlist_1_test.NIL_1'(_960930,_959520,_960912,_959532).

'blocked_blocked_test.eqlist_1_test.NIL_1'(_961310,_961312,_961314,_961316):-freeze(_961314,'blocked_blocked_blocked_test.eqlist_1_test.NIL_1'(_961310,_961312,_961314,_961316)).
'blocked_blocked_blocked_test.eqlist_1_test.NIL_1'('test.NIL','test.TRUE',_961594,_961594).
'blocked_blocked_blocked_test.eqlist_1_test.NIL_1'('test.CONS'(_956902,_956920),'test.FALSE',_962260,_962260):-!.
'blocked_blocked_blocked_test.eqlist_1_test.NIL_1'('FAIL'(_962828),'FAIL'(_962828),_962842,_962842):-nonvar(_962828).
'blocked_blocked_test.eqlist_1'('test.CONS'(_957048,_957066),_956612,_963328,_963334,_963340):-!,hnf(_956612,_964792,_963334,_964762),'blocked_blocked_test.eqlist_1_test.CONS_3'(_964792,_957048,_957066,_963328,_964762,_963340).

'blocked_blocked_test.eqlist_1_test.CONS_3'(_965200,_965202,_965204,_965206,_965208,_965210):-freeze(_965208,'blocked_blocked_blocked_test.eqlist_1_test.CONS_3'(_965200,_965202,_965204,_965206,_965208,_965210)).
'blocked_blocked_blocked_test.eqlist_1_test.CONS_3'('test.NIL',_957048,_957066,'test.FALSE',_965504,_965504).
'blocked_blocked_blocked_test.eqlist_1_test.CONS_3'('test.CONS'(_957278,_957296),_957048,_957066,_966316,_966322,_966328):-!,hnf('test.ifte'('test.eqbool'(_957048,_957278),'test.eqlist'(_957066,_957296),'test.FALSE'),_966316,_966322,_966328).
'blocked_blocked_blocked_test.eqlist_1_test.CONS_3'('FAIL'(_967948),_957048,_957066,'FAIL'(_967948),_967962,_967962):-nonvar(_967948).
'blocked_blocked_test.eqlist_1'('FAIL'(_968028),_956612,'FAIL'(_968028),_968042,_968042):-nonvar(_968028).

'test.append'(_968604,_968606,_968608,_968610,_968612):-freeze(_968610,'blocked_test.append'(_968604,_968606,_968608,_968610,_968612)).
'blocked_test.append'(_968690,_968708,_969366,_969372,_969378):-hnf(_968690,_970158,_969372,_970134),'blocked_test.append_1'(_970158,_968708,_969366,_970134,_969378).

'blocked_test.append_1'(_970426,_970428,_970430,_970432,_970434):-freeze(_970432,'blocked_blocked_test.append_1'(_970426,_970428,_970430,_970432,_970434)).
'blocked_blocked_test.append_1'('test.NIL',_968708,_970714,_970720,_970726):-hnf(_968708,_970714,_970720,_970726).
'blocked_blocked_test.append_1'('test.CONS'(_968894,_968912),_968708,'test.CONS'(_968894,'test.append'(_968912,_968708)),_971296,_971296):-!.
'blocked_blocked_test.append_1'('FAIL'(_972272),_968708,'FAIL'(_972272),_972286,_972286):-nonvar(_972272).

'test.ifte'(_972776,_972778,_972780,_972782,_972784,_972786):-freeze(_972784,'blocked_test.ifte'(_972776,_972778,_972780,_972782,_972784,_972786)).
'blocked_test.ifte'(_972872,_972890,_972908,_973214,_973220,_973226):-hnf(_972872,_973954,_973220,_973924),'blocked_test.ifte_1'(_973954,_972890,_972908,_973214,_973924,_973226).

'blocked_test.ifte_1'(_974212,_974214,_974216,_974218,_974220,_974222):-freeze(_974220,'blocked_blocked_test.ifte_1'(_974212,_974214,_974216,_974218,_974220,_974222)).
'blocked_blocked_test.ifte_1'('test.TRUE',_972890,_972908,_974522,_974528,_974534):-hnf(_972890,_974522,_974528,_974534).
'blocked_blocked_test.ifte_1'('test.FALSE',_972890,_972908,_975150,_975156,_975162):-!,hnf(_972908,_975150,_975156,_975162).
'blocked_blocked_test.ifte_1'('FAIL'(_975568),_972890,_972908,'FAIL'(_975568),_975582,_975582):-nonvar(_975568).

'test.ift'(_976044,_976046,_976048,_976050,_976052):-freeze(_976050,'blocked_test.ift'(_976044,_976046,_976048,_976050,_976052)).
'blocked_test.ift'(_976130,_976148,_976782,_976788,_976794):-hnf(_976130,_977466,_976788,_977442),'blocked_test.ift_1'(_977466,_976148,_976782,_977442,_976794).

'blocked_test.ift_1'(_977716,_977718,_977720,_977722,_977724):-freeze(_977722,'blocked_blocked_test.ift_1'(_977716,_977718,_977720,_977722,_977724)).
'blocked_blocked_test.ift_1'('test.TRUE',_976148,_978106,_978112,_978118):-!,hnf(_976148,_978106,_978112,_978118).
'blocked_blocked_test.ift_1'('test.FALSE',_976148,_978676,_978682,_978688):-!,hnf('Prelude.failure'('test.ift',['test.FALSE']),_978676,_978682,_978688).
'blocked_blocked_test.ift_1'('FAIL'(_979604),_976148,'FAIL'(_979604),_979618,_979618).

'test.last'(_980104,_980106,_980108,_980110):-freeze(_980108,'blocked_test.last'(_980104,_980106,_980108,_980110)).
'blocked_test.last'(_980180,_980846,_980852,_980858):-makeShare(_980204,_981002),hnf('test.ift'('test.eqlist'(_980180,'test.append'(_980222,'test.CONS'(_981002,'test.NIL'))),_981002),_980846,_980852,_980858).

:-costCenters(['']).




%%%%% Number of shared variables: 1
