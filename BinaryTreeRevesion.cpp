// #include <stack>
// #include <queue>
// #include <iostream>
// using namespace std;
// #include <vector>

// class Node{
//     public:
//     int Data;
//     Node* left;
//     Node* right;
//     Node(int data){
//         Data = data;
//         left = right = NULL;
//     }

// };
// // Building a tree
// static int idx = -1;
// Node* builtTree(vector<int> preOrder){
//     idx++; 
//     if(preOrder[idx] == -1){
//         return NULL;
//     }
//     Node* root = new Node(preOrder[idx]);
//     root->left = builtTree(preOrder);
//     root->right = builtTree(preOrder);
// }
// // Preorder traversal
// void preOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->Data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// // Inorder traversal
// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->Data<<" ";
//     inOrder(root->right);
// }
// // PostOrder traversal
// void postOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->Data<<" ";
// }

// // Iterative tarversal :- Level order traversal
// void levelOrderTraversal(Node* root){
//     queue<Node*> que;
//     que.push(root);
//     while(que.size() != 0){
//         cout<<que.front()->Data<<" ";
//         Node* temp = que.front();
//         que.pop();

//         if(temp->left != NULL){
//             que.push(temp->left);
//         }
//         if(temp->right != NULL){
//             que.push(temp->right);
//         }
//     }
// }
// // Level order traversal :-
// void levelOrderTraversal(Node* root){
//     queue<Node*> que;
//     que.push(root);
//     que.push(NULL);
//     while(que.size() != 0){
//         Node* curr = que.front();
//         que.pop();
//         if(curr == NULL){
//             if(!que.empty()){
//                 cout<<endl;
//                 que.push(NULL);
//                 continue;
//             }else{
//                 break;
//             }
//         }
//         cout<<curr->Data<<" ";
//         if(curr->left != NULL){
//             que.push(curr->left);
//         }
//         if(curr->right != NULL){
//             que.push(curr->right);
//         }
//     }
// }

// int main(){
    
//     return 0;
// }

#include <queue>
#include <vector>
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

static int idx = -1;

Node* builtTree(vector<int> preOrder){
    idx++;
    if(preOrder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preOrder[idx]);
    root->left = builtTree(preOrder);
    root->right = builtTree(preOrder);
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return (left+right)+1;
}

int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return (left+right+1);
}

int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return (left+right+root->Data);
}

// Identical Trees :-
bool isSameTree(Node* p,Node* q){
    if(p == NULL || q == NULL){
        return p==q;
    }

    bool isLeftTree = isSameTree(p->left,q->right);
    bool isRightTree = isSameTree(p->right,q->right);

    return isLeftTree && isRightTree && p->Data == q->Data;
}


int main(){
    
    return 0;
}