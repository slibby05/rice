%PAKCS2.1 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('FlatCurry.Pretty').
:-importModule('FlatCurry.Read').
:-importModule('FlatCurry.Types').
:-importModule('GetOpt').
:-importModule('List').
:-importModule('Normalize').
:-importModule('Prelude').
:-importModule('System').
:-importModule('Text.Pretty').
:-importModule('Text.PrettyImpl').
:-importModule('FlatCurry.Goodies').
:-importModule('Control.SetFunctions').

:-curryModule('Main').


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('Main._inst\'23Prelude.Show\'23Main.FileType','_inst#Prelude.Show#Main.FileType',0,'Main._inst\'23Prelude.Show\'23Main.FileType',nofix,'TCons'('Prelude._Dict\'23Show',['TCons'('Main.FileType',[])])).
functiontype('Main._impl\'23show\'23Prelude.Show\'23Main.FileType','_impl#show#Prelude.Show#Main.FileType',0,'Main._impl\'23show\'23Prelude.Show\'23Main.FileType',nofix,'FuncType'('TCons'('Main.FileType',[]),'TCons'([],['TCons'('Prelude.Char',[])]))).
functiontype('Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType','_impl#showsPrec#Prelude.Show#Main.FileType',2,'Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Main.FileType',[]),'FuncType'('TCons'([],['TCons'('Prelude.Char',[])]),'TCons'([],['TCons'('Prelude.Char',[])]))))).
functiontype('Main._impl\'23showList\'23Prelude.Show\'23Main.FileType','_impl#showList#Prelude.Show#Main.FileType',0,'Main._impl\'23showList\'23Prelude.Show\'23Main.FileType',nofix,'FuncType'('TCons'([],['TCons'('Main.FileType',[])]),'FuncType'('TCons'([],['TCons'('Prelude.Char',[])]),'TCons'([],['TCons'('Prelude.Char',[])])))).
functiontype('Main._inst\'23Prelude.Eq\'23Main.FileType','_inst#Prelude.Eq#Main.FileType',0,'Main._inst\'23Prelude.Eq\'23Main.FileType',nofix,'TCons'('Prelude._Dict\'23Eq',['TCons'('Main.FileType',[])])).
functiontype('Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType','_impl#==#Prelude.Eq#Main.FileType',2,'Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType',nofix,'FuncType'('TCons'('Main.FileType',[]),'FuncType'('TCons'('Main.FileType',[]),'TCons'('Prelude.Bool',[])))).
functiontype('Main._impl\'23\'2F\'3D\'23Prelude.Eq\'23Main.FileType','_impl#/=#Prelude.Eq#Main.FileType',0,'Main._impl\'23\'2F\'3D\'23Prelude.Eq\'23Main.FileType',nofix,'FuncType'('TCons'('Main.FileType',[]),'FuncType'('TCons'('Main.FileType',[]),'TCons'('Prelude.Bool',[])))).
functiontype('Main.rewrite',rewrite,1,'Main.rewrite',nofix,'FuncType'('TCons'([],['TCons'('Prelude.Char',[])]),'TCons'('Prelude.IO',['TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])])]))).
functiontype('Main.rewrite.j.2','Main.rewrite.j.2',1,'Main.rewrite.j.2',nofix,'FuncType'('TCons'('Prelude.Maybe',[_5425352]),_5425352)).
functiontype('Main.rewrite.f.2','Main.rewrite.f.2',1,'Main.rewrite.f.2',nofix,'FuncType'('TCons'('FlatCurry.Types.Prog',[]),'TCons'('Prelude.(,)',['TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('FlatCurry.Types.Expr',[])]))).
functiontype('Main.main',main,0,'Main.main',nofix,'TCons'('Prelude.IO',['TCons'('Prelude.()',[])])).
functiontype('Main.main.writeOpt.18','Main.main.writeOpt.18',5,'Main.main.writeOpt.18',nofix,'FuncType'('TCons'('Prelude._Dict\'23Show',[_5532912]),'FuncType'('TCons'('Main.FileType',[]),'FuncType'('TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])])]),'FuncType'('FuncType'(_5532912,'TCons'('Text.PrettyImpl.Doc',[])),'FuncType'(_5532912,'TCons'('Prelude.IO',['TCons'('Prelude.()',[])]))))))).
functiontype('Main.main._\'23lambda3','Main.main._#lambda3',1,'Main.main._\'23lambda3',nofix,'FuncType'('TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Prelude.IO',['TCons'('Prelude.()',[])]))).
functiontype('Main.main._\'23lambda3._\'23selFP2\'23opts','Main.main._#lambda3._#selFP2#opts',1,'Main.main._\'23lambda3._\'23selFP2\'23opts',nofix,'FuncType'('TCons'('Prelude.(,,)',['TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])])]),'TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])])]))).
functiontype('Main.main._\'23lambda3._\'23selFP3\'23files','Main.main._#lambda3._#selFP3#files',1,'Main.main._\'23lambda3._\'23selFP3\'23files',nofix,'FuncType'('TCons'('Prelude.(,,)',['TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])]))).
functiontype('Main.main._\'23lambda3._\'23selFP4\'23errors\'27','Main.main._#lambda3._#selFP4#errors\'',1,'Main.main._\'23lambda3._\'23selFP4\'23errors\'27',nofix,'FuncType'('TCons'('Prelude.(,,)',['TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])]))).
functiontype('Main.main._\'23lambda3._\'23lambda6','Main.main._#lambda3._#lambda6',2,'Main.main._\'23lambda3._\'23lambda6',nofix,'FuncType'('TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])])]),'FuncType'('TCons'([],['TCons'('FlatCurry.Types.Prog',[])]),'TCons'('Prelude.IO',['TCons'('Prelude.()',[])])))).
functiontype('Main.optDescrs',optDescrs,0,'Main.optDescrs',nofix,'TCons'([],['TCons'('GetOpt.OptDescr',['TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])])])])).
functiontype('Main.optDescrs._\'23lambda8','Main.optDescrs._#lambda8',1,'Main.optDescrs._\'23lambda8',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])]))).
functiontype('Main.optDescrs._\'23lambda9','Main.optDescrs._#lambda9',1,'Main.optDescrs._\'23lambda9',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])]))).
functiontype('Main.optDescrs._\'23lambda10','Main.optDescrs._#lambda10',1,'Main.optDescrs._\'23lambda10',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])]))).
functiontype('Main.optDescrs._\'23lambda11','Main.optDescrs._#lambda11',1,'Main.optDescrs._\'23lambda11',nofix,'FuncType'('TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Prelude.(,)',['TCons'('Prelude.Maybe',['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'('Main.FileType',[])]))).
functiontype('Main.main._\'23lambda3._\'23caseor0','Main.main._#lambda3._#caseor0',2,'Main.main._\'23lambda3._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])]),'TCons'([],['TCons'([],['TCons'('Prelude.Char',[])])])))).
functiontype('Main.main._\'23lambda3._\'23caseor0._\'23caseor0','Main.main._#lambda3._#caseor0._#caseor0',4,'Main.main._\'23lambda3._\'23caseor0._\'23caseor0',nofix,'FuncType'(_5967942,'FuncType'(_5967960,'FuncType'(_5967978,'FuncType'(_5967996,'TCons'('ERRORTYPE',[])))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('Main.SFlat','SFlat',0,'SFlat',0,'TCons'('Main.FileType',[]),['Main.STransformed'/0,'Main.SICurry'/0,'Main.SC'/0]).
constructortype('Main.STransformed','STransformed',0,'STransformed',1,'TCons'('Main.FileType',[]),['Main.SFlat'/0,'Main.SICurry'/0,'Main.SC'/0]).
constructortype('Main.SICurry','SICurry',0,'SICurry',2,'TCons'('Main.FileType',[]),['Main.SFlat'/0,'Main.STransformed'/0,'Main.SC'/0]).
constructortype('Main.SC','SC',0,'SC',3,'TCons'('Main.FileType',[]),['Main.SFlat'/0,'Main.STransformed'/0,'Main.SICurry'/0]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'Main._inst\'23Prelude.Show\'23Main.FileType'(_6030502,_6030504,_6030506):-freeze(_6030504,'blocked_Main._inst\'23Prelude.Show\'23Main.FileType'(_6030502,_6030504,_6030506)).
'blocked_Main._inst\'23Prelude.Show\'23Main.FileType'('Prelude._Dict\'23Show'('Main._impl\'23show\'23Prelude.Show\'23Main.FileType',partcall(2,'Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType',[]),'Main._impl\'23showList\'23Prelude.Show\'23Main.FileType'),_6030824,_6030824).

'Main._impl\'23show\'23Prelude.Show\'23Main.FileType'(_6034240,_6034242,_6034244):-freeze(_6034242,'blocked_Main._impl\'23show\'23Prelude.Show\'23Main.FileType'(_6034240,_6034242,_6034244)).
'blocked_Main._impl\'23show\'23Prelude.Show\'23Main.FileType'(_6034396,_6034402,_6034408):-hnf(partcall(1,'Prelude._def\'23show\'23Prelude.Show',['Main._inst\'23Prelude.Show\'23Main.FileType']),_6034396,_6034402,_6034408).

'Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType'(_6037270,_6037272,_6037274,_6037276,_6037278):-freeze(_6037276,'blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType'(_6037270,_6037272,_6037274,_6037276,_6037278)).
'blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType'(_6037356,_6037374,_6042278,_6042284,_6042290):-hnf(_6037374,_6044582,_6042284,_6044558),'blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'(_6044582,_6037356,_6042278,_6044558,_6042290).

'blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'(_6045102,_6045104,_6045106,_6045108,_6045110):-freeze(_6045108,'blocked_blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'(_6045102,_6045104,_6045106,_6045108,_6045110)).
'blocked_blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'('Main.SFlat',_6037356,_6045414,_6045420,_6045426):-hnf(partcall(1,'Prelude.showString',[['^S','^F','^l','^a','^t']]),_6045414,_6045420,_6045426).
'blocked_blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'('Main.STransformed',_6037356,_6047446,_6047452,_6047458):-hnf(partcall(1,'Prelude.showString',[['^S','^T','^r','^a','^n','^s','^f','^o','^r','^m','^e','^d']]),_6047446,_6047452,_6047458).
'blocked_blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'('Main.SICurry',_6037356,_6050692,_6050698,_6050704):-hnf(partcall(1,'Prelude.showString',[['^S','^I','^C','^u','^r','^r','^y']]),_6050692,_6050698,_6050704).
'blocked_blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'('Main.SC',_6037356,_6052968,_6052974,_6052980):-!,hnf(partcall(1,'Prelude.showString',[['^S','^C']]),_6052968,_6052974,_6052980).
'blocked_blocked_Main._impl\'23showsPrec\'23Prelude.Show\'23Main.FileType_2'('FAIL'(_6054160),_6037356,'FAIL'(_6054160),_6054174,_6054174):-nonvar(_6054160).

'Main._impl\'23showList\'23Prelude.Show\'23Main.FileType'(_6056074,_6056076,_6056078):-freeze(_6056076,'blocked_Main._impl\'23showList\'23Prelude.Show\'23Main.FileType'(_6056074,_6056076,_6056078)).
'blocked_Main._impl\'23showList\'23Prelude.Show\'23Main.FileType'(_6056230,_6056236,_6056242):-hnf(partcall(2,'Prelude._def\'23showList\'23Prelude.Show',['Main._inst\'23Prelude.Show\'23Main.FileType']),_6056230,_6056236,_6056242).

'Main._inst\'23Prelude.Eq\'23Main.FileType'(_6058696,_6058698,_6058700):-freeze(_6058698,'blocked_Main._inst\'23Prelude.Eq\'23Main.FileType'(_6058696,_6058698,_6058700)).
'blocked_Main._inst\'23Prelude.Eq\'23Main.FileType'('Prelude._Dict\'23Eq'(partcall(2,'Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType',[]),'Main._impl\'23\'2F\'3D\'23Prelude.Eq\'23Main.FileType'),_6058938,_6058938).

'Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType'(_6061792,_6061794,_6061796,_6061798,_6061800):-freeze(_6061798,'blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType'(_6061792,_6061794,_6061796,_6061798,_6061800)).
'blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType'(_6061878,_6061896,_6064136,_6064142,_6064148):-hnf(_6061878,_6066260,_6064142,_6066236),'blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'(_6066260,_6061896,_6064136,_6066236,_6064148).

'blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'(_6066750,_6066752,_6066754,_6066756,_6066758):-freeze(_6066756,'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'(_6066750,_6066752,_6066754,_6066756,_6066758)).
'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'('Main.SFlat',_6061896,_6067474,_6067480,_6067486):-hnf(_6061896,_6070276,_6067480,_6070258),'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'(_6070276,_6067474,_6070258,_6067486).

'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'(_6070890,_6070892,_6070894,_6070896):-freeze(_6070894,'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'(_6070890,_6070892,_6070894,_6070896)).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'('Main.SFlat','Prelude.True',_6071198,_6071198).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'('Main.STransformed','Prelude.False',_6072194,_6072194).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'('Main.SICurry','Prelude.False',_6073136,_6073136).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'('Main.SC','Prelude.False',_6074018,_6074018):-!.
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SFlat_1'('FAIL'(_6074714),'FAIL'(_6074714),_6074728,_6074728):-nonvar(_6074714).
'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'('Main.STransformed',_6061896,_6075502,_6075508,_6075514):-hnf(_6061896,_6078514,_6075508,_6078496),'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'(_6078514,_6075502,_6078496,_6075514).

'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'(_6079170,_6079172,_6079174,_6079176):-freeze(_6079174,'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'(_6079170,_6079172,_6079174,_6079176)).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'('Main.SFlat','Prelude.False',_6079478,_6079478).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'('Main.STransformed','Prelude.True',_6080522,_6080522).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'('Main.SICurry','Prelude.False',_6081500,_6081500).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'('Main.SC','Prelude.False',_6082424,_6082424):-!.
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.STransformed_1'('FAIL'(_6083162),'FAIL'(_6083162),_6083176,_6083176):-nonvar(_6083162).
'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'('Main.SICurry',_6061896,_6083890,_6083896,_6083902):-hnf(_6061896,_6086752,_6083896,_6086734),'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'(_6086752,_6083890,_6086734,_6083902).

'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'(_6087378,_6087380,_6087382,_6087384):-freeze(_6087382,'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'(_6087378,_6087380,_6087382,_6087384)).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'('Main.SFlat','Prelude.False',_6087686,_6087686).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'('Main.STransformed','Prelude.False',_6088700,_6088700).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'('Main.SICurry','Prelude.True',_6089654,_6089654).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'('Main.SC','Prelude.False',_6090542,_6090542):-!.
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SICurry_1'('FAIL'(_6091250),'FAIL'(_6091250),_6091264,_6091264):-nonvar(_6091250).
'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'('Main.SC',_6061896,_6091918,_6091924,_6091930):-!,hnf(_6061896,_6094630,_6091924,_6094612),'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'(_6094630,_6091918,_6094612,_6091930).

'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'(_6095244,_6095246,_6095248,_6095250):-freeze(_6095248,'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'(_6095244,_6095246,_6095248,_6095250)).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'('Main.SFlat','Prelude.False',_6095552,_6095552).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'('Main.STransformed','Prelude.False',_6096536,_6096536).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'('Main.SICurry','Prelude.False',_6097460,_6097460).
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'('Main.SC','Prelude.True',_6098324,_6098324):-!.
'blocked_blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1_Main.SC_1'('FAIL'(_6098996),'FAIL'(_6098996),_6099010,_6099010):-nonvar(_6098996).
'blocked_blocked_Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType_1'('FAIL'(_6099060),_6061896,'FAIL'(_6099060),_6099074,_6099074):-nonvar(_6099060).

'Main._impl\'23\'2F\'3D\'23Prelude.Eq\'23Main.FileType'(_6100734,_6100736,_6100738):-freeze(_6100736,'blocked_Main._impl\'23\'2F\'3D\'23Prelude.Eq\'23Main.FileType'(_6100734,_6100736,_6100738)).
'blocked_Main._impl\'23\'2F\'3D\'23Prelude.Eq\'23Main.FileType'(_6100890,_6100896,_6100902):-hnf(partcall(2,'Prelude._def\'23\'2F\'3D\'23Prelude.Eq',['Main._inst\'23Prelude.Eq\'23Main.FileType']),_6100890,_6100896,_6100902).

'Main.rewrite'(_6102414,_6102416,_6102418,_6102420):-freeze(_6102418,'blocked_Main.rewrite'(_6102414,_6102416,_6102418,_6102420)).
'blocked_Main.rewrite'(_6102490,_6103064,_6103070,_6103076):-hnf('Prelude._impl\'23\'3E\'3E\'3D\'23Prelude.Monad\'23Prelude.IO'('FlatCurry.Read.readFlatCurryWithImports'(_6102490),'Prelude..'(partcall(1,'Prelude._impl\'23return\'23Prelude.Monad\'23Prelude.IO',[]),'Prelude..'(partcall(1,'Main.rewrite.f.2',[]),partcall(1,'Prelude.head',[])))),_6103064,_6103070,_6103076).

'Main.rewrite.j.2'(_6105932,_6105934,_6105936,_6105938):-freeze(_6105936,'blocked_Main.rewrite.j.2'(_6105932,_6105934,_6105936,_6105938)).
'blocked_Main.rewrite.j.2'(_6106008,_6106714,_6106720,_6106726):-hnf(_6106008,_6107666,_6106720,_6107648),'blocked_Main.rewrite.j.2_1'(_6107666,_6106714,_6107648,_6106726).

'blocked_Main.rewrite.j.2_1'(_6107962,_6107964,_6107966,_6107968):-freeze(_6107966,'blocked_blocked_Main.rewrite.j.2_1'(_6107962,_6107964,_6107966,_6107968)).
'blocked_blocked_Main.rewrite.j.2_1'('Prelude.Just'(_6106116),_6108388,_6108394,_6108400):-!,hnf(_6106116,_6108388,_6108394,_6108400).
'blocked_blocked_Main.rewrite.j.2_1'('Prelude.Nothing',_6109058,_6109064,_6109070):-!,hnf('Prelude.failure'('Main.rewrite.j.2',['Prelude.Nothing']),_6109058,_6109064,_6109070).
'blocked_blocked_Main.rewrite.j.2_1'('FAIL'(_6110042),'FAIL'(_6110042),_6110056,_6110056).

'Main.rewrite.f.2'(_6110786,_6110788,_6110790,_6110792):-freeze(_6110790,'blocked_Main.rewrite.f.2'(_6110786,_6110788,_6110790,_6110792)).
'blocked_Main.rewrite.f.2'(_6110862,_6112910,_6112916,_6112922):-hnf(_6110862,_6113862,_6112916,_6113844),'blocked_Main.rewrite.f.2_1'(_6113862,_6112910,_6113844,_6112922).

'blocked_Main.rewrite.f.2_1'(_6114158,_6114160,_6114162,_6114164):-freeze(_6114162,'blocked_blocked_Main.rewrite.f.2_1'(_6114158,_6114160,_6114162,_6114164)).
'blocked_blocked_Main.rewrite.f.2_1'('FlatCurry.Types.Prog'(_6110970,_6110988,_6111006,_6111024,_6111042),_6114860,_6114866,_6114872):-!,hnf(_6111024,_6116850,_6114866,_6116808),'blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4'(_6116850,_6110970,_6110988,_6111006,_6111042,_6114860,_6116808,_6114872).

'blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4'(_6117358,_6117360,_6117362,_6117364,_6117366,_6117368,_6117370,_6117372):-freeze(_6117370,'blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4'(_6117358,_6117360,_6117362,_6117364,_6117366,_6117368,_6117370,_6117372)).
'blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4'([_6111180|_6111198],_6110970,_6110988,_6111006,_6111042,_6118112,_6118118,_6118124):-!,hnf(_6111180,_6120752,_6118118,_6120704),'blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1'(_6120752,_6111198,_6110970,_6110988,_6111006,_6111042,_6118112,_6120704,_6118124).

'blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1'(_6121346,_6121348,_6121350,_6121352,_6121354,_6121356,_6121358,_6121360,_6121362):-freeze(_6121360,'blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1'(_6121346,_6121348,_6121350,_6121352,_6121354,_6121356,_6121358,_6121360,_6121362)).
'blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1'('FlatCurry.Types.Func'(_6111318,_6111336,_6111354,_6111372,_6111390),_6111198,_6110970,_6110988,_6111006,_6111042,_6122374,_6122380,_6122386):-!,hnf(_6111390,_6126084,_6122380,_6126012),'blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1_FlatCurry.Types.Func_5'(_6126084,_6111318,_6111336,_6111354,_6111372,_6111198,_6110970,_6110988,_6111006,_6111042,_6122374,_6126012,_6122386).

'blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1_FlatCurry.Types.Func_5'(_6126872,_6126874,_6126876,_6126878,_6126880,_6126882,_6126884,_6126886,_6126888,_6126890,_6126892,_6126894,_6126896):-freeze(_6126894,'blocked_blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1_FlatCurry.Types.Func_5'(_6126872,_6126874,_6126876,_6126878,_6126880,_6126882,_6126884,_6126886,_6126888,_6126890,_6126892,_6126894,_6126896)).
'blocked_blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1_FlatCurry.Types.Func_5'('FlatCurry.Types.Rule'(_6111528,_6111546),_6111318,_6111336,_6111354,_6111372,_6111198,_6110970,_6110988,_6111006,_6111042,_6127492,_6127498,_6127504):-!,hnf('Prelude.$'(partcall(1,'Main.rewrite.j.2',[]),'Normalize.redex_path'(_6111546)),_6127492,_6127498,_6127504).
'blocked_blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1_FlatCurry.Types.Func_5'('FlatCurry.Types.External'(_6111894),_6111318,_6111336,_6111354,_6111372,_6111198,_6110970,_6110988,_6111006,_6111042,_6130026,_6130032,_6130038):-!,hnf('Prelude.failure'('Main.rewrite.f.2',['FlatCurry.Types.External'(_6111894)]),_6130026,_6130032,_6130038).
'blocked_blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1_FlatCurry.Types.Func_5'('FAIL'(_6132300),_6111318,_6111336,_6111354,_6111372,_6111198,_6110970,_6110988,_6111006,_6111042,'FAIL'(_6132300),_6132314,_6132314).
'blocked_blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4_[|]_1'('FAIL'(_6132432),_6111198,_6110970,_6110988,_6111006,_6111042,'FAIL'(_6132432),_6132446,_6132446):-nonvar(_6132432).
'blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4'([],_6110970,_6110988,_6111006,_6111042,_6132656,_6132662,_6132668):-!,hnf('Prelude.failure'('Main.rewrite.f.2',[[]]),_6132656,_6132662,_6132668).
'blocked_blocked_blocked_Main.rewrite.f.2_1_FlatCurry.Types.Prog_4'('FAIL'(_6134016),_6110970,_6110988,_6111006,_6111042,'FAIL'(_6134016),_6134030,_6134030).
'blocked_blocked_Main.rewrite.f.2_1'('FAIL'(_6134108),'FAIL'(_6134108),_6134122,_6134122):-nonvar(_6134108).

'Main.main'(_6134604,_6134606,_6134608):-freeze(_6134606,'blocked_Main.main'(_6134604,_6134606,_6134608)).
'blocked_Main.main'(_6134840,_6134846,_6134852):-hnf('Prelude._impl\'23\'3E\'3E\'3D\'23Prelude.Monad\'23Prelude.IO'('System.getArgs',partcall(1,'Main.main._\'23lambda3',[])),_6134840,_6134846,_6134852).

'Main.main.writeOpt.18'(_6136636,_6136638,_6136640,_6136642,_6136644,_6136646,_6136648,_6136650):-freeze(_6136648,'blocked_Main.main.writeOpt.18'(_6136636,_6136638,_6136640,_6136642,_6136644,_6136646,_6136648,_6136650)).
'blocked_Main.main.writeOpt.18'(_6136752,_6136770,_6136788,_6136806,_6136824,_6141734,_6141740,_6141746):-hnf('Prelude.apply'('List.find'('Prelude..'(partcall(1,'Prelude.flip',[_6136770,partcall(2,'Main._impl\'23\'3D\'3D\'23Prelude.Eq\'23Main.FileType',[])]),partcall(1,'Prelude.snd',[]))),_6136788),_6142988,_6141740,_6142940),'blocked_Main.main.writeOpt.18_ComplexCase'(_6142988,_6136752,_6136770,_6136788,_6136806,_6136824,_6141734,_6142940,_6141746).

'blocked_Main.main.writeOpt.18_ComplexCase'(_6143390,_6143392,_6143394,_6143396,_6143398,_6143400,_6143402,_6143404,_6143406):-freeze(_6143404,freeze(_6143390,'blocked_blocked_Main.main.writeOpt.18_ComplexCase'(_6143390,_6143392,_6143394,_6143396,_6143398,_6143400,_6143402,_6143404,_6143406))).
'blocked_blocked_Main.main.writeOpt.18_ComplexCase'('Prelude.Nothing',_6136752,_6136770,_6136788,_6136806,_6136824,_6143808,_6143814,_6143820):-hnf('Prelude._impl\'23return\'23Prelude.Monad\'23Prelude.IO'('Prelude.()'),_6143808,_6143814,_6143820).
'blocked_blocked_Main.main.writeOpt.18_ComplexCase'('Prelude.Just'(_6137650),_6136752,_6136770,_6136788,_6136806,_6136824,_6145592,_6145598,_6145604):-!,hnf(_6137650,_6147934,_6145598,_6147886),'blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1'(_6147934,_6136752,_6136770,_6136788,_6136806,_6136824,_6145592,_6147886,_6145604).

'blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1'(_6148492,_6148494,_6148496,_6148498,_6148500,_6148502,_6148504,_6148506,_6148508):-freeze(_6148506,freeze(_6148492,'blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1'(_6148492,_6148494,_6148496,_6148498,_6148500,_6148502,_6148504,_6148506,_6148508))).
'blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1'('Prelude.(,)'(_6137764,_6137782),_6136752,_6136770,_6136788,_6136806,_6136824,_6149316,_6149322,_6149328):-!,hnf(_6137764,_6152468,_6149322,_6152414),'blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1_Prelude.(,)_1'(_6152468,_6137782,_6136752,_6136770,_6136788,_6136806,_6136824,_6149316,_6152414,_6149328).

'blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1_Prelude.(,)_1'(_6153160,_6153162,_6153164,_6153166,_6153168,_6153170,_6153172,_6153174,_6153176,_6153178):-freeze(_6153176,freeze(_6153160,'blocked_blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1_Prelude.(,)_1'(_6153160,_6153162,_6153164,_6153166,_6153168,_6153170,_6153172,_6153174,_6153176,_6153178))).
'blocked_blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1_Prelude.(,)_1'('Prelude.Nothing',_6137782,_6136752,_6136770,_6136788,_6136806,_6136824,_6153588,_6153594,_6153600):-hnf('Prelude.putStrLn'('Prelude.apply'('Text.Pretty.pPrint','Prelude.apply'(_6136806,_6136824))),_6153588,_6153594,_6153600).
'blocked_blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1_Prelude.(,)_1'('Prelude.Just'(_6138366),_6137782,_6136752,_6136770,_6136788,_6136806,_6136824,_6155772,_6155778,_6155784):-!,hnf('Prelude.writeFile'(_6138366,'Prelude.apply'('Text.Pretty.pPrint','Prelude.apply'(_6136806,_6136824))),_6155772,_6155778,_6155784).
'blocked_blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1_Prelude.(,)_1'('FAIL'(_6157890),_6137782,_6136752,_6136770,_6136788,_6136806,_6136824,'FAIL'(_6157890),_6157904,_6157904).
'blocked_blocked_blocked_Main.main.writeOpt.18_ComplexCase_Prelude.Just_1'('FAIL'(_6157998),_6136752,_6136770,_6136788,_6136806,_6136824,'FAIL'(_6157998),_6158012,_6158012).
'blocked_blocked_Main.main.writeOpt.18_ComplexCase'('FAIL'(_6158098),_6136752,_6136770,_6136788,_6136806,_6136824,'FAIL'(_6158098),_6158112,_6158112).

'Main.main._\'23lambda3'(_6159014,_6159016,_6159018,_6159020):-freeze(_6159018,'blocked_Main.main._\'23lambda3'(_6159014,_6159016,_6159018,_6159020)).
'blocked_Main.main._\'23lambda3'(_6159090,_6162536,_6162542,_6162548):-makeShare(_6159114,_6163448),makeShare(_6159132,_6163468),makeShare(_6159150,_6163488),makeShare(_6159168,_6163508),makeShare(_6159186,_6163528),makeShare(_6159204,_6163548),hnf('Prelude.cond'('Prelude.letrec'(_6163448,_6159090),'Prelude.cond'('Prelude.letrec'(_6163468,'GetOpt.getOpt'('GetOpt.RequireOrder','Main.optDescrs',_6163448)),'Prelude.cond'('Prelude.letrec'(_6163488,'Main.main._\'23lambda3._\'23selFP2\'23opts'(_6163468)),'Prelude.cond'('Prelude.letrec'(_6163508,'Main.main._\'23lambda3._\'23selFP3\'23files'(_6163468)),'Prelude.cond'('Prelude.letrec'(_6163528,'Main.main._\'23lambda3._\'23selFP4\'23errors\'27'(_6163468)),'Prelude.cond'('Prelude.letrec'(_6163548,'Main.main._\'23lambda3._\'23caseor0'('Prelude.apply'('Prelude.apply'('Prelude._impl\'23\'3C\'23Prelude.Ord\'23Prelude.Int','Prelude.length'(_6163508)),1),_6163528)),'Main.main._\'23lambda3._\'23caseor0._\'23caseor0'('Prelude.$'(partcall(1,'Prelude.not',[]),'Prelude.null'(_6163548)),_6163548,_6163508,_6163488))))))),_6162536,_6162542,_6162548).

'Main.main._\'23lambda3._\'23selFP2\'23opts'(_6173862,_6173864,_6173866,_6173868):-freeze(_6173866,'blocked_Main.main._\'23lambda3._\'23selFP2\'23opts'(_6173862,_6173864,_6173866,_6173868)).
'blocked_Main.main._\'23lambda3._\'23selFP2\'23opts'(_6173938,_6174418,_6174424,_6174430):-hnf(_6173938,_6176198,_6174424,_6176180),'blocked_Main.main._\'23lambda3._\'23selFP2\'23opts_1'(_6176198,_6174418,_6176180,_6174430).

'blocked_Main.main._\'23lambda3._\'23selFP2\'23opts_1'(_6176632,_6176634,_6176636,_6176638):-freeze(_6176636,'blocked_blocked_Main.main._\'23lambda3._\'23selFP2\'23opts_1'(_6176632,_6176634,_6176636,_6176638)).
'blocked_blocked_Main.main._\'23lambda3._\'23selFP2\'23opts_1'('Prelude.(,,)'(_6174046,_6174064,_6174082),_6176966,_6176972,_6176978):-!,hnf(_6174046,_6176966,_6176972,_6176978).
'blocked_blocked_Main.main._\'23lambda3._\'23selFP2\'23opts_1'('FAIL'(_6177610),'FAIL'(_6177610),_6177624,_6177624):-nonvar(_6177610).

'Main.main._\'23lambda3._\'23selFP3\'23files'(_6179078,_6179080,_6179082,_6179084):-freeze(_6179082,'blocked_Main.main._\'23lambda3._\'23selFP3\'23files'(_6179078,_6179080,_6179082,_6179084)).
'blocked_Main.main._\'23lambda3._\'23selFP3\'23files'(_6179154,_6179640,_6179646,_6179652):-hnf(_6179154,_6181456,_6179646,_6181438),'blocked_Main.main._\'23lambda3._\'23selFP3\'23files_1'(_6181456,_6179640,_6181438,_6179652).

'blocked_Main.main._\'23lambda3._\'23selFP3\'23files_1'(_6181896,_6181898,_6181900,_6181902):-freeze(_6181900,'blocked_blocked_Main.main._\'23lambda3._\'23selFP3\'23files_1'(_6181896,_6181898,_6181900,_6181902)).
'blocked_blocked_Main.main._\'23lambda3._\'23selFP3\'23files_1'('Prelude.(,,)'(_6179262,_6179280,_6179298),_6182230,_6182236,_6182242):-!,hnf(_6179280,_6182230,_6182236,_6182242).
'blocked_blocked_Main.main._\'23lambda3._\'23selFP3\'23files_1'('FAIL'(_6182880),'FAIL'(_6182880),_6182894,_6182894):-nonvar(_6182880).

'Main.main._\'23lambda3._\'23selFP4\'23errors\'27'(_6184468,_6184470,_6184472,_6184474):-freeze(_6184472,'blocked_Main.main._\'23lambda3._\'23selFP4\'23errors\'27'(_6184468,_6184470,_6184472,_6184474)).
'blocked_Main.main._\'23lambda3._\'23selFP4\'23errors\'27'(_6184544,_6185054,_6185060,_6185066):-hnf(_6184544,_6187014,_6185060,_6186996),'blocked_Main.main._\'23lambda3._\'23selFP4\'23errors\'27_1'(_6187014,_6185054,_6186996,_6185066).

'blocked_Main.main._\'23lambda3._\'23selFP4\'23errors\'27_1'(_6187478,_6187480,_6187482,_6187484):-freeze(_6187482,'blocked_blocked_Main.main._\'23lambda3._\'23selFP4\'23errors\'27_1'(_6187478,_6187480,_6187482,_6187484)).
'blocked_blocked_Main.main._\'23lambda3._\'23selFP4\'23errors\'27_1'('Prelude.(,,)'(_6184652,_6184670,_6184688),_6187812,_6187818,_6187824):-!,hnf(_6184688,_6187812,_6187818,_6187824).
'blocked_blocked_Main.main._\'23lambda3._\'23selFP4\'23errors\'27_1'('FAIL'(_6188486),'FAIL'(_6188486),_6188500,_6188500):-nonvar(_6188486).

'Main.main._\'23lambda3._\'23lambda6'(_6189750,_6189752,_6189754,_6189756,_6189758):-freeze(_6189756,'blocked_Main.main._\'23lambda3._\'23lambda6'(_6189750,_6189752,_6189754,_6189756,_6189758)).
'blocked_Main.main._\'23lambda3._\'23lambda6'(_6189836,_6189854,_6201398,_6201404,_6201410):-hnf(_6189854,_6202982,_6201404,_6202958),'blocked_Main.main._\'23lambda3._\'23lambda6_2'(_6202982,_6189836,_6201398,_6202958,_6201410).

'blocked_Main.main._\'23lambda3._\'23lambda6_2'(_6203388,_6203390,_6203392,_6203394,_6203396):-freeze(_6203394,freeze(_6203388,'blocked_blocked_Main.main._\'23lambda3._\'23lambda6_2'(_6203388,_6203390,_6203392,_6203394,_6203396))).
'blocked_blocked_Main.main._\'23lambda3._\'23lambda6_2'([_6189962|_6189980],_6189836,_6203622,_6203628,_6203634):-makeShare(_6189836,_6203822),makeShare(_6189962,_6203842),makeShare(_6192900,_6203862),hnf('Prelude._impl\'23\'3E\'3E\'23Prelude.Monad\'23Prelude.IO'('Prelude.putStrLn'(['^010','^010','^F','^L','^A','^T','^ ','^C','^U','^R','^R','^Y','^010','^010']),'Prelude._impl\'23\'3E\'3E\'23Prelude.Monad\'23Prelude.IO'('Main.main.writeOpt.18'('FlatCurry.Types._inst\'23Prelude.Show\'23FlatCurry.Types.Prog','Main.SFlat',_6203822,partcall(1,'FlatCurry.Pretty.ppProg',['FlatCurry.Pretty.defaultOptions']),_6203842),'Prelude.cond'('Prelude.letrec'(_6203862,'Normalize.transform'(_6203842)),'Prelude._impl\'23\'3E\'3E\'23Prelude.Monad\'23Prelude.IO'('Prelude.putStrLn'(['^010','^010','^T','^R','^A','^N','^S','^F','^O','^R','^M','^E','^D','^ ','^F','^L','^A','^T','^ ','^C','^U','^R','^R','^Y','^010','^010']),'Main.main.writeOpt.18'('FlatCurry.Types._inst\'23Prelude.Show\'23FlatCurry.Types.Prog','Main.STransformed',_6203822,partcall(1,'FlatCurry.Pretty.ppProg',['FlatCurry.Pretty.defaultOptions']),_6203862))))),_6203622,_6203628,_6203634).
'blocked_blocked_Main.main._\'23lambda3._\'23lambda6_2'([],_6189836,_6218084,_6218090,_6218096):-!,hnf('Prelude.apply'('Prelude._impl\'23fail\'23Prelude.Monad\'23Prelude.IO',['^P','^a','^t','^t','^e','^r','^n','^ ','^m','^a','^t','^c','^h','^ ','^f','^a','^i','^l','^e','^d','^!']),_6218084,_6218090,_6218096).
'blocked_blocked_Main.main._\'23lambda3._\'23lambda6_2'('FAIL'(_6222974),_6189836,'FAIL'(_6222974),_6222988,_6222988).

'Main.optDescrs'(_6223654,_6223656,_6223658):-freeze(_6223656,'blocked_Main.optDescrs'(_6223654,_6223656,_6223658)).
'blocked_Main.optDescrs'(['GetOpt.Option'(['^f'],[],'GetOpt.OptArg'(partcall(1,'Main.optDescrs._\'23lambda8',[]),['^F','^L','^A','^T','^C','^U','^R','^R','^Y']),['^w','^r','^i','^t','^e','^ ','^f','^l','^a','^t','^c','^u','^r','^r','^y','^ ','^t','^o','^ ','^f','^i','^l','^e']),'GetOpt.Option'(['^t'],[],'GetOpt.OptArg'(partcall(1,'Main.optDescrs._\'23lambda9',[]),['^T','^R','^A','^N','^S','^F','^O','^R','^M','^E','^D']),['^w','^r','^i','^t','^e','^ ','^t','^r','^a','^n','^s','^f','^o','^r','^m','^e','^d','^ ','^f','^l','^a','^t','^c','^u','^r','^r','^y','^ ','^t','^o','^ ','^f','^i','^l','^e']),'GetOpt.Option'(['^i'],[],'GetOpt.OptArg'(partcall(1,'Main.optDescrs._\'23lambda10',[]),['^I','^C','^U','^R','^R','^Y']),['^w','^r','^i','^t','^e','^ ','^i','^c','^u','^r','^r','^y','^ ','^t','^o','^ ','^f','^i','^l','^e']),'GetOpt.Option'(['^c'],[],'GetOpt.OptArg'(partcall(1,'Main.optDescrs._\'23lambda11',[]),['^C']),['^w','^r','^i','^t','^e','^ ','^C','^ ','^t','^o','^ ','^f','^i','^l','^e'])],_6244400,_6244400).

'Main.optDescrs._\'23lambda8'(_6272472,_6272474,_6272476,_6272478):-freeze(_6272476,'blocked_Main.optDescrs._\'23lambda8'(_6272472,_6272474,_6272476,_6272478)).
'blocked_Main.optDescrs._\'23lambda8'(_6272548,'Prelude.(,)'(_6272548,'Main.SFlat'),_6272728,_6272728).

'Main.optDescrs._\'23lambda9'(_6274370,_6274372,_6274374,_6274376):-freeze(_6274374,'blocked_Main.optDescrs._\'23lambda9'(_6274370,_6274372,_6274374,_6274376)).
'blocked_Main.optDescrs._\'23lambda9'(_6274446,'Prelude.(,)'(_6274446,'Main.STransformed'),_6274626,_6274626).

'Main.optDescrs._\'23lambda10'(_6276346,_6276348,_6276350,_6276352):-freeze(_6276350,'blocked_Main.optDescrs._\'23lambda10'(_6276346,_6276348,_6276350,_6276352)).
'blocked_Main.optDescrs._\'23lambda10'(_6276422,'Prelude.(,)'(_6276422,'Main.SICurry'),_6276602,_6276602).

'Main.optDescrs._\'23lambda11'(_6278298,_6278300,_6278302,_6278304):-freeze(_6278302,'blocked_Main.optDescrs._\'23lambda11'(_6278298,_6278300,_6278302,_6278304)).
'blocked_Main.optDescrs._\'23lambda11'(_6278374,'Prelude.(,)'(_6278374,'Main.SC'),_6278554,_6278554).

'Main.main._\'23lambda3._\'23caseor0'(_6280388,_6280390,_6280392,_6280394,_6280396):-freeze(_6280394,'blocked_Main.main._\'23lambda3._\'23caseor0'(_6280388,_6280390,_6280392,_6280394,_6280396)).
'blocked_Main.main._\'23lambda3._\'23caseor0'(_6280474,_6280492,_6283730,_6283736,_6283742):-hnf(_6280474,_6285314,_6283736,_6285290),'blocked_Main.main._\'23lambda3._\'23caseor0_1'(_6285314,_6280492,_6283730,_6285290,_6283742).

'blocked_Main.main._\'23lambda3._\'23caseor0_1'(_6285720,_6285722,_6285724,_6285726,_6285728):-freeze(_6285726,freeze(_6285720,'blocked_blocked_Main.main._\'23lambda3._\'23caseor0_1'(_6285720,_6285722,_6285724,_6285726,_6285728))).
'blocked_blocked_Main.main._\'23lambda3._\'23caseor0_1'('Prelude.True',_6280492,[['^M','^i','^s','^s','^i','^n','^g','^ ','^i','^m','^p','^u','^t','^ ','^f','^i','^l','^e']|_6280492],_6286068,_6286068).
'blocked_blocked_Main.main._\'23lambda3._\'23caseor0_1'('Prelude.False',_2386080,_2386664,_2386666,_2386668):-!,hnf(_2386080,_2386664,_2386666,_2386668).
'blocked_blocked_Main.main._\'23lambda3._\'23caseor0_1'('FAIL'(_2387040),_2386080,'FAIL'(_2387040),_2387054,_2387054).

'Main.main._\'23lambda3._\'23caseor0._\'23caseor0'(_2388692,_2388694,_2388696,_2388698,_2388700,_2388702,_2388704):-freeze(_2388702,'blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0'(_2388692,_2388694,_2388696,_2388698,_2388700,_2388702,_2388704)).
'blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0'(_2388798,_2388816,_2388834,_2388852,_2390160,_2390166,_2390172):-hnf(_2388798,_2392216,_2390166,_2392180),'blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0_1'(_2392216,_2388816,_2388834,_2388852,_2390160,_2392180,_2390172).

'blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0_1'(_2392698,_2392700,_2392702,_2392704,_2392706,_2392708,_2392710):-freeze(_2392708,freeze(_2392698,'blocked_blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0_1'(_2392698,_2392700,_2392702,_2392704,_2392706,_2392708,_2392710))).
'blocked_blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0_1'('Prelude.True',_2388816,_2388834,_2388852,_2393060,_2393066,_2393072):-hnf('Prelude.apply'('Prelude.mapM_'('Prelude._inst\'23Prelude.Monad\'23Prelude.IO',partcall(1,'Prelude.putStrLn',[])),_2388816),_2393060,_2393066,_2393072).
'blocked_blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0_1'('Prelude.False',_2388816,_2388834,_2388852,_2394902,_2394908,_2394914):-!,hnf('Prelude._impl\'23\'3E\'3E\'3D\'23Prelude.Monad\'23Prelude.IO'('Prelude.$'(partcall(1,'FlatCurry.Read.readFlatCurryWithImports',[]),'Prelude.head'(_2388834)),partcall(1,'Main.main._\'23lambda3._\'23lambda6',[_2388852])),_2394902,_2394908,_2394914).
'blocked_blocked_Main.main._\'23lambda3._\'23caseor0._\'23caseor0_1'('FAIL'(_2397116),_2388816,_2388834,_2388852,'FAIL'(_2397116),_2397130,_2397130).

:-costCenters(['']).




%%%%% Number of shared variables: 9
