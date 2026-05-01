#include <iostream>
using namespace std;
#include <vector>

void subSequence(vector<int>& arr,vector<int> temp,int x,vector<vector<int>>& ans){
    if(x == arr.size()){
        ans.push_back(temp);
        return;
    }
    int ele = arr[x++];
    subSequence(arr,temp,x,ans);
    temp.push_back(ele);
    subSequence(arr,temp,x,ans);
}

bool subsequence(vector<int>& arr,int i,int sum,int target,vector<int> temp){
    if(i>=arr.size()){
        if(sum == target){
            for(auto it:temp) cout<<it<<" ";
            return true;
        }
        return false;
    }
    temp.push_back(arr[i]);
    if(subsequence(arr,i+1,sum+arr[i],target,temp)){
        return true;
    }
    temp.pop_back();
    if(subsequence(arr,i+1,sum,target,temp)) return true;
    return false;
}

bool subsequence2(vector<int>& arr,int i,int sum,int target,vector<int> temp){
    if(i>=arr.size()){
        if(sum == target) {
            for(int it:temp) cout<<it<<" ";
            return true;
        }
        return false;
    }
    if(subsequence2(arr,i+1,sum,target,temp)) return true;
    temp.push_back(arr[i]);
    if(subsequence2(arr,i+1,sum+arr[i],target,temp)) return true;  
    return false;
}

int countSubsequence(vector<int>& arr,int i,int sum,int target){
    if(i>=arr.size()){
        if(sum == target) return 1;
        return 0;
    }
    int left = countSubsequence(arr,i+1,sum,target);//not included
    int right = countSubsequence(arr,i+1,sum+arr[i],target);
    return left+right;
}

int main(){
    vector<int> arr={1,2,1};vector<int> temp;vector<vector<int>> ans;
    // subSequence(arr,temp,0,ans);
    // for(auto it:ans){
    //     for(int iter:it){
    //         cout<<iter<<" ";
    //     }
    //     cout<<endl;
    // }
    // vector<int> temp;
    // subsequence2(arr,0,0,2,temp);
    cout<<countSubsequence(arr,0,0,2);
    return 0;
}