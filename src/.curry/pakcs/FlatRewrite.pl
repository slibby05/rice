%PAKCS2.1 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Control.SetFunctions').
:-importModule('FlatCurry.Types').
:-importModule('List').
:-importModule('Prelude').
:-importModule('Util').

:-curryModule('FlatRewrite').


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('FlatRewrite.subexpr',subexpr,1,'FlatRewrite.subexpr',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])]))).
functiontype('FlatRewrite.replace',replace,3,'FlatRewrite.replace',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('FlatCurry.Types.Expr',[]))))).
functiontype('FlatRewrite.arbitrary',arbitrary,0,'FlatRewrite.arbitrary',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('FlatCurry.Types.Expr',[]))).
functiontype('FlatRewrite.fix',fix,2,'FlatRewrite.fix',nofix,'FuncType'('FuncType'(_2908880,_2908880),'FuncType'(_2908880,_2908880))).
functiontype('FlatRewrite.step',step,2,'FlatRewrite.step',nofix,'FuncType'('FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[]))),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('FlatCurry.Types.Expr',[])))).
functiontype('FlatRewrite.allValues0','FlatRewrite.allValues0',1,'FlatRewrite.allValues0',nofix,'FuncType'(_2980744,'TCons'([],[_2980744]))).
functiontype('FlatRewrite.allValues1','FlatRewrite.allValues1',2,'FlatRewrite.allValues1',nofix,'FuncType'('FuncType'(_3016340,_3016340),'FuncType'(_3016340,'TCons'([],[_3016340])))).
functiontype('FlatRewrite.withSubexpr','FlatRewrite.withSubexpr',1,'FlatRewrite.withSubexpr',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('FlatCurry.Types.Expr',[]))).
functiontype('FlatRewrite.isVar','FlatRewrite.isVar',1,'FlatRewrite.isVar',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.Int',[]))).
functiontype('FlatRewrite.declVar','FlatRewrite.declVar',1,'FlatRewrite.declVar',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('Prelude.Int',[]))).
functiontype('FlatRewrite.allDecls','FlatRewrite.allDecls',0,'FlatRewrite.allDecls',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('FlatRewrite.allVars',allVars,0,'FlatRewrite.allVars',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('FlatRewrite.freeVars',freeVars,1,'FlatRewrite.freeVars',nofix,'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('FlatRewrite.replace._\'23caseor0','FlatRewrite.replace._#caseor0',8,'FlatRewrite.replace._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'('FlatCurry.Types.CombType',[]),'FuncType'('TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Char',[])]),'TCons'([],['TCons'('Prelude.Char',[])])]),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.Expr',[])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.Expr',[])]),'TCons'('FlatCurry.Types.Expr',[])))))))))).
functiontype('FlatRewrite.replace._\'23caseor0._\'23caseor0','FlatRewrite.replace._#caseor0._#caseor0',8,'FlatRewrite.replace._\'23caseor0._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('FlatCurry.Types.Expr',[])])]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('FlatCurry.Types.Expr',[])])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('FlatCurry.Types.Expr',[])))))))))).
functiontype('FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0','FlatRewrite.replace._#caseor0._#caseor0._#caseor0',9,'FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'('FlatCurry.Types.CaseType',[]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.BranchExpr',[])]),'FuncType'('TCons'('FlatCurry.Types.Pattern',[]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.BranchExpr',[])]),'TCons'('FlatCurry.Types.Expr',[]))))))))))).
functiontype('FlatRewrite.fix._\'23caseor0','FlatRewrite.fix._#caseor0',4,'FlatRewrite.fix._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'(_3377820,'FuncType'('FuncType'(_3377820,_3377820),'FuncType'('TCons'('Control.SetFunctions.Values',[_3377820]),_3377820))))).
functiontype('FlatRewrite.step._\'23caseor0','FlatRewrite.step._#caseor0',4,'FlatRewrite.step._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'FuncType'('TCons'('FlatCurry.Types.Expr',[]),'TCons'('FlatCurry.Types.Expr',[])))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'FlatRewrite.subexpr'(_3473556,_3473558,_3473560,_3473562):-freeze(_3473560,'blocked_FlatRewrite.subexpr'(_3473556,_3473558,_3473560,_3473562)).
'blocked_FlatRewrite.subexpr'(_3473632,_3482528,_3482534,_3482540):-hnf(_3473632,_3483708,_3482534,_3483690),'blocked_FlatRewrite.subexpr_or1_1'(_3483708,_3482528,_3483690,_3482540).

'blocked_FlatRewrite.subexpr_or1_1'(_3484046,_3484048,_3484050,_3484052):-freeze(_3484050,'blocked_blocked_FlatRewrite.subexpr_or1_1'(_3484046,_3484048,_3484050,_3484052)).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Free'(_3473746,_3473764),_3484486,_3484492,_3484498):-hnf('Prelude.$'('Util.mapFst'('[|]'(0)),'FlatRewrite.subexpr'(_3473764)),_3484486,_3484492,_3484498).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Or'(_3474258,_3474276),_3486532,_3486538,_3486544):-hnf('Prelude.$'('Util.mapFst'('[|]'(0)),'FlatRewrite.subexpr'(_3474258)),_3486532,_3486538,_3486544).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Or'(_3474258,_3474276),_3487726,_3487732,_3487738):-hnf('Prelude.$'('Util.mapFst'('[|]'(1)),'FlatRewrite.subexpr'(_3474276)),_3487726,_3487732,_3487738).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Let'(_3475166,_3475184),_3489808,_3489814,_3489820):-hnf('Prelude.$'('Util.mapFst'('[|]'('Prelude._impl\'23negate\'23Prelude.Num\'23Prelude.Int'(1))),'FlatRewrite.subexpr'(_3475184)),_3489808,_3489814,_3489820).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Let'(_3475166,_3475184),_3491404,_3491410,_3491416):-makeShare(_3475696,_3491560),makeShare(_3475714,_3491580),hnf('Prelude.cond'('Prelude.=:<='('Prelude.++'(_3491560,'Prelude.++'([_3491580],'Prelude.unknown')),_3475166),'Prelude.$'('Util.mapFst'('[|]'('Prelude.length'(_3491560))),'FlatRewrite.subexpr'('Prelude.snd'(_3491580)))),_3491404,_3491410,_3491416).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Typed'(_3477126,_3477144),_3495498,_3495504,_3495510):-hnf('Prelude.$'('Util.mapFst'('[|]'('Prelude._impl\'23negate\'23Prelude.Num\'23Prelude.Int'(1))),'FlatRewrite.subexpr'(_3477126)),_3495498,_3495504,_3495510).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Case'(_3477718,_3477736,_3477754),_3498026,_3498032,_3498038):-hnf('Prelude.$'('Util.mapFst'('[|]'('Prelude._impl\'23negate\'23Prelude.Num\'23Prelude.Int'(1))),'FlatRewrite.subexpr'(_3477736)),_3498026,_3498032,_3498038).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Case'(_3477718,_3477736,_3477754),_3499684,_3499690,_3499696):-makeShare(_3478272,_3499840),makeShare(_3478290,_3499860),hnf('Prelude.cond'('Prelude.=:<='('Prelude.++'(_3499840,'Prelude.++'(['FlatCurry.Types.Branch'('Prelude.unknown',_3499860)],'Prelude.unknown')),_3477754),'Prelude.$'('Util.mapFst'('[|]'('Prelude.length'(_3499840))),'FlatRewrite.subexpr'(_3499860))),_3499684,_3499690,_3499696).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Comb'(_3479782,_3479800,_3479818),_3504182,_3504188,_3504194):-!,makeShare(_3479860,_3504338),makeShare(_3479878,_3504358),hnf('Prelude.cond'('Prelude.=:<='('Prelude.++'(_3504338,'Prelude.++'([_3504358],'Prelude.unknown')),_3479818),'Prelude.$'('Util.mapFst'('[|]'('Prelude.length'(_3504338))),'FlatRewrite.subexpr'(_3504358))),_3504182,_3504188,_3504194).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Var'(_3481210),_3508258,_3508264,_3508270):-!,hnf('Prelude.failure'('FlatRewrite.subexpr',['FlatCurry.Types.Var'(_3481210)]),_3508258,_3508264,_3508270).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FlatCurry.Types.Lit'(_3481712),_3509822,_3509828,_3509834):-!,hnf('Prelude.failure'('FlatRewrite.subexpr',['FlatCurry.Types.Lit'(_3481712)]),_3509822,_3509828,_3509834).
'blocked_blocked_FlatRewrite.subexpr_or1_1'('FAIL'(_3511040),'FAIL'(_3511040),_3511054,_3511054).
'blocked_FlatRewrite.subexpr'(_3473632,'Prelude.(,)'([],_3473632),_3511100,_3511100).

