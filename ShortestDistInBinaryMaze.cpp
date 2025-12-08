#include <iostream>
using namespace std;
#include <vector>
#include <queue>

int shortestPath(vector<vector<int>>& maze,int srcI,int srcJ,int destI,int destJ){
    vector<vector<int>> dist(maze.size(),vector<int>(maze[0].size(),1e9));
    vector<vector<bool>> vis(maze.size(),vector<bool>(maze[0].size(),false));
    queue<pair<int,pair<int,int>>> que;
    que.push({0,{srcI,srcJ}});
    int delRows[]={-1,0,1,0};
    int delCols[]={0,1,0,-1};
    vis[srcI][srcJ]=true;
    int destination = maze[destI][destJ];
    while(!que.empty()){
        int dis = que.front().first;
        int i = que.front().second.first;
        int j = que.front().second.second;
        if(maze[i][j]==destination) break;
        for(int c = 0;c<4;c++){
            int nr = i+delRows[c];
            int nc = j+delCols[c];
            if(nr>=0 && nr<maze.size() && nc>=0 && nc<maze[0].size() && maze[nr][nc]!=0 && !vis[nr][nc]){
                int newDis = dist[nr][nc];
                if(dis+1<newDis){
                    dist[nr][nc]=dis+1;
                    que.push({dist[nr][nc],{nr,nc}});
                    vis[nr][nc]=true;
                }
            }
        }
    }
    return dist[destI][destJ];
}

int main(){
    
    return 0;
}