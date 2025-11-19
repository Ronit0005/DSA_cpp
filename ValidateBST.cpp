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
    }if(root->Data > val){
        root->left = insert(root->left,val);
    } else {
        root->right = insert(root->right,val);
    }
    return root;
}

Node* builtBST(vector<int> arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root,val);
    }
    return root;
}

bool helper(Node* root,Node* min,Node* max){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->Data <= min->Data){
        return false;
    }
    if(max != NULL && root->Data >= max->Data){
        return false;
    }
    return helper(root->left,min,root) && helper(root->right,root,max);
}

bool isValidBST(Node* root){
    return helper(root,NULL,NULL);
}

int main(){
    
    return 0;
}