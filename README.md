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

## Cycle detection in graph
