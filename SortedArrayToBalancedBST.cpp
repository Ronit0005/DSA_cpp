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
    if(root->Data > val){
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


Node* helper(vector<int> arr,int left,int right){
    if(left > right){
        return NULL;
    }
    int mid = (left+right)/2;
    Node* root = new Node(arr[mid]);
    root->left = helper(arr,0,mid-1);
    root->right = helper(arr,mid+1,right);
    
    return root;
}

Node* builtBalancedTree(vector<int> arr){
    return helper(arr,0,arr.size()-1);
    
}

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    preorderTraversal(root->left);
    cout<<root->Data<<" ";
    preorderTraversal(root->right);
}

int main(){
    Node* root = builtBST({3,2,1,5,6,4});
    preorderTraversal(builtBalancedTree({1,2,3,4,5,6}));
    return 0;
}