#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include <set>

vector<int> dijkstra(int V,int S,vector<vector<pair<int,int>>> adj){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,S});
    vector<int> dist(V,1e9);
    while(!pq.empty()){
        int dis =pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it:adj[node]){
            int adjNode = it.second;
            int adjDist = it.first;
            if(dis+adjDist < dist[adjNode]){
                dist[adjNode]=dis+adjDist;
            }
        }
    }
    return dist;
}

vector<int> dijkstra2(int V,int S,vector<vector<pair<int,int>>> adj){
    set<pair<int,int>> st;
    st.insert({0,S});
    vector<int> dist(V,1e9);
    while(!st.empty()){
        auto it = *(st.begin());
        int node = it.second;
        int dis = it.first;
        for(auto x:adj[node]){
            int adjNode = x.first;
            int adjDist = x.second;
            if(dis+adjDist <dist[node]){
                if(dist[adjNode]!=1e9){
                    st.erase({dist[adjNode],adjNode});
                }
                dist[node]=dis+adjDist;
                st.insert({dist[adjNode],node});
            }
        }
    }
    return dist;
}

int main(){
    
    return 0;
}