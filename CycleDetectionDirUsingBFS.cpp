#include <iostream>
using namespace std;
#include <vector>
#include <queue>

bool isCycle(vector<vector<int>>& mat){
    int indegre[mat.size()]={0};
    for(int i=0;i<mat.size();i++){
        for(int it:mat[i]){
            indegre[it]++;
        }
    }
    queue<int> que;
    int count = 0;
    for(int i=0;i<mat.size();i++){
        if(indegre[i]==0){
            que.push(i);
            count++;
        }
    }
    while(!que.empty()){
        int u = que.front();
        for(auto it:mat[u]){
            indegre[it]--;
            if(indegre[it]==0){
                que.push(it);
                count++;
            }
        }
    }
    if(count == mat.size()){
        return true;
    } else {
        return false;
    }
}


int main(){
    
    return 0;
}