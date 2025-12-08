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
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void BFS(){
        queue<int> que;
        que.push(0);
        vector<int> vis(V,false);
        vis[0]=true;

        while(que.size()>0){
            int u = que.front();
            que.pop();
            cout<<u<<" ";
            for(int v:l[u]){
                if(!vis[v]){
                    vis[v] = true;
                    que.push(v);
                }
            }
        }
        cout<<endl;
    }
};
int main(){
    Graph G(5);
    G.addEdge(0,1);
    G.addEdge(1,2);
    G.addEdge(2,4);
    G.addEdge(1,3);

    G.BFS();
    return 0;
}