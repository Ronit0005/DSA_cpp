#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <queue>

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
    bool isCycleUndirBFS(int src,vector<bool>& vis){
        queue<pair<int,int>> q;
        q.push({src,-1});
        vis[src]=true;

        while(q.size()>0){
            int u=q.front().first;
            int par = q.front().second;
            q.pop();
            for(int v:l[u]){
                if(!vis[v]){
                    q.push({v,u});
                    vis[v]=true;
                } else if(v != par){
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(){
        vector<bool> vis(V,false);
        for(int src = 0;src<V;src++){
            if(!vis[src]){
                if(isCycleUndirBFS(src,vis)) return true;
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
    G.addEdge(0,2);
    cout<<G.isCycle();
    return 0;
}