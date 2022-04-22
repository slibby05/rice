%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(stream).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('stream.stream',stream,1,'stream.stream',nofix,'FuncType'('TCons'([],[_1487696]),'TCons'('stream.Stream',[_1487696,'TCons'([],[_1487696])]))).
functiontype('stream.stream.next.2','stream.stream.next.2',1,'stream.stream.next.2',nofix,'FuncType'('TCons'([],[_1499124]),'TCons'('stream.Step',[_1499124,'TCons'([],[_1499124])]))).
functiontype('stream.unstream',unstream,1,'stream.unstream',nofix,'FuncType'('TCons'('stream.Stream',[_1510546,'TCons'([],[_1510546])]),'TCons'([],[_1510546]))).
functiontype('stream.unstream.unfold.8','stream.unstream.unfold.8',2,'stream.unstream.unfold.8',nofix,'FuncType'('FuncType'('TCons'([],[_1521926]),'TCons'('stream.Step',[_1521926,'TCons'([],[_1521926])])),'FuncType'('TCons'([],[_1521926]),'TCons'([],[_1521926])))).
functiontype('stream.map_s',map_s,2,'stream.map_s',nofix,'FuncType'('FuncType'(_1533276,_1533278),'FuncType'('TCons'('stream.Stream',[_1533276,_1533402]),'TCons'('stream.Stream',[_1533278,_1533402])))).
functiontype('stream.map_s.next.18','stream.map_s.next.18',3,'stream.map_s.next.18',nofix,'FuncType'('FuncType'(_1544812,'TCons'('stream.Step',[_1544902,_1544812])),'FuncType'('FuncType'(_1544902,_1544934),'FuncType'(_1544812,'TCons'('stream.Step',[_1544934,_1544812]))))).
functiontype('stream.map',map,1,'stream.map',nofix,'FuncType'('FuncType'(_1556234,_1556234),'FuncType'('TCons'([],[_1556234]),'TCons'([],[_1556234])))).
functiontype('stream.filter',filter,1,'stream.filter',nofix,'FuncType'('FuncType'(_1567536,'TCons'('Prelude.Bool',[])),'FuncType'('TCons'([],[_1567536]),'TCons'([],[_1567536])))).
functiontype('stream.filter_s',filter_s,2,'stream.filter_s',nofix,'FuncType'('FuncType'(_1578928,'TCons'('Prelude.Bool',[])),'FuncType'('TCons'('stream.Stream',[_1578928,_1579120]),'TCons'('stream.Stream',[_1578928,_1579120])))).
functiontype('stream.filter_s.next.32','stream.filter_s.next.32',3,'stream.filter_s.next.32',nofix,'FuncType'('FuncType'(_1590548,'TCons'('Prelude.Bool',[])),'FuncType'('FuncType'(_1590650,'TCons'('stream.Step',[_1590548,_1590650])),'FuncType'(_1590650,'TCons'('stream.Step',[_1590548,_1590650]))))).
functiontype('stream.return_s',return_s,1,'stream.return_s',nofix,'FuncType'(_1602060,'TCons'('stream.Stream',[_1602060,'TCons'('Prelude.Bool',[])]))).
functiontype('stream.return_s.next.42','stream.return_s.next.42',2,'stream.return_s.next.42',nofix,'FuncType'(_1613560,'FuncType'('TCons'('Prelude.Bool',[]),'TCons'('stream.Step',[_1613560,'TCons'('Prelude.Bool',[])])))).
functiontype('stream.enumFromTo_s',enumFromTo_s,4,'stream.enumFromTo_s',nofix,'FuncType'('TCons'('Prelude._Dict\'23Enum',[_1625204]),'FuncType'('TCons'('Prelude._Dict\'23Ord',[_1625204]),'FuncType'(_1625204,'FuncType'(_1625204,'TCons'('stream.Stream',[_1625204,_1625204])))))).
functiontype('stream.enumFromTo_s.next.48','stream.enumFromTo_s.next.48',4,'stream.enumFromTo_s.next.48',nofix,'FuncType'(_1636800,'FuncType'('TCons'('Prelude._Dict\'23Enum',[_1636800]),'FuncType'('TCons'('Prelude._Dict\'23Ord',[_1636800]),'FuncType'(_1636800,'TCons'('stream.Step',[_1636800,_1636800])))))).
functiontype('stream.enumFromTo__s',enumFromTo__s,2,'stream.enumFromTo__s',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('stream.Stream',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])))).
functiontype('stream.enumFromTo__s.next.52','stream.enumFromTo__s.next.52',2,'stream.enumFromTo__s.next.52',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('stream.Step',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])))).
functiontype('stream.foldr_s',foldr_s,3,'stream.foldr_s',nofix,'FuncType'('FuncType'(_1671774,'FuncType'(_1671792,_1671792)),'FuncType'(_1671792,'FuncType'('TCons'('stream.Stream',[_1671774,_1671912]),_1671792)))).
functiontype('stream.foldr_s.go.56','stream.foldr_s.go.56',4,'stream.foldr_s.go.56',nofix,'FuncType'(_1683220,'FuncType'('FuncType'(_1683244,'TCons'('stream.Step',[_1683334,_1683244])),'FuncType'('FuncType'(_1683334,'FuncType'(_1683220,_1683220)),'FuncType'(_1683244,_1683220))))).
functiontype('stream.foldl_s',foldl_s,3,'stream.foldl_s',nofix,'FuncType'('FuncType'(_1694600,'FuncType'(_1694618,_1694600)),'FuncType'(_1694600,'FuncType'('TCons'('stream.Stream',[_1694618,_1694738]),_1694600)))).
functiontype('stream.foldl_s.go.66','stream.foldl_s.go.66',4,'stream.foldl_s.go.66',nofix,'FuncType'('FuncType'(_1706052,'TCons'('stream.Step',[_1706142,_1706052])),'FuncType'('FuncType'(_1706172,'FuncType'(_1706142,_1706172)),'FuncType'(_1706172,'FuncType'(_1706052,_1706172))))).
functiontype('stream.append_s',append_s,2,'stream.append_s',nofix,'FuncType'('TCons'('stream.Stream',[_1717516,_1717534]),'FuncType'('TCons'('stream.Stream',[_1717516,_1717648]),'TCons'('stream.Stream',[_1717516,'TCons'('Prelude.Either',[_1717534,_1717648])])))).
functiontype('stream.append_s.next.76','stream.append_s.next.76',4,'stream.append_s.next.76',nofix,'FuncType'(_1729172,'FuncType'('FuncType'(_1729172,'TCons'('stream.Step',[_1729274,_1729172])),'FuncType'('FuncType'(_1729304,'TCons'('stream.Step',[_1729274,_1729304])),'FuncType'('TCons'('Prelude.Either',[_1729304,_1729172]),'TCons'('stream.Step',[_1729274,'TCons'('Prelude.Either',[_1729304,_1729172])])))))).
functiontype('stream.zip_s',zip_s,2,'stream.zip_s',nofix,'FuncType'('TCons'('stream.Stream',[_1740990,_1741008]),'FuncType'('TCons'('stream.Stream',[_1741116,_1741134]),'TCons'('stream.Stream',['TCons'('Prelude.(,)',[_1740990,_1741116]),'TCons'('Prelude.(,,)',[_1741008,_1741134,'TCons'('Prelude.Maybe',[_1740990])])])))).
functiontype('stream.zip_s.next.94','stream.zip_s.next.94',3,'stream.zip_s.next.94',nofix,'FuncType'('FuncType'(_1752784,'TCons'('stream.Step',[_1752874,_1752784])),'FuncType'('FuncType'(_1752904,'TCons'('stream.Step',[_1752994,_1752904])),'FuncType'('TCons'('Prelude.(,,)',[_1752904,_1752784,'TCons'('Prelude.Maybe',[_1752994])]),'TCons'('stream.Step',['TCons'('Prelude.(,)',[_1752994,_1752874]),'TCons'('Prelude.(,,)',[_1752904,_1752784,'TCons'('Prelude.Maybe',[_1752994])])]))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('stream.Stream','Stream',2,'Stream',0,'FuncType'('FuncType'(_1764904,'TCons'('stream.Step',[_1764994,_1764904])),'FuncType'(_1764904,'TCons'('stream.Stream',[_1764994,_1764904]))),[]).
constructortype('stream.Done','Done',0,'Done',0,'TCons'('stream.Step',[_1765496,_1765514]),['stream.Yield'/2,'stream.Skip'/1]).
constructortype('stream.Yield','Yield',2,'Yield',1,'FuncType'(_1765896,'FuncType'(_1765914,'TCons'('stream.Step',[_1765896,_1765914]))),['stream.Done'/0,'stream.Skip'/1]).
constructortype('stream.Skip','Skip',1,'Skip',2,'FuncType'(_1766356,'TCons'('stream.Step',[_1766446,_1766356])),['stream.Done'/0,'stream.Yield'/2]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'stream.stream'(_1772326,_1772328,_1772330,_1772332):-freeze(_1772330,'blocked_stream.stream'(_1772326,_1772328,_1772330,_1772332)).
'blocked_stream.stream'(_1772402,'stream.Stream'(partcall(1,'stream.stream.next.2',[]),_1772402),_1772582,_1772582).

'stream.stream.next.2'(_1774064,_1774066,_1774068,_1774070):-freeze(_1774068,'blocked_stream.stream.next.2'(_1774064,_1774066,_1774068,_1774070)).
'blocked_stream.stream.next.2'(_1774140,_1774720,_1774726,_1774732):-hnf(_1774140,_1775816,_1774726,_1775798),'blocked_stream.stream.next.2_1'(_1775816,_1774720,_1775798,_1774732).

'blocked_stream.stream.next.2_1'(_1776136,_1776138,_1776140,_1776142):-freeze(_1776140,'blocked_blocked_stream.stream.next.2_1'(_1776136,_1776138,_1776140,_1776142)).
'blocked_blocked_stream.stream.next.2_1'([],'stream.Done',_1776336,_1776336).
'blocked_blocked_stream.stream.next.2_1'([_1774340|_1774358],'stream.Yield'(_1774340,_1774358),_1776864,_1776864):-!.
'blocked_blocked_stream.stream.next.2_1'('FAIL'(_1777570),'FAIL'(_1777570),_1777584,_1777584):-nonvar(_1777570).

'stream.unstream'(_1778282,_1778284,_1778286,_1778288):-freeze(_1778286,'blocked_stream.unstream'(_1778282,_1778284,_1778286,_1778288)).
'blocked_stream.unstream'(_1778358,_1778816,_1778822,_1778828):-hnf(_1778358,_1779732,_1778822,_1779714),'blocked_stream.unstream_1'(_1779732,_1778816,_1779714,_1778828).

'blocked_stream.unstream_1'(_1780022,_1780024,_1780026,_1780028):-freeze(_1780026,'blocked_blocked_stream.unstream_1'(_1780022,_1780024,_1780026,_1780028)).
'blocked_blocked_stream.unstream_1'('stream.Stream'(_1778466,_1778484),_1780378,_1780384,_1780390):-!,hnf('stream.unstream.unfold.8'(_1778466,_1778484),_1780378,_1780384,_1780390).
'blocked_blocked_stream.unstream_1'('FAIL'(_1781154),'FAIL'(_1781154),_1781168,_1781168):-nonvar(_1781154).

'stream.unstream.unfold.8'(_1782190,_1782192,_1782194,_1782196,_1782198):-freeze(_1782196,'blocked_stream.unstream.unfold.8'(_1782190,_1782192,_1782194,_1782196,_1782198)).
'blocked_stream.unstream.unfold.8'(_1782276,_1782294,_1784376,_1784382,_1784388):-makeShare(_1782276,_1783304),hnf('Prelude.apply'(_1783304,_1782294),_1785696,_1784382,_1785666),'blocked_stream.unstream.unfold.8_ComplexCase'(_1785696,_1783304,_1782294,_1784376,_1785666,_1784388).

'blocked_stream.unstream.unfold.8_ComplexCase'(_1786122,_1786124,_1786126,_1786128,_1786130,_1786132):-freeze(_1786130,freeze(_1786122,'blocked_blocked_stream.unstream.unfold.8_ComplexCase'(_1786122,_1786124,_1786126,_1786128,_1786130,_1786132))).
'blocked_blocked_stream.unstream.unfold.8_ComplexCase'('stream.Done',_1783304,_1782294,[],_1786468,_1786468).
'blocked_blocked_stream.unstream.unfold.8_ComplexCase'('stream.Skip'(_1782640),_1783304,_1782294,_1787254,_1787260,_1787266):-hnf(_1782640,_1787254,_1787260,_1787266).
'blocked_blocked_stream.unstream.unfold.8_ComplexCase'('stream.Yield'(_1782742,_1782760),_1783304,_1782294,[_1782742|'stream.unstream.unfold.8'(_1783304,_1782760)],_1788142,_1788142):-!.
'blocked_blocked_stream.unstream.unfold.8_ComplexCase'('FAIL'(_1789350),_1783304,_1782294,'FAIL'(_1789350),_1789364,_1789364).

'stream.map_s'(_1789966,_1789968,_1789970,_1789972,_1789974):-freeze(_1789972,'blocked_stream.map_s'(_1789966,_1789968,_1789970,_1789972,_1789974)).
'blocked_stream.map_s'(_1790052,_1790070,_1790662,_1790668,_1790674):-hnf(_1790070,_1791490,_1790668,_1791466),'blocked_stream.map_s_2'(_1791490,_1790052,_1790662,_1791466,_1790674).

'blocked_stream.map_s_2'(_1791764,_1791766,_1791768,_1791770,_1791772):-freeze(_1791770,'blocked_blocked_stream.map_s_2'(_1791764,_1791766,_1791768,_1791770,_1791772)).
'blocked_blocked_stream.map_s_2'('stream.Stream'(_1790178,_1790196),_1790052,'stream.Stream'(partcall(1,'stream.map_s.next.18',[_1790052,_1790178]),_1790196),_1792136,_1792136):-!.
'blocked_blocked_stream.map_s_2'('FAIL'(_1793204),_1790052,'FAIL'(_1793204),_1793218,_1793218):-nonvar(_1793204).

'stream.map_s.next.18'(_1794104,_1794106,_1794108,_1794110,_1794112,_1794114):-freeze(_1794112,'blocked_stream.map_s.next.18'(_1794104,_1794106,_1794108,_1794110,_1794112,_1794114)).
'blocked_stream.map_s.next.18'(_1794200,_1794218,_1794236,_1796296,_1796302,_1796308):-hnf('Prelude.apply'(_1794200,_1794236),_1797486,_1796302,_1797450),'blocked_stream.map_s.next.18_ComplexCase'(_1797486,_1794200,_1794218,_1794236,_1796296,_1797450,_1796308).

'blocked_stream.map_s.next.18_ComplexCase'(_1797878,_1797880,_1797882,_1797884,_1797886,_1797888,_1797890):-freeze(_1797888,freeze(_1797878,'blocked_blocked_stream.map_s.next.18_ComplexCase'(_1797878,_1797880,_1797882,_1797884,_1797886,_1797888,_1797890))).
'blocked_blocked_stream.map_s.next.18_ComplexCase'('stream.Done',_1794200,_1794218,_1794236,'stream.Done',_1798234,_1798234).
'blocked_blocked_stream.map_s.next.18_ComplexCase'('stream.Skip'(_1794582),_1794200,_1794218,_1794236,'stream.Skip'(_1794582),_1799138,_1799138).
'blocked_blocked_stream.map_s.next.18_ComplexCase'('stream.Yield'(_1794764,_1794782),_1794200,_1794218,_1794236,'stream.Yield'('Prelude.apply'(_1794218,_1794764),_1794782),_1800212,_1800212):-!.
'blocked_blocked_stream.map_s.next.18_ComplexCase'('FAIL'(_1801472),_1794200,_1794218,_1794236,'FAIL'(_1801472),_1801486,_1801486).

'stream.map'(_1802024,_1802026,_1802028,_1802030):-freeze(_1802028,'blocked_stream.map'(_1802024,_1802026,_1802028,_1802030)).
'blocked_stream.map'(_1802100,_1802514,_1802520,_1802526):-hnf('Prelude..'(partcall(1,'stream.unstream',[]),'Prelude..'(partcall(1,'stream.map_s',[_1802100]),partcall(1,'stream.stream',[]))),_1802514,_1802520,_1802526).

'stream.filter'(_1804270,_1804272,_1804274,_1804276):-freeze(_1804274,'blocked_stream.filter'(_1804270,_1804272,_1804274,_1804276)).
'blocked_stream.filter'(_1804346,_1804760,_1804766,_1804772):-hnf('Prelude..'(partcall(1,'stream.unstream',[]),'Prelude..'(partcall(1,'stream.filter_s',[_1804346]),partcall(1,'stream.stream',[]))),_1804760,_1804766,_1804772).

'stream.filter_s'(_1806624,_1806626,_1806628,_1806630,_1806632):-freeze(_1806630,'blocked_stream.filter_s'(_1806624,_1806626,_1806628,_1806630,_1806632)).
'blocked_stream.filter_s'(_1806710,_1806728,_1807338,_1807344,_1807350):-hnf(_1806728,_1808274,_1807344,_1808250),'blocked_stream.filter_s_2'(_1808274,_1806710,_1807338,_1808250,_1807350).

'blocked_stream.filter_s_2'(_1808566,_1808568,_1808570,_1808572,_1808574):-freeze(_1808572,'blocked_blocked_stream.filter_s_2'(_1808566,_1808568,_1808570,_1808572,_1808574)).
'blocked_blocked_stream.filter_s_2'('stream.Stream'(_1806836,_1806854),_1806710,'stream.Stream'(partcall(1,'stream.filter_s.next.32',[_1806836,_1806710]),_1806854),_1808938,_1808938):-!.
'blocked_blocked_stream.filter_s_2'('FAIL'(_1810042),_1806710,'FAIL'(_1810042),_1810056,_1810056):-nonvar(_1810042).

'stream.filter_s.next.32'(_1811050,_1811052,_1811054,_1811056,_1811058,_1811060):-freeze(_1811058,'blocked_stream.filter_s.next.32'(_1811050,_1811052,_1811054,_1811056,_1811058,_1811060)).
'blocked_stream.filter_s.next.32'(_1811146,_1811164,_1811182,_1813822,_1813828,_1813834):-hnf('Prelude.apply'(_1811164,_1811182),_1815120,_1813828,_1815084),'blocked_stream.filter_s.next.32_ComplexCase'(_1815120,_1811146,_1811164,_1811182,_1813822,_1815084,_1813834).

'blocked_stream.filter_s.next.32_ComplexCase'(_1815530,_1815532,_1815534,_1815536,_1815538,_1815540,_1815542):-freeze(_1815540,freeze(_1815530,'blocked_blocked_stream.filter_s.next.32_ComplexCase'(_1815530,_1815532,_1815534,_1815536,_1815538,_1815540,_1815542))).
'blocked_blocked_stream.filter_s.next.32_ComplexCase'('stream.Done',_1811146,_1811164,_1811182,'stream.Done',_1815886,_1815886).
'blocked_blocked_stream.filter_s.next.32_ComplexCase'('stream.Skip'(_1811528),_1811146,_1811164,_1811182,'stream.Skip'(_1811528),_1816808,_1816808).
'blocked_blocked_stream.filter_s.next.32_ComplexCase'('stream.Yield'(_1811710,_1811728),_1811146,_1811164,_1811182,_1819340,_1819346,_1819352):-!,makeShare(_1811710,_1818054),hnf('Prelude.apply'(_1811146,_1818054),_1821768,_1819346,_1821720),'blocked_blocked_stream.filter_s.next.32_ComplexCase_stream.Yield_ComplexCase'(_1821768,_1818054,_1811728,_1811146,_1811164,_1811182,_1819340,_1821720,_1819352).

'blocked_blocked_stream.filter_s.next.32_ComplexCase_stream.Yield_ComplexCase'(_1822410,_1822412,_1822414,_1822416,_1822418,_1822420,_1822422,_1822424,_1822426):-freeze(_1822424,freeze(_1822410,'blocked_blocked_blocked_stream.filter_s.next.32_ComplexCase_stream.Yield_ComplexCase'(_1822410,_1822412,_1822414,_1822416,_1822418,_1822420,_1822422,_1822424,_1822426))).
'blocked_blocked_blocked_stream.filter_s.next.32_ComplexCase_stream.Yield_ComplexCase'('Prelude.True',_1818054,_1811728,_1811146,_1811164,_1811182,'stream.Yield'(_1818054,_1811728),_1822798,_1822798).
'blocked_blocked_blocked_stream.filter_s.next.32_ComplexCase_stream.Yield_ComplexCase'('Prelude.False',_1818054,_1811728,_1811146,_1811164,_1811182,'stream.Skip'(_1811728),_1824264,_1824264):-!.
'blocked_blocked_blocked_stream.filter_s.next.32_ComplexCase_stream.Yield_ComplexCase'('FAIL'(_1825368),_1818054,_1811728,_1811146,_1811164,_1811182,'FAIL'(_1825368),_1825382,_1825382).
'blocked_blocked_stream.filter_s.next.32_ComplexCase'('FAIL'(_1825468),_1811146,_1811164,_1811182,'FAIL'(_1825468),_1825482,_1825482).

'stream.return_s'(_1826200,_1826202,_1826204,_1826206):-freeze(_1826204,'blocked_stream.return_s'(_1826200,_1826202,_1826204,_1826206)).
'blocked_stream.return_s'(_1826276,'stream.Stream'(partcall(1,'stream.return_s.next.42',[_1826276]),'Prelude.True'),_1826536,_1826536).

'stream.return_s.next.42'(_1828326,_1828328,_1828330,_1828332,_1828334):-freeze(_1828332,'blocked_stream.return_s.next.42'(_1828326,_1828328,_1828330,_1828332,_1828334)).
'blocked_stream.return_s.next.42'(_1828412,_1828430,_1829000,_1829006,_1829012):-hnf(_1828430,_1830224,_1829006,_1830200),'blocked_stream.return_s.next.42_2'(_1830224,_1828412,_1829000,_1830200,_1829012).

'blocked_stream.return_s.next.42_2'(_1830564,_1830566,_1830568,_1830570,_1830572):-freeze(_1830570,'blocked_blocked_stream.return_s.next.42_2'(_1830564,_1830566,_1830568,_1830570,_1830572)).
'blocked_blocked_stream.return_s.next.42_2'('Prelude.True',_1828412,'stream.Yield'(_1828412,'Prelude.False'),_1830906,_1830906).
'blocked_blocked_stream.return_s.next.42_2'('Prelude.False',_1828412,'stream.Done',_1831908,_1831908):-!.
'blocked_blocked_stream.return_s.next.42_2'('FAIL'(_1832386),_1828412,'FAIL'(_1832386),_1832400,_1832400):-nonvar(_1832386).

'stream.enumFromTo_s'(_1833250,_1833252,_1833254,_1833256,_1833258,_1833260,_1833262):-freeze(_1833260,'blocked_stream.enumFromTo_s'(_1833250,_1833252,_1833254,_1833256,_1833258,_1833260,_1833262)).
'blocked_stream.enumFromTo_s'(_1833356,_1833374,_1833392,_1833410,'stream.Stream'(partcall(1,'stream.enumFromTo_s.next.48',[_1833374,_1833356,_1833410]),_1833392),_1833788,_1833788).

'stream.enumFromTo_s.next.48'(_1836152,_1836154,_1836156,_1836158,_1836160,_1836162,_1836164):-freeze(_1836162,'blocked_stream.enumFromTo_s.next.48'(_1836152,_1836154,_1836156,_1836158,_1836160,_1836162,_1836164)).
'blocked_stream.enumFromTo_s.next.48'(_1836258,_1836276,_1836294,_1836312,_1839054,_1839060,_1839066):-makeShare(_1836312,_1837460),hnf('Prelude.apply'('Prelude.apply'('Prelude.>'(_1836294),_1837460),_1836258),_1840510,_1839060,_1840468),'blocked_stream.enumFromTo_s.next.48_ComplexCase'(_1840510,_1836258,_1836276,_1836294,_1837460,_1839054,_1840468,_1839066).

'blocked_stream.enumFromTo_s.next.48_ComplexCase'(_1840958,_1840960,_1840962,_1840964,_1840966,_1840968,_1840970,_1840972):-freeze(_1840970,freeze(_1840958,'blocked_blocked_stream.enumFromTo_s.next.48_ComplexCase'(_1840958,_1840960,_1840962,_1840964,_1840966,_1840968,_1840970,_1840972))).
'blocked_blocked_stream.enumFromTo_s.next.48_ComplexCase'('Prelude.True',_1836258,_1836276,_1836294,_1837460,'stream.Done',_1841336,_1841336).
'blocked_blocked_stream.enumFromTo_s.next.48_ComplexCase'('Prelude.False',_1836258,_1836276,_1836294,_1837460,'stream.Yield'(_1842488,'Prelude.apply'('Prelude.succ'(_1836276),_1842488)),_1842366,_1842372):-!,makeShare(_1837460,_1842488),_1842366=_1842372.
'blocked_blocked_stream.enumFromTo_s.next.48_ComplexCase'('FAIL'(_1844002),_1836258,_1836276,_1836294,_1837460,'FAIL'(_1844002),_1844016,_1844016).

'stream.enumFromTo__s'(_1844922,_1844924,_1844926,_1844928,_1844930):-freeze(_1844928,'blocked_stream.enumFromTo__s'(_1844922,_1844924,_1844926,_1844928,_1844930)).
'blocked_stream.enumFromTo__s'(_1845008,_1845026,'stream.Stream'(partcall(1,'stream.enumFromTo__s.next.52',[_1845026]),_1845008),_1845272,_1845272).

'stream.enumFromTo__s.next.52'(_1847304,_1847306,_1847308,_1847310,_1847312):-freeze(_1847310,'blocked_stream.enumFromTo__s.next.52'(_1847304,_1847306,_1847308,_1847310,_1847312)).
'blocked_stream.enumFromTo__s.next.52'(_1847390,_1847408,_1849876,_1849882,_1849888):-makeShare(_1847408,_1848296),hnf('Prelude.apply'('Prelude.apply'('Prelude._impl\'23\'3E\'23Prelude.Ord\'23Prelude.Int',_1848296),_1847390),_1851340,_1849882,_1851310),'blocked_stream.enumFromTo__s.next.52_ComplexCase'(_1851340,_1847390,_1848296,_1849876,_1851310,_1849888).

'blocked_stream.enumFromTo__s.next.52_ComplexCase'(_1851790,_1851792,_1851794,_1851796,_1851798,_1851800):-freeze(_1851798,freeze(_1851790,'blocked_blocked_stream.enumFromTo__s.next.52_ComplexCase'(_1851790,_1851792,_1851794,_1851796,_1851798,_1851800))).
'blocked_blocked_stream.enumFromTo__s.next.52_ComplexCase'('Prelude.True',_1847390,_1848296,'stream.Done',_1852148,_1852148).
'blocked_blocked_stream.enumFromTo__s.next.52_ComplexCase'('Prelude.False',_1847390,_1848296,'stream.Yield'(_1853126,'Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_1853126,1)),_1853044,_1853050):-!,makeShare(_1848296,_1853126),_1853044=_1853050.
'blocked_blocked_stream.enumFromTo__s.next.52_ComplexCase'('FAIL'(_1854564),_1847390,_1848296,'FAIL'(_1854564),_1854578,_1854578).

'stream.foldr_s'(_1855252,_1855254,_1855256,_1855258,_1855260,_1855262):-freeze(_1855260,'blocked_stream.foldr_s'(_1855252,_1855254,_1855256,_1855258,_1855260,_1855262)).
'blocked_stream.foldr_s'(_1855348,_1855366,_1855384,_1855980,_1855986,_1855992):-hnf(_1855384,_1856900,_1855986,_1856870),'blocked_stream.foldr_s_3'(_1856900,_1855348,_1855366,_1855980,_1856870,_1855992).

'blocked_stream.foldr_s_3'(_1857188,_1857190,_1857192,_1857194,_1857196,_1857198):-freeze(_1857196,'blocked_blocked_stream.foldr_s_3'(_1857188,_1857190,_1857192,_1857194,_1857196,_1857198)).
'blocked_blocked_stream.foldr_s_3'('stream.Stream'(_1855492,_1855510),_1855348,_1855366,_1857564,_1857570,_1857576):-!,hnf('stream.foldr_s.go.56'(_1855366,_1855492,_1855348,_1855510),_1857564,_1857570,_1857576).
'blocked_blocked_stream.foldr_s_3'('FAIL'(_1858682),_1855348,_1855366,'FAIL'(_1858682),_1858696,_1858696):-nonvar(_1858682).

'stream.foldr_s.go.56'(_1859590,_1859592,_1859594,_1859596,_1859598,_1859600,_1859602):-freeze(_1859600,'blocked_stream.foldr_s.go.56'(_1859590,_1859592,_1859594,_1859596,_1859598,_1859600,_1859602)).
'blocked_stream.foldr_s.go.56'(_1859696,_1859714,_1859732,_1859750,_1862894,_1862900,_1862906):-makeShare(_1859714,_1861638),hnf('Prelude.apply'(_1861638,_1859750),_1864098,_1862900,_1864056),'blocked_stream.foldr_s.go.56_ComplexCase'(_1864098,_1859696,_1861638,_1859732,_1859750,_1862894,_1864056,_1862906).

'blocked_stream.foldr_s.go.56_ComplexCase'(_1864504,_1864506,_1864508,_1864510,_1864512,_1864514,_1864516,_1864518):-freeze(_1864516,freeze(_1864504,'blocked_blocked_stream.foldr_s.go.56_ComplexCase'(_1864504,_1864506,_1864508,_1864510,_1864512,_1864514,_1864516,_1864518))).
'blocked_blocked_stream.foldr_s.go.56_ComplexCase'('stream.Done',_1859696,_1861638,_1859732,_1859750,_1864864,_1864870,_1864876):-hnf(_1859696,_1864864,_1864870,_1864876).
'blocked_blocked_stream.foldr_s.go.56_ComplexCase'('stream.Skip'(_1860082),_1859696,_1861638,_1859732,_1859750,_1865780,_1865786,_1865792):-hnf('stream.foldr_s.go.56'(_1859696,_1861638,_1859732,_1860082),_1865780,_1865786,_1865792).
'blocked_blocked_stream.foldr_s.go.56_ComplexCase'('stream.Yield'(_1860462,_1860480),_1859696,_1861638,_1859732,_1859750,_1867324,_1867330,_1867336):-!,makeShare(_1859732,_1867596),hnf('Prelude.apply'('Prelude.apply'(_1867596,_1860462),'stream.foldr_s.go.56'(_1859696,_1861638,_1867596,_1860480)),_1867324,_1867330,_1867336).
'blocked_blocked_stream.foldr_s.go.56_ComplexCase'('FAIL'(_1869472),_1859696,_1861638,_1859732,_1859750,'FAIL'(_1869472),_1869486,_1869486).

'stream.foldl_s'(_1870176,_1870178,_1870180,_1870182,_1870184,_1870186):-freeze(_1870184,'blocked_stream.foldl_s'(_1870176,_1870178,_1870180,_1870182,_1870184,_1870186)).
'blocked_stream.foldl_s'(_1870272,_1870290,_1870308,_1870904,_1870910,_1870916):-hnf(_1870308,_1871824,_1870910,_1871794),'blocked_stream.foldl_s_3'(_1871824,_1870272,_1870290,_1870904,_1871794,_1870916).

'blocked_stream.foldl_s_3'(_1872112,_1872114,_1872116,_1872118,_1872120,_1872122):-freeze(_1872120,'blocked_blocked_stream.foldl_s_3'(_1872112,_1872114,_1872116,_1872118,_1872120,_1872122)).
'blocked_blocked_stream.foldl_s_3'('stream.Stream'(_1870416,_1870434),_1870272,_1870290,_1872488,_1872494,_1872500):-!,hnf('stream.foldl_s.go.66'(_1870416,_1870272,_1870290,_1870434),_1872488,_1872494,_1872500).
'blocked_blocked_stream.foldl_s_3'('FAIL'(_1873606),_1870272,_1870290,'FAIL'(_1873606),_1873620,_1873620):-nonvar(_1873606).

'stream.foldl_s.go.66'(_1874514,_1874516,_1874518,_1874520,_1874522,_1874524,_1874526):-freeze(_1874524,'blocked_stream.foldl_s.go.66'(_1874514,_1874516,_1874518,_1874520,_1874522,_1874524,_1874526)).
'blocked_stream.foldl_s.go.66'(_1874620,_1874638,_1874656,_1874674,_1877818,_1877824,_1877830):-makeShare(_1874620,_1876562),hnf('Prelude.apply'(_1876562,_1874674),_1879022,_1877824,_1878980),'blocked_stream.foldl_s.go.66_ComplexCase'(_1879022,_1876562,_1874638,_1874656,_1874674,_1877818,_1878980,_1877830).

'blocked_stream.foldl_s.go.66_ComplexCase'(_1879428,_1879430,_1879432,_1879434,_1879436,_1879438,_1879440,_1879442):-freeze(_1879440,freeze(_1879428,'blocked_blocked_stream.foldl_s.go.66_ComplexCase'(_1879428,_1879430,_1879432,_1879434,_1879436,_1879438,_1879440,_1879442))).
'blocked_blocked_stream.foldl_s.go.66_ComplexCase'('stream.Done',_1876562,_1874638,_1874656,_1874674,_1879788,_1879794,_1879800):-hnf(_1874656,_1879788,_1879794,_1879800).
'blocked_blocked_stream.foldl_s.go.66_ComplexCase'('stream.Skip'(_1875006),_1876562,_1874638,_1874656,_1874674,_1880704,_1880710,_1880716):-hnf('stream.foldl_s.go.66'(_1876562,_1874638,_1874656,_1875006),_1880704,_1880710,_1880716).
'blocked_blocked_stream.foldl_s.go.66_ComplexCase'('stream.Yield'(_1875386,_1875404),_1876562,_1874638,_1874656,_1874674,_1882248,_1882254,_1882260):-!,makeShare(_1874638,_1882532),hnf('stream.foldl_s.go.66'(_1876562,_1882532,'Prelude.apply'('Prelude.apply'(_1882532,_1874656),_1875386),_1875404),_1882248,_1882254,_1882260).
'blocked_blocked_stream.foldl_s.go.66_ComplexCase'('FAIL'(_1884408),_1876562,_1874638,_1874656,_1874674,'FAIL'(_1884408),_1884422,_1884422).

'stream.append_s'(_1885148,_1885150,_1885152,_1885154,_1885156):-freeze(_1885154,'blocked_stream.append_s'(_1885148,_1885150,_1885152,_1885154,_1885156)).
'blocked_stream.append_s'(_1885234,_1885252,_1886146,_1886152,_1886158):-hnf(_1885234,_1887082,_1886152,_1887058),'blocked_stream.append_s_1'(_1887082,_1885252,_1886146,_1887058,_1886158).

'blocked_stream.append_s_1'(_1887374,_1887376,_1887378,_1887380,_1887382):-freeze(_1887380,'blocked_blocked_stream.append_s_1'(_1887374,_1887376,_1887378,_1887380,_1887382)).
'blocked_blocked_stream.append_s_1'('stream.Stream'(_1885360,_1885378),_1885252,_1887966,_1887972,_1887978):-!,hnf(_1885252,_1889694,_1887972,_1889664),'blocked_blocked_stream.append_s_1_stream.Stream_3'(_1889694,_1885360,_1885378,_1887966,_1889664,_1887978).

'blocked_blocked_stream.append_s_1_stream.Stream_3'(_1890150,_1890152,_1890154,_1890156,_1890158,_1890160):-freeze(_1890158,'blocked_blocked_blocked_stream.append_s_1_stream.Stream_3'(_1890150,_1890152,_1890154,_1890156,_1890158,_1890160)).
'blocked_blocked_blocked_stream.append_s_1_stream.Stream_3'('stream.Stream'(_1885498,_1885516),_1885360,_1885378,'stream.Stream'(partcall(1,'stream.append_s.next.76',[_1885360,_1885498,_1885516]),'Prelude.Left'(_1885378)),_1890532,_1890532):-!.
'blocked_blocked_blocked_stream.append_s_1_stream.Stream_3'('FAIL'(_1892144),_1885360,_1885378,'FAIL'(_1892144),_1892158,_1892158):-nonvar(_1892144).
'blocked_blocked_stream.append_s_1'('FAIL'(_1892224),_1885252,'FAIL'(_1892224),_1892238,_1892238):-nonvar(_1892224).

'stream.append_s.next.76'(_1893232,_1893234,_1893236,_1893238,_1893240,_1893242,_1893244):-freeze(_1893242,'blocked_stream.append_s.next.76'(_1893232,_1893234,_1893236,_1893238,_1893240,_1893242,_1893244)).
'blocked_stream.append_s.next.76'(_1893338,_1893356,_1893374,_1893392,_1895734,_1895740,_1895746):-hnf(_1893392,_1896998,_1895740,_1896962),'blocked_stream.append_s.next.76_4'(_1896998,_1893338,_1893356,_1893374,_1895734,_1896962,_1895746).

'blocked_stream.append_s.next.76_4'(_1897342,_1897344,_1897346,_1897348,_1897350,_1897352,_1897354):-freeze(_1897352,'blocked_blocked_stream.append_s.next.76_4'(_1897342,_1897344,_1897346,_1897348,_1897350,_1897352,_1897354)).
'blocked_blocked_stream.append_s.next.76_4'('Prelude.Left'(_1893500),_1893338,_1893356,_1893374,_1899066,_1899072,_1899078):-hnf('Prelude.apply'(_1893374,_1893500),_1901128,_1899072,_1901086),'blocked_blocked_stream.append_s.next.76_4_Prelude.Left_ComplexCase'(_1901128,_1893500,_1893338,_1893356,_1893374,_1899066,_1901086,_1899078).

'blocked_blocked_stream.append_s.next.76_4_Prelude.Left_ComplexCase'(_1901678,_1901680,_1901682,_1901684,_1901686,_1901688,_1901690,_1901692):-freeze(_1901690,freeze(_1901678,'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Left_ComplexCase'(_1901678,_1901680,_1901682,_1901684,_1901686,_1901688,_1901690,_1901692))).
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Left_ComplexCase'('stream.Done',_1893500,_1893338,_1893356,_1893374,'stream.Skip'('Prelude.Right'(_1893338)),_1902044,_1902044).
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Left_ComplexCase'('stream.Skip'(_1893998),_1893500,_1893338,_1893356,_1893374,'stream.Skip'('Prelude.Left'(_1893998)),_1903436,_1903436).
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Left_ComplexCase'('stream.Yield'(_1894260,_1894278),_1893500,_1893338,_1893356,_1893374,'stream.Yield'(_1894260,'Prelude.Left'(_1894278)),_1904904,_1904904):-!.
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Left_ComplexCase'('FAIL'(_1906274),_1893500,_1893338,_1893356,_1893374,'FAIL'(_1906274),_1906288,_1906288).
'blocked_blocked_stream.append_s.next.76_4'('Prelude.Right'(_1894618),_1893338,_1893356,_1893374,_1907902,_1907908,_1907914):-!,hnf('Prelude.apply'(_1893356,_1894618),_1909994,_1907908,_1909952),'blocked_blocked_stream.append_s.next.76_4_Prelude.Right_ComplexCase'(_1909994,_1894618,_1893338,_1893356,_1893374,_1907902,_1909952,_1907914).

'blocked_blocked_stream.append_s.next.76_4_Prelude.Right_ComplexCase'(_1910568,_1910570,_1910572,_1910574,_1910576,_1910578,_1910580,_1910582):-freeze(_1910580,freeze(_1910568,'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Right_ComplexCase'(_1910568,_1910570,_1910572,_1910574,_1910576,_1910578,_1910580,_1910582))).
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Right_ComplexCase'('stream.Done',_1894618,_1893338,_1893356,_1893374,'stream.Done',_1910934,_1910934).
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Right_ComplexCase'('stream.Skip'(_1894970),_1894618,_1893338,_1893356,_1893374,'stream.Skip'('Prelude.Right'(_1894970)),_1912070,_1912070).
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Right_ComplexCase'('stream.Yield'(_1895232,_1895250),_1894618,_1893338,_1893356,_1893374,'stream.Yield'(_1895232,'Prelude.Right'(_1895250)),_1913550,_1913550):-!.
'blocked_blocked_blocked_stream.append_s.next.76_4_Prelude.Right_ComplexCase'('FAIL'(_1914932),_1894618,_1893338,_1893356,_1893374,'FAIL'(_1914932),_1914946,_1914946).
'blocked_blocked_stream.append_s.next.76_4'('FAIL'(_1915024),_1893338,_1893356,_1893374,'FAIL'(_1915024),_1915038,_1915038):-nonvar(_1915024).

'stream.zip_s'(_1915652,_1915654,_1915656,_1915658,_1915660):-freeze(_1915658,'blocked_stream.zip_s'(_1915652,_1915654,_1915656,_1915658,_1915660)).
'blocked_stream.zip_s'(_1915738,_1915756,_1916712,_1916718,_1916724):-hnf(_1915738,_1917540,_1916718,_1917516),'blocked_stream.zip_s_1'(_1917540,_1915756,_1916712,_1917516,_1916724).

'blocked_stream.zip_s_1'(_1917814,_1917816,_1917818,_1917820,_1917822):-freeze(_1917820,'blocked_blocked_stream.zip_s_1'(_1917814,_1917816,_1917818,_1917820,_1917822)).
'blocked_blocked_stream.zip_s_1'('stream.Stream'(_1915864,_1915882),_1915756,_1918388,_1918394,_1918400):-!,hnf(_1915756,_1920008,_1918394,_1919978),'blocked_blocked_stream.zip_s_1_stream.Stream_3'(_1920008,_1915864,_1915882,_1918388,_1919978,_1918400).

'blocked_blocked_stream.zip_s_1_stream.Stream_3'(_1920446,_1920448,_1920450,_1920452,_1920454,_1920456):-freeze(_1920454,'blocked_blocked_blocked_stream.zip_s_1_stream.Stream_3'(_1920446,_1920448,_1920450,_1920452,_1920454,_1920456)).
'blocked_blocked_blocked_stream.zip_s_1_stream.Stream_3'('stream.Stream'(_1916002,_1916020),_1915864,_1915882,'stream.Stream'(partcall(1,'stream.zip_s.next.94',[_1915864,_1916002]),'Prelude.(,,)'(_1915882,_1916020,'Prelude.Nothing')),_1920828,_1920828):-!.
'blocked_blocked_blocked_stream.zip_s_1_stream.Stream_3'('FAIL'(_1922566),_1915864,_1915882,'FAIL'(_1922566),_1922580,_1922580):-nonvar(_1922566).
'blocked_blocked_stream.zip_s_1'('FAIL'(_1922646),_1915756,'FAIL'(_1922646),_1922660,_1922660):-nonvar(_1922646).

'stream.zip_s.next.94'(_1923546,_1923548,_1923550,_1923552,_1923554,_1923556):-freeze(_1923554,'blocked_stream.zip_s.next.94'(_1923546,_1923548,_1923550,_1923552,_1923554,_1923556)).
'blocked_stream.zip_s.next.94'(_1923642,_1923660,_1923678,_1926790,_1926796,_1926802):-hnf(_1923678,_1927926,_1926796,_1927896),'blocked_stream.zip_s.next.94_3'(_1927926,_1923642,_1923660,_1926790,_1927896,_1926802).

'blocked_stream.zip_s.next.94_3'(_1928250,_1928252,_1928254,_1928256,_1928258,_1928260):-freeze(_1928258,'blocked_blocked_stream.zip_s.next.94_3'(_1928250,_1928252,_1928254,_1928256,_1928258,_1928260)).
'blocked_blocked_stream.zip_s.next.94_3'('Prelude.(,,)'(_1923786,_1923804,_1923822),_1923642,_1923660,_1928860,_1928866,_1928872):-!,hnf(_1923822,_1930770,_1928866,_1930728),'blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3'(_1930770,_1923786,_1923804,_1923642,_1923660,_1928860,_1930728,_1928872).

'blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3'(_1931254,_1931256,_1931258,_1931260,_1931262,_1931264,_1931266,_1931268):-freeze(_1931266,'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3'(_1931254,_1931256,_1931258,_1931260,_1931262,_1931264,_1931266,_1931268)).
'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3'('Prelude.Nothing',_1923786,_1923804,_1923642,_1923660,_1933206,_1933212,_1933218):-hnf('Prelude.apply'(_1923660,_1923786),_1936086,_1933212,_1936044),'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Nothing_ComplexCase'(_1936086,_1923786,_1923804,_1923642,_1923660,_1933206,_1936044,_1933218).

'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Nothing_ComplexCase'(_1936774,_1936776,_1936778,_1936780,_1936782,_1936784,_1936786,_1936788):-freeze(_1936786,freeze(_1936774,'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Nothing_ComplexCase'(_1936774,_1936776,_1936778,_1936780,_1936782,_1936784,_1936786,_1936788))).
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Nothing_ComplexCase'('stream.Done',_1923786,_1923804,_1923642,_1923660,'stream.Done',_1937140,_1937140).
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Nothing_ComplexCase'('stream.Skip'(_1924276),_1923786,_1923804,_1923642,_1923660,'stream.Skip'('Prelude.(,,)'(_1924276,_1923804,'Prelude.Nothing')),_1938408,_1938408).
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Nothing_ComplexCase'('stream.Yield'(_1924684,_1924702),_1923786,_1923804,_1923642,_1923660,'stream.Skip'('Prelude.(,,)'(_1924702,_1923804,'Prelude.Just'(_1924684))),_1940278,_1940278):-!.
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Nothing_ComplexCase'('FAIL'(_1942040),_1923786,_1923804,_1923642,_1923660,'FAIL'(_1942040),_1942054,_1942054).
'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3'('Prelude.Just'(_1925188),_1923786,_1923804,_1923642,_1923660,_1944172,_1944178,_1944184):-!,hnf('Prelude.apply'(_1923642,_1923804),_1946968,_1944178,_1946920),'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Just_ComplexCase'(_1946968,_1925188,_1923786,_1923804,_1923642,_1923660,_1944172,_1946920,_1944184).

'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Just_ComplexCase'(_1947658,_1947660,_1947662,_1947664,_1947666,_1947668,_1947670,_1947672,_1947674):-freeze(_1947672,freeze(_1947658,'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Just_ComplexCase'(_1947658,_1947660,_1947662,_1947664,_1947666,_1947668,_1947670,_1947672,_1947674))).
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Just_ComplexCase'('stream.Done',_1925188,_1923786,_1923804,_1923642,_1923660,'stream.Done',_1948034,_1948034).
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Just_ComplexCase'('stream.Skip'(_1925540),_1925188,_1923786,_1923804,_1923642,_1923660,'stream.Skip'('Prelude.(,,)'(_1923786,_1925540,'Prelude.Just'(_1925188))),_1949354,_1949354).
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Just_ComplexCase'('stream.Yield'(_1926014,_1926032),_1925188,_1923786,_1923804,_1923642,_1923660,'stream.Yield'('Prelude.(,)'(_1925188,_1926014),'Prelude.(,,)'(_1923786,_1926032,'Prelude.Nothing')),_1951370,_1951370):-!.
'blocked_blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3_Prelude.Just_ComplexCase'('FAIL'(_1953478),_1925188,_1923786,_1923804,_1923642,_1923660,'FAIL'(_1953478),_1953492,_1953492).
'blocked_blocked_blocked_stream.zip_s.next.94_3_Prelude.(,,)_3'('FAIL'(_1953578),_1923786,_1923804,_1923642,_1923660,'FAIL'(_1953578),_1953592,_1953592):-nonvar(_1953578).
'blocked_blocked_stream.zip_s.next.94_3'('FAIL'(_1953674),_1923642,_1923660,'FAIL'(_1953674),_1953688,_1953688):-nonvar(_1953674).

:-costCenters(['']).




%%%%% Number of shared variables: 10