'FlatRewrite.replace'(_3512436,_3512438,_3512440,_3512442,_3512444,_3512446):-freeze(_3512444,'blocked_FlatRewrite.replace'(_3512436,_3512438,_3512440,_3512442,_3512444,_3512446)).
'blocked_FlatRewrite.replace'(_3512532,_3512550,_3512568,_3522770,_3522776,_3522782):-hnf(_3512550,_3523870,_3522776,_3523840),'blocked_FlatRewrite.replace_2'(_3523870,_3512532,_3512568,_3522770,_3523840,_3522782).

'blocked_FlatRewrite.replace_2'(_3524188,_3524190,_3524192,_3524194,_3524196,_3524198):-freeze(_3524196,'blocked_blocked_FlatRewrite.replace_2'(_3524188,_3524190,_3524192,_3524194,_3524196,_3524198)).
'blocked_blocked_FlatRewrite.replace_2'([],_3512532,_3512568,_3524402,_3524408,_3524414):-hnf(_3512568,_3524402,_3524408,_3524414).
'blocked_blocked_FlatRewrite.replace_2'([_3512754|_3512772],_3512532,_3512568,_3525256,_3525262,_3525268):-!,hnf(_3512532,_3526848,_3525262,_3526812),'blocked_blocked_FlatRewrite.replace_2_[|]_3'(_3526848,_3512754,_3512772,_3512568,_3525256,_3526812,_3525268).

