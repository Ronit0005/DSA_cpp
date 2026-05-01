#include <iostream>
using namespace std;
#include <list>
#include <queue>
#include <stack>

class Graph{
    int V;
    list<int>* l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }
    // Adding the edges to the graph:-
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    // Printing the graph:-
    void print_all(){
        for(int i=0;i<V;i++){
            cout<<i<<" : ";
            for(int it :l[i]){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    void BFS(int src,vector<bool>& vis){
        queue<int> que;
        que.push(src);
        vis[src]=true;
        while(!que.empty()){
            int node = que.front();
            que.pop();
            cout<<node<<" ";
            for(int it:l[node]){
                if(!vis[it]){
                    que.push(it);
                    vis[it]=true;
                }
            }
        }
    }
    // Depth first seach:-
    void DFSHelper(int src,vector<bool>& vis){
        vis[src]=true;
        for(int it:l[src]){
            if(!vis[it]){
                DFSHelper(it,vis);
            }
        }
    }
    void DFS(){
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                DFSHelper(i,vis);
            }
        }
    }
    // Cycle detection in undir graph using dfs :-
    bool isCycleDFS(int src,vector<bool>& vis,int par){
        vis[src]=true;
        for(int v :l[src]){
            if(!vis[v]){
                if(isCycleDFS(v,vis,src)){
                    return true;
                }
            } else if(par != v){
                return true;
            }
        }
        return false;
    }
    // Cycle detection in undir graph using bfs:-
    bool isCycleBFS(int src,vector<bool>& vis){
        queue<pair<int,int>> que;
        que.push({src,-1});
        vis[src]=true;
        while(!que.empty()){
            int node = que.front().first;
            int par=que.front().second;
            que.pop();
            for(int it:l[node]){
                if(!vis[it]){
                    que.push({it,src});
                    vis[it]=true;
                } else if(par!=it){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(){
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycleBFS(i,vis)){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycleDirDFSHelper(int src,vector<bool>& vis,vector<bool>& currPath){
        vis[src]=true;
        currPath[src]=true;
        for(int v:l[src]){
            if(!vis[v]){
                if(isCycleDirDFSHelper(v,vis,currPath)){
                    return true;
                }
            } else if(currPath[v]){
                return true;
            }
        }
        currPath[src]=false;
        return false;
    }
    bool isCycleDirDFS(){
        vector<bool> vis(V,false);
        vector<bool> currPath(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycleDirDFSHelper(i,vis,currPath)){
                    return true;
                }
            }
        }
        return false;
    }
    void toposortHelper(int src,vector<bool>& vis,stack<int>& st){
        vis[src]=true;
        for(int v:l[src]){
            if(!vis[v]){
                toposortHelper(v,vis,st);
            }
        }
        st.push(src);
    }
    void toposort(){
        vector<bool> vis(V,false);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                toposortHelper(i,vis,st);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            int ele = st.top();
            st.pop();
            ans.push_back(ele);
        }
    }
    vector<vector<pair<int,int>>> createWeightedGraph(vector<vector<int>> mat){
        vector<vector<pair<int,int>>> ans;
        for(auto it :mat){
            int u = it[0];
            int v = it[1];
            int w = it[2];
            ans[u].push_back({v,w});
            ans[v].push_back({u,w});
        }
        return ans;
    }
    vector<int> topoSort(vector<vector<int>>& mat){
        vector<int> indegree(mat.size(),0);
        for(int i=0;i<mat.size();i++){
            for(int it:mat[i]){
                indegree[it]++;
            }
        }
        queue<int> que;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                que.push(i);
            }
        }
        vector<int> ans;
        while(!que.empty()){
            int node = que.front();
            que.pop();
            ans.push_back(node);
            for(int v:mat[node]){
                indegree[v]--;
                if(indegree[v]==0){
                    que.push(v);
                }
            }
        }
    }
    bool isCycleDirBFS(vector<vector<int>>& mat){
        vector<int> indegree(mat.size(),0);
        queue<int> que;
        for(int i=0;i<mat.size();i++){
            for(int it:mat[i]){
                indegree[it]++;
            }
        }
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                que.push(i);
            }
        }
        vector<int> ans;
        while(!que.empty()){
            int node = que.front();
            que.pop();
            ans.push_back(node);
            for(int it:mat[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    que.push(it);
                }
            }
        }
        if(ans.size() == mat.size()){
            return true;
        } else {
            return false;
        }
    }
    string findOrder(string dict[],int N,int K){
        int len = sizeof(dict)/sizeof(dict[0]);
        vector<vector<int>> adj(K);
        for(int i=0;i<len-1;i++){
            string str1 = dict[i];
            string str2 = dict[i+1];
            int minLen = min(str1.size(),str2.size());
            for(int x=0;x<minLen;x++){
                int ch1 = str1[x]; int ch2 = str2[x];
                if(ch1 != ch2){
                    adj[ch1-'a'].push_back(ch2-'a');
                    break;
                }
            }
        }
        // Topological sort :-
        vector<int> indegree(K,0);
        for(int i=0;i<adj.size();i++){
            for(int it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int> que;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                que.push(i);
            }
        }
        string ans="";
        while(!que.empty()){
            int node = que.front();
            que.pop();
            ans+=char(node+'a');
            for(int it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    que.push(it);
                }
            }
        }
        return ans;
    }
    void topo(int src,vector<bool>& vis,vector<vector<pair<int,int>>> mat,stack<int>& st){
        vis[src]=true;
        for(auto i:mat[src]){
            int it = i.first;
            if(!vis[it]){
                topo(it,vis,mat,st);
            }
        }
        st.push(src);
    }
    vector<int> shortestPathInDirGraph(int N,int M,vector<vector<int>>& edges){
        stack<int> st;
        vector<bool> vis(N,false);
        vector<vector<pair<int,int>>> mat(N);
        for(int i=0;i<M;i++){
            int a = edges[i][0];
            int b = edges[i][1];
            int d = edges[i][2];
            mat[a].push_back({b,d});
        }
        for(int i=0;i<N;i++){
            if(!vis[i]){
                topo(i,vis,mat,st);
            }
        }
        vector<int> dist(N,INT32_MAX);
        while(!st.empty()){
            int node = st.top();
            st.pop();
            for(auto x:mat[node]){
                int v = x.first;
                int dis=x.second;
                if(dist[node]+dis<dist[v]){
                    dist[v]=dist[node]+dis;
                }
            }
        }
        return dist;
    }
    vector<int> shortestPathInUndirGraph(vector<vector<pair<int,int>>> adj,int src){
        queue<int> que;
        vector<int> dist(adj.size(),1e9);
        que.push(src);
        dist[src]=0;
        while(!que.empty()){
            int node = que.front();
            for(auto v:adj[node]){
                int x = v.first;
                int dis = v.second;
                if(dist[node]+dis<dist[x]){
                    dist[x]=dist[node]+dis;
                    que.push(x);
                }
            }
        }
    }
};

int main(){
    
    return 0;
}