#include <iostream>
using namespace std;
#include <list>
#include <stack>
#include <vector>

class Graph{
    int V;
    list<int>* l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
    }
    void topoSort(int curr,vector<bool>& vis,stack<int>& stk){
        vis[curr]=true;
        for(int v:l[curr]){
            if(!vis[v]){
                topoSort(v,vis,stk);
            }
        }
        stk.push(curr);
    }
    void mainTopo(){
        vector<bool> vis(V,false);
        stack<int> stk;
        for(int src=0;src<V;src++){
            if(!vis[src]){
                topoSort(src,vis,stk);
            }
        }
        while(stk.size()>0){
            cout<<stk.top()<<" ";
            stk.pop();
        }
    }
};

int main(){
    Graph g(6);
    g.addEdge(5,2);  
    g.addEdge(2,3);  
    g.addEdge(3,1);  
    g.addEdge(4,1);  
    g.addEdge(4,0);  
    g.addEdge(5,0);
    g.mainTopo();  
    return 0;
}