'blocked_blocked_FlatRewrite.replace_2_[|]_3'(_3527270,_3527272,_3527274,_3527276,_3527278,_3527280,_3527282):-freeze(_3527280,'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'(_3527270,_3527272,_3527274,_3527276,_3527278,_3527280,_3527282)).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Free'(_3512892,_3512910),_3512754,_3512772,_3512568,_3528074,_3528080,_3528086):-hnf(_3512754,_3530700,_3528080,_3530658),'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Free_3'(_3530700,_3512892,_3512910,_3512772,_3512568,_3528074,_3530658,_3528086).

'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Free_3'(_3531292,_3531294,_3531296,_3531298,_3531300,_3531302,_3531304,_3531306):-freeze(_3531304,'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Free_3'(_3531292,_3531294,_3531296,_3531298,_3531300,_3531302,_3531304,_3531306)).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Free_3'(0,_3512892,_3512910,_3512772,_3512568,'FlatCurry.Types.Free'(_3512892,'FlatRewrite.replace'(_3512910,_3512772,_3512568)),_3531436,_3531436).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Free_3'('FAIL'(_3533040),_3512892,_3512910,_3512772,_3512568,'FAIL'(_3533040),_3533054,_3533054):-nonvar(_3533040).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Or'(_3513470,_3513488),_3512754,_3512772,_3512568,_3533812,_3533818,_3533824):-hnf(_3512754,_3536378,_3533818,_3536336),'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Or_3'(_3536378,_3513470,_3513488,_3512772,_3512568,_3533812,_3536336,_3533824).

'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Or_3'(_3536958,_3536960,_3536962,_3536964,_3536966,_3536968,_3536970,_3536972):-freeze(_3536970,'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Or_3'(_3536958,_3536960,_3536962,_3536964,_3536966,_3536968,_3536970,_3536972)).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Or_3'(0,_3513470,_3513488,_3512772,_3512568,'FlatCurry.Types.Or'('FlatRewrite.replace'(_3513470,_3512772,_3512568),_3513488),_3537102,_3537102).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Or_3'(1,_3513470,_3513488,_3512772,_3512568,'FlatCurry.Types.Or'(_3513470,'FlatRewrite.replace'(_3513488,_3512772,_3512568)),_3538712,_3538712).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Or_3'('FAIL'(_3540292),_3513470,_3513488,_3512772,_3512568,'FAIL'(_3540292),_3540306,_3540306):-nonvar(_3540292).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Typed'(_3514482,_3514500),_3512754,_3512772,_3512568,_3541100,_3541106,_3541112):-hnf(_3512754,_3543756,_3541106,_3543714),'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Typed_3'(_3543756,_3514482,_3514500,_3512772,_3512568,_3541100,_3543714,_3541112).

'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Typed_3'(_3544354,_3544356,_3544358,_3544360,_3544362,_3544364,_3544366,_3544368):-freeze(_3544366,'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Typed_3'(_3544354,_3544356,_3544358,_3544360,_3544362,_3544364,_3544366,_3544368)).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Typed_3'(-1,_3514482,_3514500,_3512772,_3512568,'FlatCurry.Types.Typed'('FlatRewrite.replace'(_3514482,_3512772,_3512568),_3514500),_3544510,_3544510).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Typed_3'('FAIL'(_3546126),_3514482,_3514500,_3512772,_3512568,'FAIL'(_3546126),_3546140,_3546140):-nonvar(_3546126).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Comb'(_3515060,_3515078,_3515096),_3512754,_3512772,_3512568,_3546596,_3546602,_3546608):-makeShare(_3515138,_3547292),makeShare(_3515156,_3547312),makeShare(_3515174,_3547332),hnf('Prelude.cond'('Prelude.=:<='('Prelude.++'(_3547292,'Prelude.++'([_3547312],_3547332)),_3515096),'FlatRewrite.replace._\'23caseor0'('Prelude.=:='(_3512754,'Prelude.length'(_3547292)),_3515060,_3515078,_3547292,_3547312,_3512772,_3512568,_3547332)),_3546596,_3546602,_3546608).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Let'(_3516800,_3516818),_3512754,_3512772,_3512568,_3552804,_3552810,_3552816):-hnf(_3512754,_3555520,_3552810,_3555478),'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Let_or1_3'(_3555520,_3516800,_3516818,_3512772,_3512568,_3552804,_3555478,_3552816).

