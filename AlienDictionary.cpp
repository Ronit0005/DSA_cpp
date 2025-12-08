#include <iostream>
using namespace std;
#include <vector>
#include <queue>

string findOrder(string dict[],int N,int k){
    vector<int> adj[k];
    for(int i=0;i<N-1;i++){
        string str1 = dict[i];
        string str2 = dict[i+1];
        int minLen = min(str1.size(),str2.size());
        for(int ptr = 0;ptr<minLen;ptr++){
            if(str1[ptr]!=str2[ptr]){
                adj[str1[ptr]-'a'].push_back(str2[ptr]-'a');
                break;
            }
        }
    }
    // Topo Sort :-
    vector<int> indegre(k,0);
    for(int i=0;i<k;i++){
        for(int it:adj[i]){
            indegre[it]++;
        }
    }
    queue<int> que;
    for(int i=0;i<indegre.size();i++){
        if(indegre[i]==0){
            que.push(i);
        }
    }
    string ans = "";
    while(!que.empty()){
        int u = que.front();
        que.pop();
        ans+=char(u+'a');
        for(int it :adj[u]){
            indegre[it]--;
            if(indegre[it]==0){
                que.push(it);
            }
        }
    }
    return ans;
}


int main(){
    string dict[]={"baa","abcd","abca","cab","cad"};
    int k = 4;
    int N = sizeof(dict)/sizeof(dict[0]);
    cout<<findOrder(dict,N,k);
    return 0;
}