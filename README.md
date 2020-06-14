# Graph

 * Graph is a data structure that is like a network. (Non-Linear)
 * Applications:
    * Shortest Paths in Google Maps
    * Social Networking
    * Circuit Design
    * Routing Algorithms
    * Resolving Dependencies
    * Graphs in Deep Learning
    * Web Document (DOM Tree)
    * Image Processing and Segmentation
    
<hr/>

## Graphs Representation
  1. 2D Array (Adjacency Matrix)
     * Directed egde
     * Undirected edge (Bidirected edge)
     * Disadvantages:
        * Searching: O(n^2)
        * Neighbours: O(n)

     
  2. Edge List (Edges and Vertices)
  3. Adjacency List
     * Advantage:
        * Neighbours: O(neighbours) [Quite Fast]
        * Memory Efficient
        
  4. Implicit Graph



Maximum edges: NC2

Minimum edges: 0

Minimum edges(connected graph): (N-1)edges (tree)

<hr/>

## Adjacency List Representation
 * Array of list of size V
 * <a href="https://github.com/sanya2508/Graph/blob/master/adjacency%20list%20implementation%20for%20integer%20data.cpp">For integer data.
 * <a href="https://github.com/sanya2508/Graph/blob/master/adjacency%20list%20implementation%20for%20generic%20data.cpp">For generic data</a>

  
<hr/>

## Graph Traversal

 1. ### <a href="https://github.com/sanya2508/Graph/blob/master/Breadth%20first%20search.cpp">Breadth First Search</a>
    * Iterative way.
    * Level order Traversal.
    * Implemented using a queue and an array(to mark visited).
    * #### <a href="https://github.com/sanya2508/Graph/blob/master/BFS%20single%20source%20shortest%20path.cpp">Single Source Shortest Path Using BFS.</a>
    * #### <a href="https://github.com/sanya2508/Graph/blob/master/Snake%20and%20ladder%20using%20BFS-SSSP%20algo.cpp">Snake and Ladder Using BFS.</a>
    
    
 2. ### <a href="https://github.com/sanya2508/Graph/blob/master/depth%20first%20search.cpp">Depth First Search</a>
    * Recursive way.
    * Implemented using a queue and an array(to mark visited).
    * #### <a href="https://github.com/sanya2508/Graph/blob/master/conected%20components%20using%20dfs.cpp">Connected components using DFS</a>
    
<hr/>

## Directed acyclic graph
 * Topological sort using DFS
 * <a href="https://github.com/sanya2508/Graph/blob/master/topological%20sort%20using%20bfs.cpp">Topological sort using BFS</a>
    * `Indegree`: Number of incoming edges.
    * `Outdegree`: Number of outgoing edges.
    * We can start with indegree of 0.

<hr/>

## Undirected graph is a tree or not
*Given an undirected graph, check if it is a tree or not.*
 * If the graph contains a cycle it is not a tree.
 * If we are visiting a node more than one time, cycle is present. (Also check that the node is not the parent of the element).
 * ### Cycle detection using DFS.
 * ### <a href="https://github.com/sanya2508/Graph/blob/master/cycle%20detection%20in%20undirected%20graph%20using%20bfs.cpp">Cycle detection using BFS.</a>
 
<hr/>

## Cycle detection in directed graph
*Check for cycle in directed graph.*
 * If a graph has back edge, it contains cycle.
 * We can maintain a stack(for path traversed, but implemented as array to make look up possible at O(1)) and a visited array.
 * <a href="https://github.com/sanya2508/Graph/blob/master/cycle%20detection%20in%20directed%20graph.cpp">Using DFS.</a>

<hr/>

## <a href="https://github.com/sanya2508/Graph/tree/master/Flood%20Fill">Flood Fill Algorithm</a>
 * A simple variant of BFS/DFS that can be used to label(color) the various connected components present in a graph.
 * It is generally performed on implicit graphs (2d matrices).
 * Starting from a particular cell, we call DFS on the neighbouring cell to color them.

<hr/>

## Dijkstra Algorithm
 * An alogrithm that helps us to find the shortest path on the weighted graph.
 * No negative weight cycle.
 * Single source shortest path. (SSSP)
 * Initially all the nodes have let infinite distance. 
 * Pick the node with minimum given weight. (use a priority queue or set, but since we can't update in a priority queue we will prefer set).


<hr/>

## Disjoint Set Data Structure and Union Find Algo
 * 
 
## Cycle detection using DSU
 * If we add an edge within the connected  components there will be cycle.

<hr/>

## Kruskal's Concept (Minimum spanning tree)
 * A `spanning tree` is a tree of graph that connects the graph into one connected components withput any cycle.
 * A `minimum spanning tree` is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.
 * Steps:
    * Sort all the edges according to their weights.
    * Add the edge in the graph such that it forms no cycle. (Greedy :P)
    

<hr/>

## Prim's Concept (Minimum spanning tree)
 * Active edge: If an edge is an active edge, then either of one vertex is a MST vertex. (points MST vertex to a non MST vertex).
 * MST edge: Edge that is included in the MST.
 * MST vertex: Vertex that is included in the MST.
 * Prim's algorithm is greedy algorithm and similar to Dijkstra's.
 * Steps: (We can make a priority queue for better time complexity).
    * Select source vertex (any vertex from the graph). (x)
    * Out of all the active edges choose the one with the smallest weight.(x---y) x:MST vertex, y: non MST vertex
    * Make all edges of y to be active edges.
    * Repeat steps 2 and 3.
    
