%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(share).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('share.coin',coin,1,'share.coin',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_829688]),_829688)).
functiontype('share.shared',shared,1,'share.shared',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_840724]),'TCons'('Prelude.(,)',[_840724,_840724]))).
functiontype('share.unshar',unshar,2,'share.unshar',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_851702]),'FuncType'('TCons'('Prelude._Dict\'23Num',[_851852]),'TCons'('Prelude.(,)',[_851702,_851852])))).
functiontype('share.main',main,0,'share.main',nofix,'TCons'('Prelude.Bool',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'share.coin'(_878240,_878242,_878244,_878246):-freeze(_878244,'blocked_share.coin'(_878240,_878242,_878244,_878246)).
'blocked_share.coin'(_878316,_878928,_878934,_878940):-makeShare(_878316,_879000),hnf('Prelude.?'('Prelude.apply'('Prelude.fromInt'(_879000),0),'Prelude.apply'('Prelude.fromInt'(_879000),1)),_878928,_878934,_878940).

'share.shared'(_881106,_881108,_881110,_881112):-freeze(_881110,'blocked_share.shared'(_881106,_881108,_881110,_881112)).
'blocked_share.shared'(_881182,_881744,_881750,_881756):-makeShare(_881206,_881852),hnf('Prelude.cond'('Prelude.letrec'(_881852,'share.coin'(_881182)),'Prelude.(,)'(_881852,_881852)),_881744,_881750,_881756).

'share.unshar'(_883798,_883800,_883802,_883804,_883806):-freeze(_883804,'blocked_share.unshar'(_883798,_883800,_883802,_883804,_883806)).
'blocked_share.unshar'(_883884,_883902,'Prelude.(,)'('share.coin'(_883884),'share.coin'(_883902)),_884228,_884228).

'share.main'(_885584,_885586,_885588):-freeze(_885586,'blocked_share.main'(_885584,_885586,_885588)).
'blocked_share.main'(_886220,_886226,_886232):-hnf('Prelude._impl\'23\'3D\'3D\'23Prelude.Eq\'23\'28\'2C\'29'('Prelude._inst\'23Prelude.Eq\'23Prelude.Int','Prelude._inst\'23Prelude.Eq\'23Prelude.Int','share.shared'('Prelude._inst\'23Prelude.Num\'23Prelude.Int'),'share.unshar'('Prelude._inst\'23Prelude.Num\'23Prelude.Int','Prelude._inst\'23Prelude.Num\'23Prelude.Int')),_886220,_886226,_886232).

:-costCenters(['']).




%%%%% Number of shared variables: 2
