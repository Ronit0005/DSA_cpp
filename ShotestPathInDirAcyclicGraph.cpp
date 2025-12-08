#include <iostream>
using namespace std;
#include <vector>
#include <stack>

void DFS(int src,vector<pair<int,int>> adj[],vector<bool>& vis,stack<int>& stk){
    vis[src]=true;
    for(auto v:adj[src]){
        int u = v.first;
        int wt = v.second;
        if(!vis[u]){
            DFS(u,adj,vis,stk);
        }
    }
    stk.push(src);
}

vector<int> shortestPath(vector<int> edges[],int M,int N){
    vector<pair<int,int>> adj[N];
    for(int i=0;i<M;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v,wt});
    }

    // Topological Sort :-
    vector<bool> vis(N,false);
    stack<int> stk;
    for(int i=0;i<N;i++){
        if(!vis[i]){
            DFS(i,adj,vis,stk);
        }
    }

    // Distance calculation :-
    vector<int> dist(N,1e9);
    dist[6]=0;
    while(!stk.empty()){
        int node = stk.top();
        stk.pop();
        // Relaxation of edges:-
        for(auto it:adj[node]){
            int v = it.first;
            int w = it.second;
            if(dist[node]+w < dist[v]){
                dist[v]=dist[node]+w;
            }
        }
    }
    return dist;
}

int main(){
    vector<int> edges[]={{6,5,3},{6,4,2},{5,4,1},{4,0,3},{4,2,1},{0,1,2},{1,3,1},{2,3,3}};
    vector<int> x= shortestPath(edges,sizeof(edges)/sizeof(edges[0]),7);
    for(int it:x){
        cout<<it<<" ";
    }
    return 0;
}