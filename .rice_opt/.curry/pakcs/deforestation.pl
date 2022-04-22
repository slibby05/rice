%PAKCS2.2 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Prelude').

:-curryModule(deforestation).


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('deforestation.build',build,1,'deforestation.build',nofix,'FuncType'('FuncType'('FuncType'(_1615676,'FuncType'('TCons'([],[_1615676]),'TCons'([],[_1615676]))),'FuncType'('TCons'([],[_1615736]),_1615666)),_1615666)).
functiontype('deforestation.build_fold',build_fold,3,'deforestation.build_fold',nofix,'FuncType'('FuncType'('FuncType'(_1627326,'FuncType'('TCons'([],[_1627326]),'TCons'([],[_1627326]))),'FuncType'(_1627374,'FuncType'(_1627392,_1627392))),'FuncType'('FuncType'('TCons'([],[_1627428]),_1627392),'FuncType'('TCons'([],[_1627374]),_1627392)))).
functiontype('deforestation.bf',bf,5,'deforestation.bf',nofix,'FuncType'('FuncType'(_1638970,'FuncType'(_1638988,'FuncType'(_1639006,_1639006))),'FuncType'('FuncType'(_1639030,_1639006),'FuncType'(_1638970,'FuncType'(_1639030,'FuncType'('TCons'([],[_1638988]),_1639006)))))).
functiontype('deforestation.mk_build',mk_build,5,'deforestation.mk_build',nofix,'FuncType'('FuncType'(_1650620,'FuncType'(_1650638,_1650640)),'FuncType'('FuncType'(_1650674,_1650620),'FuncType'('FuncType'(_1650698,_1650638),'FuncType'(_1650674,'FuncType'(_1650698,_1650640)))))).
functiontype('deforestation.map',map,1,'deforestation.map',nofix,'FuncType'('FuncType'(_1662240,_1662242),'FuncType'('TCons'([],[_1662240]),'TCons'([],[_1662242])))).
functiontype('deforestation.map_mkc',map_mkc,4,'deforestation.map_mkc',nofix,'FuncType'('FuncType'(_1673836,_1673838),'FuncType'('FuncType'(_1673838,'FuncType'(_1673878,_1673878)),'FuncType'(_1673836,'FuncType'(_1673878,_1673878))))).
functiontype('deforestation.filter',filter,1,'deforestation.filter',nofix,'FuncType'('FuncType'(_1685438,'TCons'('Prelude.Bool',[])),'FuncType'('TCons'([],[_1685438]),'TCons'([],[_1685438])))).
functiontype('deforestation.filter_mkc',filter_mkc,4,'deforestation.filter_mkc',nofix,'FuncType'('FuncType'(_1697118,'TCons'('Prelude.Bool',[])),'FuncType'('FuncType'(_1697118,'FuncType'(_1697226,_1697226)),'FuncType'(_1697118,'FuncType'(_1697226,_1697226))))).
functiontype('deforestation.++',++,2,'deforestation.++',nofix,'FuncType'('TCons'([],[_1708830]),'FuncType'('TCons'([],[_1708830]),'TCons'([],[_1708830])))).
functiontype('deforestation.append_build',append_build,4,'deforestation.append_build',nofix,'FuncType'('TCons'([],[_1720450]),'FuncType'('TCons'([],[_1720450]),'FuncType'('FuncType'('TCons'([],[_1720450]),'FuncType'(_1720510,_1720510)),'FuncType'(_1720510,_1720510))))).
functiontype('deforestation.concat',concat,0,'deforestation.concat',nofix,'FuncType'('TCons'([],['TCons'([],[_1732082])]),'TCons'([],[_1732082]))).
functiontype('deforestation.concat_mkc',concat_mkc,3,'deforestation.concat_mkc',nofix,'FuncType'('FuncType'(_1743666,'FuncType'(_1743684,_1743684)),'FuncType'('TCons'([],[_1743666]),'FuncType'(_1743684,_1743684)))).
functiontype('deforestation.repeat',repeat,1,'deforestation.repeat',nofix,'FuncType'(_1755250,'TCons'([],[_1755250]))).
functiontype('deforestation.repeat_build',repeat_build,3,'deforestation.repeat_build',nofix,'FuncType'(_1766840,'FuncType'('FuncType'(_1766840,'FuncType'(_1766870,_1766870)),'FuncType'(_1766888,_1766870)))).
functiontype('deforestation.zip',zip,2,'deforestation.zip',nofix,'FuncType'('TCons'([],[_1778424]),'FuncType'('TCons'([],[_1778454]),'TCons'([],['TCons'('Prelude.(,)',[_1778424,_1778454])])))).
functiontype('deforestation.zip_build',zip_build,4,'deforestation.zip_build',nofix,'FuncType'('TCons'([],[_1790110]),'FuncType'('TCons'([],[_1790140]),'FuncType'('FuncType'('TCons'('Prelude.(,)',[_1790110,_1790140]),'FuncType'(_1790242,_1790242)),'FuncType'(_1790242,_1790242))))).
functiontype('deforestation.zipWith',zipWith,3,'deforestation.zipWith',nofix,'FuncType'('FuncType'(_1801802,'FuncType'(_1801820,_1801822)),'FuncType'('TCons'([],[_1801802]),'FuncType'('TCons'([],[_1801820]),'TCons'([],[_1801822]))))).
functiontype('deforestation.zipWith_build',zipWith_build,5,'deforestation.zipWith_build',nofix,'FuncType'('FuncType'(_1813470,'FuncType'(_1813488,_1813490)),'FuncType'('TCons'([],[_1813470]),'FuncType'('TCons'([],[_1813488]),'FuncType'('FuncType'(_1813490,'FuncType'(_1813566,_1813566)),'FuncType'(_1813566,_1813566)))))).
functiontype('deforestation.lookup',lookup,2,'deforestation.lookup',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_1825240]),'FuncType'(_1825240,'FuncType'('TCons'([],['TCons'('Prelude.(,)',[_1825240,_1825348])]),'TCons'('Prelude.Maybe',[_1825348]))))).
functiontype('deforestation.lookup_fold',lookup_fold,4,'deforestation.lookup_fold',nofix,'FuncType'('TCons'('Prelude._Dict\'23Eq',[_1837136]),'FuncType'(_1837136,'FuncType'('TCons'('Prelude.(,)',[_1837136,_1837232]),'FuncType'('TCons'('Prelude.Maybe',[_1837232]),'TCons'('Prelude.Maybe',[_1837232])))))).
functiontype('deforestation.iterate',iterate,2,'deforestation.iterate',nofix,'FuncType'('FuncType'(_1848972,_1848972),'FuncType'(_1848972,'TCons'([],[_1848972])))).
functiontype('deforestation.iterate_build',iterate_build,4,'deforestation.iterate_build',nofix,'FuncType'('FuncType'(_1860580,_1860580),'FuncType'(_1860580,'FuncType'('FuncType'(_1860580,'FuncType'(_1860616,_1860616)),'FuncType'(_1860634,_1860616))))).
functiontype('deforestation.enumFrom_',enumFrom_,1,'deforestation.enumFrom_',nofix,'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('deforestation.enumFromThen_',enumFromThen_,2,'deforestation.enumFromThen_',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])))).
functiontype('deforestation.enumFromTo_',enumFromTo_,2,'deforestation.enumFromTo_',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])))).
functiontype('deforestation.enumFromTo_build',enumFromTo_build,4,'deforestation.enumFromTo_build',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])]))),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])])))))).
functiontype('deforestation.enumFromThenTo_',enumFromThenTo_,3,'deforestation.enumFromThenTo_',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])]))))).
functiontype('deforestation.enumFromThenTo_build',enumFromThenTo_build,5,'deforestation.enumFromThenTo_build',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])]))),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Prelude.Int',[])]))))))).
functiontype('deforestation.length',length,0,'deforestation.length',nofix,'FuncType'('TCons'([],[_1943834]),'TCons'('Prelude.Int',[]))).
functiontype('deforestation.length_fold',length_fold,2,'deforestation.length_fold',nofix,'FuncType'(_1955478,'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])))).
functiontype('deforestation.null',null,0,'deforestation.null',nofix,'FuncType'('TCons'([],[_1967170]),'TCons'('Prelude.Bool',[]))).
functiontype('deforestation.null_fold',null_fold,2,'deforestation.null_fold',nofix,'FuncType'(_1978808,'FuncType'(_1978826,'TCons'('Prelude.Bool',[])))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'deforestation.build'(_1995442,_1995444,_1995446,_1995448):-freeze(_1995446,'blocked_deforestation.build'(_1995442,_1995444,_1995446,_1995448)).
'blocked_deforestation.build'(_1995518,_1995852,_1995858,_1995864):-hnf('Prelude.apply'('Prelude.apply'(_1995518,'[|]'),[]),_1995852,_1995858,_1995864).

'deforestation.build_fold'(_1997682,_1997684,_1997686,_1997688,_1997690,_1997692):-freeze(_1997690,'blocked_deforestation.build_fold'(_1997682,_1997684,_1997686,_1997688,_1997690,_1997692)).
'blocked_deforestation.build_fold'(_1997778,_1997796,_1997814,_1998360,_1998366,_1998372):-hnf('Prelude.foldr'('Prelude.apply'(_1997778,'[|]'),'Prelude.apply'(_1997796,[]),_1997814),_1998360,_1998366,_1998372).

'deforestation.bf'(_2000454,_2000456,_2000458,_2000460,_2000462,_2000464,_2000466,_2000468):-freeze(_2000466,'blocked_deforestation.bf'(_2000454,_2000456,_2000458,_2000460,_2000462,_2000464,_2000466,_2000468)).
'blocked_deforestation.bf'(_2000570,_2000588,_2000606,_2000624,_2000642,_2001160,_2001166,_2001172):-hnf('Prelude.foldr'('Prelude.apply'(_2000570,_2000606),'Prelude.apply'(_2000588,_2000624),_2000642),_2001160,_2001166,_2001172).

'deforestation.mk_build'(_2003630,_2003632,_2003634,_2003636,_2003638,_2003640,_2003642,_2003644):-freeze(_2003642,'blocked_deforestation.mk_build'(_2003630,_2003632,_2003634,_2003636,_2003638,_2003640,_2003642,_2003644)).
'blocked_deforestation.mk_build'(_2003746,_2003764,_2003782,_2003800,_2003818,_2004416,_2004422,_2004428):-hnf('Prelude.apply'('Prelude.apply'(_2003746,'Prelude.apply'(_2003764,_2003800)),'Prelude.apply'(_2003782,_2003818)),_2004416,_2004422,_2004428).

'deforestation.map'(_2006916,_2006918,_2006920,_2006922):-freeze(_2006920,'blocked_deforestation.map'(_2006916,_2006918,_2006920,_2006922)).
'blocked_deforestation.map'(_2006992,_2007246,_2007252,_2007258):-hnf(partcall(1,'deforestation.build_fold',[partcall(1,'Prelude.id',[]),partcall(3,'deforestation.map_mkc',[_2006992])]),_2007246,_2007252,_2007258).

'deforestation.map_mkc'(_2009050,_2009052,_2009054,_2009056,_2009058,_2009060,_2009062):-freeze(_2009060,'blocked_deforestation.map_mkc'(_2009050,_2009052,_2009054,_2009056,_2009058,_2009060,_2009062)).
'blocked_deforestation.map_mkc'(_2009156,_2009174,_2009192,_2009210,_2009662,_2009668,_2009674):-hnf('Prelude.apply'('Prelude.apply'(_2009174,'Prelude.apply'(_2009156,_2009192)),_2009210),_2009662,_2009668,_2009674).

'deforestation.filter'(_2011886,_2011888,_2011890,_2011892):-freeze(_2011890,'blocked_deforestation.filter'(_2011886,_2011888,_2011890,_2011892)).
'blocked_deforestation.filter'(_2011962,_2012216,_2012222,_2012228):-hnf(partcall(1,'deforestation.build_fold',[partcall(1,'Prelude.id',[]),partcall(3,'deforestation.filter_mkc',[_2011962])]),_2012216,_2012222,_2012228).

'deforestation.filter_mkc'(_2014164,_2014166,_2014168,_2014170,_2014172,_2014174,_2014176):-freeze(_2014174,'blocked_deforestation.filter_mkc'(_2014164,_2014166,_2014168,_2014170,_2014172,_2014174,_2014176)).
'blocked_deforestation.filter_mkc'(_2014270,_2014288,_2014306,_2014324,_2016290,_2016296,_2016302):-makeShare(_2014306,_2015170),hnf('Prelude.apply'(_2014270,_2015170),_2017638,_2016296,_2017596),'blocked_deforestation.filter_mkc_ComplexCase'(_2017638,_2014270,_2014288,_2015170,_2014324,_2016290,_2017596,_2016302).

'blocked_deforestation.filter_mkc_ComplexCase'(_2018068,_2018070,_2018072,_2018074,_2018076,_2018078,_2018080,_2018082):-freeze(_2018080,freeze(_2018068,'blocked_blocked_deforestation.filter_mkc_ComplexCase'(_2018068,_2018070,_2018072,_2018074,_2018076,_2018078,_2018080,_2018082))).
'blocked_blocked_deforestation.filter_mkc_ComplexCase'('Prelude.True',_2014270,_2014288,_2015170,_2014324,_2018440,_2018446,_2018452):-hnf('Prelude.apply'('Prelude.apply'(_2014288,_2015170),_2014324),_2018440,_2018446,_2018452).
'blocked_blocked_deforestation.filter_mkc_ComplexCase'('Prelude.False',_2014270,_2014288,_2015170,_2014324,_2019950,_2019956,_2019962):-!,hnf(_2014324,_2019950,_2019956,_2019962).
'blocked_blocked_deforestation.filter_mkc_ComplexCase'('FAIL'(_2020658),_2014270,_2014288,_2015170,_2014324,'FAIL'(_2020658),_2020672,_2020672).

'deforestation.++'(_2021496,_2021498,_2021500,_2021502,_2021504):-freeze(_2021502,'blocked_deforestation.++'(_2021496,_2021498,_2021500,_2021502,_2021504)).
'blocked_deforestation.++'(_2021582,_2021600,_2022000,_2022006,_2022012):-hnf('Prelude.apply'('deforestation.concat','deforestation.build'(partcall(2,'deforestation.append_build',[_2021600,_2021582]))),_2022000,_2022006,_2022012).

'deforestation.append_build'(_2024374,_2024376,_2024378,_2024380,_2024382,_2024384,_2024386):-freeze(_2024384,'blocked_deforestation.append_build'(_2024374,_2024376,_2024378,_2024380,_2024382,_2024384,_2024386)).
'blocked_deforestation.append_build'(_2024480,_2024498,_2024516,_2024534,_2025132,_2025138,_2025144):-makeShare(_2024516,_2025336),hnf('Prelude.apply'('Prelude.apply'(_2025336,_2024480),'Prelude.apply'('Prelude.apply'(_2025336,_2024498),_2024534)),_2025132,_2025138,_2025144).

'deforestation.concat'(_2027872,_2027874,_2027876):-freeze(_2027874,'blocked_deforestation.concat'(_2027872,_2027874,_2027876)).
'blocked_deforestation.concat'(_2028108,_2028114,_2028120):-hnf(partcall(1,'deforestation.build_fold',[partcall(1,'Prelude.id',[]),partcall(3,'deforestation.concat_mkc',[])]),_2028108,_2028114,_2028120).

'deforestation.concat_mkc'(_2029896,_2029898,_2029900,_2029902,_2029904,_2029906):-freeze(_2029904,'blocked_deforestation.concat_mkc'(_2029896,_2029898,_2029900,_2029902,_2029904,_2029906)).
'blocked_deforestation.concat_mkc'(_2029992,_2030010,_2030028,_2030254,_2030260,_2030266):-hnf('Prelude.foldr'(_2029992,_2030028,_2030010),_2030254,_2030260,_2030266).

'deforestation.repeat'(_2031956,_2031958,_2031960,_2031962):-freeze(_2031960,'blocked_deforestation.repeat'(_2031956,_2031958,_2031960,_2031962)).
'blocked_deforestation.repeat'(_2032032,_2032206,_2032212,_2032218):-hnf('deforestation.build'(partcall(2,'deforestation.repeat_build',[_2032032])),_2032206,_2032212,_2032218).

'deforestation.repeat_build'(_2034044,_2034046,_2034048,_2034050,_2034052,_2034054):-freeze(_2034052,'blocked_deforestation.repeat_build'(_2034044,_2034046,_2034048,_2034050,_2034052,_2034054)).
'blocked_deforestation.repeat_build'(_2034140,_2034158,_2034176,_2034804,_2034810,_2034816):-makeShare(_2034200,_2034964),hnf('Prelude.cond'('Prelude.letrec'(_2034964,'Prelude.apply'('Prelude.apply'(_2034158,_2034140),_2034964)),_2034964),_2034804,_2034810,_2034816).

'deforestation.zip'(_2037426,_2037428,_2037430,_2037432,_2037434):-freeze(_2037432,'blocked_deforestation.zip'(_2037426,_2037428,_2037430,_2037432,_2037434)).
'blocked_deforestation.zip'(_2037512,_2037530,_2037770,_2037776,_2037782):-hnf('deforestation.build'(partcall(2,'deforestation.zip_build',[_2037530,_2037512])),_2037770,_2037776,_2037782).

'deforestation.zip_build'(_2039636,_2039638,_2039640,_2039642,_2039644,_2039646,_2039648):-freeze(_2039646,'blocked_deforestation.zip_build'(_2039636,_2039638,_2039640,_2039642,_2039644,_2039646,_2039648)).
'blocked_deforestation.zip_build'(_2039742,_2039760,_2039778,_2039796,_2041394,_2041400,_2041406):-hnf(_2039742,_2042658,_2041400,_2042622),'blocked_deforestation.zip_build_1'(_2042658,_2039760,_2039778,_2039796,_2041394,_2042622,_2041406).

'blocked_deforestation.zip_build_1'(_2043002,_2043004,_2043006,_2043008,_2043010,_2043012,_2043014):-freeze(_2043012,'blocked_blocked_deforestation.zip_build_1'(_2043002,_2043004,_2043006,_2043008,_2043010,_2043012,_2043014)).
'blocked_blocked_deforestation.zip_build_1'([],_2039760,_2039778,_2039796,_2043488,_2043494,_2043500):-hnf(_2039760,_2045190,_2043494,_2045160),'blocked_blocked_deforestation.zip_build_1_[]_1'(_2045190,_2039778,_2039796,_2043488,_2045160,_2043500).

'blocked_blocked_deforestation.zip_build_1_[]_1'(_2045610,_2045612,_2045614,_2045616,_2045618,_2045620):-freeze(_2045618,'blocked_blocked_blocked_deforestation.zip_build_1_[]_1'(_2045610,_2045612,_2045614,_2045616,_2045618,_2045620)).
'blocked_blocked_blocked_deforestation.zip_build_1_[]_1'([],_2039778,_2039796,_2045824,_2045830,_2045836):-hnf(_2039796,_2045824,_2045830,_2045836).
'blocked_blocked_blocked_deforestation.zip_build_1_[]_1'([_2040072|_2040090],_2039778,_2039796,_2046530,_2046536,_2046542):-!,hnf(_2039796,_2046530,_2046536,_2046542).
'blocked_blocked_blocked_deforestation.zip_build_1_[]_1'('FAIL'(_2047234),_2039778,_2039796,'FAIL'(_2047234),_2047248,_2047248):-nonvar(_2047234).
'blocked_blocked_deforestation.zip_build_1'([_2040204|_2040222],_2039760,_2039778,_2039796,_2047732,_2047738,_2047744):-!,hnf(_2039760,_2049488,_2047738,_2049446),'blocked_blocked_deforestation.zip_build_1_[|]_3'(_2049488,_2040204,_2040222,_2039778,_2039796,_2047732,_2049446,_2047744).

'blocked_blocked_deforestation.zip_build_1_[|]_3'(_2049936,_2049938,_2049940,_2049942,_2049944,_2049946,_2049948,_2049950):-freeze(_2049948,'blocked_blocked_blocked_deforestation.zip_build_1_[|]_3'(_2049936,_2049938,_2049940,_2049942,_2049944,_2049946,_2049948,_2049950)).
'blocked_blocked_blocked_deforestation.zip_build_1_[|]_3'([],_2040204,_2040222,_2039778,_2039796,_2050170,_2050176,_2050182):-hnf(_2039796,_2050170,_2050176,_2050182).
'blocked_blocked_blocked_deforestation.zip_build_1_[|]_3'([_2040420|_2040438],_2040204,_2040222,_2039778,_2039796,_2051022,_2051028,_2051034):-!,makeShare(_2039778,_2051366),hnf('Prelude.apply'('Prelude.apply'(_2051366,'Prelude.(,)'(_2040204,_2040420)),'deforestation.zip_build'(_2040222,_2040438,_2051366,_2039796)),_2051022,_2051028,_2051034).
'blocked_blocked_blocked_deforestation.zip_build_1_[|]_3'('FAIL'(_2053526),_2040204,_2040222,_2039778,_2039796,'FAIL'(_2053526),_2053540,_2053540):-nonvar(_2053526).
'blocked_blocked_deforestation.zip_build_1'('FAIL'(_2053622),_2039760,_2039778,_2039796,'FAIL'(_2053622),_2053636,_2053636):-nonvar(_2053622).

'deforestation.zipWith'(_2054574,_2054576,_2054578,_2054580,_2054582,_2054584):-freeze(_2054582,'blocked_deforestation.zipWith'(_2054574,_2054576,_2054578,_2054580,_2054582,_2054584)).
'blocked_deforestation.zipWith'(_2054670,_2054688,_2054706,_2055012,_2055018,_2055024):-hnf('deforestation.build'(partcall(2,'deforestation.zipWith_build',[_2054706,_2054688,_2054670])),_2055012,_2055018,_2055024).

'deforestation.zipWith_build'(_2057254,_2057256,_2057258,_2057260,_2057262,_2057264,_2057266,_2057268):-freeze(_2057266,'blocked_deforestation.zipWith_build'(_2057254,_2057256,_2057258,_2057260,_2057262,_2057264,_2057266,_2057268)).
'blocked_deforestation.zipWith_build'(_2057370,_2057388,_2057406,_2057424,_2057442,_2059282,_2059288,_2059294):-hnf(_2057388,_2060710,_2059288,_2060668),'blocked_deforestation.zipWith_build_2'(_2060710,_2057370,_2057406,_2057424,_2057442,_2059282,_2060668,_2059294).

'blocked_deforestation.zipWith_build_2'(_2061080,_2061082,_2061084,_2061086,_2061088,_2061090,_2061092,_2061094):-freeze(_2061092,'blocked_blocked_deforestation.zipWith_build_2'(_2061080,_2061082,_2061084,_2061086,_2061088,_2061090,_2061092,_2061094)).
'blocked_blocked_deforestation.zipWith_build_2'([],_2057370,_2057406,_2057424,_2057442,_2061606,_2061612,_2061618):-hnf(_2057406,_2063472,_2061612,_2063436),'blocked_blocked_deforestation.zipWith_build_2_[]_2'(_2063472,_2057370,_2057424,_2057442,_2061606,_2063436,_2061618).

'blocked_blocked_deforestation.zipWith_build_2_[]_2'(_2063918,_2063920,_2063922,_2063924,_2063926,_2063928,_2063930):-freeze(_2063928,'blocked_blocked_blocked_deforestation.zipWith_build_2_[]_2'(_2063918,_2063920,_2063922,_2063924,_2063926,_2063928,_2063930)).
'blocked_blocked_blocked_deforestation.zipWith_build_2_[]_2'([],_2057370,_2057424,_2057442,_2064142,_2064148,_2064154):-hnf(_2057442,_2064142,_2064148,_2064154).
'blocked_blocked_blocked_deforestation.zipWith_build_2_[]_2'([_2057718|_2057736],_2057370,_2057424,_2057442,_2064942,_2064948,_2064954):-!,hnf(_2057442,_2064942,_2064948,_2064954).
'blocked_blocked_blocked_deforestation.zipWith_build_2_[]_2'('FAIL'(_2065740),_2057370,_2057424,_2057442,'FAIL'(_2065740),_2065754,_2065754):-nonvar(_2065740).
'blocked_blocked_deforestation.zipWith_build_2'([_2057850|_2057868],_2057370,_2057406,_2057424,_2057442,_2066276,_2066282,_2066288):-!,hnf(_2057406,_2068196,_2066282,_2068148),'blocked_blocked_deforestation.zipWith_build_2_[|]_4'(_2068196,_2057850,_2057868,_2057370,_2057424,_2057442,_2066276,_2068148,_2066288).

'blocked_blocked_deforestation.zipWith_build_2_[|]_4'(_2068670,_2068672,_2068674,_2068676,_2068678,_2068680,_2068682,_2068684,_2068686):-freeze(_2068684,'blocked_blocked_blocked_deforestation.zipWith_build_2_[|]_4'(_2068670,_2068672,_2068674,_2068676,_2068678,_2068680,_2068682,_2068684,_2068686)).
'blocked_blocked_blocked_deforestation.zipWith_build_2_[|]_4'([],_2057850,_2057868,_2057370,_2057424,_2057442,_2068914,_2068920,_2068926):-hnf(_2057442,_2068914,_2068920,_2068926).
'blocked_blocked_blocked_deforestation.zipWith_build_2_[|]_4'([_2058066|_2058084],_2057850,_2057868,_2057370,_2057424,_2057442,_2069860,_2069866,_2069872):-!,makeShare(_2057424,_2070320),makeShare(_2057370,_2070340),hnf('Prelude.apply'('Prelude.apply'(_2070320,'Prelude.apply'('Prelude.apply'(_2070340,_2057850),_2058066)),'deforestation.zipWith_build'(_2070340,_2057868,_2058084,_2070320,_2057442)),_2069860,_2069866,_2069872).
'blocked_blocked_blocked_deforestation.zipWith_build_2_[|]_4'('FAIL'(_2073162),_2057850,_2057868,_2057370,_2057424,_2057442,'FAIL'(_2073162),_2073176,_2073176):-nonvar(_2073162).
'blocked_blocked_deforestation.zipWith_build_2'('FAIL'(_2073266),_2057370,_2057406,_2057424,_2057442,'FAIL'(_2073266),_2073280,_2073280):-nonvar(_2073266).

'deforestation.lookup'(_2074190,_2074192,_2074194,_2074196,_2074198):-freeze(_2074196,'blocked_deforestation.lookup'(_2074190,_2074192,_2074194,_2074196,_2074198)).
'blocked_deforestation.lookup'(_2074276,_2074294,_2074614,_2074620,_2074626):-hnf(partcall(1,'Prelude.foldr',['Prelude.Nothing',partcall(2,'deforestation.lookup_fold',[_2074294,_2074276])]),_2074614,_2074620,_2074626).

'deforestation.lookup_fold'(_2076738,_2076740,_2076742,_2076744,_2076746,_2076748,_2076750):-freeze(_2076748,'blocked_deforestation.lookup_fold'(_2076738,_2076740,_2076742,_2076744,_2076746,_2076748,_2076750)).
'blocked_deforestation.lookup_fold'(_2076844,_2076862,_2076880,_2076898,_2077908,_2077914,_2077920):-hnf(_2076880,_2079244,_2077914,_2079208),'blocked_deforestation.lookup_fold_3'(_2079244,_2076844,_2076862,_2076898,_2077908,_2079208,_2077920).

'blocked_deforestation.lookup_fold_3'(_2079600,_2079602,_2079604,_2079606,_2079608,_2079610,_2079612):-freeze(_2079610,'blocked_blocked_deforestation.lookup_fold_3'(_2079600,_2079602,_2079604,_2079606,_2079608,_2079610,_2079612)).
'blocked_blocked_deforestation.lookup_fold_3'('Prelude.(,)'(_2077006,_2077024),_2076844,_2076862,_2076898,_2081630,_2081636,_2081642):-!,hnf('Prelude.apply'('Prelude.apply'('Prelude.=='(_2076844),_2076862),_2077006),_2083740,_2081636,_2083692),'blocked_blocked_deforestation.lookup_fold_3_Prelude.(,)_ComplexCase'(_2083740,_2077006,_2077024,_2076844,_2076862,_2076898,_2081630,_2083692,_2081642).

'blocked_blocked_deforestation.lookup_fold_3_Prelude.(,)_ComplexCase'(_2084316,_2084318,_2084320,_2084322,_2084324,_2084326,_2084328,_2084330,_2084332):-freeze(_2084330,freeze(_2084316,'blocked_blocked_blocked_deforestation.lookup_fold_3_Prelude.(,)_ComplexCase'(_2084316,_2084318,_2084320,_2084322,_2084324,_2084326,_2084328,_2084330,_2084332))).
'blocked_blocked_blocked_deforestation.lookup_fold_3_Prelude.(,)_ComplexCase'('Prelude.True',_2077006,_2077024,_2076844,_2076862,_2076898,'Prelude.Just'(_2077024),_2084704,_2084704).
'blocked_blocked_blocked_deforestation.lookup_fold_3_Prelude.(,)_ComplexCase'('Prelude.False',_2077006,_2077024,_2076844,_2076862,_2076898,_2086012,_2086018,_2086024):-!,hnf(_2076898,_2086012,_2086018,_2086024).
'blocked_blocked_blocked_deforestation.lookup_fold_3_Prelude.(,)_ComplexCase'('FAIL'(_2086928),_2077006,_2077024,_2076844,_2076862,_2076898,'FAIL'(_2086928),_2086942,_2086942).
'blocked_blocked_deforestation.lookup_fold_3'('FAIL'(_2087028),_2076844,_2076862,_2076898,'FAIL'(_2087028),_2087042,_2087042):-nonvar(_2087028).

'deforestation.iterate'(_2087980,_2087982,_2087984,_2087986,_2087988):-freeze(_2087986,'blocked_deforestation.iterate'(_2087980,_2087982,_2087984,_2087986,_2087988)).
'blocked_deforestation.iterate'(_2088066,_2088084,_2088324,_2088330,_2088336):-hnf('deforestation.build'(partcall(2,'deforestation.iterate_build',[_2088084,_2088066])),_2088324,_2088330,_2088336).

'deforestation.iterate_build'(_2090382,_2090384,_2090386,_2090388,_2090390,_2090392,_2090394):-freeze(_2090392,'blocked_deforestation.iterate_build'(_2090382,_2090384,_2090386,_2090388,_2090390,_2090392,_2090394)).
'blocked_deforestation.iterate_build'(_2090488,_2090506,_2090524,_2090542,_2091272,_2091278,_2091284):-makeShare(_2090524,_2091536),makeShare(_2090506,_2091556),makeShare(_2090488,_2091576),hnf('Prelude.apply'('Prelude.apply'(_2091536,_2091556),'deforestation.iterate_build'(_2091576,'Prelude.apply'(_2091576,_2091556),_2091536,_2090542)),_2091272,_2091278,_2091284).

'deforestation.enumFrom_'(_2094870,_2094872,_2094874,_2094876):-freeze(_2094874,'blocked_deforestation.enumFrom_'(_2094870,_2094872,_2094874,_2094876)).
'blocked_deforestation.enumFrom_'(_712872,_712916,_712918,_712920):-hnf('deforestation.iterate'(partcall(1,'Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int',[1]),_712872),_712916,_712918,_712920).

'deforestation.enumFromThen_'(_714252,_714254,_714256,_714258,_714260):-freeze(_714258,'blocked_deforestation.enumFromThen_'(_714252,_714254,_714256,_714258,_714260)).
'blocked_deforestation.enumFromThen_'(_714338,_714356,_714742,_714748,_714754):-makeShare(_714338,_714858),hnf('deforestation.iterate'(partcall(1,'Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int',['Prelude._impl\'23\'2D\'23Prelude.Num\'23Prelude.Int'(_714356,_714858)]),_714858),_714742,_714748,_714754).

'deforestation.enumFromTo_'(_717606,_717608,_717610,_717612,_717614):-freeze(_717612,'blocked_deforestation.enumFromTo_'(_717606,_717608,_717610,_717612,_717614)).
'blocked_deforestation.enumFromTo_'(_717692,_717710,_717950,_717956,_717962):-hnf('deforestation.build'(partcall(2,'deforestation.enumFromTo_build',[_717710,_717692])),_717950,_717956,_717962).

'deforestation.enumFromTo_build'(_720158,_720160,_720162,_720164,_720166,_720168,_720170):-freeze(_720168,'blocked_deforestation.enumFromTo_build'(_720158,_720160,_720162,_720164,_720166,_720168,_720170)).
'blocked_deforestation.enumFromTo_build'(_720264,_720282,_720300,_720318,_723802,_723808,_723814):-makeShare(_720264,_721808),makeShare(_720282,_721828),hnf('Prelude.apply'('Prelude.apply'('Prelude._impl\'23\'3E\'23Prelude.Ord\'23Prelude.Int',_721808),_721828),_725366,_723808,_725324),'blocked_deforestation.enumFromTo_build_ComplexCase'(_725366,_721808,_721828,_720300,_720318,_723802,_725324,_723814).

'blocked_deforestation.enumFromTo_build_ComplexCase'(_725844,_725846,_725848,_725850,_725852,_725854,_725856,_725858):-freeze(_725856,freeze(_725844,'blocked_blocked_deforestation.enumFromTo_build_ComplexCase'(_725844,_725846,_725848,_725850,_725852,_725854,_725856,_725858))).
'blocked_blocked_deforestation.enumFromTo_build_ComplexCase'('Prelude.True',_721808,_721828,_720300,_720318,_726216,_726222,_726228):-hnf(_720318,_726216,_726222,_726228).
'blocked_blocked_deforestation.enumFromTo_build_ComplexCase'('Prelude.False',_721808,_721828,_720300,_720318,_727206,_727212,_727218):-!,makeShare(_720300,_727442),makeShare(_721808,_727462),hnf('Prelude.apply'('Prelude.apply'(_727442,_727462),'deforestation.enumFromTo_build'('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_727462,1),_721828,_727442,_720318)),_727206,_727212,_727218).
'blocked_blocked_deforestation.enumFromTo_build_ComplexCase'('FAIL'(_729998),_721808,_721828,_720300,_720318,'FAIL'(_729998),_730012,_730012).

'deforestation.enumFromThenTo_'(_731242,_731244,_731246,_731248,_731250,_731252):-freeze(_731250,'blocked_deforestation.enumFromThenTo_'(_731242,_731244,_731246,_731248,_731250,_731252)).
'blocked_deforestation.enumFromThenTo_'(_731338,_731356,_731374,_731826,_731832,_731838):-makeShare(_731338,_731974),hnf('deforestation.build'(partcall(2,'deforestation.enumFromThenTo_build',[_731374,'Prelude._impl\'23\'2D\'23Prelude.Num\'23Prelude.Int'(_731356,_731974),_731974])),_731826,_731832,_731838).

'deforestation.enumFromThenTo_build'(_735106,_735108,_735110,_735112,_735114,_735116,_735118,_735120):-freeze(_735118,'blocked_deforestation.enumFromThenTo_build'(_735106,_735108,_735110,_735112,_735114,_735116,_735118,_735120)).
'blocked_deforestation.enumFromThenTo_build'(_735222,_735240,_735258,_735276,_735294,_741056,_741062,_741068):-makeShare(_735240,_738954),hnf('Prelude._impl\'23\'3C\'3D\'23Prelude.Ord\'23Prelude.Int'(_738954,0),_742778,_741062,_742730),'blocked_deforestation.enumFromThenTo_build_ComplexCase'(_742778,_735222,_738954,_735258,_735276,_735294,_741056,_742730,_741068).

'blocked_deforestation.enumFromThenTo_build_ComplexCase'(_743270,_743272,_743274,_743276,_743278,_743280,_743282,_743284,_743286):-freeze(_743284,freeze(_743270,'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase'(_743270,_743272,_743274,_743276,_743278,_743280,_743282,_743284,_743286))).
'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase'('Prelude.True',_735222,_738954,_735258,_735276,_735294,_746262,_746268,_746274):-makeShare(_735222,_744052),makeShare(_735258,_744072),hnf('Prelude.apply'('Prelude.apply'('Prelude._impl\'23\'3C\'23Prelude.Ord\'23Prelude.Int',_744052),_744072),_749102,_746268,_749054),'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.True_ComplexCase'(_749102,_744052,_738954,_744072,_735276,_735294,_746262,_749054,_746274).

'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.True_ComplexCase'(_749804,_749806,_749808,_749810,_749812,_749814,_749816,_749818,_749820):-freeze(_749818,freeze(_749804,'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.True_ComplexCase'(_749804,_749806,_749808,_749810,_749812,_749814,_749816,_749818,_749820))).
'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.True_ComplexCase'('Prelude.True',_744052,_738954,_744072,_735276,_735294,_750186,_750192,_750198):-hnf(_735294,_750186,_750192,_750198).
'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.True_ComplexCase'('Prelude.False',_744052,_738954,_744072,_735276,_735294,_751468,_751474,_751480):-!,makeShare(_735276,_751808),makeShare(_744052,_751828),makeShare(_738954,_751848),hnf('Prelude.apply'('Prelude.apply'(_751808,_751828),'deforestation.enumFromThenTo_build'('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_751828,_751848),_751848,_744072,_751808,_735294)),_751468,_751474,_751480).
'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.True_ComplexCase'('FAIL'(_754972),_744052,_738954,_744072,_735276,_735294,'FAIL'(_754972),_754986,_754986).
'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase'('Prelude.False',_735222,_738954,_735258,_735276,_735294,_757946,_757952,_757958):-!,makeShare(_735222,_755736),makeShare(_735258,_755756),hnf('Prelude.apply'('Prelude.apply'('Prelude._impl\'23\'3E\'23Prelude.Ord\'23Prelude.Int',_755736),_755756),_760816,_757952,_760768),'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.False_ComplexCase'(_760816,_755736,_738954,_755756,_735276,_735294,_757946,_760768,_757958).

'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.False_ComplexCase'(_761542,_761544,_761546,_761548,_761550,_761552,_761554,_761556,_761558):-freeze(_761556,freeze(_761542,'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.False_ComplexCase'(_761542,_761544,_761546,_761548,_761550,_761552,_761554,_761556,_761558))).
'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.False_ComplexCase'('Prelude.True',_755736,_738954,_755756,_735276,_735294,_761924,_761930,_761936):-hnf(_735294,_761924,_761930,_761936).
'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.False_ComplexCase'('Prelude.False',_755736,_738954,_755756,_735276,_735294,_763212,_763218,_763224):-!,makeShare(_735276,_763552),makeShare(_755736,_763572),makeShare(_738954,_763592),hnf('Prelude.apply'('Prelude.apply'(_763552,_763572),'deforestation.enumFromThenTo_build'('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(_763572,_763592),_763592,_755756,_763552,_735294)),_763212,_763218,_763224).
'blocked_blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase_Prelude.False_ComplexCase'('FAIL'(_766722),_755736,_738954,_755756,_735276,_735294,'FAIL'(_766722),_766736,_766736).
'blocked_blocked_deforestation.enumFromThenTo_build_ComplexCase'('FAIL'(_766822),_735222,_738954,_735258,_735276,_735294,'FAIL'(_766822),_766836,_766836).

'deforestation.length'(_767750,_767752,_767754):-freeze(_767752,'blocked_deforestation.length'(_767750,_767752,_767754)).
'blocked_deforestation.length'(_767972,_767978,_767984):-hnf(partcall(1,'Prelude.foldr',[0,partcall(2,'deforestation.length_fold',[])]),_767972,_767978,_767984).

'deforestation.length_fold'(_769654,_769656,_769658,_769660,_769662):-freeze(_769660,'blocked_deforestation.length_fold'(_769654,_769656,_769658,_769660,_769662)).
'blocked_deforestation.length_fold'(_769740,_769758,_769918,_769924,_769930):-hnf('Prelude._impl\'23\'2B\'23Prelude.Num\'23Prelude.Int'(1,_769758),_769918,_769924,_769930).

'deforestation.null'(_771560,_771562,_771564):-freeze(_771562,'blocked_deforestation.null'(_771560,_771562,_771564)).
'blocked_deforestation.null'(_771796,_771802,_771808):-hnf(partcall(1,'Prelude.foldr',['Prelude.True',partcall(2,'deforestation.null_fold',[])]),_771796,_771802,_771808).

'deforestation.null_fold'(_773474,_773476,_773478,_773480,_773482):-freeze(_773480,'blocked_deforestation.null_fold'(_773474,_773476,_773478,_773480,_773482)).
'blocked_deforestation.null_fold'(_773560,_773578,'Prelude.False',_773612,_773612).

:-costCenters(['']).




%%%%% Number of shared variables: 26
