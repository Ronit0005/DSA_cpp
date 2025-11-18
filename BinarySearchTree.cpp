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

Node* insert(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->Data){
        root->left = insert(root->left,val);
    } else{
        root->right = insert(root->right,val);
    }
    return root;
}

Node* builtBST(vector<int> arr){
    Node* root = NULL;
    for(int val: arr){
        root = insert(root,val);
    }
    return root;
}

void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->Data<<" ";
    inorderTraversal(root->right);
}


int main(){
    inorderTraversal(builtBST({3,2,1,5,6,4}));
    return 0;
}