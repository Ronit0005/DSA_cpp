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



int main(){
    
    return 0;
}