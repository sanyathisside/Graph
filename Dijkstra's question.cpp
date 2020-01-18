#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
  map< T,list<pair<T,int>> > adjList;    
  public:
   Graph()
   {
   }
   void addEdge(T u, T v, int dist, bool bidirec=true)
   {
       adjList[u].push_back(make_pair(v,dist)); 
       if(bidirec)
       adjList[v].push_back(make_pair(u,dist));
   }
   void djikstra(T src)
   {
     map<T,int> dist;
     set<pair<int,T>> s;
     for(auto i:adjList)
      dist[i.first] = INT_MAX;
     dist[src] = 0;
     s.insert(make_pair(0,src));
     while(!s.empty())
     {
        auto p = *(s.begin());
        int nodeDist = p.first;
        T node = p.second;
        s.erase(s.begin());
            for(auto childPair:adjList[node])
            {
                if(nodeDist + childPair.second < dist[childPair.first])
                {
                    T childnode = childPair.first;
                    auto f = s.find(make_pair(dist[childnode],childnode));
                    if(f!=s.end())
                     s.erase(f);
                    dist[childnode] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[childnode], childnode));
                }
            }
     }
     for(auto d:dist)
      {
          if(d.first!=src)
          {
              if(d.second==INT_MAX)
               cout<<"-1 ";
              else 
               cout<<d.second<<" ";
          }
      }
      s.empty();        
   }
};

int main()
{
    int t;
    cin>>t;

 while(t--)    
 {    
    Graph<int> g;   
    int n,m;
    cin>>n>>m;
    int x,y,r;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>r;
        g.addEdge(x,y,r);
    }
    int src;
    cin>>src;
    g.djikstra(src); 
    cout<<endl;
 }
 return 0;     
}
