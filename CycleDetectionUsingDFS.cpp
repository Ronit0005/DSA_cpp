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
    bool isCycleUndirDFS(int src,int par,vector<bool>& vis){
        vis[src] = true;
        for(int v:l[src]){
            if(!vis[v]){
                if(isCycleUndirDFS(v,src,vis)){
                    return true;
                }
            } else if(v != par){
                return true;
            }
        }
        return false;
    }
    bool isCycle(){
        vector<bool> vis(V,false);
        for(int src=0;src<V;src++){
            if(!vis[src]){
                if(isCycleUndirDFS(src,-1,vis)) return true;
            }
        }
        return false;
    }
};

int main(){
    Graph G(5);
    G.addEdge(0,1);
    G.addEdge(0,3);
    G.addEdge(3,4);
    G.addEdge(1,2);
    // G.addEdge(0,2);

    cout<<G.isCycle();
    return 0;
}