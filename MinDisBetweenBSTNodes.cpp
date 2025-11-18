#include <vector>
#include <iostream>
#include <climits> 
#include <algorithm> 
using namespace std;

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
Node* prev = NULL;

int minDis(Node* root){
    int ans = INT32_MAX;
    if(root == NULL){
        return ans;
    }
    if(root->left){
        int minLeft = minDis(root->left);
        ans = min(ans,minLeft);
    }
    if(prev != NULL){
        ans = min(ans,root->Data-prev->Data);
    }
    prev = root;
    if(root->right){
        int rightMin = minDis(root->right);
        ans = min(ans,rightMin);
    }
    return ans;
}

int main(){
    Node* prev = NULL;
    vector<int> arr = {4, 2, 6, 1, 3};
    Node* root = builtBST(arr);
    return 0;
}