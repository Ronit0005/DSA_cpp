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

Node* lowestCommon(Node* root,int q,int p){
    if(root == NULL){
        return NULL;
    }
    if(root->Data == p || root->Data == q){
        return root;
    }
    Node* leftLCA = lowestCommon(root->left,q,p);
    Node* rightLCA = lowestCommon(root->right,q,p);

    if(leftLCA && rightLCA){
        return root;
    }
    else if(leftLCA != NULL){
        return leftLCA;
    }
    else{
        return rightLCA;
    }
}

int main(){
    
    return 0;
}