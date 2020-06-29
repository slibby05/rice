%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(newtype).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('newtype.equals_Mytype',equals_Mytype,5,'newtype.equals_Mytype',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_959484]),'FuncType'('TCons'('Prelude._Dict\'23Eq',[_959628]),'FuncType'('TCons'('Prelude._Dict\'23Eq',[_959772]),'FuncType'('TCons'('newtype.Mytype',[_959484,_959628,_959772]),'FuncType'('TCons'('newtype.Mytype',[_959484,_959628,_959772]),'TCons'('Prelude.Bool',[]))))))).
functiontype('newtype.main',main,0,'newtype.main',nofix,'TCons'('Prelude.Bool',[])).
functiontype('newtype.equals_Mytype._\'23caseor0','newtype.equals_Mytype._#caseor0',2,'newtype.equals_Mytype._\'23caseor0',nofix,'FuncType'('TCons'('newtype.Mytype',[_981932,_981950,_981968]),'FuncType'('TCons'('Prelude.Bool',[]),'TCons'('Prelude.Bool',[])))).
functiontype('newtype.equals_Mytype._\'23caseor0._\'23caseor0','newtype.equals_Mytype._#caseor0._#caseor0',4,'newtype.equals_Mytype._\'23caseor0._\'23caseor0',nofix,'FuncType'('TCons'('newtype.Mytype',[_993162,_993180,_993198]),'FuncType'('TCons'('Prelude._Dict\'23Eq',[_993162]),'FuncType'(_993162,'FuncType'('TCons'('Prelude.Bool',[]),'TCons'('Prelude.Bool',[])))))).
functiontype('newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0','newtype.equals_Mytype._#caseor0._#caseor0._#caseor0',6,'newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0',nofix,'FuncType'('TCons'('newtype.Mytype',[_1004602,_1004620,_1004638]),'FuncType'('TCons'('Prelude._Dict\'23Eq',[_1004602]),'FuncType'(_1004602,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_1004620]),'FuncType'(_1004620,'FuncType'('TCons'('Prelude.Bool',[]),'TCons'('Prelude.Bool',[])))))))).
functiontype('newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0','newtype.equals_Mytype._#caseor0._#caseor0._#caseor0._#caseor0',8,'newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0',nofix,'FuncType'('TCons'('newtype.Mytype',[_1016252,_1016270,_1016288]),'FuncType'('TCons'('Prelude._Dict\'23Eq',[_1016252]),'FuncType'(_1016252,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_1016270]),'FuncType'(_1016270,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_1016288]),'FuncType'(_1016288,'FuncType'('TCons'('Prelude.Bool',[]),'TCons'('Prelude.Bool',[])))))))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('newtype.A0','A0',0,'A0',0,'TCons'('newtype.Mytype',[_1027878,_1027896,_1027914]),['newtype.A1'/1,'newtype.A2'/2,'newtype.A3'/3]).
constructortype('newtype.A1','A1',1,'A1',1,'FuncType'(_1028338,'TCons'('newtype.Mytype',[_1028338,_1028452,_1028470])),['newtype.A0'/0,'newtype.A2'/2,'newtype.A3'/3]).
constructortype('newtype.A2','A2',2,'A2',2,'FuncType'(_1028906,'FuncType'(_1028924,'TCons'('newtype.Mytype',[_1028906,_1028924,_1029044]))),['newtype.A0'/0,'newtype.A1'/1,'newtype.A3'/3]).
constructortype('newtype.A3','A3',3,'A3',3,'FuncType'(_1029492,'FuncType'(_1029510,'FuncType'(_1029528,'TCons'('newtype.Mytype',[_1029492,_1029510,_1029528])))),['newtype.A0'/0,'newtype.A1'/1,'newtype.A2'/2]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'newtype.equals_Mytype'(_1035780,_1035782,_1035784,_1035786,_1035788,_1035790,_1035792,_1035794):-freeze(_1035792,'blocked_newtype.equals_Mytype'(_1035780,_1035782,_1035784,_1035786,_1035788,_1035790,_1035792,_1035794)).
'blocked_newtype.equals_Mytype'(_1035896,_1035914,_1035932,_1035950,_1035968,_1039384,_1039390,_1039396):-hnf(_1035950,_1040596,_1039390,_1040554),'blocked_newtype.equals_Mytype_4'(_1040596,_1035896,_1035914,_1035932,_1035968,_1039384,_1040554,_1039396).

'blocked_newtype.equals_Mytype_4'(_1040936,_1040938,_1040940,_1040942,_1040944,_1040946,_1040948,_1040950):-freeze(_1040948,freeze(_1040936,'blocked_blocked_newtype.equals_Mytype_4'(_1040936,_1040938,_1040940,_1040942,_1040944,_1040946,_1040948,_1040950))).
'blocked_blocked_newtype.equals_Mytype_4'('newtype.A0',_1035896,_1035914,_1035932,_1035968,_1041284,_1041290,_1041296):-makeShare(_1036082,_1041412),hnf('Prelude.cond'('Prelude.letrec'(_1041412,'Prelude.False'),'newtype.equals_Mytype._\'23caseor0'(_1035968,_1041412)),_1041284,_1041290,_1041296).
'blocked_blocked_newtype.equals_Mytype_4'('newtype.A1'(_1036636),_1035896,_1035914,_1035932,_1035968,_1043460,_1043466,_1043472):-makeShare(_1036666,_1043672),hnf('Prelude.cond'('Prelude.letrec'(_1043672,'Prelude.False'),'newtype.equals_Mytype._\'23caseor0._\'23caseor0'(_1035968,_1035896,_1036636,_1043672)),_1043460,_1043466,_1043472).
'blocked_blocked_newtype.equals_Mytype_4'('newtype.A2'(_1037352,_1037370),_1035896,_1035914,_1035932,_1035968,_1046016,_1046022,_1046028):-makeShare(_1037406,_1046360),hnf('Prelude.cond'('Prelude.letrec'(_1046360,'Prelude.False'),'newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0'(_1035968,_1035896,_1037352,_1035914,_1037370,_1046360)),_1046016,_1046022,_1046028).
'blocked_blocked_newtype.equals_Mytype_4'('newtype.A3'(_1038224,_1038242,_1038260),_1035896,_1035914,_1035932,_1035968,_1049000,_1049006,_1049012):-!,makeShare(_1038302,_1049524),hnf('Prelude.cond'('Prelude.letrec'(_1049524,'Prelude.False'),'newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0'(_1035968,_1035896,_1038224,_1035914,_1038242,_1035932,_1038260,_1049524)),_1049000,_1049006,_1049012).
'blocked_blocked_newtype.equals_Mytype_4'('FAIL'(_1052216),_1035896,_1035914,_1035932,_1035968,'FAIL'(_1052216),_1052230,_1052230).

'newtype.main'(_1052848,_1052850,_1052852):-freeze(_1052850,'blocked_newtype.main'(_1052848,_1052850,_1052852)).
'blocked_newtype.main'(_1053720,_1053726,_1053732):-hnf('newtype.equals_Mytype'('Prelude._inst\'23Prelude.Eq\'23Prelude.Int','Prelude._inst\'23Prelude.Eq\'23Prelude.Int','Prelude._inst\'23Prelude.Eq\'23Prelude.Int','newtype.A3'(2,3,4),'newtype.A3'(2,3,5)),_1053720,_1053726,_1053732).

'newtype.equals_Mytype._\'23caseor0'(_1057090,_1057092,_1057094,_1057096,_1057098):-freeze(_1057096,'blocked_newtype.equals_Mytype._\'23caseor0'(_1057090,_1057092,_1057094,_1057096,_1057098)).
'blocked_newtype.equals_Mytype._\'23caseor0'(_1057176,_1057194,_1057958,_1057964,_1057970):-hnf(_1057176,_1059542,_1057964,_1059518),'blocked_newtype.equals_Mytype._\'23caseor0_1'(_1059542,_1057194,_1057958,_1059518,_1057970).

'blocked_newtype.equals_Mytype._\'23caseor0_1'(_1059948,_1059950,_1059952,_1059954,_1059956):-freeze(_1059954,freeze(_1059948,'blocked_blocked_newtype.equals_Mytype._\'23caseor0_1'(_1059948,_1059950,_1059952,_1059954,_1059956))).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0_1'('newtype.A0',_1057194,'Prelude.True',_1060272,_1060272).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0_1'('newtype.A1'(_1057394),_1057194,_1061042,_1061048,_1061054):-hnf(_1057194,_1061042,_1061048,_1061054).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0_1'('newtype.A2'(_1057496,_1057514),_1057194,_1061824,_1061830,_1061836):-hnf(_1057194,_1061824,_1061830,_1061836).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0_1'('newtype.A3'(_1057622,_1057640,_1057658),_1057194,_1062676,_1062682,_1062688):-!,hnf(_1057194,_1062676,_1062682,_1062688).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0_1'('FAIL'(_1063354),_1057194,'FAIL'(_1063354),_1063368,_1063368).

'newtype.equals_Mytype._\'23caseor0._\'23caseor0'(_1065054,_1065056,_1065058,_1065060,_1065062,_1065064,_1065066):-freeze(_1065064,'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0'(_1065054,_1065056,_1065058,_1065060,_1065062,_1065064,_1065066)).
'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0'(_1065160,_1065178,_1065196,_1065214,_1066408,_1066414,_1066420):-hnf(_1065160,_1068464,_1066414,_1068428),'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'(_1068464,_1065178,_1065196,_1065214,_1066408,_1068428,_1066420).

'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'(_1068946,_1068948,_1068950,_1068952,_1068954,_1068956,_1068958):-freeze(_1068956,freeze(_1068946,'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'(_1068946,_1068948,_1068950,_1068952,_1068954,_1068956,_1068958))).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'('newtype.A1'(_1065322),_1065178,_1065196,_1065214,_1069294,_1069300,_1069306):-hnf('Prelude.apply'('Prelude.apply'('Prelude.=='(_1065178),_1065196),_1065322),_1069294,_1069300,_1069306).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'('newtype.A0',_1065178,_1065196,_1065214,_1071044,_1071050,_1071056):-hnf(_1065214,_1071044,_1071050,_1071056).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'('newtype.A2'(_1065874,_1065892),_1065178,_1065196,_1065214,_1071976,_1071982,_1071988):-hnf(_1065214,_1071976,_1071982,_1071988).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'('newtype.A3'(_1066000,_1066018,_1066036),_1065178,_1065196,_1065214,_1073040,_1073046,_1073052):-!,hnf(_1065214,_1073040,_1073046,_1073052).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0_1'('FAIL'(_1073930),_1065178,_1065196,_1065214,'FAIL'(_1073930),_1073944,_1073944).

'newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0'(_1076030,_1076032,_1076034,_1076036,_1076038,_1076040,_1076042,_1076044,_1076046):-freeze(_1076044,'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0'(_1076030,_1076032,_1076034,_1076036,_1076038,_1076040,_1076042,_1076044,_1076046)).
'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0'(_1076156,_1076174,_1076192,_1076210,_1076228,_1076246,_1078030,_1078036,_1078042):-hnf(_1076156,_1080558,_1078036,_1080510),'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'(_1080558,_1076174,_1076192,_1076210,_1076228,_1076246,_1078030,_1080510,_1078042).

'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'(_1081116,_1081118,_1081120,_1081122,_1081124,_1081126,_1081128,_1081130,_1081132):-freeze(_1081130,freeze(_1081116,'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'(_1081116,_1081118,_1081120,_1081122,_1081124,_1081126,_1081128,_1081130,_1081132))).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A2'(_1076354,_1076372),_1076174,_1076192,_1076210,_1076228,_1076246,_1081492,_1081498,_1081504):-hnf('Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='(_1076174),_1076192),_1076354),'Prelude.apply'('Prelude.apply'('Prelude.=='(_1076210),_1076228),_1076372)),_1081492,_1081498,_1081504).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A0',_1076174,_1076192,_1076210,_1076228,_1076246,_1084702,_1084708,_1084714):-hnf(_1076246,_1084702,_1084708,_1084714).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A1'(_1077448),_1076174,_1076192,_1076210,_1076228,_1076246,_1085838,_1085844,_1085850):-hnf(_1076246,_1085838,_1085844,_1085850).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A3'(_1077550,_1077568,_1077586),_1076174,_1076192,_1076210,_1076228,_1076246,_1087052,_1087058,_1087064):-!,hnf(_1076246,_1087052,_1087058,_1087064).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0_1'('FAIL'(_1088154),_1076174,_1076192,_1076210,_1076228,_1076246,'FAIL'(_1088154),_1088168,_1088168).

'newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0'(_1090654,_1090656,_1090658,_1090660,_1090662,_1090664,_1090666,_1090668,_1090670,_1090672,_1090674):-freeze(_1090672,'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0'(_1090654,_1090656,_1090658,_1090660,_1090662,_1090664,_1090666,_1090668,_1090670,_1090672,_1090674)).
'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0'(_1090800,_1090818,_1090836,_1090854,_1090872,_1090890,_1090908,_1090926,_1093300,_1093306,_1093312):-hnf(_1090800,_1096300,_1093306,_1096240),'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'(_1096300,_1090818,_1090836,_1090854,_1090872,_1090890,_1090908,_1090926,_1093300,_1096240,_1093312).

'blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'(_1096934,_1096936,_1096938,_1096940,_1096942,_1096944,_1096946,_1096948,_1096950,_1096952,_1096954):-freeze(_1096952,freeze(_1096934,'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'(_1096934,_1096936,_1096938,_1096940,_1096942,_1096944,_1096946,_1096948,_1096950,_1096952,_1096954))).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A3'(_1091034,_1091052,_1091070),_1090818,_1090836,_1090854,_1090872,_1090890,_1090908,_1090926,_1097338,_1097344,_1097350):-hnf('Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='(_1090818),_1090836),_1091034),'Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='(_1090854),_1090872),_1091052),'Prelude.apply'('Prelude.apply'('Prelude.=='(_1090890),_1090908),_1091070))),_1097338,_1097344,_1097350).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A0',_1090818,_1090836,_1090854,_1090872,_1090890,_1090908,_1090926,_1102116,_1102122,_1102128):-hnf(_1090926,_1102116,_1102122,_1102128).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A1'(_1092670),_1090818,_1090836,_1090854,_1090872,_1090890,_1090908,_1090926,_1103464,_1103470,_1103476):-hnf(_1090926,_1103464,_1103470,_1103476).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'('newtype.A2'(_1092772,_1092790),_1090818,_1090836,_1090854,_1090872,_1090890,_1090908,_1090926,_1104882,_1104888,_1104894):-!,hnf(_1090926,_1104882,_1104888,_1104894).
'blocked_blocked_newtype.equals_Mytype._\'23caseor0._\'23caseor0._\'23caseor0._\'23caseor0_1'('FAIL'(_1106134),_1090818,_1090836,_1090854,_1090872,_1090890,_1090908,_1090926,'FAIL'(_1106134),_1106148,_1106148).

:-costCenters(['']).




%%%%% Number of shared variables: 4