'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Let_or1_3'(_3556130,_3556132,_3556134,_3556136,_3556138,_3556140,_3556142,_3556144):-freeze(_3556142,'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Let_or1_3'(_3556130,_3556132,_3556134,_3556136,_3556138,_3556140,_3556142,_3556144)).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Let_or1_3'(-1,_3516800,_3516818,_3512772,_3512568,'FlatCurry.Types.Let'(_3516800,'FlatRewrite.replace'(_3516818,_3512772,_3512568)),_3556286,_3556286).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Let_or1_3'('FAIL'(_3557902),_3516800,_3516818,_3512772,_3512568,'FAIL'(_3557902),_3557916,_3557916):-nonvar(_3557902).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Let'(_3516800,_3516818),_3512754,_3512772,_3512568,_3557992,_3557998,_3558004):-makeShare(_3517316,_3558736),makeShare(_3517334,_3558756),makeShare(_3517352,_3558776),makeShare(_3517370,_3558796),hnf('Prelude.cond'('Prelude.=:<='('Prelude.++'(_3558736,'Prelude.++'(['Prelude.(,)'(_3558756,_3558776)],_3558796)),_3516800),'FlatRewrite.replace._\'23caseor0._\'23caseor0'('Prelude.=:='(_3512754,'Prelude.length'(_3558736)),_3558736,_3558756,_3558776,_3512772,_3512568,_3558796,_3516818)),_3557992,_3557998,_3558004).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Case'(_3519148,_3519166,_3519184),_3512754,_3512772,_3512568,_3564904,_3564910,_3564916):-hnf(_3512754,_3567662,_3564910,_3567614),'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Case_or1_4'(_3567662,_3519148,_3519166,_3519184,_3512772,_3512568,_3564904,_3567614,_3564916).

'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Case_or1_4'(_3568280,_3568282,_3568284,_3568286,_3568288,_3568290,_3568292,_3568294,_3568296):-freeze(_3568294,'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Case_or1_4'(_3568280,_3568282,_3568284,_3568286,_3568288,_3568290,_3568292,_3568294,_3568296)).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Case_or1_4'(-1,_3519148,_3519166,_3519184,_3512772,_3512568,'FlatCurry.Types.Case'(_3519148,'FlatRewrite.replace'(_3519166,_3512772,_3512568),_3519184),_3568446,_3568446).
'blocked_blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3_FlatCurry.Types.Case_or1_4'('FAIL'(_3570278),_3519148,_3519166,_3519184,_3512772,_3512568,'FAIL'(_3570278),_3570292,_3570292):-nonvar(_3570278).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Case'(_3519148,_3519166,_3519184),_3512754,_3512772,_3512568,_3570376,_3570382,_3570388):-makeShare(_3519754,_3571240),makeShare(_3519772,_3571260),makeShare(_3519790,_3571280),makeShare(_3519808,_3571300),hnf('Prelude.cond'('Prelude.=:<='('Prelude.++'(_3571240,'Prelude.++'(['FlatCurry.Types.Branch'(_3571260,_3571280)],_3571300)),_3519184),'FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0'('Prelude.=:='(_3512754,'Prelude.length'(_3571240)),_3519148,_3519166,_3571240,_3571260,_3571280,_3512772,_3512568,_3571300)),_3570376,_3570382,_3570388).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Var'(_3521652),_3512754,_3512772,_3512568,_3576780,_3576786,_3576792):-!,hnf('Prelude.failure'('FlatRewrite.replace',['FlatCurry.Types.Var'(_3521652)]),_3576780,_3576786,_3576792).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FlatCurry.Types.Lit'(_3522154),_3512754,_3512772,_3512568,_3578614,_3578620,_3578626):-!,hnf('Prelude.failure'('FlatRewrite.replace',['FlatCurry.Types.Lit'(_3522154)]),_3578614,_3578620,_3578626).
'blocked_blocked_blocked_FlatRewrite.replace_2_[|]_3'('FAIL'(_3580102),_3512754,_3512772,_3512568,'FAIL'(_3580102),_3580116,_3580116).
'blocked_blocked_FlatRewrite.replace_2'('FAIL'(_3580186),_3512532,_3512568,'FAIL'(_3580186),_3580200,_3580200):-nonvar(_3580186).

'FlatRewrite.arbitrary'(_3581130,_3581132,_3581134):-freeze(_3581132,'blocked_FlatRewrite.arbitrary'(_3581130,_3581132,_3581134)).
'blocked_FlatRewrite.arbitrary'(_3581366,_3581372,_3581378):-hnf('Prelude..'(partcall(1,'Prelude.snd',[]),partcall(1,'FlatRewrite.subexpr',[])),_3581366,_3581372,_3581378).

