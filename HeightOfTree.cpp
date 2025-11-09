#include <iostream>
using namespace std;
#include <vector>
#include <queue>

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

// Build A Binary Tree:-
static int idx = -1;
Node* buildTree(vector<int> preOrder){
    idx++;
    if(preOrder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

// Height Of The Binary Tree :-
int height(Node* root){
    queue<Node*> que;
    int counter = 0;
    que.push(root);
    que.push(NULL);

    while(!que.empty()){
        Node* curr = que.front();
        que.pop();

        if(curr == NULL){
            if(!que.empty()){
                counter++;
                que.push(NULL);
                continue;
            }
            else{
                counter++;
                break;
            }
        }
        
        if(curr->left != NULL){
            que.push(curr->left);
        }
        if(curr->right != NULL){
            que.push(curr->right);
        }
    }
    return counter ;
}

int height2(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftTree = height2(root->left);
    int rightTree = height2(root->right);
    return max(leftTree,rightTree)+1;
}

int main(){
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preOrder);
    cout<<height2(root);
    return 0;
}