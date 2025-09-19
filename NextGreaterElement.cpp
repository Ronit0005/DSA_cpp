#include <iostream>
using namespace std;
#include <vector>
#include <stack>

int main(){
    vector<int> arr = {6,8,0,1,3};
    stack<int> stk;
    vector<int> ans;
    for(int i=arr.size()-1;i>=0;i--){
        while(!stk.empty()&&arr[i]>stk.top()){
            stk.pop();
        }
        if(stk.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(stk.top());
        }
        stk.push(arr[i]);
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    return 0;
}