'FlatRewrite.fix'(_3582754,_3582756,_3582758,_3582760,_3582762):-freeze(_3582760,'blocked_FlatRewrite.fix'(_3582754,_3582756,_3582758,_3582760,_3582762)).
'blocked_FlatRewrite.fix'(_3582840,_3582858,_3583698,_3583704,_3583710):-makeShare(_3582882,_3583910),makeShare(_3582840,_3583930),makeShare(_3582858,_3583950),hnf('Prelude.cond'('Prelude.letrec'(_3583910,'Control.SetFunctions.set1'(_3583930,_3583950)),'FlatRewrite.fix._\'23caseor0'('Control.SetFunctions.isEmpty'(_3583910),_3583950,_3583930,_3583910)),_3583698,_3583704,_3583710).

'FlatRewrite.step'(_3587222,_3587224,_3587226,_3587228,_3587230):-freeze(_3587228,'blocked_FlatRewrite.step'(_3587222,_3587224,_3587226,_3587228,_3587230)).
'blocked_FlatRewrite.step'(_3587308,_3587326,_3588652,_3588658,_3588664):-makeShare(_3587326,_3589032),makeShare(_3587350,_3589052),makeShare(_3587368,_3589072),makeShare(_3587386,_3589092),hnf('FlatRewrite.step._\'23caseor0'('Prelude.&'('Prelude.=:='('FlatRewrite.subexpr'(_3589032),'Prelude.(,)'(_3589052,_3589072)),'Prelude.=:='(_3589092,'Prelude.apply'('Prelude.apply'(_3587308,_3589072),_3589052))),_3589032,_3589052,_3589092),_3588652,_3588658,_3588664).

'FlatRewrite.allValues0'(_3593676,_3593678,_3593680,_3593682):-freeze(_3593680,'blocked_FlatRewrite.allValues0'(_3593676,_3593678,_3593680,_3593682)).
'blocked_FlatRewrite.allValues0'(_3593752,_3594246,_3594252,_3594258):-hnf('Prelude.$'(partcall(1,'Control.SetFunctions.sortValuesBy',[partcall(1,'Prelude.const',[partcall(1,'Prelude.const',['Prelude.True'])])]),'Control.SetFunctions.set0'(_3593752)),_3594246,_3594252,_3594258).

'FlatRewrite.allValues1'(_3596742,_3596744,_3596746,_3596748,_3596750):-freeze(_3596748,'blocked_FlatRewrite.allValues1'(_3596742,_3596744,_3596746,_3596748,_3596750)).
'blocked_FlatRewrite.allValues1'(_3596828,_3596846,_3597406,_3597412,_3597418):-hnf('Prelude.$'(partcall(1,'Control.SetFunctions.sortValuesBy',[partcall(1,'Prelude.const',[partcall(1,'Prelude.const',['Prelude.True'])])]),'Control.SetFunctions.set1'(_3596828,_3596846)),_3597406,_3597412,_3597418).

'FlatRewrite.withSubexpr'(_3600106,_3600108,_3600110,_3600112):-freeze(_3600110,'blocked_FlatRewrite.withSubexpr'(_3600106,_3600108,_3600110,_3600112)).
'blocked_FlatRewrite.withSubexpr'(_3600182,_3605670,_3605676,_3605682):-makeShare(_3600182,_3605838),hnf('Prelude.?'(_3605838,'Prelude.?'('FlatCurry.Types.Comb'('Prelude.unknown','Prelude.unknown','Prelude.++'('Prelude.unknown','Prelude.++'(['FlatRewrite.withSubexpr'(_3605838)],'Prelude.unknown'))),'Prelude.?'('FlatCurry.Types.Let'('Prelude.++'('Prelude.unknown','Prelude.++'(['Prelude.(,)'('Prelude.unknown','FlatRewrite.withSubexpr'(_3605838))],'Prelude.unknown')),'Prelude.unknown'),'Prelude.?'('FlatCurry.Types.Let'('Prelude.unknown','FlatRewrite.withSubexpr'(_3605838)),'Prelude.?'('FlatCurry.Types.Free'('Prelude.unknown','FlatRewrite.withSubexpr'(_3605838)),'Prelude.?'('FlatCurry.Types.Or'('FlatRewrite.withSubexpr'(_3605838),'Prelude.unknown'),'Prelude.?'('FlatCurry.Types.Or'('Prelude.unknown','FlatRewrite.withSubexpr'(_3605838)),'Prelude.?'('FlatCurry.Types.Case'('Prelude.unknown','Prelude.unknown','Prelude.++'('Prelude.unknown','Prelude.++'(['FlatCurry.Types.Branch'('Prelude.unknown','FlatRewrite.withSubexpr'(_3605838))],'Prelude.unknown'))),'Prelude.?'('FlatCurry.Types.Case'('Prelude.unknown','FlatRewrite.withSubexpr'(_3605838),'Prelude.unknown'),'FlatCurry.Types.Typed'('FlatRewrite.withSubexpr'(_3605838),'Prelude.unknown')))))))))),_3605670,_3605676,_3605682).

