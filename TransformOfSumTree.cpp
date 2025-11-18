#include <iostream>
using namespace std;
#include <vector>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* builtTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = builtTree(preorder);
    root->right = builtTree(preorder);
    return root;
}

int sumTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);
    root->data += leftSum + rightSum;
    return root->data;
}

int main(){
    Node* root = builtTree({1,2,-1,-1,3,4,-1,-1,5,-1,-1});
    cout<<sumTree(root);
    return 0;
}