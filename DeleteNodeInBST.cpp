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

Node* insertNode(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->Data > val){
        root->left = insertNode(root->left,val);
    } else {
        root->right = insertNode(root->right,val);
    }

    return root;
}

Node* builtBST(vector<int> arr){
    Node* root = NULL;
    for(int val : arr){
        root = insertNode(root,val);
    }
    return root;
}

Node* getInorderSuccessor(Node* root){
    while(root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root ,int target){
    if(root == NULL){
        return NULL;
    }
    if(root->Data > target){
        root->left = delNode(root->left,target);
    } else if(root->Data < target){
        root->right = delNode(root->right,target);
    } else {
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        } else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            Node* IS = getInorderSuccessor(root->right);
            root->Data = IS->Data;
            root->right = delNode(root->right,IS->Data);
        }
    }
    return root;
}

int main(){
    
    return 0;
}