'FlatRewrite.isVar'(_3619402,_3619404,_3619406,_3619408):-freeze(_3619406,'blocked_FlatRewrite.isVar'(_3619402,_3619404,_3619406,_3619408)).
'blocked_FlatRewrite.isVar'(_3619478,_3619974,_3619980,_3619986):-makeShare(_3619502,_3620070),hnf('Prelude.cond'('Prelude.=:<='('FlatRewrite.withSubexpr'('FlatCurry.Types.Var'(_3620070)),_3619478),_3620070),_3619974,_3619980,_3619986).

'FlatRewrite.declVar'(_3622456,_3622458,_3622460,_3622462):-freeze(_3622460,'blocked_FlatRewrite.declVar'(_3622456,_3622458,_3622460,_3622462)).
'blocked_FlatRewrite.declVar'(_3622532,_3625964,_3625970,_3625976):-makeShare(_3622568,_3626060),hnf('Prelude.cond'('Prelude.=:<='('FlatRewrite.withSubexpr'('FlatCurry.Types.Let'(_3626060,'Prelude.unknown')),_3622532),'Prelude.$'('Prelude.anyOf','Prelude.map'(partcall(1,'Prelude.fst',[]),_3626060))),_3625964,_3625970,_3625976).
'blocked_FlatRewrite.declVar'(_3622532,_3628530,_3628536,_3628542):-makeShare(_3623454,_3628626),hnf('Prelude.cond'('Prelude.=:<='('FlatRewrite.withSubexpr'('FlatCurry.Types.Free'(_3628626,'Prelude.unknown')),_3622532),'Prelude.apply'('Prelude.anyOf',_3628626)),_3628530,_3628536,_3628542).
'blocked_FlatRewrite.declVar'(_3622532,_3630762,_3630768,_3630774):-makeShare(_3624180,_3630858),hnf('Prelude.cond'('Prelude.=:<='('FlatRewrite.withSubexpr'('FlatCurry.Types.Case'('Prelude.unknown','Prelude.unknown','Prelude.++'('Prelude.unknown','Prelude.++'(['FlatCurry.Types.Branch'('FlatCurry.Types.Pattern'('Prelude.unknown',_3630858),'Prelude.unknown')],'Prelude.unknown')))),_3622532),'Prelude.apply'('Prelude.anyOf',_3630858)),_3630762,_3630768,_3630774).

