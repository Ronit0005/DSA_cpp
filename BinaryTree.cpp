#include <queue>
#include <iostream>
using namespace std;
#include <vector>

class Node{
public:
    int Data;
    Node* left;
    Node* right;
    Node(int data){
        Data = data ;
        left = right = NULL;
    }
};
static int idx=-1;
Node* buildTree(vector<int> preOrder){
    idx++;
    if(preOrder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);  // Left Subtree 
    root->right= buildTree(preOrder);  // Right subtree 

    return root;
}

// PreOrder Traversal :- root left right 
void PreoderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->Data<<" ";
    PreoderTraversal(root->left);
    PreoderTraversal(root->right);
}

// Inorder Traversal :- left root right
void InorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    InorderTraversal(root->left);
    cout<<root->Data<<" ";
    InorderTraversal(root->right);
}

// Post Order Traversal :- left right root 
void PostoderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    PostoderTraversal(root->left);
    PostoderTraversal(root->right);
    cout<<root->Data<<" ";

}

// Level Order Traversal :- printing level by level 
void LevelOrderTraversal(Node* root){
    queue<Node*> que;
    que.push(root);
    while(que.size() != 0){
        cout<<(que.front())->Data<<" ";
        Node* temp = que.front();
        que.pop();
        if(temp->left != NULL){
            que.push(temp->left);
        }
        if(temp->right != NULL){
            que.push(temp->right);
        }
    }
}

// Level Order Traversal :- Printing the nodes of each level in a diff. line 

void LevelOrderTraversal2(Node* root){
    queue<Node*> que;
    que.push(root);
    que.push(NULL);

    while(que.size() != 0){
        Node* curr = que.front();
        que.pop();
        
        if(curr == NULL){
            if(!que.empty()){
                cout<<endl;
                que.push(NULL);
                continue;
            }else{
                break;
            }
        }
        cout<<curr->Data<<" ";

        if(curr->left != NULL){
            que.push(curr->left);
        }
        if(curr->right != NULL){
            que.push(curr->right);
        }
    }
}

int main(){
    vector<int> preOrder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preOrder);
    LevelOrderTraversal2(root);
    return 0;
}