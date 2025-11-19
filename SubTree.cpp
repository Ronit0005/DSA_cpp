#include <iostream>
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

bool isSame(Node* main,Node* subRoot){
    if(main == NULL || subRoot == NULL){
        return main == subRoot;
    }
    bool isLeftSame = isSame(main->left,subRoot->left);
    bool isRightSame = isSame(main->right,subRoot->right);
    return isLeftSame && isRightSame && main->Data == subRoot->Data;
}

void isSubTree(Node* main,Node* right){
    if(main == NULL){
        return;
    }
    if(main->Data == right->Data){
        bool isSub = isSame(main,right);
        cout<<isSame ? "Found":"Not found";
        if(isSub){
            return;
        }
    }
    isSubTree(main->left,right);
    isSubTree(main->right,right);
}


int main(){
    
    return 0;
}