#include <iostream>
using namespace std;
#include <stack>
#include <vector>

int main(){
    vector<int> arr={3,1,0,8,6};
    stack<int> stk;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        while(!stk.empty() && arr[i]<=stk.top()){
            stk.pop();
        }
        if(stk.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(stk.top());
        }
        stk.push(arr[i]);
    }
    for(int ele:ans){
        cout<<ele<<" ";
    }
    return 0;
}