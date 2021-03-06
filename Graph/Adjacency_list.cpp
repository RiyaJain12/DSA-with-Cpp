#include<bits/stdc++.h>
using namespace std;
class graph{
  public:
     unordered_map<int,list<int>> adj;
     void addEdge(int u,int v,bool direction){
        //direction=0->undirected
        //direction=1->directed
        //create an edge from u to v
         adj[u].push_back(v);
         if(direction==0){
            adj[v].push_back(u);
         }
     }
     void printAdjList(){
        for(auto i : adj){
            cout<<i.first<<"->";
            for(auto j : i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
     }

};
int main(){
     int n;
     cout<<"Enter nodes"<<endl;
     cin>>n;
     int m;
     cout<<"Enter edges"<<endl;
     cin>>m;
     graph g;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        //create undirected graph
        g.addEdge(u,v,0);
    }
   //print graph
   g.printAdjList();
}