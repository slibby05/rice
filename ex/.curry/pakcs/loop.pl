%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(loop).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('loop.loop',loop,0,'loop.loop',nofix,_766922).
functiontype('loop.build',build,2,'loop.build',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])))).
functiontype('loop.main',main,0,'loop.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'loop.loop'(_804058,_804060,_804062):-freeze(_804060,'blocked_loop.loop'(_804058,_804060,_804062)).
'blocked_loop.loop'(_804134,_804140,_804146):-hnf('loop.loop',_804134,_804140,_804146).

'loop.build'(_804856,_804858,_804860,_804862,_804864):-freeze(_804862,'blocked_loop.build'(_804856,_804858,_804860,_804862,_804864)).
'blocked_loop.build'(_804942,_804960,_805636,_805642,_805648):-hnf(_804942,_806512,_805642,_806488),'blocked_loop.build_or1_1'(_806512,_804960,_805636,_806488,_805648).

'blocked_loop.build_or1_1'(_806798,_806800,_806802,_806804,_806806):-freeze(_806804,'blocked_blocked_loop.build_or1_1'(_806798,_806800,_806802,_806804,_806806)).
'blocked_blocked_loop.build_or1_1'(0,_804960,_806906,_806912,_806918):-hnf('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_804960,1),_806906,_806912,_806918).
'blocked_blocked_loop.build_or1_1'('FAIL'(_807724),_804960,'FAIL'(_807724),_807738,_807738):-nonvar(_807724).
'blocked_loop.build'(_804942,_804960,_807920,_807926,_807932):-hnf(_804960,_808796,_807926,_808772),'blocked_loop.build_or2_2'(_808796,_804942,_807920,_808772,_807932).

'blocked_loop.build_or2_2'(_809082,_809084,_809086,_809088,_809090):-freeze(_809088,'blocked_blocked_loop.build_or2_2'(_809082,_809084,_809086,_809088,_809090)).
'blocked_blocked_loop.build_or2_2'(0,_804942,_809190,_809196,_809202):-hnf('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_804942,2),_809190,_809196,_809202).
'blocked_blocked_loop.build_or2_2'('FAIL'(_810008),_804942,'FAIL'(_810008),_810022,_810022):-nonvar(_810008).

'loop.main'(_810512,_810514,_810516):-freeze(_810514,'blocked_loop.main'(_810512,_810514,_810516)).
'blocked_loop.main'(_810734,_810740,_810746):-hnf('loop.build'(0,'loop.loop'),_810734,_810740,_810746).

:-costCenters(['']).




%%%%% Number of shared variables: 0
