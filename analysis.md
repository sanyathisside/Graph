## BFS: 
 * Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.
 
<hr/> 

### Applications of BFS:
 1. Shortest Path and Minimum Spanning Tree for unweighted graph.
 2. Peer to Peer Networks.
 3. Crawlers in Search Engines.
 4. Social Networking Websites.
 5. GPS Navigation systems.
 6. Broadcasting in Network.
 7. In Garbage Collection.
 8. Cycle detection in undirected graph.
 9. Ford–Fulkerson algorithm.
 10. To test if a graph is Bipartite.
 11. Path Finding.
 12. Finding all nodes within one connected component.

<hr/>

## DFS: 
 * Time complexity: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
 * Space Complexity: O(V). Since, an extra visited array is needed of size V.
 * #### Handling Disconnected Graph:
    * Solution: This will happen by handling a corner case.
        * The DFS code traverses only the vertices reachable from a given source vertex. 
        * All the vertices may not be reachable from a given vertex as in the case of Disconnected graph. 
        * To do complete DFS traversal of such graphs, run DFS from all unvisited nodes after a DFS. The recursive function remains the same.
        * Complexity analysis remains the same.
        
<hr/>

### Applications of DFS: 
 1. For a weighted graph, DFS traversal of the graph produces the minimum spanning tree and all pair shortest path tree.
 2. Detecting cycle in a graph.
 3. Path Finding.
 4. Topological Sorting.
 5. To test if a graph is bipartite.
 6. Finding Strongly Connected Components of a graph.
 7. Solving puzzles with only one solution, such as mazes.
 
 
<hr/>

## Graph representation using set hash: 
 * Using set:
    * Pros: 
        * Queries like whether there is an edge from vertex u to vertex v can be done in O(log V).
    * Cons: 
        * Adding an edge takes O(log V), as opposed to O(1) in vector implementation.
        * Graphs containing parallel edge(s) cannot be implemented through this method.
        
        

 * Using unordered set (hashing):
    * Pros:
        * Queries like whether there is an edge from vertex u to vertex v can be done in O(1).
        * Adding an edge takes O(1).
    * Cons:
        * Graphs containing parallel edge(s) cannot be implemented through this method.
        * Edges are not stored in any order.

<hr/>

## Mother Vertex
 * A mother vertex in a graph G = (V,E) is a vertex v such that all other vertices in G can be reached by a path from v.
 * There can be more than one mother vertices in a graph.
 * How to find mother vertex?
    * Case 1:- Undirected Connected Graph : In this case, all the vertices are mother vertices as we can reach to all the other nodes in the graph.
    * Case 2:- Undirected/Directed Disconnected Graph : In this case, there is no mother vertices as we cannot reach to all the other nodes in the graph.
    * Case 3:- Directed Connected Graph : In this case, we have to find a vertex -v in the graph such that we can reach to all the other nodes in the graph through a directed path.
 * #### Kosaraju’s Strongly Connected Component Algorithm: `to find in O(V+E) time.`
 * ### KOSARAJU ALGORITHM:
 

## Transitive Closure of a Graph
  * Given a directed graph, find out if a vertex v is reachable from another vertex u for all vertex pairs (u, v) in the given graph. The reach-ability matrix is called transitive closure of a graph.
    * Solution:
       * O(V^3) based on `Floyd Warshall Algorrithm.`
       * O(V^2) using dfs.
