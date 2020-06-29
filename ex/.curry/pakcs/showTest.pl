%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(showTest).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('showTest._inst\'23Prelude.Show\'23showTest.Color','_inst#Prelude.Show#showTest.Color',0,'showTest._inst\'23Prelude.Show\'23showTest.Color',nofix,'TCons'('Prelude._Dict\'23Show',['TCons'('showTest.Color',[])])).
functiontype('showTest._impl\'23show\'23Prelude.Show\'23showTest.Color','_impl#show#Prelude.Show#showTest.Color',0,'showTest._impl\'23show\'23Prelude.Show\'23showTest.Color',nofix,'FuncType'('TCons'('showTest.Color',[]),'TCons'([],['TCons'('Prelude.Char',[])]))).
functiontype('showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color','_impl#showsPrec#Prelude.Show#showTest.Color',2,'showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('showTest.Color',[]),'FuncType'('TCons'([],['TCons'('Prelude.Char',[])]),'TCons'([],['TCons'('Prelude.Char',[])]))))).
functiontype('showTest._impl\'23showList\'23Prelude.Show\'23showTest.Color','_impl#showList#Prelude.Show#showTest.Color',0,'showTest._impl\'23showList\'23Prelude.Show\'23showTest.Color',nofix,'FuncType'('TCons'([],['TCons'('showTest.Color',[])]),'FuncType'('TCons'([],['TCons'('Prelude.Char',[])]),'TCons'([],['TCons'('Prelude.Char',[])])))).
functiontype('showTest._inst\'23Prelude.Eq\'23showTest.Color','_inst#Prelude.Eq#showTest.Color',0,'showTest._inst\'23Prelude.Eq\'23showTest.Color',nofix,'TCons'('Prelude._Dict\'23Eq',['TCons'('showTest.Color',[])])).
functiontype('showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color','_impl#==#Prelude.Eq#showTest.Color',2,'showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color',nofix,'FuncType'('TCons'('showTest.Color',[]),'FuncType'('TCons'('showTest.Color',[]),'TCons'('Prelude.Bool',[])))).
functiontype('showTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23showTest.Color','_impl#/=#Prelude.Eq#showTest.Color',0,'showTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23showTest.Color',nofix,'FuncType'('TCons'('showTest.Color',[]),'FuncType'('TCons'('showTest.Color',[]),'TCons'('Prelude.Bool',[])))).
functiontype('showTest.main',main,0,'showTest.main',nofix,'TCons'([],['TCons'('Prelude.Char',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('showTest.Red','Red',0,'Red',0,'TCons'('showTest.Color',[]),['showTest.Green'/0,'showTest.Blue'/0]).
constructortype('showTest.Green','Green',0,'Green',1,'TCons'('showTest.Color',[]),['showTest.Red'/0,'showTest.Blue'/0]).
constructortype('showTest.Blue','Blue',0,'Blue',2,'TCons'('showTest.Color',[]),['showTest.Red'/0,'showTest.Green'/0]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'showTest._inst\'23Prelude.Show\'23showTest.Color'(_1221620,_1221622,_1221624):-freeze(_1221622,'blocked_showTest._inst\'23Prelude.Show\'23showTest.Color'(_1221620,_1221622,_1221624)).
'blocked_showTest._inst\'23Prelude.Show\'23showTest.Color'('Prelude._Dict\'23Show'('showTest._impl\'23show\'23Prelude.Show\'23showTest.Color',partcall(2,'showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color',[]),'showTest._impl\'23showList\'23Prelude.Show\'23showTest.Color'),_1221942,_1221942).

'showTest._impl\'23show\'23Prelude.Show\'23showTest.Color'(_1225658,_1225660,_1225662):-freeze(_1225660,'blocked_showTest._impl\'23show\'23Prelude.Show\'23showTest.Color'(_1225658,_1225660,_1225662)).
'blocked_showTest._impl\'23show\'23Prelude.Show\'23showTest.Color'(_1225814,_1225820,_1225826):-hnf(partcall(1,'Prelude._def\'23show\'23Prelude.Show',['showTest._inst\'23Prelude.Show\'23showTest.Color']),_1225814,_1225820,_1225826).

'showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color'(_1228928,_1228930,_1228932,_1228934,_1228936):-freeze(_1228934,'blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color'(_1228928,_1228930,_1228932,_1228934,_1228936)).
'blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color'(_1229014,_1229032,_1231750,_1231756,_1231762):-hnf(_1229032,_1234234,_1231756,_1234210),'blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color_2'(_1234234,_1229014,_1231750,_1234210,_1231762).

'blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color_2'(_1234784,_1234786,_1234788,_1234790,_1234792):-freeze(_1234790,'blocked_blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color_2'(_1234784,_1234786,_1234788,_1234790,_1234792)).
'blocked_blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color_2'('showTest.Red',_1229014,_1235120,_1235126,_1235132):-hnf(partcall(1,'Prelude.showString',[['^R','^e','^d']]),_1235120,_1235126,_1235132).
'blocked_blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color_2'('showTest.Green',_1229014,_1236782,_1236788,_1236794):-hnf(partcall(1,'Prelude.showString',[['^G','^r','^e','^e','^n']]),_1236782,_1236788,_1236794).
'blocked_blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color_2'('showTest.Blue',_1229014,_1238796,_1238802,_1238808):-!,hnf(partcall(1,'Prelude.showString',[['^B','^l','^u','^e']]),_1238796,_1238802,_1238808).
'blocked_blocked_showTest._impl\'23showsPrec\'23Prelude.Show\'23showTest.Color_2'('FAIL'(_1240382),_1229014,'FAIL'(_1240382),_1240396,_1240396):-nonvar(_1240382).

'showTest._impl\'23showList\'23Prelude.Show\'23showTest.Color'(_1242476,_1242478,_1242480):-freeze(_1242478,'blocked_showTest._impl\'23showList\'23Prelude.Show\'23showTest.Color'(_1242476,_1242478,_1242480)).
'blocked_showTest._impl\'23showList\'23Prelude.Show\'23showTest.Color'(_1242632,_1242638,_1242644):-hnf(partcall(2,'Prelude._def\'23showList\'23Prelude.Show',['showTest._inst\'23Prelude.Show\'23showTest.Color']),_1242632,_1242638,_1242644).

'showTest._inst\'23Prelude.Eq\'23showTest.Color'(_1245338,_1245340,_1245342):-freeze(_1245340,'blocked_showTest._inst\'23Prelude.Eq\'23showTest.Color'(_1245338,_1245340,_1245342)).
'blocked_showTest._inst\'23Prelude.Eq\'23showTest.Color'('Prelude._Dict\'23Eq'(partcall(2,'showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color',[]),'showTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23showTest.Color'),_1245580,_1245580).

'showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color'(_1248704,_1248706,_1248708,_1248710,_1248712):-freeze(_1248710,'blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color'(_1248704,_1248706,_1248708,_1248710,_1248712)).
'blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color'(_1248790,_1248808,_1250338,_1250344,_1250350):-hnf(_1248790,_1252642,_1250344,_1252618),'blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1'(_1252642,_1248808,_1250338,_1252618,_1250350).

'blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1'(_1253162,_1253164,_1253166,_1253168,_1253170):-freeze(_1253168,'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1'(_1253162,_1253164,_1253166,_1253168,_1253170)).
'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1'('showTest.Red',_1248808,_1253940,_1253946,_1253952):-hnf(_1248808,_1256982,_1253946,_1256964),'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Red_1'(_1256982,_1253940,_1256964,_1253952).

'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Red_1'(_1257638,_1257640,_1257642,_1257644):-freeze(_1257642,'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Red_1'(_1257638,_1257640,_1257642,_1257644)).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Red_1'('showTest.Red','Prelude.True',_1257970,_1257970).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Red_1'('showTest.Green','Prelude.False',_1258972,_1258972).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Red_1'('showTest.Blue','Prelude.False',_1259968,_1259968):-!.
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Red_1'('FAIL'(_1260706),'FAIL'(_1260706),_1260720,_1260720):-nonvar(_1260706).
'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1'('showTest.Green',_1248808,_1261488,_1261494,_1261500):-hnf(_1248808,_1264590,_1261494,_1264572),'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Green_1'(_1264590,_1261488,_1264572,_1261500).

'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Green_1'(_1265258,_1265260,_1265262,_1265264):-freeze(_1265262,'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Green_1'(_1265258,_1265260,_1265262,_1265264)).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Green_1'('showTest.Red','Prelude.False',_1265590,_1265590).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Green_1'('showTest.Green','Prelude.True',_1266610,_1266610).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Green_1'('showTest.Blue','Prelude.False',_1267612,_1267612):-!.
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Green_1'('FAIL'(_1268362),'FAIL'(_1268362),_1268376,_1268376):-nonvar(_1268362).
'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1'('showTest.Blue',_1248808,_1269132,_1269138,_1269144):-!,hnf(_1248808,_1272204,_1269138,_1272186),'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Blue_1'(_1272204,_1269132,_1272186,_1269144).

'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Blue_1'(_1272884,_1272886,_1272888,_1272890):-freeze(_1272888,'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Blue_1'(_1272884,_1272886,_1272888,_1272890)).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Blue_1'('showTest.Red','Prelude.False',_1273216,_1273216).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Blue_1'('showTest.Green','Prelude.False',_1274230,_1274230).
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Blue_1'('showTest.Blue','Prelude.True',_1275232,_1275232):-!.
'blocked_blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1_showTest.Blue_1'('FAIL'(_1275970),'FAIL'(_1275970),_1275984,_1275984):-nonvar(_1275970).
'blocked_blocked_showTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23showTest.Color_1'('FAIL'(_1276034),_1248808,'FAIL'(_1276034),_1276048,_1276048):-nonvar(_1276034).

'showTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23showTest.Color'(_1277888,_1277890,_1277892):-freeze(_1277890,'blocked_showTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23showTest.Color'(_1277888,_1277890,_1277892)).
'blocked_showTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23showTest.Color'(_1278044,_1278050,_1278056):-hnf(partcall(2,'Prelude._def\'23\'2F\'3D\'23Prelude.Eq',['showTest._inst\'23Prelude.Eq\'23showTest.Color']),_1278044,_1278050,_1278056).

'showTest.main'(_1279664,_1279666,_1279668):-freeze(_1279666,'blocked_showTest.main'(_1279664,_1279666,_1279668)).
'blocked_showTest.main'(_1280220,_1280226,_1280232):-hnf('Prelude.++'('Prelude.apply'('showTest._impl\'23show\'23Prelude.Show\'23showTest.Color','showTest.Red'),'Prelude.apply'('showTest._impl\'23show\'23Prelude.Show\'23showTest.Color','showTest.Green')),_1280220,_1280226,_1280232).

:-costCenters(['']).




%%%%% Number of shared variables: 0
