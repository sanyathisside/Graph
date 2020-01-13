#include <iostream>
#include <map>
#include <list>
using namespace std;

template<typename T>
class Graph{
    map<T, list<T>>adjlist;

    public:
    Graph(){

    }
    void addEdge(T u, T v, bool bidir=true){
        adjlist[u].push_back(v);
        if(bidir){
            adjlist[v].push_back(u);
        }
    }

    void print(){
        //iterate over the map
        for(auto i: adjlist){
            cout<<i.first<<"->";
            //i.second is LL
            for(T entry:i.second){
                cout<<entry<<",";
            }
            cout<<endl;
        }
    }

    void dfsHelper(T node, map<T, bool> &visited){
        //whenever come to a node, mark it visited
        visited[node]=true;
        cout<<node<<" ";

        //try to find out a node which is neighbour of current node and not yet visited
        for(T neighbour: adjlist[node]){
            if(!visited[neighbour]){
                dfsHelper(neighbour,visited);
            }
        }
    }

    void dfs(T src){
        map<T, bool> visited;

        int component=1;
        dfsHelper(src, visited);
        cout<<endl;

        for(auto i:adjlist){
            T city= i.first;
            if(!visited[city]){
                dfsHelper(city, visited);
                component++;
            }
        }
        cout<<"The current graph had "<< component<<" components";
    }
};

int main(){
    Graph<string> g;
    g.addEdge("Amritsar", "Jaipur");
    g.addEdge("Amritsar", "Delhi");
    g.addEdge("Delhi","Jaipur");
    g.addEdge("Mumbai", "Jaipur");
    g.addEdge("Mumbai", "Bhopal");
    g.addEdge("Delhi","Bhopal");
    g.addEdge("Mumbai","Bangalore");
    g.addEdge("Agra","Delhi");
    g.addEdge("Andaman","Nicobar");

    g.dfs("Amritsar");
    return 0;
}


