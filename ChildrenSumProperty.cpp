// #include <iostream>
// using namespace std;

// struct Node{
//     int Data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         Data = val;
//         left = right = NULL;
//     }
// };
// bool isLeaf(Node* root){
//     if(root->left == NULL && root->right == NULL) return true;
//     else return false;
// }

// int childrenSumProperty(Node* root){
//     if(root == NULL) return 0;
//     if(root->left){
//         if(root->Data > root->left->Data) root->left->Data = root->Data;
//         childrenSumProperty(root->left);
//     }
//     if(root->right){
//         if(root->Data > root->right->Data) root->right->Data = root->Data;
//         childrenSumProperty(root->right);
//     }
//     if(isLeaf(root)) return root->Data;
//     int sum = 0;
//     if(root->left){
//         sum += root->left->Data;
//     }
//     if(root->right){
//         sum+= root->right->Data;
//     }
//     return root->Data = sum;
// }

// int main(){
    
//     return 0;
// }


#include <iostream>
using namespace std;

struct Node{
    int Data;
    Node* left;
    Node* right;
    Node(int val){
        Data = val;
        left = right = NULL;
    }
};
void changeTree(Node* root){
    if(root == NULL) return;
    int childSum = 0;
    if(root->left) childSum+=root->left->Data;
    if(root->right) childSum+=root->right->Data;
    if(childSum >= root->Data) root->Data = childSum;
    else {
        if(root->left) root->left->Data = root->Data;
        if(root->right) root->right->Data = root->Data;
    }
    changeTree(root->left);
    changeTree(root->right);
    int tot = 0;
    if(root->left){
        tot += root->left->Data;
    }
    if(root->right) tot += root->right->Data;
    if(root->left || root->right) root->Data = tot;
}

int main(){
    
    return 0;
}