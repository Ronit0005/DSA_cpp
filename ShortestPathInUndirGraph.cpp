#include <iostream>
using namespace std;
#include <vector>
#include <queue>

vector<int> shortestPath(int src,int dest,vector<vector<int>>& edges,int n){
    queue<pair<int,int>> que;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({src,0});
    vector<vector<pair<int,int>>> adj(n+1);
    vector<int> par(n+1);
    for(int i=1;i<n+1;i++){
        par[i]=i;
    }
    for(auto it :edges){
        int u = it[0];
        int v = it[1];
        int d = it[2];
        adj[u].push_back({v,d});
        adj[v].push_back({u,d});
    }
    vector<int> dist(n+1,1e9);
    dist[src]=0;
    while(!que.empty()){
        int node = que.front().second;
        int dis = que.front().first;
        for(auto it:adj[node]){
            int adjNode = it.first;
            int adjDis = it.second;
            if(dis+adjDis<dist[adjNode]){
                dist[adjNode]=dis+adjDis;
                que.push({dist[adjNode],adjNode});
                par[adjNode]=node;
            }
        }
    }
    vector<int> ans;
    int node = dest;
    while(par[node]!=node){
        ans.push_back(node);
        node = par[node];
    }
    ans.push_back(src);
}

int main(){
    
    return 0;
}