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
        left = right = NULL;
    }
};

Node* insert(Node* root,int val){
    if(root == NULL){
        return new Node(val);
    } 
    if(root->Data > val){
        root->left = insert(root->left,val);
    } else {
        root->right = insert(root->right,val);
    }
    return root;
}

Node* builtBST(vector<int> arr){
    Node* root = NULL;
    for(int ele:arr){
        root = insert(root,ele);
    }
    return root;
}

vector<int> vectorizer(Node* root){
    vector<int> ans;
    if(root == NULL) return {};
    Node* curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            ans.push_back(curr->Data);
            curr = curr->right;
        } else {
            Node* IP = curr->left;
            while(IP->right != NULL && IP->right != curr){
                IP = IP->right;
            }
            if(IP->right == NULL){
                IP->right = curr;
                curr = curr->left;
            } else {
                IP->right = NULL;
                ans.push_back(curr->Data);
                curr = curr->right;
            }
        }
    }
    return ans;
}
vector<int> adder(vector<int> arr1,vector<int> arr2){
    vector<int> ans;
    int i = 0; int j = 0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        } else {
            ans.push_back(arr2[j]);
            j++;
        } 
    }
        while(i<arr1.size()){
            ans.push_back(arr1[i++]);
        }
        while(j<arr2.size()){
            ans.push_back(arr2[j++]);
        }
    return ans;
}

void print_all(Node* root){
    if(root == NULL) return;
    print_all(root->left);
    cout<<root->Data<<" ";
    print_all(root->right);
}

Node* builtBSTFromSorted(vector<int> arr,int left,int right){
    if(left > right) return NULL;
    int mid = (left+right)/2;
    Node* root = new Node(arr[mid]);
    root->left = builtBSTFromSorted(arr,left,mid-1);
    root->right = builtBSTFromSorted(arr,mid+1,right);

    return root;
}
int main(){
    vector<int> arr1 = {1,2,8,10};
    vector<int> arr2 = {0,3,5};
    Node* root1 = builtBST({1,2,8,10});
    Node* root2 = builtBST({0,3,5});
    vector<int> final = adder(arr1,arr2);
    Node* final = builtBSTFromSorted(final,0,final.size()-1);
    return 0;
}