#include <iostream>
using namespace std;
#include <vector>

class Node{
public:
    int Data;
    Node* left;
    Node* right;
    Node(int data){
        Data = data;
    }
};

// Built a tree
static int idx=-1;
Node* builtTree(vector<int> preOrder){
    idx++;
    if(preOrder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preOrder[idx]);
    root->left = builtTree(preOrder);
    root->right=builtTree(preOrder);

    return root;

}

int sumOfDigits(Node* root){
    if(root == NULL){
        return 0;
    }

    int lftSum = sumOfDigits(root->left);
    int rhtSum = sumOfDigits(root->right);

    return lftSum+rhtSum+root->Data;
}


int main(){
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = builtTree(preOrder);
    cout<<sumOfDigits(root);
    return 0;
}