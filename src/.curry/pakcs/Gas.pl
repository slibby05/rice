%PAKCS2.1 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Debug').
:-importModule('FlatCurry.Types').
:-importModule('FlatRewrite').
:-importModule('Prelude').
:-importModule('Util').

:-curryModule('Gas').


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('Gas.loop',loop,3,'Gas.loop',nofix,'FuncType'('FuncType'('TCons'('FlatCurry.Types.FuncDecl',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('FlatCurry.Types.FuncDecl',[])]))),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.FuncDecl',[])]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.(,)',['TCons'([],['TCons'('FlatCurry.Types.FuncDecl',[])]),'TCons'('Prelude.Int',[])]))))).
functiontype('Gas.loop.fname.4','Gas.loop.fname.4',1,'Gas.loop.fname.4',nofix,'FuncType'('TCons'('FlatCurry.Types.FuncDecl',[]),'TCons'([],['TCons'('Prelude.Char',[])]))).
functiontype('Gas.start',start,1,'Gas.start',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])]))).
functiontype('Gas.~~',~~,2,'Gas.~~',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])])))).
functiontype('Gas.~>',~>,2,'Gas.~>',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])])))).
functiontype('Gas.~~>',~~>,2,'Gas.~~>',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])])))).
functiontype('Gas.satisfies',satisfies,2,'Gas.satisfies',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])]),'FuncType'('FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.Bool',[])),'TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])])))).
functiontype('Gas.clet',clet,0,'Gas.clet',nofix,'TCons'('FlatCurry.Types.Expr',[])).
functiontype('Gas.ccase',ccase,0,'Gas.ccase',nofix,'TCons'('FlatCurry.Types.Expr',[])).
functiontype('Gas.ccomb',ccomb,0,'Gas.ccomb',nofix,'TCons'('FlatCurry.Types.Expr',[])).
functiontype('Gas.cor',cor,0,'Gas.cor',nofix,'TCons'('FlatCurry.Types.Expr',[])).
functiontype('Gas.cfree',cfree,0,'Gas.cfree',nofix,'TCons'('FlatCurry.Types.Expr',[])).
functiontype('Gas.ctype',ctype,0,'Gas.ctype',nofix,'TCons'('FlatCurry.Types.Expr',[])).
functiontype('Gas.loop._\'23caseor0','Gas.loop._#caseor0',6,'Gas.loop._\'23caseor0',nofix,'FuncType'('TCons'([],[_4362772]),'FuncType'('TCons'('FlatCurry.Types.FuncDecl',[]),'FuncType'('FuncType'('TCons'('FlatCurry.Types.FuncDecl',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('FlatCurry.Types.FuncDecl',[])]))),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.FuncDecl',[])]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.FuncDecl',[])]),'TCons'('Prelude.(,)',['TCons'([],['TCons'('FlatCurry.Types.FuncDecl',[])]),'TCons'('Prelude.Int',[])])))))))).
functiontype('Gas.\'7E\'7E._\'23caseor0','Gas.~~._#caseor0',4,'Gas.\'7E\'7E._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'([],[_4399706]),'FuncType'(_4399706,'FuncType'(_4399730,'TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],[_4399706]),_4399730])])))))).
functiontype('Gas.\'7E\'3E._\'23caseor0','Gas.~>._#caseor0',4,'Gas.\'7E\'3E._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'([],[_4435560]),'FuncType'('TCons'([],[_4435560]),'FuncType'(_4435596,'TCons'('Prelude.Maybe',['TCons'('Prelude.(,)',['TCons'([],[_4435560]),_4435596])])))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'Gas.loop'(_4494734,_4494736,_4494738,_4494740,_4494742,_4494744):-freeze(_4494742,'blocked_Gas.loop'(_4494734,_4494736,_4494738,_4494740,_4494742,_4494744)).
'blocked_Gas.loop'(_4494830,_4494848,_4494866,_4498330,_4498336,_4498342):-hnf(_4494848,_4499034,_4498336,_4499004),'blocked_Gas.loop_2'(_4499034,_4494830,_4494866,_4498330,_4499004,_4498342).

'blocked_Gas.loop_2'(_4499286,_4499288,_4499290,_4499292,_4499294,_4499296):-freeze(_4499294,'blocked_blocked_Gas.loop_2'(_4499286,_4499288,_4499290,_4499292,_4499294,_4499296)).
'blocked_blocked_Gas.loop_2'([],_4494830,_4494866,'Prelude.(,)'([],_4494866),_4499506,_4499506).
'blocked_blocked_Gas.loop_2'([_4495212|_4495230],_4494830,_4494866,_4500266,_4500272,_4500278):-!,makeShare(_4495212,_4500666),makeShare(_4497186,_4500686),makeShare(_4494830,_4500706),makeShare(_4494866,_4500726),hnf('Prelude.$'(partcall(1,'Debug.trace',['Prelude.++'(['^F','^U','^N','^C','^T','^I','^O','^N',^:,'^ '],'Gas.loop.fname.4'(_4500666))]),'Prelude.cond'('Prelude.letrec'(_4500686,'Prelude.apply'('Prelude.apply'(_4500706,_4500666),_4500726)),'Gas.loop._\'23caseor0'(_4500686,_4500666,_4500706,_4495230,_4500726,_4500686))),_4500266,_4500272,_4500278).
'blocked_blocked_Gas.loop_2'('FAIL'(_4506464),_4494830,_4494866,'FAIL'(_4506464),_4506478,_4506478):-nonvar(_4506464).

'Gas.loop.fname.4'(_4507228,_4507230,_4507232,_4507234):-freeze(_4507232,'blocked_Gas.loop.fname.4'(_4507228,_4507230,_4507232,_4507234)).
'blocked_Gas.loop.fname.4'(_4507304,_4507774,_4507780,_4507786):-hnf(_4507304,_4508726,_4507780,_4508708),'blocked_Gas.loop.fname.4_1'(_4508726,_4507774,_4508708,_4507786).

'blocked_Gas.loop.fname.4_1'(_4509022,_4509024,_4509026,_4509028):-freeze(_4509026,'blocked_blocked_Gas.loop.fname.4_1'(_4509022,_4509024,_4509026,_4509028)).
'blocked_blocked_Gas.loop.fname.4_1'('FlatCurry.Types.Func'(_4507412,_4507430,_4507448,_4507466,_4507484),_4509486,_4509492,_4509498):-!,hnf('Prelude.snd'(_4507412),_4509486,_4509492,_4509498).
'blocked_blocked_Gas.loop.fname.4_1'('FAIL'(_4510278),'FAIL'(_4510278),_4510292,_4510292):-nonvar(_4510278).

'Gas.start'(_4510774,_4510776,_4510778,_4510780):-freeze(_4510778,'blocked_Gas.start'(_4510774,_4510776,_4510778,_4510780)).
'blocked_Gas.start'(_4510850,'Prelude.Just'('Prelude.(,)'([],_4510850)),_4511110,_4511110).

'Gas.~~'(_4512148,_4512150,_4512152,_4512154,_4512156):-freeze(_4512154,'blocked_Gas.~~'(_4512148,_4512150,_4512152,_4512154,_4512156)).
'blocked_Gas.~~'(_4512234,_4512252,_4513882,_4513888,_4513894):-hnf(_4512234,_4514494,_4513888,_4514470),'blocked_Gas.~~_1'(_4514494,_4512252,_4513882,_4514470,_4513894).

'blocked_Gas.~~_1'(_4514732,_4514734,_4514736,_4514738,_4514740):-freeze(_4514738,'blocked_blocked_Gas.~~_1'(_4514732,_4514734,_4514736,_4514738,_4514740)).
'blocked_blocked_Gas.~~_1'('Prelude.Just'(_4512360),_4512252,_4515328,_4515334,_4515340):-!,hnf(_4512360,_4516690,_4515334,_4516666),'blocked_blocked_Gas.~~_1_Prelude.Just_1'(_4516690,_4512252,_4515328,_4516666,_4515340).

'blocked_blocked_Gas.~~_1_Prelude.Just_1'(_4517084,_4517086,_4517088,_4517090,_4517092):-freeze(_4517090,'blocked_blocked_blocked_Gas.~~_1_Prelude.Just_1'(_4517084,_4517086,_4517088,_4517090,_4517092)).
'blocked_blocked_blocked_Gas.~~_1_Prelude.Just_1'('Prelude.(,)'(_4512474,_4512492),_4512252,_4517414,_4517420,_4517426):-!,makeShare(_4512528,_4517650),makeShare(_4512252,_4517670),hnf('Gas.\'7E\'7E._\'23caseor0'('Prelude.=:='('FlatRewrite.subexpr'(_4512492),'Prelude.(,)'([_4517650],_4517670)),_4512474,_4517650,_4517670),_4517414,_4517420,_4517426).
'blocked_blocked_blocked_Gas.~~_1_Prelude.Just_1'('FAIL'(_4520122),_4512252,'FAIL'(_4520122),_4520136,_4520136):-nonvar(_4520122).
'blocked_blocked_Gas.~~_1'('Prelude.Nothing',_4512252,_4520482,_4520488,_4520494):-!,hnf('Prelude.failure'('Gas.~~',['Prelude.Nothing']),_4520482,_4520488,_4520494).
'blocked_blocked_Gas.~~_1'('FAIL'(_4521478),_4512252,'FAIL'(_4521478),_4521492,_4521492).

'Gas.~>'(_4521932,_4521934,_4521936,_4521938,_4521940):-freeze(_4521938,'blocked_Gas.~>'(_4521932,_4521934,_4521936,_4521938,_4521940)).
'blocked_Gas.~>'(_4522018,_4522036,_4523506,_4523512,_4523518):-hnf(_4522018,_4524118,_4523512,_4524094),'blocked_Gas.~>_1'(_4524118,_4522036,_4523506,_4524094,_4523518).

'blocked_Gas.~>_1'(_4524356,_4524358,_4524360,_4524362,_4524364):-freeze(_4524362,'blocked_blocked_Gas.~>_1'(_4524356,_4524358,_4524360,_4524362,_4524364)).
'blocked_blocked_Gas.~>_1'('Prelude.Just'(_4522144),_4522036,_4524952,_4524958,_4524964):-!,hnf(_4522144,_4526314,_4524958,_4526290),'blocked_blocked_Gas.~>_1_Prelude.Just_1'(_4526314,_4522036,_4524952,_4526290,_4524964).

'blocked_blocked_Gas.~>_1_Prelude.Just_1'(_4526708,_4526710,_4526712,_4526714,_4526716):-freeze(_4526714,'blocked_blocked_blocked_Gas.~>_1_Prelude.Just_1'(_4526708,_4526710,_4526712,_4526714,_4526716)).
'blocked_blocked_blocked_Gas.~>_1_Prelude.Just_1'('Prelude.(,)'(_4522258,_4522276),_4522036,_4527038,_4527044,_4527050):-!,makeShare(_4522312,_4527274),makeShare(_4522036,_4527294),hnf('Gas.\'7E\'3E._\'23caseor0'('Prelude.=:='('FlatRewrite.subexpr'(_4522276),'Prelude.(,)'(_4527274,_4527294)),_4522258,_4527274,_4527294),_4527038,_4527044,_4527050).
'blocked_blocked_blocked_Gas.~>_1_Prelude.Just_1'('FAIL'(_4529556),_4522036,'FAIL'(_4529556),_4529570,_4529570):-nonvar(_4529556).
'blocked_blocked_Gas.~>_1'('Prelude.Nothing',_4522036,_4529916,_4529922,_4529928):-!,hnf('Prelude.failure'('Gas.~>',['Prelude.Nothing']),_4529916,_4529922,_4529928).
'blocked_blocked_Gas.~>_1'('FAIL'(_4530912),_4522036,'FAIL'(_4530912),_4530926,_4530926).

'Gas.~~>'(_4531424,_4531426,_4531428,_4531430,_4531432):-freeze(_4531430,'blocked_Gas.~~>'(_4531424,_4531426,_4531428,_4531430,_4531432)).
'blocked_Gas.~~>'(_4531510,_4531528,_4531848,_4531854,_4531860):-hnf('Gas.~>'('Gas.~~'(_4531510,'Prelude.unknown'),_4531528),_4531848,_4531854,_4531860).

'Gas.satisfies'(_4533414,_4533416,_4533418,_4533420,_4533422):-freeze(_4533420,'blocked_Gas.satisfies'(_4533414,_4533416,_4533418,_4533420,_4533422)).
'blocked_Gas.satisfies'(_4533500,_4533518,_4535894,_4535900,_4535906):-makeShare(_4533500,_4534870),hnf(_4534870,_4536722,_4535900,_4536740),'blocked_Gas.satisfies_1'(_4536722,_4536722,_4533518,_4535894,_4536740,_4535906).

'blocked_Gas.satisfies_1'(_4537064,_4537066,_4537068,_4537070,_4537072,_4537074):-freeze(_4537072,'blocked_blocked_Gas.satisfies_1'(_4537064,_4537066,_4537068,_4537070,_4537072,_4537074)).
'blocked_blocked_Gas.satisfies_1'('Prelude.Just'(_4533626),_4534870,_4533518,_4537712,_4537718,_4537724):-!,hnf(_4533626,_4539346,_4537718,_4539316),'blocked_blocked_Gas.satisfies_1_Prelude.Just_1'(_4539346,_4534870,_4533518,_4537712,_4539316,_4537724).

'blocked_blocked_Gas.satisfies_1_Prelude.Just_1'(_4539784,_4539786,_4539788,_4539790,_4539792,_4539794):-freeze(_4539792,'blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1'(_4539784,_4539786,_4539788,_4539790,_4539792,_4539794)).
'blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1'('Prelude.(,)'(_4533740,_4533758),_4534870,_4533518,_4541274,_4541280,_4541286):-!,hnf('Prelude.apply'(_4533518,_4533758),_4543766,_4541280,_4543724),'blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1_Prelude.(,)_ComplexCase'(_4543766,_4533740,_4533758,_4534870,_4533518,_4541274,_4543724,_4541286).

'blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1_Prelude.(,)_ComplexCase'(_4544406,_4544408,_4544410,_4544412,_4544414,_4544416,_4544418,_4544420):-freeze(_4544418,freeze(_4544406,'blocked_blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1_Prelude.(,)_ComplexCase'(_4544406,_4544408,_4544410,_4544412,_4544414,_4544416,_4544418,_4544420))).
'blocked_blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1_Prelude.(,)_ComplexCase'('Prelude.True',_4533740,_4533758,_4534870,_4533518,_4544778,_4544784,_4544790):-hnf(_4534870,_4544778,_4544784,_4544790).
'blocked_blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1_Prelude.(,)_ComplexCase'('Prelude.False',_4533740,_4533758,_4534870,_4533518,_4545936,_4545942,_4545948):-!,hnf('Prelude.failure'('Gas.satisfies',['Prelude.False']),_4545936,_4545942,_4545948).
'blocked_blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1_Prelude.(,)_ComplexCase'('FAIL'(_4547482),_4533740,_4533758,_4534870,_4533518,'FAIL'(_4547482),_4547496,_4547496).
'blocked_blocked_blocked_Gas.satisfies_1_Prelude.Just_1'('FAIL'(_4547574),_4534870,_4533518,'FAIL'(_4547574),_4547588,_4547588):-nonvar(_4547574).
'blocked_blocked_Gas.satisfies_1'('Prelude.Nothing',_4534870,_4533518,_4547942,_4547948,_4547954):-!,hnf('Prelude.failure'('Gas.satisfies',['Prelude.Nothing']),_4547942,_4547948,_4547954).
'blocked_blocked_Gas.satisfies_1'('FAIL'(_4549030),_4534870,_4533518,'FAIL'(_4549030),_4549044,_4549044).

'Gas.clet'(_4549502,_4549504,_4549506):-freeze(_4549504,'blocked_Gas.clet'(_4549502,_4549504,_4549506)).
'blocked_Gas.clet'('FlatCurry.Types.Let'('Prelude.unknown','Prelude.unknown'),_4549744,_4549744).

'Gas.ccase'(_4550832,_4550834,_4550836):-freeze(_4550834,'blocked_Gas.ccase'(_4550832,_4550834,_4550836)).
'blocked_Gas.ccase'('FlatCurry.Types.Case'('Prelude.unknown','Prelude.unknown','Prelude.unknown'),_4551154,_4551154).

'Gas.ccomb'(_4552438,_4552440,_4552442):-freeze(_4552440,'blocked_Gas.ccomb'(_4552438,_4552440,_4552442)).
'blocked_Gas.ccomb'('FlatCurry.Types.Comb'('Prelude.unknown','Prelude.unknown','Prelude.unknown'),_4552760,_4552760).

'Gas.cor'(_4553972,_4553974,_4553976):-freeze(_4553974,'blocked_Gas.cor'(_4553972,_4553974,_4553976)).
'blocked_Gas.cor'('FlatCurry.Types.Or'('Prelude.unknown','Prelude.unknown'),_4554214,_4554214).

'Gas.cfree'(_4555290,_4555292,_4555294):-freeze(_4555292,'blocked_Gas.cfree'(_4555290,_4555292,_4555294)).
'blocked_Gas.cfree'('FlatCurry.Types.Free'('Prelude.unknown','Prelude.unknown'),_4555532,_4555532).

'Gas.ctype'(_4556632,_4556634,_4556636):-freeze(_4556634,'blocked_Gas.ctype'(_4556632,_4556634,_4556636)).
'blocked_Gas.ctype'('FlatCurry.Types.Typed'('Prelude.unknown','Prelude.unknown'),_4556874,_4556874).

'Gas.loop._\'23caseor0'(_4558328,_4558330,_4558332,_4558334,_4558336,_4558338,_4558340,_4558342,_4558344):-freeze(_4558342,'blocked_Gas.loop._\'23caseor0'(_4558328,_4558330,_4558332,_4558334,_4558336,_4558338,_4558340,_4558342,_4558344)).
'blocked_Gas.loop._\'23caseor0'(_4558454,_4558472,_4558490,_4558508,_4558526,_4558544,_4560066,_4560072,_4560078):-hnf(_4558454,_4561262,_4560072,_4561214),'blocked_Gas.loop._\'23caseor0_1'(_4561262,_4558472,_4558490,_4558508,_4558526,_4558544,_4560066,_4561214,_4560078).

'blocked_Gas.loop._\'23caseor0_1'(_4561592,_4561594,_4561596,_4561598,_4561600,_4561602,_4561604,_4561606,_4561608):-freeze(_4561606,'blocked_blocked_Gas.loop._\'23caseor0_1'(_4561592,_4561594,_4561596,_4561598,_4561600,_4561602,_4561604,_4561606,_4561608)).
'blocked_blocked_Gas.loop._\'23caseor0_1'([],_4558472,_4558490,_4558508,_4558526,_4558544,_4561836,_4561842,_4561848):-hnf('Prelude.apply'('Util.mapFst'('[|]'(_4558472)),'Gas.loop'(_4558490,_4558508,_4558526)),_4561836,_4561842,_4561848).
'blocked_blocked_Gas.loop._\'23caseor0_1'([_4559248|_4559266],_4558472,_4558490,_4558508,_4558526,_4558544,_4563562,_4563568,_4563574):-!,makeShare(_4558544,_4563794),hnf('Gas.loop'(_4558490,'Prelude.++'(_4563794,_4558508),'Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_4558526,'Prelude.length'(_4563794))),_4563562,_4563568,_4563574).
'blocked_blocked_Gas.loop._\'23caseor0_1'('FAIL'(_4565960),_4558472,_4558490,_4558508,_4558526,_4558544,'FAIL'(_4565960),_4565974,_4565974):-nonvar(_4565960).

'Gas.\'7E\'7E._\'23caseor0'(_4566826,_4566828,_4566830,_4566832,_4566834,_4566836,_4566838):-freeze(_4566836,'blocked_Gas.\'7E\'7E._\'23caseor0'(_4566826,_4566828,_4566830,_4566832,_4566834,_4566836,_4566838)).
'blocked_Gas.\'7E\'7E._\'23caseor0'(_4566932,_4566950,_4566968,_4566986,_4568236,_4568242,_4568248):-hnf(_4566932,_4569464,_4568242,_4569428),'blocked_Gas.\'7E\'7E._\'23caseor0_1'(_4569464,_4566950,_4566968,_4566986,_4568236,_4569428,_4568248).

'blocked_Gas.\'7E\'7E._\'23caseor0_1'(_4569808,_4569810,_4569812,_4569814,_4569816,_4569818,_4569820):-freeze(_4569818,freeze(_4569808,'blocked_blocked_Gas.\'7E\'7E._\'23caseor0_1'(_4569808,_4569810,_4569812,_4569814,_4569816,_4569818,_4569820))).
'blocked_blocked_Gas.\'7E\'7E._\'23caseor0_1'('Prelude.True',_4566950,_4566968,_4566986,'Prelude.Just'('Prelude.(,)'('Prelude.++'(_4566950,[_4566968]),_4566986)),_4570176,_4570176).
'blocked_blocked_Gas.\'7E\'7E._\'23caseor0_1'('Prelude.False',_4566950,_4566968,_4566986,_4571900,_4571906,_4571912):-!,hnf('Prelude.failure'('Gas.\'7E\'7E._\'23caseor0',['Prelude.False']),_4571900,_4571906,_4571912).
'blocked_blocked_Gas.\'7E\'7E._\'23caseor0_1'('FAIL'(_4573160),_4566950,_4566968,_4566986,'FAIL'(_4573160),_4573174,_4573174).

'Gas.\'7E\'3E._\'23caseor0'(_4574006,_4574008,_4574010,_4574012,_4574014,_4574016,_4574018):-freeze(_4574016,'blocked_Gas.\'7E\'3E._\'23caseor0'(_4574006,_4574008,_4574010,_4574012,_4574014,_4574016,_4574018)).
'blocked_Gas.\'7E\'3E._\'23caseor0'(_4574112,_4574130,_4574148,_4574166,_4575256,_4575262,_4575268):-hnf(_4574112,_4576484,_4575262,_4576448),'blocked_Gas.\'7E\'3E._\'23caseor0_1'(_4576484,_4574130,_4574148,_4574166,_4575256,_4576448,_4575268).

'blocked_Gas.\'7E\'3E._\'23caseor0_1'(_4576828,_4576830,_4576832,_4576834,_4576836,_4576838,_4576840):-freeze(_4576838,freeze(_4576828,'blocked_blocked_Gas.\'7E\'3E._\'23caseor0_1'(_4576828,_4576830,_4576832,_4576834,_4576836,_4576838,_4576840))).
'blocked_blocked_Gas.\'7E\'3E._\'23caseor0_1'('Prelude.True',_4574130,_4574148,_4574166,'Prelude.Just'('Prelude.(,)'('Prelude.++'(_4574130,_4574148),_4574166)),_4577196,_4577196).
'blocked_blocked_Gas.\'7E\'3E._\'23caseor0_1'('Prelude.False',_4574130,_4574148,_4574166,_4578730,_4578736,_4578742):-!,hnf('Prelude.failure'('Gas.\'7E\'3E._\'23caseor0',['Prelude.False']),_4578730,_4578736,_4578742).
'blocked_blocked_Gas.\'7E\'3E._\'23caseor0_1'('FAIL'(_4579990),_4574130,_4574148,_4574166,'FAIL'(_4579990),_4580004,_4580004).

:-costCenters(['']).




%%%%% Number of shared variables: 9
