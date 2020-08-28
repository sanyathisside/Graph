#include <bits/stdc++.h>
using namespace std;

class Graph{
    map<int, list<int>> l;

public:
   void addedge(int x, int y){
       l[x].push_back(y);
       l[y].push_back(x);
   }
   
   void leveloftree(int src, int level, int n){
       map<int, int>dist;
       queue<int> q;
       int count=0;
       
       for(auto node_pair:l){
           int node=node_pair.first;
           dist[node]= INT_MAX;
       }
       q.push(src);
       dist[src]=0;
       
       while(!q.empty()){
           int node= q.front();
           q.pop();
           
           
           for(int nbr:l[node]){
               if(dist[nbr]==INT_MAX){
                   q.push(nbr);
                   dist[nbr]=dist[node]+1;
               }
           }
       }
       
       for (int i = 0; i < n; i++){
           if (dist[i] == level) 
           count++;
       }
       cout<<count;
   }
    
};

int main(){
    Graph g; 
    g.addedge(0, 1); 
    g.addedge(0, 2); 
    g.addedge(1, 3); 
    g.addedge(2, 4); 
    g.addedge(2, 5); 
  
    int level = 2; 
    
    g.leveloftree(0,level,6);
}
