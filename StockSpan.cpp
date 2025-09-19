#include <iostream>
using namespace std;
#include <stack>
#include <vector>

int main(){
    vector<int> arr={100,80,60,70,60,75,85};
    stack<int> s;
    vector<int> ans(arr.size(),0);

    for(int i=0;i<arr.size();i++){
        while(s.size()>0 && arr[s.top()]<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=i+1;
        } else{
            ans[i]= i - s.top();
        }
        s.push(i);
    }

    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}