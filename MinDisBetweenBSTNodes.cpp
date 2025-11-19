#include <vector>
#include <iostream>
#include <climits> 
#include <algorithm> 
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

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->Data > val){
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

Node* builtBST(vector<int> arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

// Helper function for In-Order Traversal
// We pass 'prev' and 'ans' by reference (&) so changes persist
void solve(Node* root, Node*& prev, int& ans){
    if(root == NULL){
        return;
    }

    // 1. Go Left
    solve(root->left, prev, ans);

    // 2. Process Current Node
    if(prev != NULL){
        // Calculate diff between current node and previous node in sorted order
        ans = min(ans, root->Data - prev->Data);
    }
    // Update prev to current node before moving right
    prev = root;

    // 3. Go Right
    solve(root->right, prev, ans);
}

int minDis(Node* root){
    Node* prev = NULL;       // Initialize prev as NULL
    int ans = INT_MAX;       // Initialize answer to max integer
    
    solve(root, prev, ans);
    
    return ans;
}

int main(){
    vector<int> arr = {4, 2, 6, 1, 3};
    Node* root = builtBST(arr);
    
    // logic to find min distance
    cout << "Minimum Distance: " << minDis(root) << endl;

    return 0;
}