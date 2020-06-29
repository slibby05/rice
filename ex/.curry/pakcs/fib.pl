%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(fib).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('fib.fib',fib,3,'fib.fib',nofix,'FuncType'('TCons'('Prelude._Dict\'23Num',[_837840]),'FuncType'('TCons'('Prelude._Dict\'23Ord',[_837840]),'FuncType'(_837840,_837840)))).
functiontype('fib.main',main,0,'fib.main',nofix,'TCons'('Prelude.Int',[])).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'fib.fib'(_864054,_864056,_864058,_864060,_864062,_864064):-freeze(_864062,'blocked_fib.fib'(_864054,_864056,_864058,_864060,_864062,_864064)).
'blocked_fib.fib'(_864150,_864168,_864186,_871456,_871462,_871468):-makeShare(_864168,_868596),makeShare(_864186,_868616),makeShare(_864150,_868636),hnf('Prelude.apply'('Prelude.apply'('Prelude.<'(_868596),_868616),'Prelude.apply'('Prelude.fromInt'(_868636),2)),_872178,_871462,_872142),'blocked_fib.fib_ComplexCase'(_872178,_868636,_868596,_868616,_871456,_872142,_871468).

'blocked_fib.fib_ComplexCase'(_872528,_872530,_872532,_872534,_872536,_872538,_872540):-freeze(_872538,freeze(_872528,'blocked_blocked_fib.fib_ComplexCase'(_872528,_872530,_872532,_872534,_872536,_872538,_872540))).
'blocked_blocked_fib.fib_ComplexCase'('Prelude.True',_868636,_868596,_868616,_872890,_872896,_872902):-hnf(_868616,_872890,_872896,_872902).
'blocked_blocked_fib.fib_ComplexCase'('Prelude.False',_868636,_868596,_868616,_876820,_876826,_876832):-!,makeShare(_868596,_874102),makeShare(_868616,_874122),makeShare(_868636,_874142),hnf('Prelude.apply'('Prelude.apply'('Prelude.>'(_874102),_874122),'Prelude.apply'('Prelude.fromInt'(_874142),1)),_878690,_876826,_878654),'blocked_blocked_fib.fib_ComplexCase_Prelude.False_ComplexCase'(_878690,_874142,_874102,_874122,_876820,_878654,_876832).

'blocked_blocked_fib.fib_ComplexCase_Prelude.False_ComplexCase'(_879262,_879264,_879266,_879268,_879270,_879272,_879274):-freeze(_879272,freeze(_879262,'blocked_blocked_blocked_fib.fib_ComplexCase_Prelude.False_ComplexCase'(_879262,_879264,_879266,_879268,_879270,_879272,_879274))).
'blocked_blocked_blocked_fib.fib_ComplexCase_Prelude.False_ComplexCase'('Prelude.True',_874142,_874102,_874122,_879624,_879630,_879636):-makeShare(_874142,_879900),makeShare(_874102,_879920),makeShare(_874122,_879940),hnf('Prelude.apply'('Prelude.apply'('Prelude.+'(_879900),'fib.fib'(_879900,_879920,'Prelude.apply'('Prelude.apply'('Prelude.-'(_879900),_879940),'Prelude.apply'('Prelude.fromInt'(_879900),1)))),'fib.fib'(_879900,_879920,'Prelude.apply'('Prelude.apply'('Prelude.-'(_879900),_879940),'Prelude.apply'('Prelude.fromInt'(_879900),2)))),_879624,_879630,_879636).
'blocked_blocked_blocked_fib.fib_ComplexCase_Prelude.False_ComplexCase'('Prelude.False',_874142,_874102,_874122,_884978,_884984,_884990):-!,hnf('Prelude.failure'('fib.fib',['Prelude.False']),_884978,_884984,_884990).
'blocked_blocked_blocked_fib.fib_ComplexCase_Prelude.False_ComplexCase'('FAIL'(_886316),_874142,_874102,_874122,'FAIL'(_886316),_886330,_886330).
'blocked_blocked_fib.fib_ComplexCase'('FAIL'(_886400),_868636,_868596,_868616,'FAIL'(_886400),_886414,_886414).

'fib.main'(_886880,_886882,_886884):-freeze(_886882,'blocked_fib.main'(_886880,_886882,_886884)).
'blocked_fib.main'(_887328,_887334,_887340):-hnf('fib.fib'('Prelude._inst\'23Prelude.Num\'23Prelude.Int','Prelude._inst\'23Prelude.Ord\'23Prelude.Int','Prelude.?'(27,1)),_887328,_887334,_887340).

:-costCenters(['']).




%%%%% Number of shared variables: 9
