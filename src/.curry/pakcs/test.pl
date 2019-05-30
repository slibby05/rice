%PAKCS2.1 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(test).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('test._inst\'23Prelude.Eq\'23test.Color','_inst#Prelude.Eq#test.Color',0,'test._inst\'23Prelude.Eq\'23test.Color',nofix,'TCons'('Prelude._Dict\'23Eq',['TCons'('test.Color',[])])).
functiontype('test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color','_impl#==#Prelude.Eq#test.Color',2,'test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color',nofix,'FuncType'('TCons'('test.Color',[]),'FuncType'('TCons'('test.Color',[]),'TCons'('Prelude.Bool',[])))).
functiontype('test._impl\'23\'2F\'3D\'23Prelude.Eq\'23test.Color','_impl#/=#Prelude.Eq#test.Color',0,'test._impl\'23\'2F\'3D\'23Prelude.Eq\'23test.Color',nofix,'FuncType'('TCons'('test.Color',[]),'FuncType'('TCons'('test.Color',[]),'TCons'('Prelude.Bool',[])))).
functiontype('test._inst\'23Prelude.Show\'23test.Color','_inst#Prelude.Show#test.Color',0,'test._inst\'23Prelude.Show\'23test.Color',nofix,'TCons'('Prelude._Dict\'23Show',['TCons'('test.Color',[])])).
functiontype('test._impl\'23show\'23Prelude.Show\'23test.Color','_impl#show#Prelude.Show#test.Color',0,'test._impl\'23show\'23Prelude.Show\'23test.Color',nofix,'FuncType'('TCons'('test.Color',[]),'TCons'([],['TCons'('Prelude.Char',[])]))).
functiontype('test._impl\'23showsPrec\'23Prelude.Show\'23test.Color','_impl#showsPrec#Prelude.Show#test.Color',2,'test._impl\'23showsPrec\'23Prelude.Show\'23test.Color',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('test.Color',[]),'FuncType'('TCons'([],['TCons'('Prelude.Char',[])]),'TCons'([],['TCons'('Prelude.Char',[])]))))).
functiontype('test._impl\'23showList\'23Prelude.Show\'23test.Color','_impl#showList#Prelude.Show#test.Color',0,'test._impl\'23showList\'23Prelude.Show\'23test.Color',nofix,'FuncType'('TCons'([],['TCons'('test.Color',[])]),'FuncType'('TCons'([],['TCons'('Prelude.Char',[])]),'TCons'([],['TCons'('Prelude.Char',[])])))).
functiontype('test.loop',loop,1,'test.loop',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_1324726]),_1324726)).
functiontype('test.c',c,1,'test.c',nofix,'FuncType'('TCons'('Prelude.Char',[]),'TCons'('Prelude.Int',[]))).
functiontype('test.s',s,1,'test.s',nofix,'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[]))).
functiontype('test.t',t,1,'test.t',nofix,'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'('Prelude.Int',[]))).
functiontype('test.u',u,1,'test.u',nofix,'FuncType'('TCons'('test.Color',[]),'TCons'('Prelude.Int',[]))).
functiontype('test.f',f,1,'test.f',nofix,'FuncType'(_1380436,_1380436)).
functiontype('test.g',g,0,'test.g',nofix,'TCons'('Prelude.Bool',[])).
functiontype('test.app',app,2,'test.app',nofix,'FuncType'('FuncType'(_1402530,_1402532),'FuncType'(_1402530,_1402532))).
functiontype('test.s._\'23caseor0','test.s._#caseor0',1,'test.s._\'23caseor0',nofix,'FuncType'(_1413628,'TCons'('Prelude.Int',[]))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('test.Red','Red',0,'Red',0,'TCons'('test.Color',[]),['test.Green'/0,'test.Blue'/0,'test.Purple'/0]).
constructortype('test.Green','Green',0,'Green',1,'TCons'('test.Color',[]),['test.Red'/0,'test.Blue'/0,'test.Purple'/0]).
constructortype('test.Blue','Blue',0,'Blue',2,'TCons'('test.Color',[]),['test.Red'/0,'test.Green'/0,'test.Purple'/0]).
constructortype('test.Purple','Purple',0,'Purple',3,'TCons'('test.Color',[]),['test.Red'/0,'test.Green'/0,'test.Blue'/0]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'test._inst\'23Prelude.Eq\'23test.Color'(_1432568,_1432570,_1432572):-freeze(_1432570,'blocked_test._inst\'23Prelude.Eq\'23test.Color'(_1432568,_1432570,_1432572)).
'blocked_test._inst\'23Prelude.Eq\'23test.Color'('Prelude._Dict\'23Eq'(partcall(2,'test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color',[]),'test._impl\'23\'2F\'3D\'23Prelude.Eq\'23test.Color'),_1432810,_1432810).

'test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color'(_1435502,_1435504,_1435506,_1435508,_1435510):-freeze(_1435508,'blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color'(_1435502,_1435504,_1435506,_1435508,_1435510)).
'blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color'(_1435588,_1435606,_1437828,_1437834,_1437840):-hnf(_1435588,_1439844,_1437834,_1439820),'blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'(_1439844,_1435606,_1437828,_1439820,_1437840).

'blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'(_1440316,_1440318,_1440320,_1440322,_1440324):-freeze(_1440322,'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'(_1440316,_1440318,_1440320,_1440322,_1440324)).
'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'('test.Red',_1435606,_1440998,_1441004,_1441010):-hnf(_1435606,_1443632,_1441004,_1443614),'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'(_1443632,_1440998,_1443614,_1441010).

'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'(_1444216,_1444218,_1444220,_1444222):-freeze(_1444220,'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'(_1444216,_1444218,_1444220,_1444222)).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'('test.Red','Prelude.True',_1444500,_1444500).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'('test.Green','Prelude.False',_1445382,_1445382).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'('test.Blue','Prelude.False',_1446258,_1446258).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'('test.Purple','Prelude.False',_1447158,_1447158):-!.
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Red_1'('FAIL'(_1447824),'FAIL'(_1447824),_1447838,_1447838):-nonvar(_1447824).
'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'('test.Green',_1435606,_1448510,_1448516,_1448522):-hnf(_1435606,_1451204,_1448516,_1451186),'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'(_1451204,_1448510,_1451186,_1448522).

'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'(_1451800,_1451802,_1451804,_1451806):-freeze(_1451804,'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'(_1451800,_1451802,_1451804,_1451806)).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'('test.Red','Prelude.False',_1452084,_1452084).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'('test.Green','Prelude.True',_1452984,_1452984).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'('test.Blue','Prelude.False',_1453866,_1453866).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'('test.Purple','Prelude.False',_1454778,_1454778):-!.
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Green_1'('FAIL'(_1455456),'FAIL'(_1455456),_1455470,_1455470):-nonvar(_1455456).
'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'('test.Blue',_1435606,_1456130,_1456136,_1456142):-hnf(_1435606,_1458794,_1456136,_1458776),'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'(_1458794,_1456130,_1458776,_1456142).

'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'(_1459384,_1459386,_1459388,_1459390):-freeze(_1459388,'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'(_1459384,_1459386,_1459388,_1459390)).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'('test.Red','Prelude.False',_1459668,_1459668).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'('test.Green','Prelude.False',_1460562,_1460562).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'('test.Blue','Prelude.True',_1461444,_1461444).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'('test.Purple','Prelude.False',_1462344,_1462344):-!.
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Blue_1'('FAIL'(_1463016),'FAIL'(_1463016),_1463030,_1463030):-nonvar(_1463016).
'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'('test.Purple',_1435606,_1463714,_1463720,_1463726):-!,hnf(_1435606,_1466438,_1463720,_1466420),'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'(_1466438,_1463714,_1466420,_1463726).

'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'(_1467058,_1467060,_1467062,_1467064):-freeze(_1467062,'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'(_1467058,_1467060,_1467062,_1467064)).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'('test.Red','Prelude.False',_1467342,_1467342).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'('test.Green','Prelude.False',_1468248,_1468248).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'('test.Blue','Prelude.False',_1469142,_1469142).
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'('test.Purple','Prelude.True',_1470060,_1470060):-!.
'blocked_blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1_test.Purple_1'('FAIL'(_1470738),'FAIL'(_1470738),_1470752,_1470752):-nonvar(_1470738).
'blocked_blocked_test._impl\'23\'3D\'3D\'23Prelude.Eq\'23test.Color_1'('FAIL'(_1470802),_1435606,'FAIL'(_1470802),_1470816,_1470816):-nonvar(_1470802).

'test._impl\'23\'2F\'3D\'23Prelude.Eq\'23test.Color'(_1472368,_1472370,_1472372):-freeze(_1472370,'blocked_test._impl\'23\'2F\'3D\'23Prelude.Eq\'23test.Color'(_1472368,_1472370,_1472372)).
'blocked_test._impl\'23\'2F\'3D\'23Prelude.Eq\'23test.Color'(_1472524,_1472530,_1472536):-hnf(partcall(2,'Prelude._def\'23\'2F\'3D\'23Prelude.Eq',['test._inst\'23Prelude.Eq\'23test.Color']),_1472524,_1472530,_1472536).

'test._inst\'23Prelude.Show\'23test.Color'(_1474858,_1474860,_1474862):-freeze(_1474860,'blocked_test._inst\'23Prelude.Show\'23test.Color'(_1474858,_1474860,_1474862)).
'blocked_test._inst\'23Prelude.Show\'23test.Color'('Prelude._Dict\'23Show'('test._impl\'23show\'23Prelude.Show\'23test.Color',partcall(2,'test._impl\'23showsPrec\'23Prelude.Show\'23test.Color',[]),'test._impl\'23showList\'23Prelude.Show\'23test.Color'),_1475180,_1475180).

'test._impl\'23show\'23Prelude.Show\'23test.Color'(_1478416,_1478418,_1478420):-freeze(_1478418,'blocked_test._impl\'23show\'23Prelude.Show\'23test.Color'(_1478416,_1478418,_1478420)).
'blocked_test._impl\'23show\'23Prelude.Show\'23test.Color'(_1478572,_1478578,_1478584):-hnf(partcall(1,'Prelude._def\'23show\'23Prelude.Show',['test._inst\'23Prelude.Show\'23test.Color']),_1478572,_1478578,_1478584).

'test._impl\'23showsPrec\'23Prelude.Show\'23test.Color'(_1481302,_1481304,_1481306,_1481308,_1481310):-freeze(_1481308,'blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color'(_1481302,_1481304,_1481306,_1481308,_1481310)).
'blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color'(_1481388,_1481406,_1485124,_1485130,_1485136):-hnf(_1481406,_1487320,_1485130,_1487296),'blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'(_1487320,_1481388,_1485124,_1487296,_1485136).

'blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'(_1487822,_1487824,_1487826,_1487828,_1487830):-freeze(_1487828,'blocked_blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'(_1487822,_1487824,_1487826,_1487828,_1487830)).
'blocked_blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'('test.Red',_1481388,_1488110,_1488116,_1488122):-hnf(partcall(1,'Prelude.showString',[['^R','^e','^d']]),_1488110,_1488116,_1488122).
'blocked_blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'('test.Green',_1481388,_1489676,_1489682,_1489688):-hnf(partcall(1,'Prelude.showString',[['^G','^r','^e','^e','^n']]),_1489676,_1489682,_1489688).
'blocked_blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'('test.Blue',_1481388,_1491594,_1491600,_1491606):-hnf(partcall(1,'Prelude.showString',[['^B','^l','^u','^e']]),_1491594,_1491600,_1491606).
'blocked_blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'('test.Purple',_1481388,_1493354,_1493360,_1493366):-!,hnf(partcall(1,'Prelude.showString',[['^P','^u','^r','^p','^l','^e']]),_1493354,_1493360,_1493366).
'blocked_blocked_test._impl\'23showsPrec\'23Prelude.Show\'23test.Color_2'('FAIL'(_1495256),_1481388,'FAIL'(_1495256),_1495270,_1495270):-nonvar(_1495256).

'test._impl\'23showList\'23Prelude.Show\'23test.Color'(_1497062,_1497064,_1497066):-freeze(_1497064,'blocked_test._impl\'23showList\'23Prelude.Show\'23test.Color'(_1497062,_1497064,_1497066)).
'blocked_test._impl\'23showList\'23Prelude.Show\'23test.Color'(_1497218,_1497224,_1497230):-hnf(partcall(2,'Prelude._def\'23showList\'23Prelude.Show',['test._inst\'23Prelude.Show\'23test.Color']),_1497218,_1497224,_1497230).

'test.loop'(_1498658,_1498660,_1498662,_1498664):-freeze(_1498662,'blocked_test.loop'(_1498658,_1498660,_1498662,_1498664)).
'blocked_test.loop'(_1498734,_1501406,_1501412,_1501418):-makeShare(_1498758,_1502234),makeShare(_1498776,_1502254),makeShare(_1499384,_1502274),makeShare(_1499402,_1502294),makeShare(_1500010,_1502314),makeShare(_1500028,_1502334),makeShare(_1498734,_1502354),hnf('Prelude.cond'('Prelude.letrec'(_1502234,_1502254),'Prelude.cond'('Prelude.letrec'(_1502254,_1502234),'Prelude.cond'('Prelude.letrec'(_1502274,_1502294),'Prelude.cond'('Prelude.letrec'(_1502294,_1502274),'Prelude.cond'('Prelude.letrec'(_1502314,_1502334),'Prelude.cond'('Prelude.letrec'(_1502334,_1502314),'Prelude.apply'('Prelude.apply'('Prelude.+'(_1502354),'Prelude.apply'('Prelude.apply'('Prelude.+'(_1502354),_1502234),_1502274)),_1502314))))))),_1501406,_1501412,_1501418).

'test.c'(_1509164,_1509166,_1509168,_1509170):-freeze(_1509168,'blocked_test.c'(_1509164,_1509166,_1509168,_1509170)).
'blocked_test.c'(_1509240,_1512056,_1512062,_1512068):-makeShare(_1509240,_1510606),hnf('Prelude._impl\'23\'3D\'3D\'23Prelude.Eq\'23Prelude.Char'(_1510606,'^1'),_1512714,_1512062,_1512690),'blocked_test.c_ComplexCase'(_1512714,_1510606,_1512056,_1512690,_1512068).

'blocked_test.c_ComplexCase'(_1513030,_1513032,_1513034,_1513036,_1513038):-freeze(_1513036,freeze(_1513030,'blocked_blocked_test.c_ComplexCase'(_1513030,_1513032,_1513034,_1513036,_1513038))).
'blocked_blocked_test.c_ComplexCase'('Prelude.True',_1510606,2,_1513378,_1513378).
'blocked_blocked_test.c_ComplexCase'('Prelude.False',_1510606,_1515410,_1515416,_1515422):-!,makeShare(_1510606,_1514026),hnf('Prelude._impl\'23\'3D\'3D\'23Prelude.Eq\'23Prelude.Char'(_1514026,'^2'),_1517216,_1515416,_1517192),'blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase'(_1517216,_1514026,_1515410,_1517192,_1515422).

'blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase'(_1517754,_1517756,_1517758,_1517760,_1517762):-freeze(_1517760,freeze(_1517754,'blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase'(_1517754,_1517756,_1517758,_1517760,_1517762))).
'blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase'('Prelude.True',_1514026,4,_1518102,_1518102).
'blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase'('Prelude.False',_1514026,_1519974,_1519980,_1519986):-!,hnf('Prelude.=:='(_1514026,'^3'),_1523004,_1519980,_1522980),'blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'(_1523004,_1514026,_1519974,_1522980,_1519986).

'blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'(_1523734,_1523736,_1523738,_1523740,_1523742):-freeze(_1523740,freeze(_1523734,'blocked_blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'(_1523734,_1523736,_1523738,_1523740,_1523742))).
'blocked_blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'('Prelude.True',_1514026,9,_1524082,_1524082).
'blocked_blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'('Prelude.False',_1514026,_1525092,_1525098,_1525104):-!,hnf('Prelude.failure'('test.c',['Prelude.False']),_1525092,_1525098,_1525104).
'blocked_blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase_Prelude.False_ComplexCase'('FAIL'(_1526482),_1514026,'FAIL'(_1526482),_1526496,_1526496).
'blocked_blocked_blocked_test.c_ComplexCase_Prelude.False_ComplexCase'('FAIL'(_1526550),_1514026,'FAIL'(_1526550),_1526564,_1526564).
'blocked_blocked_test.c_ComplexCase'('FAIL'(_1526618),_1510606,'FAIL'(_1526618),_1526632,_1526632).

'test.s'(_1527010,_1527012,_1527014,_1527016):-freeze(_1527014,'blocked_test.s'(_1527010,_1527012,_1527014,_1527016)).
'blocked_test.s'(_1527086,_1527632,_1527638,_1527644):-makeShare(_1527086,_1527704),hnf('Prelude.$'(partcall(1,'test.s',[]),'test.s._\'23caseor0'('Prelude.?'(_1527704,'Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_1527704,1)))),_1527632,_1527638,_1527644).

'test.t'(_1529686,_1529688,_1529690,_1529692):-freeze(_1529690,'blocked_test.t'(_1529686,_1529688,_1529690,_1529692)).
'blocked_test.t'(_1529762,_1530098,_1530104,_1530110):-hnf(_1529762,_1530690,_1530104,_1530672),'blocked_test.t_1'(_1530690,_1530098,_1530672,_1530110).

'blocked_test.t_1'(_1530932,_1530934,_1530936,_1530938):-freeze(_1530936,freeze(_1530932,'blocked_blocked_test.t_1'(_1530932,_1530934,_1530936,_1530938))).
'blocked_blocked_test.t_1'([],1,_1531138,_1531138).
'blocked_blocked_test.t_1'([_1529948|_1529966],2,_1531496,_1531496):-!.
'blocked_blocked_test.t_1'('FAIL'(_1531840),'FAIL'(_1531840),_1531854,_1531854).

'test.u'(_1532224,_1532226,_1532228,_1532230):-freeze(_1532228,'blocked_test.u'(_1532224,_1532226,_1532228,_1532230)).
'blocked_test.u'(_1532300,_1533078,_1533084,_1533090):-hnf(_1532300,_1533670,_1533084,_1533652),'blocked_test.u_1'(_1533670,_1533078,_1533652,_1533090).

'blocked_test.u_1'(_1533912,_1533914,_1533916,_1533918):-freeze(_1533916,freeze(_1533912,'blocked_blocked_test.u_1'(_1533912,_1533914,_1533916,_1533918))).
'blocked_blocked_test.u_1'('test.Red',1,_1534202,_1534202).
'blocked_blocked_test.u_1'('test.Green',2,_1534644,_1534644).
'blocked_blocked_test.u_1'('test.Blue',3,_1535074,_1535074).
'blocked_blocked_test.u_1'('test.Purple',_1535522,_1535528,_1535534):-!,hnf('Prelude.failure'('test.u',['test.Purple']),_1535522,_1535528,_1535534).
'blocked_blocked_test.u_1'('FAIL'(_1536362),'FAIL'(_1536362),_1536376,_1536376).

'test.f'(_1536746,_1536748,_1536750,_1536752):-freeze(_1536750,'blocked_test.f'(_1536746,_1536748,_1536750,_1536752)).
'blocked_test.f'(_1536822,_1536836,_1536842,_1536848):-hnf(_1536822,_1536836,_1536842,_1536848).

'test.g'(_1537404,_1537406,_1537408):-freeze(_1537406,'blocked_test.g'(_1537404,_1537406,_1537408)).
'blocked_test.g'(_1537560,_1537566,_1537572):-hnf('test.f'('Prelude.True'),_1537560,_1537566,_1537572).

'test.app'(_1538342,_1538344,_1538346,_1538348,_1538350):-freeze(_1538348,'blocked_test.app'(_1538342,_1538344,_1538346,_1538348,_1538350)).
'blocked_test.app'(_1538428,_1538446,_1538606,_1538612,_1538618):-hnf('Prelude.apply'(_1538428,_1538446),_1538606,_1538612,_1538618).

'test.s._\'23caseor0'(_1539912,_1539914,_1539916,_1539918):-freeze(_1539916,'blocked_test.s._\'23caseor0'(_1539912,_1539914,_1539916,_1539918)).
'blocked_test.s._\'23caseor0'(_1539988,_1540420,_1540426,_1540432):-hnf(_1539988,_1541444,_1540426,_1541426),'blocked_test.s._\'23caseor0_1'(_1541444,_1540420,_1541426,_1540432).

'blocked_test.s._\'23caseor0_1'(_1541752,_1541754,_1541756,_1541758):-freeze(_1541756,'blocked_blocked_test.s._\'23caseor0_1'(_1541752,_1541754,_1541756,_1541758)).
'blocked_blocked_test.s._\'23caseor0_1'(1,2,_1541856,_1541856).
'blocked_blocked_test.s._\'23caseor0_1'(2,4,_1542166,_1542166).
'blocked_blocked_test.s._\'23caseor0_1'(3,9,_1542476,_1542476).
'blocked_blocked_test.s._\'23caseor0_1'('FAIL'(_1542756),'FAIL'(_1542756),_1542770,_1542770):-nonvar(_1542756).

:-costCenters(['']).




%%%%% Number of shared variables: 10
