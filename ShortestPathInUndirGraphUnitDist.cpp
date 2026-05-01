#include <iostream>
using namespace std;
#include <vector>
#include <queue>

vector<int> path(vector<vector<int>>& edges,int n,int m,int src){
    vector<vector<int>> adj(n);
    for(auto it :edges){
        int u = it[0];
        int v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> que;
    que.push(src);
    vector<int> dist(n,1e9);
    dist[src]=0;
    while(!que.empty()){
        int node = que.front();
        que.pop();
        for(int it :adj[node]){
            if(dist[node]+1<dist[it]){
                dist[it]=dist[node]+1;
                que.push(it);
            }
        }
    }
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        if(dist[i]!=1e9){
            ans[i]=dist[i];
        }
    }
    return ans;
}
int main(){
    
    return 0;
}