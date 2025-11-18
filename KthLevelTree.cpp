#include <queue>
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

void kthLevel(Node* root,int k){
    if(root == NULL){
        return;
    }
    if(k == 1){
        cout<<root->Data<<" ";
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}

int main(){
    Node* root = builtTree({1,2,-1,-1,3,4,-1,-1,5,-1,-1});
    kthLevel(root,3);
    return 0;
}