#include <iostream>
using namespace std;
#include <vector>
#include <queue>

int minimumsteps(int src,int dest,vector<int> arr){
    queue<pair<int,int>> que;
    vector<bool> vis(1e9,false);
    que.push({src,0});
    while(!que.empty()){
        int steps = que.front().second;
        int u = que.front().first;
        que.pop();
        for(int ele:arr){
            int v = (u * ele)%100000;
            if(!vis[v]) {
                vis[v]=true;
                if(v == dest){
                    return steps+1;
                }
                que.push({v,steps+1});
            }
        }
    }
    return -1;
}

int main(){
    cout<<minimumsteps(3,30,{2,5,7});
    return 0;
}