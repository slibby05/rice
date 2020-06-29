%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(ordTest).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('ordTest._inst\'23Prelude.Eq\'23ordTest.MyList','_inst#Prelude.Eq#ordTest.MyList',1,'ordTest._inst\'23Prelude.Eq\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_2066250]),'TCons'('Prelude._Dict\'23Eq',['TCons'('ordTest.MyList',[_2066250])]))).
functiontype('ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList','_impl#==#Prelude.Eq#ordTest.MyList',3,'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_2078158]),'FuncType'('TCons'('ordTest.MyList',[_2078158]),'FuncType'('TCons'('ordTest.MyList',[_2078158]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.MyList','_impl#/=#Prelude.Eq#ordTest.MyList',1,'ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_722828]),'FuncType'('TCons'('ordTest.MyList',[_722828]),'FuncType'('TCons'('ordTest.MyList',[_722828]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._inst\'23Prelude.Ord\'23ordTest.MyList','_inst#Prelude.Ord#ordTest.MyList',1,'ordTest._inst\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_734466]),'TCons'('Prelude._Dict\'23Ord',['TCons'('ordTest.MyList',[_734466])]))).
functiontype('ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.MyList','_impl#compare#Prelude.Ord#ordTest.MyList',1,'ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_746398]),'FuncType'('TCons'('ordTest.MyList',[_746398]),'FuncType'('TCons'('ordTest.MyList',[_746398]),'TCons'('Prelude.Ordering',[]))))).
functiontype('ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList','_impl#<=#Prelude.Ord#ordTest.MyList',3,'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_758402]),'FuncType'('TCons'('ordTest.MyList',[_758402]),'FuncType'('TCons'('ordTest.MyList',[_758402]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.MyList','_impl#>=#Prelude.Ord#ordTest.MyList',1,'ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_770382]),'FuncType'('TCons'('ordTest.MyList',[_770382]),'FuncType'('TCons'('ordTest.MyList',[_770382]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.MyList','_impl#<#Prelude.Ord#ordTest.MyList',1,'ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_782344]),'FuncType'('TCons'('ordTest.MyList',[_782344]),'FuncType'('TCons'('ordTest.MyList',[_782344]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.MyList','_impl#>#Prelude.Ord#ordTest.MyList',1,'ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_794306]),'FuncType'('TCons'('ordTest.MyList',[_794306]),'FuncType'('TCons'('ordTest.MyList',[_794306]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.MyList','_impl#min#Prelude.Ord#ordTest.MyList',1,'ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_806268]),'FuncType'('TCons'('ordTest.MyList',[_806268]),'FuncType'('TCons'('ordTest.MyList',[_806268]),'TCons'('ordTest.MyList',[_806268]))))).
functiontype('ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.MyList','_impl#max#Prelude.Ord#ordTest.MyList',1,'ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.MyList',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_818248]),'FuncType'('TCons'('ordTest.MyList',[_818248]),'FuncType'('TCons'('ordTest.MyList',[_818248]),'TCons'('ordTest.MyList',[_818248]))))).
functiontype('ordTest._inst\'23Prelude.Eq\'23ordTest.BinTree','_inst#Prelude.Eq#ordTest.BinTree',1,'ordTest._inst\'23Prelude.Eq\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_830186]),'TCons'('Prelude._Dict\'23Eq',['TCons'('ordTest.BinTree',[_830186])]))).
functiontype('ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree','_impl#==#Prelude.Eq#ordTest.BinTree',3,'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_842106]),'FuncType'('TCons'('ordTest.BinTree',[_842106]),'FuncType'('TCons'('ordTest.BinTree',[_842106]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.BinTree','_impl#/=#Prelude.Eq#ordTest.BinTree',1,'ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_854092]),'FuncType'('TCons'('ordTest.BinTree',[_854092]),'FuncType'('TCons'('ordTest.BinTree',[_854092]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree','_inst#Prelude.Ord#ordTest.BinTree',1,'ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_866036]),'TCons'('Prelude._Dict\'23Ord',['TCons'('ordTest.BinTree',[_866036])]))).
functiontype('ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.BinTree','_impl#compare#Prelude.Ord#ordTest.BinTree',1,'ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_877980]),'FuncType'('TCons'('ordTest.BinTree',[_877980]),'FuncType'('TCons'('ordTest.BinTree',[_877980]),'TCons'('Prelude.Ordering',[]))))).
functiontype('ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree','_impl#<=#Prelude.Ord#ordTest.BinTree',3,'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_890002]),'FuncType'('TCons'('ordTest.BinTree',[_890002]),'FuncType'('TCons'('ordTest.BinTree',[_890002]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.BinTree','_impl#>=#Prelude.Ord#ordTest.BinTree',1,'ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_902000]),'FuncType'('TCons'('ordTest.BinTree',[_902000]),'FuncType'('TCons'('ordTest.BinTree',[_902000]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.BinTree','_impl#<#Prelude.Ord#ordTest.BinTree',1,'ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_913980]),'FuncType'('TCons'('ordTest.BinTree',[_913980]),'FuncType'('TCons'('ordTest.BinTree',[_913980]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.BinTree','_impl#>#Prelude.Ord#ordTest.BinTree',1,'ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_925960]),'FuncType'('TCons'('ordTest.BinTree',[_925960]),'FuncType'('TCons'('ordTest.BinTree',[_925960]),'TCons'('Prelude.Bool',[]))))).
functiontype('ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.BinTree','_impl#min#Prelude.Ord#ordTest.BinTree',1,'ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_937940]),'FuncType'('TCons'('ordTest.BinTree',[_937940]),'FuncType'('TCons'('ordTest.BinTree',[_937940]),'TCons'('ordTest.BinTree',[_937940]))))).
functiontype('ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.BinTree','_impl#max#Prelude.Ord#ordTest.BinTree',1,'ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.BinTree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Ord',[_949944]),'FuncType'('TCons'('ordTest.BinTree',[_949944]),'FuncType'('TCons'('ordTest.BinTree',[_949944]),'TCons'('ordTest.BinTree',[_949944]))))).
functiontype('ordTest.listTest',listTest,0,'ordTest.listTest',nofix,'TCons'('Prelude.Bool',[])).
functiontype('ordTest.t',t,1,'ordTest.t',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_973088]),'TCons'('ordTest.BinTree',[_973088]))).
functiontype('ordTest.treeTest',treeTest,0,'ordTest.treeTest',nofix,'TCons'('Prelude.Bool',[])).
functiontype('ordTest.main',main,0,'ordTest.main',nofix,'TCons'('Prelude.(,)',['TCons'('Prelude.Bool',[]),'TCons'('Prelude.Bool',[])])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('ordTest.MyNil','MyNil',0,'MyNil',0,'TCons'('ordTest.MyList',[_1007628]),['ordTest.MyCons'/2]).
constructortype('ordTest.MyCons','MyCons',2,'MyCons',1,'FuncType'(_1007968,'FuncType'('TCons'('ordTest.MyList',[_1007968]),'TCons'('ordTest.MyList',[_1007968]))),['ordTest.MyNil'/0]).
constructortype('ordTest.Leaf','Leaf',0,'Leaf',0,'TCons'('ordTest.BinTree',[_1008646]),['ordTest.Branch'/3]).
constructortype('ordTest.Branch','Branch',3,'Branch',1,'FuncType'(_1008998,'FuncType'('TCons'('ordTest.BinTree',[_1008998]),'FuncType'('TCons'('ordTest.BinTree',[_1008998]),'TCons'('ordTest.BinTree',[_1008998])))),['ordTest.Leaf'/0]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'ordTest._inst\'23Prelude.Eq\'23ordTest.MyList'(_1016186,_1016188,_1016190,_1016192):-freeze(_1016190,'blocked_ordTest._inst\'23Prelude.Eq\'23ordTest.MyList'(_1016186,_1016188,_1016190,_1016192)).
'blocked_ordTest._inst\'23Prelude.Eq\'23ordTest.MyList'(_1016262,'Prelude._Dict\'23Eq'(partcall(2,'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList',[_1016654]),'ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1016654)),_1016588,_1016594):-makeShare(_1016262,_1016654),_1016588=_1016594.

'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1020144,_1020146,_1020148,_1020150,_1020152,_1020154):-freeze(_1020152,'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1020144,_1020146,_1020148,_1020150,_1020152,_1020154)).
'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1020240,_1020258,_1020276,_1022110,_1022116,_1022122):-hnf(_1020258,_1024398,_1022116,_1024368),'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2'(_1024398,_1020240,_1020276,_1022110,_1024368,_1022122).

'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2'(_1024914,_1024916,_1024918,_1024920,_1024922,_1024924):-freeze(_1024922,'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2'(_1024914,_1024916,_1024918,_1024920,_1024922,_1024924)).
'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2'('ordTest.MyNil',_1020240,_1020276,_1025714,_1025720,_1025726):-hnf(_1020276,_1028770,_1025720,_1028746),'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyNil_2'(_1028770,_1020240,_1025714,_1028746,_1025726).

'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyNil_2'(_1029428,_1029430,_1029432,_1029434,_1029436):-freeze(_1029434,'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyNil_2'(_1029428,_1029430,_1029432,_1029434,_1029436)).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyNil_2'('ordTest.MyNil',_1020240,'Prelude.True',_1029782,_1029782).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyNil_2'('ordTest.MyCons'(_1020566,_1020584),_1020240,'Prelude.False',_1030872,_1030872):-!.
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyNil_2'('FAIL'(_1031804),_1020240,'FAIL'(_1031804),_1031818,_1031818):-nonvar(_1031804).
'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2'('ordTest.MyCons'(_1020712,_1020730),_1020240,_1020276,_1032624,_1032630,_1032636):-!,hnf(_1020276,_1035734,_1032630,_1035698),'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyCons_4'(_1035734,_1020712,_1020730,_1020240,_1032624,_1035698,_1032636).

'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyCons_4'(_1036420,_1036422,_1036424,_1036426,_1036428,_1036430,_1036432):-freeze(_1036430,'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyCons_4'(_1036420,_1036422,_1036424,_1036426,_1036428,_1036430,_1036432)).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyCons_4'('ordTest.MyNil',_1020712,_1020730,_1020240,'Prelude.False',_1036794,_1036794).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyCons_4'('ordTest.MyCons'(_1020942,_1020960),_1020712,_1020730,_1020240,_1038030,_1038036,_1038042):-!,makeShare(_1020240,_1038294),hnf('Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='(_1038294),_1020712),_1020942),'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1038294,_1020730,_1020960)),_1038030,_1038036,_1038042).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2_ordTest.MyCons_4'('FAIL'(_1041024),_1020712,_1020730,_1020240,'FAIL'(_1041024),_1041038,_1041038):-nonvar(_1041024).
'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.MyList_2'('FAIL'(_1041112),_1020240,_1020276,'FAIL'(_1041112),_1041126,_1041126):-nonvar(_1041112).

'ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1042938,_1042940,_1042942,_1042944):-freeze(_1042942,'blocked_ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1042938,_1042940,_1042942,_1042944)).
'blocked_ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.MyList'(_1043014,_1043188,_1043194,_1043200):-hnf(partcall(2,'Prelude._def\'23\'2F\'3D\'23Prelude.Eq',['ordTest._inst\'23Prelude.Eq\'23ordTest.MyList'(_1043014)]),_1043188,_1043194,_1043200).

'ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1045980,_1045982,_1045984,_1045986):-freeze(_1045984,'blocked_ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1045980,_1045982,_1045984,_1045986)).
'blocked_ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1046056,'Prelude._Dict\'23Ord'('ordTest._inst\'23Prelude.Eq\'23ordTest.MyList'('Prelude._super\'23Prelude.Ord\'23Prelude.Eq'(_1047476)),'ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.MyList'(_1047476),partcall(2,'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList',[_1047476]),'ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1047476),'ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.MyList'(_1047476),'ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.MyList'(_1047476),'ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.MyList'(_1047476),'ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.MyList'(_1047476)),_1047338,_1047344):-makeShare(_1046056,_1047476),_1047338=_1047344.

'ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.MyList'(_1054344,_1054346,_1054348,_1054350):-freeze(_1054348,'blocked_ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.MyList'(_1054344,_1054346,_1054348,_1054350)).
'blocked_ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.MyList'(_1054420,_1054594,_1054600,_1054606):-hnf(partcall(2,'Prelude._def\'23compare\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1054420)]),_1054594,_1054600,_1054606).

'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1057596,_1057598,_1057600,_1057602,_1057604,_1057606):-freeze(_1057604,'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1057596,_1057598,_1057600,_1057602,_1057604,_1057606)).
'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1057692,_1057710,_1057728,_1060166,_1060172,_1060178):-hnf(_1057710,_1062490,_1060172,_1062460),'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2'(_1062490,_1057692,_1057728,_1060166,_1062460,_1060178).

'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2'(_1063012,_1063014,_1063016,_1063018,_1063020,_1063022):-freeze(_1063020,'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2'(_1063012,_1063014,_1063016,_1063018,_1063020,_1063022)).
'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2'('ordTest.MyNil',_1057692,_1057728,_1063818,_1063824,_1063830):-hnf(_1057728,_1066910,_1063824,_1066886),'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyNil_2'(_1066910,_1057692,_1063818,_1066886,_1063830).

'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyNil_2'(_1067574,_1067576,_1067578,_1067580,_1067582):-freeze(_1067580,'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyNil_2'(_1067574,_1067576,_1067578,_1067580,_1067582)).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyNil_2'('ordTest.MyNil',_1057692,'Prelude.True',_1067928,_1067928).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyNil_2'('ordTest.MyCons'(_1058018,_1058036),_1057692,'Prelude.True',_1069024,_1069024):-!.
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyNil_2'('FAIL'(_1069956),_1057692,'FAIL'(_1069956),_1069970,_1069970):-nonvar(_1069956).
'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2'('ordTest.MyCons'(_1058164,_1058182),_1057692,_1057728,_1070782,_1070788,_1070794):-!,hnf(_1057728,_1073928,_1070788,_1073892),'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyCons_4'(_1073928,_1058164,_1058182,_1057692,_1070782,_1073892,_1070794).

'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyCons_4'(_1074620,_1074622,_1074624,_1074626,_1074628,_1074630,_1074632):-freeze(_1074630,'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyCons_4'(_1074620,_1074622,_1074624,_1074626,_1074628,_1074630,_1074632)).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyCons_4'('ordTest.MyNil',_1058164,_1058182,_1057692,'Prelude.False',_1074994,_1074994).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyCons_4'('ordTest.MyCons'(_1058394,_1058412),_1058164,_1058182,_1057692,_1076236,_1076242,_1076248):-!,makeShare(_1057692,_1076572),makeShare(_1058164,_1076592),makeShare(_1058394,_1076612),hnf('Prelude.||'('Prelude.apply'('Prelude.apply'('Prelude.<'(_1076572),_1076592),_1076612),'Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='('Prelude._super\'23Prelude.Ord\'23Prelude.Eq'(_1076572)),_1076592),_1076612),'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1076572,_1058182,_1058412))),_1076236,_1076242,_1076248).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2_ordTest.MyCons_4'('FAIL'(_1081092),_1058164,_1058182,_1057692,'FAIL'(_1081092),_1081106,_1081106):-nonvar(_1081092).
'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.MyList_2'('FAIL'(_1081180),_1057692,_1057728,'FAIL'(_1081180),_1081194,_1081194):-nonvar(_1081180).

'ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1083042,_1083044,_1083046,_1083048):-freeze(_1083046,'blocked_ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1083042,_1083044,_1083046,_1083048)).
'blocked_ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.MyList'(_1083118,_1083292,_1083298,_1083304):-hnf(partcall(2,'Prelude._def\'23\'3E\'3D\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1083118)]),_1083292,_1083298,_1083304).

'ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.MyList'(_1086222,_1086224,_1086226,_1086228):-freeze(_1086226,'blocked_ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.MyList'(_1086222,_1086224,_1086226,_1086228)).
'blocked_ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.MyList'(_1086298,_1086472,_1086478,_1086484):-hnf(partcall(2,'Prelude._def\'23\'3C\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1086298)]),_1086472,_1086478,_1086484).

'ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.MyList'(_1089366,_1089368,_1089370,_1089372):-freeze(_1089370,'blocked_ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.MyList'(_1089366,_1089368,_1089370,_1089372)).
'blocked_ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.MyList'(_1089442,_1089616,_1089622,_1089628):-hnf(partcall(2,'Prelude._def\'23\'3E\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1089442)]),_1089616,_1089622,_1089628).

'ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.MyList'(_1092558,_1092560,_1092562,_1092564):-freeze(_1092562,'blocked_ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.MyList'(_1092558,_1092560,_1092562,_1092564)).
'blocked_ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.MyList'(_1092634,_1092808,_1092814,_1092820):-hnf(partcall(2,'Prelude._def\'23min\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1092634)]),_1092808,_1092814,_1092820).

'ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.MyList'(_1095750,_1095752,_1095754,_1095756):-freeze(_1095754,'blocked_ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.MyList'(_1095750,_1095752,_1095754,_1095756)).
'blocked_ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.MyList'(_1095826,_1096000,_1096006,_1096012):-hnf(partcall(2,'Prelude._def\'23max\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.MyList'(_1095826)]),_1096000,_1096006,_1096012).

'ordTest._inst\'23Prelude.Eq\'23ordTest.BinTree'(_1098774,_1098776,_1098778,_1098780):-freeze(_1098778,'blocked_ordTest._inst\'23Prelude.Eq\'23ordTest.BinTree'(_1098774,_1098776,_1098778,_1098780)).
'blocked_ordTest._inst\'23Prelude.Eq\'23ordTest.BinTree'(_1098850,'Prelude._Dict\'23Eq'(partcall(2,'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree',[_1099242]),'ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1099242)),_1099176,_1099182):-makeShare(_1098850,_1099242),_1099176=_1099182.

'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1102786,_1102788,_1102790,_1102792,_1102794,_1102796):-freeze(_1102794,'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1102786,_1102788,_1102790,_1102792,_1102794,_1102796)).
'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1102882,_1102900,_1102918,_1105188,_1105194,_1105200):-hnf(_1102900,_1107512,_1105194,_1107482),'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2'(_1107512,_1102882,_1102918,_1105188,_1107482,_1105200).

'blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2'(_1108034,_1108036,_1108038,_1108040,_1108042,_1108044):-freeze(_1108042,'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2'(_1108034,_1108036,_1108038,_1108040,_1108042,_1108044)).
'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2'('ordTest.Leaf',_1102882,_1102918,_1108828,_1108834,_1108840):-hnf(_1102918,_1111890,_1108834,_1111866),'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Leaf_2'(_1111890,_1102882,_1108828,_1111866,_1108840).

'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Leaf_2'(_1112548,_1112550,_1112552,_1112554,_1112556):-freeze(_1112554,'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Leaf_2'(_1112548,_1112550,_1112552,_1112554,_1112556)).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Leaf_2'('ordTest.Leaf',_1102882,'Prelude.True',_1112890,_1112890).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Leaf_2'('ordTest.Branch'(_1103208,_1103226,_1103244),_1102882,'Prelude.False',_1113988,_1113988):-!.
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Leaf_2'('FAIL'(_1114982),_1102882,'FAIL'(_1114982),_1114996,_1114996):-nonvar(_1114982).
'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2'('ordTest.Branch'(_1103378,_1103396,_1103414),_1102882,_1102918,_1115822,_1115828,_1115834):-!,hnf(_1102918,_1118980,_1115828,_1118938),'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Branch_5'(_1118980,_1103378,_1103396,_1103414,_1102882,_1115822,_1118938,_1115834).

'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Branch_5'(_1119674,_1119676,_1119678,_1119680,_1119682,_1119684,_1119686,_1119688):-freeze(_1119686,'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Branch_5'(_1119674,_1119676,_1119678,_1119680,_1119682,_1119684,_1119686,_1119688)).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Branch_5'('ordTest.Leaf',_1103378,_1103396,_1103414,_1102882,'Prelude.False',_1120046,_1120046).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Branch_5'('ordTest.Branch'(_1103632,_1103650,_1103668),_1103378,_1103396,_1103414,_1102882,_1121366,_1121372,_1121378):-!,makeShare(_1102882,_1121806),hnf('Prelude.&&'('Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='(_1121806),_1103378),_1103632),'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1121806,_1103396,_1103650)),'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1121806,_1103414,_1103668)),_1121366,_1121372,_1121378).
'blocked_blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2_ordTest.Branch_5'('FAIL'(_1125532),_1103378,_1103396,_1103414,_1102882,'FAIL'(_1125532),_1125546,_1125546):-nonvar(_1125532).
'blocked_blocked_ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree_2'('FAIL'(_1125628),_1102882,_1102918,'FAIL'(_1125628),_1125642,_1125642):-nonvar(_1125628).

'ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1127490,_1127492,_1127494,_1127496):-freeze(_1127494,'blocked_ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1127490,_1127492,_1127494,_1127496)).
'blocked_ordTest._impl\'23\'2F\'3D\'23Prelude.Eq\'23ordTest.BinTree'(_1127566,_1127740,_1127746,_1127752):-hnf(partcall(2,'Prelude._def\'23\'2F\'3D\'23Prelude.Eq',['ordTest._inst\'23Prelude.Eq\'23ordTest.BinTree'(_1127566)]),_1127740,_1127746,_1127752).

'ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1130580,_1130582,_1130584,_1130586):-freeze(_1130584,'blocked_ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1130580,_1130582,_1130584,_1130586)).
'blocked_ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1130656,'Prelude._Dict\'23Ord'('ordTest._inst\'23Prelude.Eq\'23ordTest.BinTree'('Prelude._super\'23Prelude.Ord\'23Prelude.Eq'(_1132076)),'ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.BinTree'(_1132076),partcall(2,'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree',[_1132076]),'ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1132076),'ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.BinTree'(_1132076),'ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.BinTree'(_1132076),'ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.BinTree'(_1132076),'ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.BinTree'(_1132076)),_1131938,_1131944):-makeShare(_1130656,_1132076),_1131938=_1131944.

'ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.BinTree'(_1139034,_1139036,_1139038,_1139040):-freeze(_1139038,'blocked_ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.BinTree'(_1139034,_1139036,_1139038,_1139040)).
'blocked_ordTest._impl\'23compare\'23Prelude.Ord\'23ordTest.BinTree'(_1139110,_1139284,_1139290,_1139296):-hnf(partcall(2,'Prelude._def\'23compare\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1139110)]),_1139284,_1139290,_1139296).

'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1142334,_1142336,_1142338,_1142340,_1142342,_1142344):-freeze(_1142342,'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1142334,_1142336,_1142338,_1142340,_1142342,_1142344)).
'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1142430,_1142448,_1142466,_1146536,_1146542,_1146548):-hnf(_1142448,_1148896,_1146542,_1148866),'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2'(_1148896,_1142430,_1142466,_1146536,_1148866,_1146548).

'blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2'(_1149424,_1149426,_1149428,_1149430,_1149432,_1149434):-freeze(_1149432,'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2'(_1149424,_1149426,_1149428,_1149430,_1149432,_1149434)).
'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2'('ordTest.Leaf',_1142430,_1142466,_1150224,_1150230,_1150236):-hnf(_1142466,_1153322,_1150230,_1153298),'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Leaf_2'(_1153322,_1142430,_1150224,_1153298,_1150236).

'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Leaf_2'(_1153986,_1153988,_1153990,_1153992,_1153994):-freeze(_1153992,'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Leaf_2'(_1153986,_1153988,_1153990,_1153992,_1153994)).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Leaf_2'('ordTest.Leaf',_1142430,'Prelude.True',_1154328,_1154328).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Leaf_2'('ordTest.Branch'(_1142756,_1142774,_1142792),_1142430,'Prelude.True',_1155432,_1155432):-!.
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Leaf_2'('FAIL'(_1156426),_1142430,'FAIL'(_1156426),_1156440,_1156440):-nonvar(_1156426).
'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2'('ordTest.Branch'(_1142926,_1142944,_1142962),_1142430,_1142466,_1157272,_1157278,_1157284):-!,hnf(_1142466,_1160466,_1157278,_1160424),'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Branch_5'(_1160466,_1142926,_1142944,_1142962,_1142430,_1157272,_1160424,_1157284).

'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Branch_5'(_1161166,_1161168,_1161170,_1161172,_1161174,_1161176,_1161178,_1161180):-freeze(_1161178,'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Branch_5'(_1161166,_1161168,_1161170,_1161172,_1161174,_1161176,_1161178,_1161180)).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Branch_5'('ordTest.Leaf',_1142926,_1142944,_1142962,_1142430,'Prelude.False',_1161538,_1161538).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Branch_5'('ordTest.Branch'(_1143180,_1143198,_1143216),_1142926,_1142944,_1142962,_1142430,_1162864,_1162870,_1162876):-!,makeShare(_1142430,_1163568),makeShare(_1142926,_1163588),makeShare(_1143180,_1163608),makeShare(_1142944,_1163628),makeShare(_1143198,_1163648),hnf('Prelude.||'('Prelude.||'('Prelude.apply'('Prelude.apply'('Prelude.<'(_1163568),_1163588),_1163608),'Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='('Prelude._super\'23Prelude.Ord\'23Prelude.Eq'(_1163568)),_1163588),_1163608),'Prelude.apply'('Prelude.apply'('ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.BinTree'(_1163568),_1163628),_1163648))),'Prelude.&&'('Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='('Prelude._super\'23Prelude.Ord\'23Prelude.Eq'(_1163568)),_1163588),_1163608),'ordTest._impl\'23\'3D\'3D\'23Prelude.Eq\'23ordTest.BinTree'('Prelude._super\'23Prelude.Ord\'23Prelude.Eq'(_1163568),_1163628,_1163648)),'ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1163568,_1142962,_1143216))),_1162864,_1162870,_1162876).
'blocked_blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2_ordTest.Branch_5'('FAIL'(_1172434),_1142926,_1142944,_1142962,_1142430,'FAIL'(_1172434),_1172448,_1172448):-nonvar(_1172434).
'blocked_blocked_ordTest._impl\'23\'3C\'3D\'23Prelude.Ord\'23ordTest.BinTree_2'('FAIL'(_1172530),_1142430,_1142466,'FAIL'(_1172530),_1172544,_1172544):-nonvar(_1172530).

'ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1174428,_1174430,_1174432,_1174434):-freeze(_1174432,'blocked_ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1174428,_1174430,_1174432,_1174434)).
'blocked_ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.BinTree'(_1174504,_1174678,_1174684,_1174690):-hnf(partcall(2,'Prelude._def\'23\'3E\'3D\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1174504)]),_1174678,_1174684,_1174690).

'ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.BinTree'(_1177656,_1177658,_1177660,_1177662):-freeze(_1177660,'blocked_ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.BinTree'(_1177656,_1177658,_1177660,_1177662)).
'blocked_ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.BinTree'(_1177732,_1177906,_1177912,_1177918):-hnf(partcall(2,'Prelude._def\'23\'3C\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1177732)]),_1177906,_1177912,_1177918).

'ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.BinTree'(_1180848,_1180850,_1180852,_1180854):-freeze(_1180852,'blocked_ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.BinTree'(_1180848,_1180850,_1180852,_1180854)).
'blocked_ordTest._impl\'23\'3E\'23Prelude.Ord\'23ordTest.BinTree'(_1180924,_1181098,_1181104,_1181110):-hnf(partcall(2,'Prelude._def\'23\'3E\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1180924)]),_1181098,_1181104,_1181110).

'ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.BinTree'(_1184088,_1184090,_1184092,_1184094):-freeze(_1184092,'blocked_ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.BinTree'(_1184088,_1184090,_1184092,_1184094)).
'blocked_ordTest._impl\'23min\'23Prelude.Ord\'23ordTest.BinTree'(_1184164,_1184338,_1184344,_1184350):-hnf(partcall(2,'Prelude._def\'23min\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1184164)]),_1184338,_1184344,_1184350).

'ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.BinTree'(_1187328,_1187330,_1187332,_1187334):-freeze(_1187332,'blocked_ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.BinTree'(_1187328,_1187330,_1187332,_1187334)).
'blocked_ordTest._impl\'23max\'23Prelude.Ord\'23ordTest.BinTree'(_1187404,_1187578,_1187584,_1187590):-hnf(partcall(2,'Prelude._def\'23max\'23Prelude.Ord',['ordTest._inst\'23Prelude.Ord\'23ordTest.BinTree'(_1187404)]),_1187578,_1187584,_1187590).

'ordTest.listTest'(_1189446,_1189448,_1189450):-freeze(_1189448,'blocked_ordTest.listTest'(_1189446,_1189448,_1189450)).
'blocked_ordTest.listTest'(_1190506,_1190512,_1190518):-hnf('Prelude.apply'('Prelude.apply'('ordTest._impl\'23\'3C\'23Prelude.Ord\'23ordTest.MyList'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int'),'ordTest.MyCons'(2,'ordTest.MyCons'(3,'ordTest.MyNil'))),'ordTest.MyCons'(2,'ordTest.MyCons'(2,'ordTest.MyNil'))),_1190506,_1190512,_1190518).

'ordTest.t'(_1193542,_1193544,_1193546,_1193548):-freeze(_1193546,'blocked_ordTest.t'(_1193542,_1193544,_1193546,_1193548)).
'blocked_ordTest.t'(_1193618,'ordTest.Branch'('Prelude.apply'('Prelude.fromInt'(_1195086),5),'ordTest.Branch'('Prelude.apply'('Prelude.fromInt'(_1195086),2),'ordTest.Leaf','ordTest.Leaf'),'ordTest.Branch'('Prelude.apply'('Prelude.fromInt'(_1195086),8),'ordTest.Leaf','ordTest.Leaf')),_1195008,_1195014):-makeShare(_1193618,_1195086),_1195008=_1195014.

'ordTest.treeTest'(_1198848,_1198850,_1198852):-freeze(_1198850,'blocked_ordTest.treeTest'(_1198848,_1198850,_1198852)).
'blocked_ordTest.treeTest'(_1199484,_1199490,_1199496):-hnf('Prelude.apply'('Prelude.apply'('ordTest._impl\'23\'3E\'3D\'23Prelude.Ord\'23ordTest.BinTree'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int'),'ordTest.t'('Prelude._inst\'23Prelude.Num\'23Prelude.Int')),'ordTest.t'('Prelude._inst\'23Prelude.Num\'23Prelude.Int')),_1199484,_1199490,_1199496).

'ordTest.main'(_1202284,_1202286,_1202288):-freeze(_1202286,'blocked_ordTest.main'(_1202284,_1202286,_1202288)).
'blocked_ordTest.main'('Prelude.(,)'('ordTest.listTest','ordTest.treeTest'),_1202526,_1202526).

:-costCenters(['']).




%%%%% Number of shared variables: 15
