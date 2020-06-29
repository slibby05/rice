%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(instance).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('instance._inst\'23Prelude.Eq\'23instance.Tree','_inst#Prelude.Eq#instance.Tree',1,'instance._inst\'23Prelude.Eq\'23instance.Tree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_926180]),'TCons'('Prelude._Dict\'23Eq',['TCons'('instance.Tree',[_926180])]))).
functiontype('instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree','_impl#==#Prelude.Eq#instance.Tree',3,'instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_937560]),'FuncType'('TCons'('instance.Tree',[_937560]),'FuncType'('TCons'('instance.Tree',[_937560]),'TCons'('Prelude.Bool',[]))))).
functiontype('instance._impl\'23\'2F\'3D\'23Prelude.Eq\'23instance.Tree','_impl#/=#Prelude.Eq#instance.Tree',1,'instance._impl\'23\'2F\'3D\'23Prelude.Eq\'23instance.Tree',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_948994]),'FuncType'('TCons'('instance.Tree',[_948994]),'FuncType'('TCons'('instance.Tree',[_948994]),'TCons'('Prelude.Bool',[]))))).
functiontype('instance.main',main,0,'instance.main',nofix,'TCons'('Prelude.Bool',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('instance.Leaf','Leaf',0,'Leaf',0,'TCons'('instance.Tree',[_971110]),['instance.Branch'/3]).
constructortype('instance.Branch','Branch',3,'Branch',1,'FuncType'(_971486,'FuncType'('TCons'('instance.Tree',[_971486]),'FuncType'('TCons'('instance.Tree',[_971486]),'TCons'('instance.Tree',[_971486])))),['instance.Leaf'/0]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'instance._inst\'23Prelude.Eq\'23instance.Tree'(_978284,_978286,_978288,_978290):-freeze(_978288,'blocked_instance._inst\'23Prelude.Eq\'23instance.Tree'(_978284,_978286,_978288,_978290)).
'blocked_instance._inst\'23Prelude.Eq\'23instance.Tree'(_978360,'Prelude._Dict\'23Eq'(partcall(2,'instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree',[_978752]),'instance._impl\'23\'2F\'3D\'23Prelude.Eq\'23instance.Tree'(_978752)),_978686,_978692):-makeShare(_978360,_978752),_978686=_978692.

'instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree'(_982242,_982244,_982246,_982248,_982250,_982252):-freeze(_982250,'blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree'(_982242,_982244,_982246,_982248,_982250,_982252)).
'blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree'(_982338,_982356,_982374,_984638,_984644,_984650):-hnf(_982356,_986926,_984644,_986896),'blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2'(_986926,_982338,_982374,_984638,_986896,_984650).

'blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2'(_987442,_987444,_987446,_987448,_987450,_987452):-freeze(_987450,'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2'(_987442,_987444,_987446,_987448,_987450,_987452)).
'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2'('instance.Leaf',_982338,_982374,_988242,_988248,_988254):-hnf(_982374,_991298,_988248,_991274),'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Leaf_2'(_991298,_982338,_988242,_991274,_988254).

'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Leaf_2'(_991956,_991958,_991960,_991962,_991964):-freeze(_991962,'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Leaf_2'(_991956,_991958,_991960,_991962,_991964)).
'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Leaf_2'('instance.Leaf',_982338,'Prelude.True',_992310,_992310).
'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Leaf_2'('instance.Branch'(_982664,_982682,_982700),_982338,'Prelude.False',_993420,_993420):-!.
'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Leaf_2'('FAIL'(_994414),_982338,'FAIL'(_994414),_994428,_994428):-nonvar(_994414).
'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2'('instance.Branch'(_982834,_982852,_982870),_982338,_982374,_995260,_995266,_995272):-!,hnf(_982374,_998412,_995266,_998370),'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Branch_5'(_998412,_982834,_982852,_982870,_982338,_995260,_998370,_995272).

'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Branch_5'(_999106,_999108,_999110,_999112,_999114,_999116,_999118,_999120):-freeze(_999118,'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Branch_5'(_999106,_999108,_999110,_999112,_999114,_999116,_999118,_999120)).
'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Branch_5'('instance.Leaf',_982834,_982852,_982870,_982338,'Prelude.False',_999490,_999490).
'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Branch_5'('instance.Branch'(_983088,_983106,_983124),_982834,_982852,_982870,_982338,_1000822,_1000828,_1000834):-!,makeShare(_982338,_1001262),hnf('Prelude.&&'('Prelude.apply'('Prelude.apply'('Prelude.=='(_1001262),_982834),_983088),'Prelude.&&'('instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree'(_1001262,_982852,_983106),'instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree'(_1001262,_982870,_983124))),_1000822,_1000828,_1000834).
'blocked_blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2_instance.Branch_5'('FAIL'(_1004976),_982834,_982852,_982870,_982338,'FAIL'(_1004976),_1004990,_1004990):-nonvar(_1004976).
'blocked_blocked_instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree_2'('FAIL'(_1005072),_982338,_982374,'FAIL'(_1005072),_1005086,_1005086):-nonvar(_1005072).

'instance._impl\'23\'2F\'3D\'23Prelude.Eq\'23instance.Tree'(_1006898,_1006900,_1006902,_1006904):-freeze(_1006902,'blocked_instance._impl\'23\'2F\'3D\'23Prelude.Eq\'23instance.Tree'(_1006898,_1006900,_1006902,_1006904)).
'blocked_instance._impl\'23\'2F\'3D\'23Prelude.Eq\'23instance.Tree'(_1006974,_1007148,_1007154,_1007160):-hnf(partcall(2,'Prelude._def\'23\'2F\'3D\'23Prelude.Eq',['instance._inst\'23Prelude.Eq\'23instance.Tree'(_1006974)]),_1007148,_1007154,_1007160).

'instance.main'(_1008914,_1008916,_1008918):-freeze(_1008916,'blocked_instance.main'(_1008914,_1008916,_1008918)).
'blocked_instance.main'(_1009682,_1009688,_1009694):-hnf('instance._impl\'23\'3D\'3D\'23Prelude.Eq\'23instance.Tree'('Prelude._inst\'23Prelude.Eq\'23Prelude.Int','instance.Branch'(1,'instance.Leaf','instance.Leaf'),'instance.Branch'(1,'instance.Leaf','instance.Leaf')),_1009682,_1009688,_1009694).

:-costCenters(['']).




%%%%% Number of shared variables: 2
