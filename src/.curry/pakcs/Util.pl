%PAKCS2.1 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule('Util').


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('Util._inst\'23Prelude.Functor\'23Prelude.Maybe','_inst#Prelude.Functor#Prelude.Maybe',0,'Util._inst\'23Prelude.Functor\'23Prelude.Maybe',nofix,'TCons'('Prelude._Dict\'23Functor',['TCons'('Prelude.Maybe',[])])).
functiontype('Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe','_impl#fmap#Prelude.Functor#Prelude.Maybe',2,'Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe',nofix,'FuncType'('FuncType'(_5690986,_5690988),'FuncType'('TCons'('Prelude.Maybe',[_5690986]),'TCons'('Prelude.Maybe',[_5690988])))).
functiontype('Util._inst\'23Prelude.Functor\'23Prelude.IO','_inst#Prelude.Functor#Prelude.IO',0,'Util._inst\'23Prelude.Functor\'23Prelude.IO',nofix,'TCons'('Prelude._Dict\'23Functor',['TCons'('Prelude.IO',[])])).
functiontype('Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.IO','_impl#fmap#Prelude.Functor#Prelude.IO',1,'Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.IO',nofix,'FuncType'('FuncType'(_5766132,_5766134),'FuncType'('TCons'('Prelude.IO',[_5766132]),'TCons'('Prelude.IO',[_5766134])))).
functiontype('Util.fork',fork,3,'Util.fork',nofix,'FuncType'('FuncType'(_5803450,_5803452),'FuncType'('FuncType'(_5803486,_5803488),'FuncType'('TCons'('Prelude.(,)',[_5803450,_5803486]),'TCons'('Prelude.(,)',[_5803452,_5803488]))))).
functiontype('Util.mapFst',mapFst,1,'Util.mapFst',nofix,'FuncType'('FuncType'(_5840816,_5840818),'FuncType'('TCons'('Prelude.(,)',[_5840816,_5840918]),'TCons'('Prelude.(,)',[_5840818,_5840918])))).
functiontype('Util.mapSnd',mapSnd,1,'Util.mapSnd',nofix,'FuncType'('FuncType'(_5878158,_5878160),'FuncType'('TCons'('Prelude.(,)',[_5878254,_5878158]),'TCons'('Prelude.(,)',[_5878254,_5878160])))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'Util._inst\'23Prelude.Functor\'23Prelude.Maybe'(_5941370,_5941372,_5941374):-freeze(_5941372,'blocked_Util._inst\'23Prelude.Functor\'23Prelude.Maybe'(_5941370,_5941372,_5941374)).
'blocked_Util._inst\'23Prelude.Functor\'23Prelude.Maybe'('Prelude._Dict\'23Functor'(partcall(2,'Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe',[])),_5941532,_5941532).

'Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe'(_5944280,_5944282,_5944284,_5944286,_5944288):-freeze(_5944286,'blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe'(_5944280,_5944282,_5944284,_5944286,_5944288)).
'blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe'(_5944366,_5944384,_5945212,_5945218,_5945224):-hnf(_5944384,_5947444,_5945218,_5947420),'blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe_2'(_5947444,_5944366,_5945212,_5947420,_5945224).

'blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe_2'(_5947952,_5947954,_5947956,_5947958,_5947960):-freeze(_5947958,'blocked_blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe_2'(_5947952,_5947954,_5947956,_5947958,_5947960)).
'blocked_blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe_2'('Prelude.Nothing',_5944366,'Prelude.Nothing',_5948330,_5948330).
'blocked_blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe_2'('Prelude.Just'(_5944584),_5944366,'Prelude.Just'('Prelude.apply'(_5944366,_5944584)),_5949256,_5949256):-!.
'blocked_blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.Maybe_2'('FAIL'(_5950330),_5944366,'FAIL'(_5950330),_5950344,_5950344):-nonvar(_5950330).

'Util._inst\'23Prelude.Functor\'23Prelude.IO'(_5951896,_5951898,_5951900):-freeze(_5951898,'blocked_Util._inst\'23Prelude.Functor\'23Prelude.IO'(_5951896,_5951898,_5951900)).
'blocked_Util._inst\'23Prelude.Functor\'23Prelude.IO'('Prelude._Dict\'23Functor'(partcall(1,'Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.IO',[])),_5952058,_5952058).

'Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.IO'(_5954662,_5954664,_5954666,_5954668):-freeze(_5954666,'blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.IO'(_5954662,_5954664,_5954666,_5954668)).
'blocked_Util._impl\'23fmap\'23Prelude.Functor\'23Prelude.IO'(_5954738,_5955072,_5955078,_5955084):-hnf(partcall(1,'Prelude.flip',['Prelude..'(partcall(1,'Prelude._impl\'23return\'23Prelude.Monad\'23Prelude.IO',[]),_5954738),partcall(2,'Prelude._impl\'23\'3E\'3E\'3D\'23Prelude.Monad\'23Prelude.IO',[])]),_5955072,_5955078,_5955084).

'Util.fork'(_5957200,_5957202,_5957204,_5957206,_5957208,_5957210):-freeze(_5957208,'blocked_Util.fork'(_5957200,_5957202,_5957204,_5957206,_5957208,_5957210)).
'blocked_Util.fork'(_5957296,_5957314,_5957332,_5958058,_5958064,_5958070):-hnf(_5957332,_5958798,_5958064,_5958768),'blocked_Util.fork_3'(_5958798,_5957296,_5957314,_5958058,_5958768,_5958070).

'blocked_Util.fork_3'(_5959056,_5959058,_5959060,_5959062,_5959064,_5959066):-freeze(_5959064,'blocked_blocked_Util.fork_3'(_5959056,_5959058,_5959060,_5959062,_5959064,_5959066)).
'blocked_blocked_Util.fork_3'('Prelude.(,)'(_5957440,_5957458),_5957296,_5957314,'Prelude.(,)'('Prelude.apply'(_5957296,_5957440),'Prelude.apply'(_5957314,_5957458)),_5959402,_5959402):-!.
'blocked_blocked_Util.fork_3'('FAIL'(_5960744),_5957296,_5957314,'FAIL'(_5960744),_5960758,_5960758):-nonvar(_5960744).

'Util.mapFst'(_5961328,_5961330,_5961332,_5961334):-freeze(_5961332,'blocked_Util.mapFst'(_5961328,_5961330,_5961332,_5961334)).
'blocked_Util.mapFst'(_5961404,_5961578,_5961584,_5961590):-hnf(partcall(1,'Util.fork',[partcall(1,'Prelude.id',[]),_5961404]),_5961578,_5961584,_5961590).

'Util.mapSnd'(_5962670,_5962672,_5962674,_5962676):-freeze(_5962674,'blocked_Util.mapSnd'(_5962670,_5962672,_5962674,_5962676)).
'blocked_Util.mapSnd'(_5962746,_5962920,_5962926,_5962932):-hnf(partcall(1,'Util.fork',[_5962746,partcall(1,'Prelude.id',[])]),_5962920,_5962926,_5962932).

:-costCenters(['']).




%%%%% Number of shared variables: 0
