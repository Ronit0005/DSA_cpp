#include <iostream>
using namespace std;
#include <vector>
#include <queue>

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

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->Data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->Data<<" ";
    inorderTraversal(root->right);
}

void postorderTarversal(Node* root){
    if(root == NULL){
        return;
    }
    postorderTarversal(root->left);
    postorderTarversal(root->right);
    cout<<root->Data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> que;
    que.push(root);
    while(que.size() != 0){
        Node* temp = que.front();
        que.pop();

        cout<<temp->Data<<" ";

        if(temp->left != NULL){
            que.push(temp->left);
        }
        if(temp->right != NULL){
            que.push(temp->right);
        }
    }
}

void levelOrderTarversal2(Node* root){
    queue<Node*> que;
    que.push(root);
    que.push(NULL);
    while(que.size() != 0){
        Node* temp = que.front();
        que.pop();

        if(temp == NULL){
            if(!que.empty()){
                cout<<endl;
                que.push(NULL);
                continue;
            } else{
                break;
            }
        }

        cout<<temp->Data<<" ";
        if(temp->left != NULL){
            que.push(temp->left);
        }
        if(temp->right != NULL){
            que.push(temp->right);
        }
    }
}

int main(){
    Node* root = builtTree({1,2,-1,-1,3,4,-1,-1,5,-1,-1});
    levelOrderTarversal2(root);
    return 0;
}