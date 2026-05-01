#include <iostream>
using namespace std;
#include <vector>

class DisjointSet{
    vector<int> parent,rank,size;
    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findUPar(int node){
        if(parent[node]==node){
            return node;
        }
        return parent[node]=findUPar(parent[node]); //Assinging and returing.
    }
    void unionByRank(int u ,int v){
        int up_u = findUPar(u);
        int up_v = findUPar(v);
        if(up_u == up_v) return;
        if(rank[up_u]<rank[up_v]){
            parent[up_u] = up_v;
        }
        else if(rank[up_u]>rank[up_v]){
            parent[up_v] = up_u;
        }
        else {
            parent[up_u] = up_v;
            rank[up_v]++;
        }
    }
    void unionBySize(int u,int v){
        int up_u = findUPar(u);
        int up_v = findUPar(v);
        if(size[up_u]<size[up_v]){
            size[up_v]+= size[up_u];
            parent[up_u] = up_v;
        } else {
            size[up_u] += size[up_v];
            parent[up_v] = up_u;
        }
    }
};

int main(){
    DisjointSet x(7);
    x.unionBySize(1,2);
    x.unionBySize(2,3);
    x.unionBySize(4,5);
    x.unionBySize(6,7);
    x.unionBySize(5,6);
    x.unionBySize(3,7);
    if(x.findUPar(1) == x.findUPar(7)){
        cout<<"Same Component"<<endl;
    } else {
        cout<<"Different Component"<<endl;
    }
    return 0;
}