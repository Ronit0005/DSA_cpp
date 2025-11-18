#include <queue>
#include <iostream>
using namespace std;
#include <map>

class Node{
    public:
        int Data;
        Node* left;
        Node* right;
        Node(int val){
            Data = val;
            left = right = NULL;
        }
};


static int idx = -1;
Node* builtTree(vector<int> preOrder){
    idx++;
    if(preOrder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preOrder[idx]);
    root->left = builtTree(preOrder);
    root->right = builtTree(preOrder);
    return root;
}


void horizontalDis(Node* root){

    map<int,int> mp;
    queue<pair<Node*,int>> que;
    que.push({root,0});

    while(que.size() != 0){
        Node* temp = que.front().first;
        int count = que.front().second;
        que.pop();

        if(mp.find(count) == mp.end()){
            mp[count] = temp->Data;
        }
        if(temp->left != NULL){
            que.push({temp->left,count-1});
        }
        if(temp->right != NULL){
            que.push({temp->right,count+1});
        }
    }

    for(auto it:mp){
        cout<<it.second<<" ";
    }
}


int main(){
    Node* root = builtTree({1,2,-1,-1,3,4,-1,-1,5,-1,-1});
    horizontalDis(root);
    return 0;
}