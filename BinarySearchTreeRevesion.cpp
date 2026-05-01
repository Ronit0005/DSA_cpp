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
    }
};
// Inserting nodes into BST:-
Node* insert(Node*& root,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val<root->Data){
        root->left = insert(root->left,val);
    }
    if(val>root->Data){
        root->right = insert(root->right,val);
    }
    return root;
}
Node* buildNode(vector<int> arr){
    Node* root = NULL;
    for(auto it:arr){
        root = insert(root,it);
    }
}
// Searching for an element :-
bool search(Node* root,int tar){
    if(root == NULL) return false;
    if(root->Data == tar) return true;
    if(root->Data>tar){
        if(search(root->left,tar)){
            return true;
        }
    } else {
        if(root->Data<tar){
            if(search(root->right,tar)){
                return true;
            }
        }
    }
}

// Balanced BST:-
vector<int> sorter(Node* root){
    vector<int> ans;
    while(root){
        if(root->left == NULL){
            ans.push_back(root->Data);
            root = root->right;
        } else {
            Node* ip = root->left;
            while(ip->right && ip->right!=root){
                ip = ip->right;
            }
            if(ip->right == NULL){
                ip->right = root;
                root = root->left;
            } else {
                ip->right = NULL;
                ans.push_back(root->Data);
                root = root->right;
            }
        }
    }
    return ans;
}
Node* bstCreater(vector<int> arr,int left,int right){
    if(left > right) return NULL;
    int mid = (left+right)/2;
    Node* root = new Node(arr[mid]);
    root->left = bstCreater(arr,left,mid-1);
    root->right = bstCreater(arr,mid+1,right);
    return root;
}
Node* builtBST(Node* root){
    vector<int> arr = sorter(root);
    Node* node = bstCreater(arr,0,arr.size()-1);
    return node;
}

int main(){
    
    return 0;
}