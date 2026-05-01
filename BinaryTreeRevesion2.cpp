#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <queue>
#include <string>
#include <stack>

struct Node{
    int Data;
    Node* left;
    Node* right;
    Node(int val){
        Data = val;
        left = right = NULL;
    }
};
// Build a binary tree:-
Node* buildTree(vector<int>& preorder,int& idx){
    if(preorder[idx]==-1) return NULL;
    Node* root = new Node(preorder[idx++]);
    root->left = buildTree(preorder,idx);
    root->right = buildTree(preorder,idx);
    return root;
}

// Tree Traversal :- Preorder 
void preorderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->Data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Tree Inorder traversal:-
void inorderTraversal(Node* root){
    if(root == NULL) return;
    inorderTraversal(root->left);
    cout<<root->Data<<" ";
    inorderTraversal(root->right);
}

// Postorder traversal:-
void postorderTraversal(Node* root){
    if(root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->Data<<" ";
}

// Levelorder Traversal:- If I wanted to print all the levels in diff line .
void levelorderTraversal(Node* root){
    queue<Node*> que;
    que.push(root);
    que.push(NULL);
    while(!que.empty()){
        Node* node = que.front();
        que.pop();
        if(root == NULL){
            if(!que.empty()){
                que.push(NULL);
                cout<<endl;
                continue;
            } else {
                break;
            }
        }
        cout<<node->Data<<" ";
        if(root->left){
            que.push(root->left);
        }
        if(root->right){
            que.push(root->right);
        }
    }
}

// Height of the tree :-
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight,rightHeight)+1;
}

// Count of the nodes:-
int count(Node* root){
    if(root == NULL) return 0;
    int leftTree = count(root->left);
    int rightTree = count(root->right);
    return (leftTree+rightTree+1);
}

// Sum of nodes:-
int sumOfNodes(Node* root){
    if(root == NULL) return 0;
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return (leftSum+rightSum+root->Data);
}

// Kth level:-
void kthLevel(Node* root,int k){
    if(root == NULL) return;
    if(k == 1){
        cout<<root->Data<<" ";
        return;
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}

// lowest common ancestor :-
Node* lowestCommonAncestor(Node* root,int p,int q){
    if(root == NULL) return NULL;
    if(root->Data == p || root->Data==q){
        return root;
    }
    Node* left = lowestCommonAncestor(root->left,p,q);
    Node* right = lowestCommonAncestor(root->right,p,q);
    if(left && right) return root;
    else if(left) return left;
    else return right;
}

// Transform of sum tree :-
int sumTree(Node* root){
    if(root == NULL) return 0;
    int left = sumTree(root->left);
    int right = sumTree(root->right);
    root->Data += left + right;
    return root->Data;
}

int main(){
    
    return 0;
}