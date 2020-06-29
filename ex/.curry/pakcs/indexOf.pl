%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(indexOf).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('indexOf.indexOf',indexOf,2,'indexOf.indexOf',nofix,'FuncType'('TCons'([],[_795476]),'FuncType'(_795476,'TCons'('Prelude.Int',[])))).
functiontype('indexOf.main',main,0,'indexOf.main',nofix,'TCons'('Prelude.Int',[])).
functiontype('indexOf.indexOf._\'23caseor0','indexOf.indexOf._#caseor0',2,'indexOf.indexOf._\'23caseor0',nofix,'FuncType'('TCons'('Prelude.Bool',[]),'FuncType'(_817282,_817282))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'indexOf.indexOf'(_832884,_832886,_832888,_832890,_832892):-freeze(_832890,'blocked_indexOf.indexOf'(_832884,_832886,_832888,_832890,_832892)).
'blocked_indexOf.indexOf'(_832970,_832988,_834186,_834192,_834198):-makeShare(_833012,_834434),makeShare(_833030,_834454),hnf('indexOf.indexOf._\'23caseor0'('Prelude.&'('Prelude.=:='(_832970,'Prelude.++'(_834434,'Prelude.++'([_832988],'Prelude.unknown'))),'Prelude.=:='('Prelude.length'(_834434),_834454)),_834454),_834186,_834192,_834198).

'indexOf.main'(_838178,_838180,_838182):-freeze(_838180,'blocked_indexOf.main'(_838178,_838180,_838182)).
'blocked_indexOf.main'(_839130,_839136,_839142):-hnf('indexOf.indexOf'([1,2,4,8,16],4),_839130,_839136,_839142).

'indexOf.indexOf._\'23caseor0'(_841490,_841492,_841494,_841496,_841498):-freeze(_841496,'blocked_indexOf.indexOf._\'23caseor0'(_841490,_841492,_841494,_841496,_841498)).
'blocked_indexOf.indexOf._\'23caseor0'(_841576,_841594,_842342,_842348,_842354):-hnf(_841576,_843710,_842348,_843686),'blocked_indexOf.indexOf._\'23caseor0_1'(_843710,_841594,_842342,_843686,_842354).

'blocked_indexOf.indexOf._\'23caseor0_1'(_844080,_844082,_844084,_844086,_844088):-freeze(_844086,freeze(_844080,'blocked_blocked_indexOf.indexOf._\'23caseor0_1'(_844080,_844082,_844084,_844086,_844088))).
'blocked_blocked_indexOf.indexOf._\'23caseor0_1'('Prelude.True',_841594,_844422,_844428,_844434):-hnf(_841594,_844422,_844428,_844434).
'blocked_blocked_indexOf.indexOf._\'23caseor0_1'('Prelude.False',_841594,_845124,_845130,_845136):-!,hnf('Prelude.failure'('indexOf.indexOf._\'23caseor0',['Prelude.False']),_845124,_845130,_845136).
'blocked_blocked_indexOf.indexOf._\'23caseor0_1'('FAIL'(_846298),_841594,'FAIL'(_846298),_846312,_846312).

:-costCenters(['']).




%%%%% Number of shared variables: 2
