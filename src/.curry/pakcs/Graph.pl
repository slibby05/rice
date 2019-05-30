%PAKCS2.1 swi7 VARIABLESHARING

:-noSingletonWarnings.
:-noRedefineWarnings.
:-noDiscontiguousWarnings.

:-importModule('Data.Map').
:-importModule('Prelude').

:-curryModule('Graph').


%%%%%%%%%%%% function types %%%%%%%%%%%%%%%%%%%
:-multifile functiontype/6.
:-dynamic functiontype/6.
functiontype('Graph.!',!,2,'Graph.!',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])))).
functiontype('Graph.vertices',vertices,0,'Graph.vertices',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('Graph.edges',edges,1,'Graph.edges',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])]))).
functiontype('Graph.edges._\'23lambda1','Graph.edges._#lambda1',2,'Graph.edges._\'23lambda1',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])])))).
functiontype('Graph.edges._\'23lambda1._\'23lambda2','Graph.edges._#lambda1._#lambda2',2,'Graph.edges._\'23lambda1._\'23lambda2',nofix,'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])))).
functiontype('Graph.mapT',mapT,0,'Graph.mapT',nofix,'FuncType'('FuncType'('TCons'('Prelude.Int',[]),'FuncType'(_4576198,_4576200)),'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),_4576198]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),_4576200])))).
functiontype('Graph.buildG',buildG,1,'Graph.buildG',nofix,'FuncType'('TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.buildG.mapSnd.12','Graph.buildG.mapSnd.12',2,'Graph.buildG.mapSnd.12',nofix,'FuncType'('FuncType'(_4648560,_4648562),'FuncType'('TCons'('Prelude.(,)',[_4648656,_4648560]),'TCons'('Prelude.(,)',[_4648656,_4648562])))).
functiontype('Graph.undirected',undirected,1,'Graph.undirected',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.transposeG',transposeG,0,'Graph.transposeG',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.reverseE',reverseE,1,'Graph.reverseE',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])]))).
functiontype('Graph.reverseE._\'23lambda5','Graph.reverseE._#lambda5',2,'Graph.reverseE._\'23lambda5',nofix,'FuncType'('TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])]),'FuncType'('TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Prelude.(,)',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])])])))).
functiontype('Graph.outdegree',outdegree,1,'Graph.outdegree',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])]))).
functiontype('Graph.outdegree.numEdges.23','Graph.outdegree.numEdges.23',2,'Graph.outdegree.numEdges.23',nofix,'FuncType'(_4865946,'FuncType'('TCons'([],[_4865976]),'TCons'('Prelude.Int',[])))).
functiontype('Graph.indegree',indegree,0,'Graph.indegree',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])]))).
functiontype('Graph.dfs',dfs,2,'Graph.dfs',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'FuncType'('TCons'([],['TCons'('Prelude.Int',[])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])])))).
functiontype('Graph.generate',generate,2,'Graph.generate',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])))).
functiontype('Graph.prune',prune,0,'Graph.prune',nofix,'FuncType'('TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.chop',chop,2,'Graph.chop',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]),'FuncType'('TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]),'TCons'('Prelude.(,)',['TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])])])))).
functiontype('Graph.chop._\'23selFP5\'23seen1','Graph.chop._#selFP5#seen1',1,'Graph.chop._\'23selFP5\'23seen1',nofix,'FuncType'('TCons'('Prelude.(,)',['TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]))).
functiontype('Graph.chop._\'23selFP6\'23as','Graph.chop._#selFP6#as',1,'Graph.chop._\'23selFP6\'23as',nofix,'FuncType'('TCons'('Prelude.(,)',['TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.chop._\'23selFP3\'23seen2','Graph.chop._#selFP3#seen2',1,'Graph.chop._\'23selFP3\'23seen2',nofix,'FuncType'('TCons'('Prelude.(,)',['TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]))).
functiontype('Graph.chop._\'23selFP4\'23bs','Graph.chop._#selFP4#bs',1,'Graph.chop._\'23selFP4\'23bs',nofix,'FuncType'('TCons'('Prelude.(,)',['TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.()',[])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.dff',dff,1,'Graph.dff',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.preorder',preorder,1,'Graph.preorder',nofix,'FuncType'('TCons'('Graph.Tree',[_5264924]),'TCons'([],[_5264924]))).
functiontype('Graph.postorder',postorder,1,'Graph.postorder',nofix,'FuncType'('TCons'('Graph.Tree',[_5300772]),'TCons'([],[_5300772]))).
functiontype('Graph.flatten',flatten,1,'Graph.flatten',nofix,'FuncType'('FuncType'('TCons'('Graph.Tree',[_5336614]),'TCons'([],[_5336614])),'FuncType'('TCons'([],['TCons'('Graph.Tree',[_5336614])]),'TCons'([],[_5336614])))).
functiontype('Graph.preOrd',preOrd,0,'Graph.preOrd',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('Graph.postOrd',postOrd,0,'Graph.postOrd',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('Graph.preArr',preArr,1,'Graph.preArr',nofix,'FuncType'('TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]),'TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'('Prelude.Int',[])]))).
functiontype('Graph.topSort',topSort,0,'Graph.topSort',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Prelude.Int',[])]))).
functiontype('Graph.components',components,0,'Graph.components',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.scc',scc,1,'Graph.scc',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'TCons'([],['TCons'('Graph.Tree',['TCons'('Prelude.Int',[])])]))).
functiontype('Graph.reachable',reachable,2,'Graph.reachable',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])))).
functiontype('Graph.path',path,3,'Graph.path',nofix,'FuncType'('TCons'('Data.Map.Map',['TCons'('Prelude.Int',[]),'TCons'([],['TCons'('Prelude.Int',[])])]),'FuncType'('TCons'('Prelude.Int',[]),'FuncType'('TCons'('Prelude.Int',[]),'TCons'('Prelude.Bool',[]))))).

%%%%%%%%%%%% constructor types %%%%%%%%%%%%%%%%%%%
:-multifile constructortype/7.
:-dynamic constructortype/7.
constructortype('Graph.Node','Node',2,'Node',0,'FuncType'(_5661560,'FuncType'('TCons'([],['TCons'('Graph.Tree',[_5661560])]),'TCons'('Graph.Tree',[_5661560]))),[]).

%%%%%%%%%%%% function definitions %%%%%%%%%%%%%%%%%%%
'Graph.!'(_5685318,_5685320,_5685322,_5685324,_5685326):-freeze(_5685324,'blocked_Graph.!'(_5685318,_5685320,_5685322,_5685324,_5685326)).
'blocked_Graph.!'(_5685404,_5685422,_5685742,_5685748,_5685754):-hnf('Data.Map.findWithDefault'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int',[],_5685422,_5685404),_5685742,_5685748,_5685754).

'Graph.vertices'(_5687452,_5687454,_5687456):-freeze(_5687454,'blocked_Graph.vertices'(_5687452,_5687454,_5687456)).
'blocked_Graph.vertices'(_5687528,_5687534,_5687540):-hnf(partcall(1,'Data.Map.keys',[]),_5687528,_5687534,_5687540).

'Graph.edges'(_5688342,_5688344,_5688346,_5688348):-freeze(_5688346,'blocked_Graph.edges'(_5688342,_5688344,_5688346,_5688348)).
'blocked_Graph.edges'(_5688418,_5688898,_5688904,_5688910):-makeShare(_5688418,_5688970),hnf('Prelude.apply'('Prelude.concatMap'(partcall(1,'Graph.edges._\'23lambda1',[_5688970])),'Prelude.apply'('Graph.vertices',_5688970)),_5688898,_5688904,_5688910).

'Graph.edges._\'23lambda1'(_5691334,_5691336,_5691338,_5691340,_5691342):-freeze(_5691340,'blocked_Graph.edges._\'23lambda1'(_5691334,_5691336,_5691338,_5691340,_5691342)).
'blocked_Graph.edges._\'23lambda1'(_5691420,_5691438,_5691824,_5691830,_5691836):-makeShare(_5691438,_5691928),hnf('Prelude.map'(partcall(1,'Graph.edges._\'23lambda1._\'23lambda2',[_5691928]),'Graph.!'(_5691420,_5691928)),_5691824,_5691830,_5691836).

'Graph.edges._\'23lambda1._\'23lambda2'(_5694572,_5694574,_5694576,_5694578,_5694580):-freeze(_5694578,'blocked_Graph.edges._\'23lambda1._\'23lambda2'(_5694572,_5694574,_5694576,_5694578,_5694580)).
'blocked_Graph.edges._\'23lambda1._\'23lambda2'(_5694658,_5694676,'Prelude.(,)'(_5694658,_5694676),_5694842,_5694842).

'Graph.mapT'(_5696024,_5696026,_5696028):-freeze(_5696026,'blocked_Graph.mapT'(_5696024,_5696026,_5696028)).
'blocked_Graph.mapT'(_5696100,_5696106,_5696112):-hnf(partcall(2,'Data.Map.mapWithKey',[]),_5696100,_5696106,_5696112).

'Graph.buildG'(_5696962,_5696964,_5696966,_5696968):-freeze(_5696966,'blocked_Graph.buildG'(_5696962,_5696964,_5696966,_5696968)).
'blocked_Graph.buildG'(_5697038,_5697772,_5697778,_5697784):-hnf('Data.Map.insertListWith'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int',partcall(2,'Prelude.++',[]),'Prelude.map'(partcall(1,'Graph.buildG.mapSnd.12',[partcall(1,'Prelude.flip',[[],'[|]'])]),_5697038),'Data.Map.empty'),_5697772,_5697778,_5697784).

'Graph.buildG.mapSnd.12'(_5700686,_5700688,_5700690,_5700692,_5700694):-freeze(_5700692,'blocked_Graph.buildG.mapSnd.12'(_5700686,_5700688,_5700690,_5700692,_5700694)).
'blocked_Graph.buildG.mapSnd.12'(_5700772,_5700790,_5701442,_5701448,_5701454):-hnf(_5700790,_5702630,_5701448,_5702606),'blocked_Graph.buildG.mapSnd.12_2'(_5702630,_5700772,_5701442,_5702606,_5701454).

'blocked_Graph.buildG.mapSnd.12_2'(_5702964,_5702966,_5702968,_5702970,_5702972):-freeze(_5702970,'blocked_blocked_Graph.buildG.mapSnd.12_2'(_5702964,_5702966,_5702968,_5702970,_5702972)).
'blocked_blocked_Graph.buildG.mapSnd.12_2'('Prelude.(,)'(_5700898,_5700916),_5700772,'Prelude.(,)'(_5700898,'Prelude.apply'(_5700772,_5700916)),_5703300,_5703300):-!.
'blocked_blocked_Graph.buildG.mapSnd.12_2'('FAIL'(_5704354),_5700772,'FAIL'(_5704354),_5704368,_5704368):-nonvar(_5704354).

'Graph.undirected'(_5705110,_5705112,_5705114,_5705116):-freeze(_5705114,'blocked_Graph.undirected'(_5705110,_5705112,_5705114,_5705116)).
'blocked_Graph.undirected'(_5705186,_5705586,_5705592,_5705598):-makeShare(_5705186,_5705658),hnf('Graph.buildG'('Prelude.++'('Graph.edges'(_5705658),'Graph.reverseE'(_5705658))),_5705586,_5705592,_5705598).

'Graph.transposeG'(_5707614,_5707616,_5707618):-freeze(_5707616,'blocked_Graph.transposeG'(_5707614,_5707616,_5707618)).
'blocked_Graph.transposeG'(_5707850,_5707856,_5707862):-hnf('Prelude..'(partcall(1,'Graph.buildG',[]),partcall(1,'Graph.reverseE',[])),_5707850,_5707856,_5707862).

'Graph.reverseE'(_5709148,_5709150,_5709152,_5709154):-freeze(_5709152,'blocked_Graph.reverseE'(_5709148,_5709150,_5709152,_5709154)).
'blocked_Graph.reverseE'(_5709224,_5709558,_5709564,_5709570):-hnf('Prelude.foldr'(partcall(2,'Graph.reverseE._\'23lambda5',[]),[],'Graph.edges'(_5709224)),_5709558,_5709564,_5709570).

'Graph.reverseE._\'23lambda5'(_5711528,_5711530,_5711532,_5711534,_5711536):-freeze(_5711534,'blocked_Graph.reverseE._\'23lambda5'(_5711528,_5711530,_5711532,_5711534,_5711536)).
'blocked_Graph.reverseE._\'23lambda5'(_5711614,_5711632,_5712302,_5712308,_5712314):-hnf(_5711614,_5713634,_5712308,_5713610),'blocked_Graph.reverseE._\'23lambda5_1'(_5713634,_5711632,_5712302,_5713610,_5712314).

'blocked_Graph.reverseE._\'23lambda5_1'(_5713998,_5714000,_5714002,_5714004,_5714006):-freeze(_5714004,freeze(_5713998,'blocked_blocked_Graph.reverseE._\'23lambda5_1'(_5713998,_5714000,_5714002,_5714004,_5714006))).
'blocked_blocked_Graph.reverseE._\'23lambda5_1'('Prelude.(,)'(_5711740,_5711758),_5711632,['Prelude.(,)'(_5711758,_5711740)|_5711632],_5714340,_5714340):-!.
'blocked_blocked_Graph.reverseE._\'23lambda5_1'('FAIL'(_5715340),_5711632,'FAIL'(_5715340),_5715354,_5715354).

'Graph.outdegree'(_5716056,_5716058,_5716060,_5716062):-freeze(_5716060,'blocked_Graph.outdegree'(_5716056,_5716058,_5716060,_5716062)).
'blocked_Graph.outdegree'(_5716132,_5716466,_5716472,_5716478):-hnf('Prelude.apply'('Prelude.apply'('Graph.mapT',partcall(2,'Graph.outdegree.numEdges.23',[])),_5716132),_5716466,_5716472,_5716478).

'Graph.outdegree.numEdges.23'(_5718604,_5718606,_5718608,_5718610,_5718612):-freeze(_5718610,'blocked_Graph.outdegree.numEdges.23'(_5718604,_5718606,_5718608,_5718610,_5718612)).
'blocked_Graph.outdegree.numEdges.23'(_5718690,_5718708,_5718802,_5718808,_5718814):-hnf('Prelude.length'(_5718708),_5718802,_5718808,_5718814).

'Graph.indegree'(_5720034,_5720036,_5720038):-freeze(_5720036,'blocked_Graph.indegree'(_5720034,_5720036,_5720038)).
'blocked_Graph.indegree'(_5720270,_5720276,_5720282):-hnf('Prelude..'(partcall(1,'Graph.outdegree',[]),'Graph.transposeG'),_5720270,_5720276,_5720282).

'Graph.dfs'(_5721404,_5721406,_5721408,_5721410,_5721412):-freeze(_5721410,'blocked_Graph.dfs'(_5721404,_5721406,_5721408,_5721410,_5721412)).
'blocked_Graph.dfs'(_5721490,_5721508,_5721908,_5721914,_5721920):-hnf('Prelude.apply'('Graph.prune','Prelude.map'(partcall(1,'Graph.generate',[_5721490]),_5721508)),_5721908,_5721914,_5721920).

'Graph.generate'(_5723630,_5723632,_5723634,_5723636,_5723638):-freeze(_5723636,'blocked_Graph.generate'(_5723630,_5723632,_5723634,_5723636,_5723638)).
'blocked_Graph.generate'(_5723716,_5723734,'Graph.Node'(_5724394,'Prelude.map'(partcall(1,'Graph.generate',[_5724414]),'Graph.!'(_5724414,_5724394))),_5724272,_5724278):-makeShare(_5723734,_5724394),makeShare(_5723716,_5724414),_5724272=_5724278.

'Graph.prune'(_5726542,_5726544,_5726546):-freeze(_5726544,'blocked_Graph.prune'(_5726542,_5726544,_5726546)).
'blocked_Graph.prune'(_5726858,_5726864,_5726870):-hnf('Prelude..'(partcall(1,'Prelude.snd',[]),partcall(1,'Graph.chop',['Data.Map.empty'])),_5726858,_5726864,_5726870).

'Graph.chop'(_5728134,_5728136,_5728138,_5728140,_5728142):-freeze(_5728140,'blocked_Graph.chop'(_5728134,_5728136,_5728138,_5728140,_5728142)).
'blocked_Graph.chop'(_5728220,_5728238,_5733234,_5733240,_5733246):-hnf(_5728238,_5733990,_5733240,_5733966),'blocked_Graph.chop_2'(_5733990,_5728220,_5733234,_5733966,_5733246).

'blocked_Graph.chop_2'(_5734252,_5734254,_5734256,_5734258,_5734260):-freeze(_5734258,'blocked_blocked_Graph.chop_2'(_5734252,_5734254,_5734256,_5734258,_5734260)).
'blocked_blocked_Graph.chop_2'([],_5728220,'Prelude.(,)'(_5728220,[]),_5734462,_5734462).
'blocked_blocked_Graph.chop_2'([_5728584|_5728602],_5728220,_5735348,_5735354,_5735360):-!,hnf(_5728584,_5736596,_5735354,_5736566),'blocked_blocked_Graph.chop_2_[|]_1'(_5736596,_5728602,_5728220,_5735348,_5736566,_5735360).

'blocked_blocked_Graph.chop_2_[|]_1'(_5736962,_5736964,_5736966,_5736968,_5736970,_5736972):-freeze(_5736970,'blocked_blocked_blocked_Graph.chop_2_[|]_1'(_5736962,_5736964,_5736966,_5736968,_5736970,_5736972)).
'blocked_blocked_blocked_Graph.chop_2_[|]_1'('Graph.Node'(_5728722,_5728740),_5728602,_5728220,_5741628,_5741634,_5741640):-!,makeShare(_5728722,_5738770),makeShare(_5728220,_5738790),hnf('Data.Map.member'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int',_5738770,_5738790),_5743658,_5741634,_5743616),'blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase'(_5743658,_5738770,_5728740,_5728602,_5738790,_5741628,_5743616,_5741640).

'blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase'(_5744244,_5744246,_5744248,_5744250,_5744252,_5744254,_5744256,_5744258):-freeze(_5744256,freeze(_5744244,'blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase'(_5744244,_5744246,_5744248,_5744250,_5744252,_5744254,_5744256,_5744258))).
'blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase'('Prelude.True',_5738770,_5728740,_5728602,_5738790,_5744616,_5744622,_5744628):-hnf('Graph.chop'(_5738790,_5728602),_5744616,_5744622,_5744628).
'blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase'('Prelude.False',_5738770,_5728740,_5728602,_5738790,_5749144,_5749150,_5749156):-!,hnf('Prelude.otherwise',_5752396,_5749150,_5752354),'blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase_Prelude.False_ComplexCase'(_5752396,_5738770,_5728740,_5728602,_5738790,_5749144,_5752354,_5749156).

'blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase_Prelude.False_ComplexCase'(_5753162,_5753164,_5753166,_5753168,_5753170,_5753172,_5753174,_5753176):-freeze(_5753174,freeze(_5753162,'blocked_blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase_Prelude.False_ComplexCase'(_5753162,_5753164,_5753166,_5753168,_5753170,_5753172,_5753174,_5753176))).
'blocked_blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase_Prelude.False_ComplexCase'('Prelude.True',_5738770,_5728740,_5728602,_5738790,_5753534,_5753540,_5753546):-makeShare(_5729420,_5754850),makeShare(_5738770,_5754870),makeShare(_5729438,_5754890),makeShare(_5729456,_5754910),makeShare(_5729474,_5754930),makeShare(_5729492,_5754950),makeShare(_5729510,_5754970),hnf('Prelude.cond'('Prelude.letrec'(_5754850,'Graph.chop'('Data.Map.insert'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int',_5754870,'Prelude.()',_5738790),_5728740)),'Prelude.cond'('Prelude.letrec'(_5754890,'Graph.chop._\'23selFP5\'23seen1'(_5754850)),'Prelude.cond'('Prelude.letrec'(_5754910,'Graph.chop._\'23selFP6\'23as'(_5754850)),'Prelude.cond'('Prelude.letrec'(_5754930,'Graph.chop'(_5754890,_5728602)),'Prelude.cond'('Prelude.letrec'(_5754950,'Graph.chop._\'23selFP3\'23seen2'(_5754930)),'Prelude.cond'('Prelude.letrec'(_5754970,'Graph.chop._\'23selFP4\'23bs'(_5754930)),'Prelude.(,)'(_5754950,['Graph.Node'(_5754870,_5754910)|_5754970]))))))),_5753534,_5753540,_5753546).
'blocked_blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase_Prelude.False_ComplexCase'('Prelude.False',_5738770,_5728740,_5728602,_5738790,_5763894,_5763900,_5763906):-!,hnf('Prelude.failure'('Graph.chop',['Prelude.False']),_5763894,_5763900,_5763906).
'blocked_blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase_Prelude.False_ComplexCase'('FAIL'(_5765548),_5738770,_5728740,_5728602,_5738790,'FAIL'(_5765548),_5765562,_5765562).
'blocked_blocked_blocked_blocked_Graph.chop_2_[|]_1_Graph.Node_ComplexCase'('FAIL'(_5765640),_5738770,_5728740,_5728602,_5738790,'FAIL'(_5765640),_5765654,_5765654).
'blocked_blocked_blocked_Graph.chop_2_[|]_1'('FAIL'(_5765732),_5728602,_5728220,'FAIL'(_5765732),_5765746,_5765746):-nonvar(_5765732).
'blocked_blocked_Graph.chop_2'('FAIL'(_5765812),_5728220,'FAIL'(_5765812),_5765826,_5765826):-nonvar(_5765812).

'Graph.chop._\'23selFP5\'23seen1'(_5766940,_5766942,_5766944,_5766946):-freeze(_5766944,'blocked_Graph.chop._\'23selFP5\'23seen1'(_5766940,_5766942,_5766944,_5766946)).
'blocked_Graph.chop._\'23selFP5\'23seen1'(_5767016,_5767412,_5767418,_5767424):-hnf(_5767016,_5768832,_5767418,_5768814),'blocked_Graph.chop._\'23selFP5\'23seen1_1'(_5768832,_5767412,_5768814,_5767424).

'blocked_Graph.chop._\'23selFP5\'23seen1_1'(_5769206,_5769208,_5769210,_5769212):-freeze(_5769210,'blocked_blocked_Graph.chop._\'23selFP5\'23seen1_1'(_5769206,_5769208,_5769210,_5769212)).
'blocked_blocked_Graph.chop._\'23selFP5\'23seen1_1'('Prelude.(,)'(_5767124,_5767142),_5769526,_5769532,_5769538):-!,hnf(_5767124,_5769526,_5769532,_5769538).
'blocked_blocked_Graph.chop._\'23selFP5\'23seen1_1'('FAIL'(_5770048),'FAIL'(_5770048),_5770062,_5770062):-nonvar(_5770048).

'Graph.chop._\'23selFP6\'23as'(_5771060,_5771062,_5771064,_5771066):-freeze(_5771064,'blocked_Graph.chop._\'23selFP6\'23as'(_5771060,_5771062,_5771064,_5771066)).
'blocked_Graph.chop._\'23selFP6\'23as'(_5771136,_5771514,_5771520,_5771526):-hnf(_5771136,_5772826,_5771520,_5772808),'blocked_Graph.chop._\'23selFP6\'23as_1'(_5772826,_5771514,_5772808,_5771526).

'blocked_Graph.chop._\'23selFP6\'23as_1'(_5773182,_5773184,_5773186,_5773188):-freeze(_5773186,'blocked_blocked_Graph.chop._\'23selFP6\'23as_1'(_5773182,_5773184,_5773186,_5773188)).
'blocked_blocked_Graph.chop._\'23selFP6\'23as_1'('Prelude.(,)'(_5771244,_5771262),_5773502,_5773508,_5773514):-!,hnf(_5771262,_5773502,_5773508,_5773514).
'blocked_blocked_Graph.chop._\'23selFP6\'23as_1'('FAIL'(_5774006),'FAIL'(_5774006),_5774020,_5774020):-nonvar(_5774006).

'Graph.chop._\'23selFP3\'23seen2'(_5775126,_5775128,_5775130,_5775132):-freeze(_5775130,'blocked_Graph.chop._\'23selFP3\'23seen2'(_5775126,_5775128,_5775130,_5775132)).
'blocked_Graph.chop._\'23selFP3\'23seen2'(_5775202,_5775598,_5775604,_5775610):-hnf(_5775202,_5777018,_5775604,_5777000),'blocked_Graph.chop._\'23selFP3\'23seen2_1'(_5777018,_5775598,_5777000,_5775610).

'blocked_Graph.chop._\'23selFP3\'23seen2_1'(_5777392,_5777394,_5777396,_5777398):-freeze(_5777396,'blocked_blocked_Graph.chop._\'23selFP3\'23seen2_1'(_5777392,_5777394,_5777396,_5777398)).
'blocked_blocked_Graph.chop._\'23selFP3\'23seen2_1'('Prelude.(,)'(_5775310,_5775328),_5777712,_5777718,_5777724):-!,hnf(_5775310,_5777712,_5777718,_5777724).
'blocked_blocked_Graph.chop._\'23selFP3\'23seen2_1'('FAIL'(_5778234),'FAIL'(_5778234),_5778248,_5778248):-nonvar(_5778234).

'Graph.chop._\'23selFP4\'23bs'(_5779246,_5779248,_5779250,_5779252):-freeze(_5779250,'blocked_Graph.chop._\'23selFP4\'23bs'(_5779246,_5779248,_5779250,_5779252)).
'blocked_Graph.chop._\'23selFP4\'23bs'(_5779322,_5779700,_5779706,_5779712):-hnf(_5779322,_5781012,_5779706,_5780994),'blocked_Graph.chop._\'23selFP4\'23bs_1'(_5781012,_5779700,_5780994,_5779712).

'blocked_Graph.chop._\'23selFP4\'23bs_1'(_5781368,_5781370,_5781372,_5781374):-freeze(_5781372,'blocked_blocked_Graph.chop._\'23selFP4\'23bs_1'(_5781368,_5781370,_5781372,_5781374)).
'blocked_blocked_Graph.chop._\'23selFP4\'23bs_1'('Prelude.(,)'(_5779430,_5779448),_5781688,_5781694,_5781700):-!,hnf(_5779448,_5781688,_5781694,_5781700).
'blocked_blocked_Graph.chop._\'23selFP4\'23bs_1'('FAIL'(_5782192),'FAIL'(_5782192),_5782206,_5782206):-nonvar(_5782192).

'Graph.dff'(_5782688,_5782690,_5782692,_5782694):-freeze(_5782692,'blocked_Graph.dff'(_5782688,_5782690,_5782692,_5782694)).
'blocked_Graph.dff'(_5782764,_5783084,_5783090,_5783096):-makeShare(_5782764,_5783156),hnf('Graph.dfs'(_5783156,'Prelude.apply'('Graph.vertices',_5783156)),_5783084,_5783090,_5783096).

'Graph.preorder'(_5784772,_5784774,_5784776,_5784778):-freeze(_5784776,'blocked_Graph.preorder'(_5784772,_5784774,_5784776,_5784778)).
'blocked_Graph.preorder'(_5784848,_5785700,_5785706,_5785712):-hnf(_5784848,_5786580,_5785706,_5786562),'blocked_Graph.preorder_1'(_5786580,_5785700,_5786562,_5785712).

'blocked_Graph.preorder_1'(_5786864,_5786866,_5786868,_5786870):-freeze(_5786868,'blocked_blocked_Graph.preorder_1'(_5786864,_5786866,_5786868,_5786870)).
'blocked_blocked_Graph.preorder_1'('Graph.Node'(_5784956,_5784974),_5787184,_5787190,_5787196):-!,hnf('Prelude.++'([_5784956],'Prelude.apply'('Graph.flatten'(partcall(1,'Graph.preorder',[])),_5784974)),_5787184,_5787190,_5787196).
'blocked_blocked_Graph.preorder_1'('FAIL'(_5788650),'FAIL'(_5788650),_5788664,_5788664):-nonvar(_5788650).

'Graph.postorder'(_5789362,_5789364,_5789366,_5789368):-freeze(_5789366,'blocked_Graph.postorder'(_5789362,_5789364,_5789366,_5789368)).
'blocked_Graph.postorder'(_5789438,_5790296,_5790302,_5790308):-hnf(_5789438,_5791212,_5790302,_5791194),'blocked_Graph.postorder_1'(_5791212,_5790296,_5791194,_5790308).

'blocked_Graph.postorder_1'(_5791502,_5791504,_5791506,_5791508):-freeze(_5791506,'blocked_blocked_Graph.postorder_1'(_5791502,_5791504,_5791506,_5791508)).
'blocked_blocked_Graph.postorder_1'('Graph.Node'(_5789546,_5789564),_5791822,_5791828,_5791834):-!,hnf('Prelude.++'('Prelude.apply'('Graph.flatten'(partcall(1,'Graph.postorder',[])),_5789564),[_5789546]),_5791822,_5791828,_5791834).
'blocked_blocked_Graph.postorder_1'('FAIL'(_5793300),'FAIL'(_5793300),_5793314,_5793314):-nonvar(_5793300).

'Graph.flatten'(_5793940,_5793942,_5793944,_5793946):-freeze(_5793944,'blocked_Graph.flatten'(_5793940,_5793942,_5793944,_5793946)).
'blocked_Graph.flatten'(_5794016,_5794270,_5794276,_5794282):-hnf('Prelude..'(partcall(1,'Prelude.concat',[]),partcall(1,'Prelude.map',[_5794016])),_5794270,_5794276,_5794282).

'Graph.preOrd'(_5795632,_5795634,_5795636):-freeze(_5795634,'blocked_Graph.preOrd'(_5795632,_5795634,_5795636)).
'blocked_Graph.preOrd'(_5795948,_5795954,_5795960):-hnf('Prelude..'('Graph.flatten'(partcall(1,'Graph.preorder',[])),partcall(1,'Graph.dff',[])),_5795948,_5795954,_5795960).

'Graph.postOrd'(_5797342,_5797344,_5797346):-freeze(_5797344,'blocked_Graph.postOrd'(_5797342,_5797344,_5797346)).
'blocked_Graph.postOrd'(_5797658,_5797664,_5797670):-hnf('Prelude..'('Graph.flatten'(partcall(1,'Graph.postorder',[])),partcall(1,'Graph.dff',[])),_5797658,_5797664,_5797670).

'Graph.preArr'(_5799028,_5799030,_5799032,_5799034):-freeze(_5799032,'blocked_Graph.preArr'(_5799028,_5799030,_5799032,_5799034)).
'blocked_Graph.preArr'(_5799104,_5799824,_5799830,_5799836):-hnf('Data.Map.fromList'('Prelude._inst\'23Prelude.Ord\'23Prelude.Int','Prelude.zip'('Prelude.apply'('Graph.flatten'(partcall(1,'Graph.preorder',[])),_5799104),'Prelude.apply'('Prelude._impl\'23enumFrom\'23Prelude.Enum\'23Prelude.Int',1))),_5799824,_5799830,_5799836).

'Graph.topSort'(_5802580,_5802582,_5802584):-freeze(_5802582,'blocked_Graph.topSort'(_5802580,_5802582,_5802584)).
'blocked_Graph.topSort'(_5802816,_5802822,_5802828):-hnf('Prelude..'('Prelude.reverse','Graph.postOrd'),_5802816,_5802822,_5802828).

'Graph.components'(_5804176,_5804178,_5804180):-freeze(_5804178,'blocked_Graph.components'(_5804176,_5804178,_5804180)).
'blocked_Graph.components'(_5804412,_5804418,_5804424):-hnf('Prelude..'(partcall(1,'Graph.dff',[]),partcall(1,'Graph.undirected',[])),_5804412,_5804418,_5804424).

'Graph.scc'(_5805524,_5805526,_5805528,_5805530):-freeze(_5805528,'blocked_Graph.scc'(_5805524,_5805526,_5805528,_5805530)).
'blocked_Graph.scc'(_5805600,_5806240,_5806246,_5806252):-makeShare(_5805600,_5806312),hnf('Graph.dfs'(_5806312,'Prelude.apply'('Prelude.reverse','Prelude.apply'('Graph.postOrd','Prelude.apply'('Graph.transposeG',_5806312)))),_5806240,_5806246,_5806252).

'Graph.reachable'(_5808680,_5808682,_5808684,_5808686,_5808688):-freeze(_5808686,'blocked_Graph.reachable'(_5808680,_5808682,_5808684,_5808686,_5808688)).
'blocked_Graph.reachable'(_5808766,_5808784,_5809344,_5809350,_5809356):-hnf('Prelude.apply'('Graph.flatten'(partcall(1,'Graph.preorder',[])),'Graph.dfs'(_5808766,[_5808784])),_5809344,_5809350,_5809356).

'Graph.path'(_5811146,_5811148,_5811150,_5811152,_5811154,_5811156):-freeze(_5811154,'blocked_Graph.path'(_5811146,_5811148,_5811150,_5811152,_5811154,_5811156)).
'blocked_Graph.path'(_5811242,_5811260,_5811278,_5811744,_5811750,_5811756):-hnf('Prelude.apply'('Prelude.elem'('Prelude._inst\'23Prelude.Eq\'23Prelude.Int',_5811278),'Graph.reachable'(_5811242,_5811260)),_5811744,_5811750,_5811756).

:-costCenters(['']).




%%%%% Number of shared variables: 16
