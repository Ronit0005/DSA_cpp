#include <iostream>
using namespace std;
#include <list>
#include <vector>

class Graph{
    int V;
    list<int>* l;
    public:
        Graph(int V){
            this->V = V;
            l = new list<int>[V];
        }
        void addEdge(int u,int v){
            l[u].push_back(v);
            l[v].push_back(u);
        }
        void DFSHelper(int u,vector<int>& vis){
            cout<<u<<" ";
            vis[u]=true;

            for(int v:l[u]){
                if(!vis[v]){
                    DFSHelper(v,vis);
                }
            }
        }
        void DFS(){
            int src = 0;
            vector<int> vis(V,false);
            DFSHelper(src,vis);
        }
};


int main(){
    Graph G(5);
    G.addEdge(0,1);
    G.addEdge(1,2);
    G.addEdge(2,4);
    G.addEdge(1,3);

    G.DFS();
    return 0;
}