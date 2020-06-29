%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(ndtest).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('ndtest.main',main,0,'ndtest.main',nofix,'TCons'('Prelude.Bool',[])).
functiontype('ndtest.main._\'23caseor0','ndtest.main._#caseor0',2,'ndtest.main._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.Bool',[])))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'ndtest.main'(_793866,_793868,_793870):-freeze(_793868,'blocked_ndtest.main'(_793866,_793868,_793870)).
'blocked_ndtest.main'(_794688,_794694,_794700):-makeShare(_793938,_794764),hnf('Prelude.cond'('Prelude.letrec'(_794764,'Prelude.?'(0,1)),'ndtest.main._\'23caseor0'('Prelude._impl\'23\'3D\'3D\'23Prelude.Eq\'23Prelude.Int'(_794764,0),_794764)),_794688,_794694,_794700).

'ndtest.main._\'23caseor0'(_797646,_797648,_797650,_797652,_797654):-freeze(_797652,'blocked_ndtest.main._\'23caseor0'(_797646,_797648,_797650,_797652,_797654)).
'blocked_ndtest.main._\'23caseor0'(_797732,_797750,_798822,_798828,_798834):-hnf(_797732,_800046,_798828,_800022),'blocked_ndtest.main._\'23caseor0_1'(_800046,_797750,_798822,_800022,_798834).

'blocked_ndtest.main._\'23caseor0_1'(_800392,_800394,_800396,_800398,_800400):-freeze(_800398,freeze(_800392,'blocked_blocked_ndtest.main._\'23caseor0_1'(_800392,_800394,_800396,_800398,_800400))).
'blocked_blocked_ndtest.main._\'23caseor0_1'('Prelude.True',_797750,'Prelude.True',_800740,_800740).
'blocked_blocked_ndtest.main._\'23caseor0_1'('Prelude.False',_797750,_802372,_802378,_802384):-!,hnf('Prelude.=:='(_797750,1),_804430,_802378,_804406),'blocked_blocked_ndtest.main._\'23caseor0_1_Prelude.False_ComplexCase'(_804430,_797750,_802372,_804406,_802384).

'blocked_blocked_ndtest.main._\'23caseor0_1_Prelude.False_ComplexCase'(_804998,_805000,_805002,_805004,_805006):-freeze(_805004,freeze(_804998,'blocked_blocked_blocked_ndtest.main._\'23caseor0_1_Prelude.False_ComplexCase'(_804998,_805000,_805002,_805004,_805006))).
'blocked_blocked_blocked_ndtest.main._\'23caseor0_1_Prelude.False_ComplexCase'('Prelude.True',_797750,'Prelude.False',_805346,_805346).
'blocked_blocked_blocked_ndtest.main._\'23caseor0_1_Prelude.False_ComplexCase'('Prelude.False',_797750,_806292,_806298,_806304):-!,hnf('Prelude.failure'('ndtest.main._\'23caseor0',['Prelude.False']),_806292,_806298,_806304).
'blocked_blocked_blocked_ndtest.main._\'23caseor0_1_Prelude.False_ComplexCase'('FAIL'(_807622),_797750,'FAIL'(_807622),_807636,_807636).
'blocked_blocked_ndtest.main._\'23caseor0_1'('FAIL'(_807690),_797750,'FAIL'(_807690),_807704,_807704).

:-costCenters(['']).




%%%%% Number of shared variables: 1
