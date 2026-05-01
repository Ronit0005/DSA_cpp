#include <iostream>
using namespace std;
#include <vector>
#include <queue>

void helper(int srcI,int srcJ,vector<vector<char>>& mat,vector<vector<bool>>& vis){
    int n = mat.size();
    int m = mat[0].size();
    vis[srcI][srcJ]=true;
    queue<pair<int,int>> que;
    que.push({srcI,srcJ});
    int delRows[]={-1,0,1,0};
    int delCol[]={0,1,0,-1};
    while(!que.empty()){
        int i = que.front().first;
        int j = que.front().second;
        que.pop();
        for(int idx=0;idx<4;idx++){
            int newRows = i-delRows[idx];
            int newCols = j-delCol[idx];
            if(newRows>=0 && newRows<n && newCols>=0 && newCols<m && mat[newRows][newCols] == 'O'){
                que.push({newRows,newCols});
                vis[newRows][newCols]=true;
            }
        }
    }
}

    void replacer(vector<vector<char>>& mat){
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==n-1 || j==0 || j==m-1){
                if(!vis[i][j] && mat[i][j] == 'O'){
                    helper(i,j,mat,vis);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i!=0 && i!=n-1 && j!=0 && j!=m-1){
                if(mat[i][j] == 'O' && !vis[i][j]){
                    mat[i][j]='X';
                }
            }
        }
    }
}

int main(){
    
    return 0;
}