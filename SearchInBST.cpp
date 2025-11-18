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

Node* insert(Node* root ,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->Data < val){
        root->right = insert(root->right,val);
    } else {
        root->left = insert(root->right,val);
    }
    return root;
}

Node* builtBST(vector<int> arr){
    Node* root = NULL;
    for(int i:arr){
        root = insert(root,i);
    }
    return root;
}

bool search(Node* root,int target){
    if(root == NULL){
        return false;
    }
    if(root->Data == target){
        return true;
    }
    if(root->Data < target){
        return search(root->right ,target);
    } else {
        return search(root->left,target);
    }
}

int main(){
    cout<<search(builtBST({3,2,1,5,6,4}),1);
    return 0;
}