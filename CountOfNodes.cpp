#include <iostream>
using namespace std;
#include <vector>
#include <queue>

class Node{
public:
    int Data;
    Node* left;
    Node* right;
    Node(int data){
        Data = data;
    }
};

// Building A Binary Tree :-
static int idx = -1;
Node* buildTree(vector<int> preOrder){
    idx++;
    if(preOrder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

// Counting the Nodes:-

int countDigits(Node* root){
    if(root == NULL){
        return 0;
    }

    int lftSubTree = countDigits(root->left);
    int rhtSubTree = countDigits(root->right);

    return lftSubTree+rhtSubTree+1;
}

int main(){
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preOrder);
    cout<<countDigits(root);
    return 0;
}