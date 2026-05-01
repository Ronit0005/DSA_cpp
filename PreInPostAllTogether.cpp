#include <iostream>
using namespace std;
#include <stack>
#include <vector>

struct Node{
    int Data;
    Node* left;
    Node* right;
    Node(int val){
        Data = val;
        left = left = NULL;
    }
};

int main(){
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    stack<pair<Node*,int>> st;
    st.push({0,1});
    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second == 1){
            pre.push_back(it.first->Data);
            it.second++;
            st.push(it);
            if(it.first->left){
                st.push({it.first->left,1});
            }
        }

        else if(it.second == 2){
            in.push_back(it.first->Data);
            it.second++;
            st.push(it);
            if(it.first->right){
                st.push({it.first->right,1});
            }
        }
        else {
            post.push_back(it.first->Data);
        }
    }
    return 0;
}