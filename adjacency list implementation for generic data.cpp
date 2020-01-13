#include <iostream>
#include <map>
#include <list>
using namespace std;

template<typename T>
class Graph{
    map<T, list<T>> adjlist;
    
    public:
    Graph(){
    }

    void addEdge(T u, T v, bool bidir=true){
        adjlist[u].push_back(v);
        if(bidir){
            adjlist[v].push_back(u);
        }
    }

    void printAdjlist(){
        
        //iterate over the map
        for(auto i: adjlist){
            cout<<i.first<<"->";

            // i.second is ll
            for(T entry: i.second){
                cout<<entry<<",";
            }
            cout<<endl;
        }
    }
};

int main(){

    Graph<string> g;
    g.addEdge("Putin", "Trump", false);
    g.addEdge("Putin", "Modi", false);
    g.addEdge("Putin", "Pope", false);
    g.addEdge("Modi", "Trump", true);
    g.addEdge("Modi", "Yogi", true);
    g.addEdge("Yogi", "Prabhu", false);
    g.addEdge("Prabhu", "Modi", false);

    g.printAdjlist();

return 0;

}
