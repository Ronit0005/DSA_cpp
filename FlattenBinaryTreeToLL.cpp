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
    }
};

static int idx = -1;
Node* builtTree(vector<int> preorder){
    idx++;
    if(preorder[idx]== -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = builtTree(preorder);
    root->right = builtTree(preorder);

    return root;
}

Node* nextRight = NULL;
void flatten(Node* root){
    if(root == NULL){
        return;
    }
    flatten(root->right);
    flatten(root->left);
    root->left = NULL;
    root->right = nextRight;
    nextRight = root;
}

void print_all(Node* root){
    if(root == NULL) return;
    cout<<root->Data<<" ";
    print_all(root->left);
    print_all(root->right);
}

int main(){
    
    return 0;
}