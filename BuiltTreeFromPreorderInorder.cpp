#include <iostream>
using namespace std;
#include <vector>

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

int search(vector<int> inorder,int left,int right,int val){
    for(int i=left;i<=right;i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
}

Node* builder(vector<int> preorder,vector<int> inorder,int& preIdx,int left,int right){
    if(left > right){
        return NULL;
    }
    Node* root = new Node(preorder[preIdx]);
    int inIdx = search(inorder,left,right,preorder[preIdx]);
    preIdx++;
    root->left = builder(preorder,inorder,preIdx,left,inIdx-1);
    root->right = builder(preorder,inorder,preIdx,inIdx+1,right);

    return root;
}

int main(){
    
    return 0;
}