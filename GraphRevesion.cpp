#include <iostream>
using namespace std;
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
    // Building a graph :-
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // Printing the graph :-
    void printAll(){
        for(int u=0;u<V;u++){
            cout<<u<<" : ";
            for(int v : l[u]){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }
    // BFS :-
    void BFS(){
        vector<bool> vis(V,false);
        queue<int> que;
        que.push(0);
        while(que.size()>0){
            int u = que.front();
            que.pop();
            vis[u]=true;
            cout<<u<<" ";
            for(int v:l[u]){
                if(!vis[v]){
                    vis[v]=true;
                    que.push(v);
                }
            }
        }
        cout<<endl;
    }
    // DFS :-
    void DFSHelper(int u,vector<bool>& vis){
        cout<<u<<" ";
        vis[u] = true;
        for(int v:l[u]){
            if(!vis[v]){
                DFSHelper(v,vis);
            }
        }
    }
    void DFS(){
        vector<bool> vis(V,false);
        for(int u=0;u<V;u++){
            if(!vis[u]){
                DFSHelper(u,vis);
            }
        }
    }

    // Cycle Detection Using DFS :-
    bool isCycleUndirDFS(int u,vector<bool>& vis,int par){
        vis[u] = true;
        for(int v:l[u]){
            if(!vis[v]){
                if(isCycleUndirDFS(v,vis,u)){
                    return true;
                }
            } else if(par != v){
                return true;
            }
        }
        return false;
    }
    bool isCycle(){
        vector<bool> vis(V,false);
        for(int src = 0;src<V;src++){
            if(!vis[src]){
                if(isCycleUndirDFS(src,vis,-1)) return false;
            }
        }
        return false;
    }
    // Cycle Detection Using BFS :-
    bool isCycleUndirBFS(int src,vector<bool>& vis){
        queue<pair<int,int>> que;
        que.push({src,-1});
        vis[src]=true;

        while(que.size()>0){
            int u = que.front().first;
            int par = que.front().second;
            for(int v:l[u]){
                if(!vis[v]){
                    que.push({v,u});
                    vis[v] = true;
                } else {
                    if(par != v){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool isCycle(){
        int src = 0;
        vector<bool> vis(V,false);
        for(int src;src<V;src++){
            if(!vis[src]){
                if(isCycleUndirBFS(src,vis)) return true;
            }
        }
        return false;
    }
};


int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,3);
    g.addEdge(1,2);
    g.addEdge(3,4);

    // g.printAll();
    // g.BFS();
    // g.DFS();
    
    return 0;
}