#include <queue>
#include <iostream>
using namespace std;

class Node{
    public:
        int Data;
        Node* left;
        Node* right;
        Node(int val){
            left = right = NULL;
            Data = val;
        }
};
static int count = 0;
int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if(leftHeight+rightHeight > count){
            count = leftHeight+rightHeight;
    }

    return max(leftHeight,rightHeight)+1;
}

int main(){
    
    return 0;
}