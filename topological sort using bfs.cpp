//topological sort using bfs- kahn's algo
//work only on directed acyclic graphs
//Topological sorting is a linear ordering of vertices such that for every directed edge uv, vertex u comes before v in the ordering. 

#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
	map<T,list<T> > adjList;
	public:
		Graph()
		{
			
		}
		void addedge(T u,T v,bool bidir=true)
		{
			adjList[u].push_back(v);
			if(bidir)
			{
				adjList[v].push_back(u);
			}
		}
	void topologicalsort(){
		queue<T> q;
		map<T,bool> visited;
		map<T,int> indegree;
		for(auto i:adjList){
			// i is pair of node and the list
			T node = i.first;
			visited[node] = false;
			indegree[node] = 0;
		}
		//init. the indegrees of all nodes 
		for(auto i:adjList){
			T u=i.first;
			for(T v:adjList[u]){
				indegree[v]++;
			}
		}
		//Find out all the nodes with 0 indegree
		for(auto i:adjList){
			T node = i.first;
			if(indegree[node] ==0){
				q.push(node);
			}
		}
	   //Start with algo
	   while(!q.empty()){
	   	T node = q.front();
	   	q.pop();
	   	cout<<node<<"-->";
	   	for(T neigbour:adjList[node]){
	   		indegree[neigbour]-- ;
	   		if(indegree[neigbour]==0){
	   			q.push(neigbour);
			   }
		   }
	   }
	}
	
};
int  main(){

		Graph<string> g;
	g.addedge("English" , "Programming Logic",false);
	g.addedge("Maths" , "Programming Logic",false);
	g.addedge("Programming Logic","HTML",false);
	g.addedge("Programming Logic","Python",false);
	g.addedge("Programming Logic","Java",false);
	g.addedge("Programming Logic","JS",false);
	g.addedge("Python" , "web Dev",false);
	g.addedge("HTML" , "CSS",false);
	g.addedge("CSS" , "JS",false);
	g.addedge("JS" , "Web Dev",false);
    g.addedge("Java" , "Web Dev",false);
    g.addedge("Python" , "Web Dev",false);	
	g.topologicalsort();
	return 0;	
	
}