'FlatRewrite.allDecls'(_3635836,_3635838,_3635840):-freeze(_3635838,'blocked_FlatRewrite.allDecls'(_3635836,_3635838,_3635840)).
'blocked_FlatRewrite.allDecls'(_3636472,_3636478,_3636484):-hnf('Prelude..'(partcall(1,'List.nub',['Prelude._inst\'23Prelude.Eq\'23Prelude.Int']),'Prelude..'('Control.SetFunctions.sortValues'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int'),partcall(1,'Control.SetFunctions.set1',[partcall(1,'FlatRewrite.declVar',[])]))),_3636472,_3636478,_3636484).

'FlatRewrite.allVars'(_3639392,_3639394,_3639396):-freeze(_3639394,'blocked_FlatRewrite.allVars'(_3639392,_3639394,_3639396)).
'blocked_FlatRewrite.allVars'(_3640028,_3640034,_3640040):-hnf('Prelude..'(partcall(1,'List.nub',['Prelude._inst\'23Prelude.Eq\'23Prelude.Int']),'Prelude..'('Control.SetFunctions.sortValues'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int'),partcall(1,'Control.SetFunctions.set1',[partcall(1,'FlatRewrite.isVar',[])]))),_3640028,_3640034,_3640040).

'FlatRewrite.freeVars'(_3642966,_3642968,_3642970,_3642972):-freeze(_3642970,'blocked_FlatRewrite.freeVars'(_3642966,_3642968,_3642970,_3642972)).
'blocked_FlatRewrite.freeVars'(_3643042,_3643602,_3643608,_3643614):-makeShare(_3643042,_3643674),hnf('List.\\\\'('Prelude._inst\'23Prelude.Eq\'23Prelude.Int','Prelude.apply'('FlatRewrite.allVars',_3643674),'Prelude.apply'('FlatRewrite.allDecls',_3643674)),_3643602,_3643608,_3643614).

'FlatRewrite.replace._\'23caseor0'(_3646728,_3646730,_3646732,_3646734,_3646736,_3646738,_3646740,_3646742,_3646744,_3646746,_3646748):-freeze(_3646746,'blocked_FlatRewrite.replace._\'23caseor0'(_3646728,_3646730,_3646732,_3646734,_3646736,_3646738,_3646740,_3646742,_3646744,_3646746,_3646748)).
'blocked_FlatRewrite.replace._\'23caseor0'(_3646874,_3646892,_3646910,_3646928,_3646946,_3646964,_3646982,_3647000,_3648648,_3648654,_3648660):-hnf(_3646874,_3650280,_3648654,_3650220),'blocked_FlatRewrite.replace._\'23caseor0_1'(_3650280,_3646892,_3646910,_3646928,_3646946,_3646964,_3646982,_3647000,_3648648,_3650220,_3648660).

'blocked_FlatRewrite.replace._\'23caseor0_1'(_3650686,_3650688,_3650690,_3650692,_3650694,_3650696,_3650698,_3650700,_3650702,_3650704,_3650706):-freeze(_3650704,freeze(_3650686,'blocked_blocked_FlatRewrite.replace._\'23caseor0_1'(_3650686,_3650688,_3650690,_3650692,_3650694,_3650696,_3650698,_3650700,_3650702,_3650704,_3650706))).
'blocked_blocked_FlatRewrite.replace._\'23caseor0_1'('Prelude.True',_3646892,_3646910,_3646928,_3646946,_3646964,_3646982,_3647000,'FlatCurry.Types.Comb'(_3646892,_3646910,'Prelude.++'(_3646928,'Prelude.++'(['FlatRewrite.replace'(_3646946,_3646964,_3646982)],_3647000))),_3651094,_3651094).
'blocked_blocked_FlatRewrite.replace._\'23caseor0_1'('Prelude.False',_3646892,_3646910,_3646928,_3646946,_3646964,_3646982,_3647000,_3654038,_3654044,_3654050):-!,hnf('Prelude.failure'('FlatRewrite.replace._\'23caseor0',['Prelude.False']),_3654038,_3654044,_3654050).
'blocked_blocked_FlatRewrite.replace._\'23caseor0_1'('FAIL'(_3655680),_3646892,_3646910,_3646928,_3646946,_3646964,_3646982,_3647000,'FAIL'(_3655680),_3655694,_3655694).

'FlatRewrite.replace._\'23caseor0._\'23caseor0'(_3657356,_3657358,_3657360,_3657362,_3657364,_3657366,_3657368,_3657370,_3657372,_3657374,_3657376):-freeze(_3657374,'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0'(_3657356,_3657358,_3657360,_3657362,_3657364,_3657366,_3657368,_3657370,_3657372,_3657374,_3657376)).
'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0'(_3657502,_3657520,_3657538,_3657556,_3657574,_3657592,_3657610,_3657628,_3659428,_3659434,_3659440):-hnf(_3657502,_3661492,_3659434,_3661432),'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0_1'(_3661492,_3657520,_3657538,_3657556,_3657574,_3657592,_3657610,_3657628,_3659428,_3661432,_3659440).

'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0_1'(_3661970,_3661972,_3661974,_3661976,_3661978,_3661980,_3661982,_3661984,_3661986,_3661988,_3661990):-freeze(_3661988,freeze(_3661970,'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0_1'(_3661970,_3661972,_3661974,_3661976,_3661978,_3661980,_3661982,_3661984,_3661986,_3661988,_3661990))).
'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0_1'('Prelude.True',_3657520,_3657538,_3657556,_3657574,_3657592,_3657610,_3657628,'FlatCurry.Types.Let'('Prelude.++'(_3657520,'Prelude.++'(['Prelude.(,)'(_3657538,'FlatRewrite.replace'(_3657556,_3657574,_3657592))],_3657610)),_3657628),_3662378,_3662378).
'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0_1'('Prelude.False',_3657520,_3657538,_3657556,_3657574,_3657592,_3657610,_3657628,_3665538,_3665544,_3665550):-!,hnf('Prelude.failure'('FlatRewrite.replace._\'23caseor0._\'23caseor0',['Prelude.False']),_3665538,_3665544,_3665550).
'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0_1'('FAIL'(_3667324),_3657520,_3657538,_3657556,_3657574,_3657592,_3657610,_3657628,'FAIL'(_3667324),_3667338,_3667338).

'FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0'(_3669384,_3669386,_3669388,_3669390,_3669392,_3669394,_3669396,_3669398,_3669400,_3669402,_3669404,_3669406):-freeze(_3669404,'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0'(_3669384,_3669386,_3669388,_3669390,_3669392,_3669394,_3669396,_3669398,_3669400,_3669402,_3669404,_3669406)).
'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0'(_3669540,_3669558,_3669576,_3669594,_3669612,_3669630,_3669648,_3669666,_3669684,_3671622,_3671628,_3671634):-hnf(_3669540,_3674138,_3671628,_3674072),'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0_1'(_3674138,_3669558,_3669576,_3669594,_3669612,_3669630,_3669648,_3669666,_3669684,_3671622,_3674072,_3671634).

'blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0_1'(_3674690,_3674692,_3674694,_3674696,_3674698,_3674700,_3674702,_3674704,_3674706,_3674708,_3674710,_3674712):-freeze(_3674710,freeze(_3674690,'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0_1'(_3674690,_3674692,_3674694,_3674696,_3674698,_3674700,_3674702,_3674704,_3674706,_3674708,_3674710,_3674712))).
'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0_1'('Prelude.True',_3669558,_3669576,_3669594,_3669612,_3669630,_3669648,_3669666,_3669684,'FlatCurry.Types.Case'(_3669558,_3669576,'Prelude.++'(_3669594,'Prelude.++'(['FlatCurry.Types.Branch'(_3669612,'FlatRewrite.replace'(_3669630,_3669648,_3669666))],_3669684))),_3675108,_3675108).
'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0_1'('Prelude.False',_3669558,_3669576,_3669594,_3669612,_3669630,_3669648,_3669666,_3669684,_3678664,_3678670,_3678676):-!,hnf('Prelude.failure'('FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0',['Prelude.False']),_3678664,_3678670,_3678676).
'blocked_blocked_FlatRewrite.replace._\'23caseor0._\'23caseor0._\'23caseor0_1'('FAIL'(_3680664),_3669558,_3669576,_3669594,_3669612,_3669630,_3669648,_3669666,_3669684,'FAIL'(_3680664),_3680678,_3680678).

'FlatRewrite.fix._\'23caseor0'(_3681820,_3681822,_3681824,_3681826,_3681828,_3681830,_3681832):-freeze(_3681830,'blocked_FlatRewrite.fix._\'23caseor0'(_3681820,_3681822,_3681824,_3681826,_3681828,_3681830,_3681832)).
'blocked_FlatRewrite.fix._\'23caseor0'(_3681926,_3681944,_3681962,_3681980,_3682700,_3682706,_3682712):-hnf(_3681926,_3684108,_3682706,_3684072),'blocked_FlatRewrite.fix._\'23caseor0_1'(_3684108,_3681944,_3681962,_3681980,_3682700,_3684072,_3682712).

'blocked_FlatRewrite.fix._\'23caseor0_1'(_3684482,_3684484,_3684486,_3684488,_3684490,_3684492,_3684494):-freeze(_3684492,freeze(_3684482,'blocked_blocked_FlatRewrite.fix._\'23caseor0_1'(_3684482,_3684484,_3684486,_3684488,_3684490,_3684492,_3684494))).
'blocked_blocked_FlatRewrite.fix._\'23caseor0_1'('Prelude.True',_3681944,_3681962,_3681980,_3684844,_3684850,_3684856):-hnf(_3681944,_3684844,_3684850,_3684856).
'blocked_blocked_FlatRewrite.fix._\'23caseor0_1'('Prelude.False',_3681944,_3681962,_3681980,_3685686,_3685692,_3685698):-!,hnf('FlatRewrite.fix'(_3681962,'Prelude.fst'('Control.SetFunctions.select'(_3681980))),_3685686,_3685692,_3685698).
'blocked_blocked_FlatRewrite.fix._\'23caseor0_1'('FAIL'(_3686986),_3681944,_3681962,_3681980,'FAIL'(_3686986),_3687000,_3687000).

'FlatRewrite.step._\'23caseor0'(_3688138,_3688140,_3688142,_3688144,_3688146,_3688148,_3688150):-freeze(_3688148,'blocked_FlatRewrite.step._\'23caseor0'(_3688138,_3688140,_3688142,_3688144,_3688146,_3688148,_3688150)).
'blocked_FlatRewrite.step._\'23caseor0'(_3688244,_3688262,_3688280,_3688298,_3689264,_3689270,_3689276):-hnf(_3688244,_3690708,_3689270,_3690672),'blocked_FlatRewrite.step._\'23caseor0_1'(_3690708,_3688262,_3688280,_3688298,_3689264,_3690672,_3689276).

'blocked_FlatRewrite.step._\'23caseor0_1'(_3691088,_3691090,_3691092,_3691094,_3691096,_3691098,_3691100):-freeze(_3691098,freeze(_3691088,'blocked_blocked_FlatRewrite.step._\'23caseor0_1'(_3691088,_3691090,_3691092,_3691094,_3691096,_3691098,_3691100))).
'blocked_blocked_FlatRewrite.step._\'23caseor0_1'('Prelude.True',_3688262,_3688280,_3688298,_3691450,_3691456,_3691462):-hnf('FlatRewrite.replace'(_3688262,_3688280,_3688298),_3691450,_3691456,_3691462).
'blocked_blocked_FlatRewrite.step._\'23caseor0_1'('Prelude.False',_3688262,_3688280,_3688298,_3692716,_3692722,_3692728):-!,hnf('Prelude.failure'('FlatRewrite.step._\'23caseor0',['Prelude.False']),_3692716,_3692722,_3692728).
'blocked_blocked_FlatRewrite.step._\'23caseor0_1'('FAIL'(_3694042),_3688262,_3688280,_3688298,'FAIL'(_3694042),_3694056,_3694056).

:-costCenters(['']).




%%%%% Number of shared variables: 30
