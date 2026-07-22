#include <iostream>
using namespace std;
#include <stack>
#include <vector>

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int main(){
    stack<pair<Node*,int>> st;
    Node* root;
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    st.push({root,1});
    while(!st.empty()){
        auto x = st.top();
        st.pop();
        if(x.second == 1){
            pre.push_back(x.first->data);
            st.push({x.first,2});
            st.push({x.first->left,1});
        } else if(x.second == 2){
            in.push_back(x.first->data);
            st.push({x.first,3});
            st.push({x.first->right,1});
        } else {
            post.push_back(x.first->data);
        }
    }
    return 0;
}