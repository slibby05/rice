
module Graph where

-- We use Map here, because we don't actually have constant time arrays in Curry
import Data.Map
type Set a = Map a ()

-------------------------------------------------------------------
-- Graph Definitions
-------------------------------------------------------------------

-- For simplicity a vertex is an Int
-- We can make the more genreal later if we need to
type Vertex  = Int
type Edge    = (Vertex,Vertex)

-- A Graph is an adjacency list of integers
type Table a = Map Vertex a
type Graph   = Table [Vertex]

-- Get the neighborhood for the vertex v
(!) :: Graph -> Vertex -> [Vertex]
g ! v = findWithDefault [] v g

vertices :: Graph -> [Vertex]
vertices = keys

edges :: Graph -> [Edge]
edges g = [(u,v) | u <- vertices g, v <- g!u]

mapT :: (Vertex -> a -> b) -> Table a -> Table b
mapT = mapWithKey

-- Build a graph from a list of edges
-- We start by turning each edge (u,v) into a small adjacency list (u,[v])
-- Then we accumulate all of the lists into a single graph
buildG :: [Edge] -> Graph
buildG es = insertListWith (++) (map (mapSnd (:[])) es) empty 
 where mapSnd f (a,b) = (a,f b)

undirected :: Graph -> Graph
undirected g = buildG (edges g ++ reverseE g)

transposeG :: Graph -> Graph
transposeG = buildG . reverseE

reverseE :: Graph -> [Edge]
reverseE g = [(v,u) | (u,v) <- edges g]


-- The outdegree is the number of vertices we are connected to
outdegree :: Graph -> Table Int
outdegree g = mapT numEdges g
  where numEdges _ ws = length ws

-- The indegree is the number of vertices that are connected to us
indegree :: Graph -> Table Int
indegree = outdegree . transposeG

-------------------------------------------------------------------
-- Depth First Search
-------------------------------------------------------------------

-- To compute the depth first search, we want to keep a forrest of edges we're connected to [Tarjan 72]
-- We do this with a rose tree (each node has a list of children)
data Tree a = Node a [Tree a]
type Forrest a = [Tree a]

-- To compute the dfs tree for a vertex
-- first we generate a forrest of all of the vertices
-- that we can get to. (note: this is infinite if there's a cycle)
-- then we prune the tree until each node is represented once.
dfs :: Graph -> [Vertex] -> Forrest Vertex
dfs g vs = prune (map (generate g) vs)

-- generating the tree is pretty simple
-- First, get the neighborhood of v
-- then generate the tree from each of the neighbors
generate :: Graph -> Vertex -> Tree Vertex
generate g v = Node v (map (generate g) (g!v))

-- pruning is a bit more complicated
-- keep track of all of the vertices we've seen so far
-- if we're pruning an empty forrest, then we're done
-- if we're pruning a non-empty forrest, look at the top node of the first tree
-- have we seen it? then throw it away
-- otherwise keep it, but prune it's children
-- then prune the rest of the forrest.
prune :: Forrest Vertex -> Forrest Vertex
prune = snd . chop empty

chop :: Set Vertex -> Forrest Vertex -> (Set Vertex, Forrest Vertex)
chop seen [] = (seen,[])
chop seen (Node v ts : us)
 | member v seen = chop seen us
 | otherwise     = let (seen1,as) = chop (insert v () seen) ts
                       (seen2,bs) = chop seen1 us
                   in (seen2, Node v as : bs)

-- dff (depth first forrest) is a simplified interface for dfs
dff :: Graph -> Forrest Vertex
dff g = dfs g (vertices g)


-------------------------------------------------------------
-- functions built from DFS
-------------------------------------------------------------

preorder :: Tree a -> [a]
preorder (Node a fs) = [a] ++ flatten preorder fs

postorder :: Tree a -> [a]
postorder (Node a fs) = flatten postorder fs ++ [a]

flatten :: (Tree a -> [a]) -> Forrest a -> [a]
flatten f = concat . map f

preOrd :: Graph -> [Vertex]
preOrd = flatten preorder . dff

postOrd :: Graph -> [Vertex]
postOrd = flatten postorder . dff

preArr :: Forrest Vertex -> Table Int
preArr ts = fromList (zip (flatten preorder ts) [1..])

topSort :: Graph -> [Vertex]
topSort = reverse . postOrd

components :: Graph -> Forrest Vertex
components = dff . undirected

scc :: Graph -> Forrest Vertex
scc g = dfs g (reverse (postOrd (transposeG g)))


reachable :: Graph -> Vertex -> [Vertex]
reachable g v = flatten preorder (dfs g [v])

path :: Graph -> Vertex -> Vertex -> Bool
path g u v = v `elem` (reachable g u)



