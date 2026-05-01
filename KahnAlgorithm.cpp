#include <iostream>
using namespace std;
#include <vector>
#include <queue>

vector<int> kahn(vector<vector<int>>& mat){
    vector<int> indegree(mat.size(),0);
    for(int i=0;i<mat.size();i++){
        for(int it:mat[i]){
            indegree[it]++;
        }
    }
    queue<int> que;
    for(int i=0;i<mat.size();i++){
        if(indegree[i]==0){
            que.push(i);
        }
    }
    vector<int> ans;
    while(!que.empty()){
        int node = que.front();
        que.pop();
        ans.push_back(node);
        for(auto iter:mat[node]){
            indegree[iter]--;
            if(indegree[iter]==0){
                que.push(iter);
            }
        }
    }
}

int main(){
    
    return 0;
}