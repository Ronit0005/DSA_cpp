#include <iostream>
using namespace std;
#include <vector>

// int func(int idx,int target,vector<int>& nums,vector<vector<int>>& dp){
//     if(target == 0) return 1;
//     if(idx == 0) return nums[0] == target;
//     if(dp[idx][target] != -1) return dp[idx][target];
//     int notTake = func(idx-1,target,nums,dp);
//     int take = 0;
//     if(target >= nums[idx]) take = func(idx-1,target-nums[idx],nums,dp);
//     return dp[idx][target] = take + notTake;
// }
// int findWays(vector<int>& nums,int target){
//     vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
//     return func(nums.size()-1,target,nums,dp);
// }

// int findWays(vector<int>& nums,int target){
//     vector<vector<int>> dp(nums.size(),vector<int>(target+1,0));
//     for(int i=0;i<nums.size();i++) dp[i][0] = 1;
//     if(target >= nums[0]){
//         dp[0][nums[0]] = 1;
//     }
//     for(int i=1;i<nums.size();i++){
//         for(int j=1;j<target+1;j++){
//             int notTake = dp[i-1][j];
//             int take = 0;
//             if(j >= nums[i]) take = dp[i-1][j-nums[i]];
//             dp[i][j] = take + notTake;
//         }
//     }
//     return dp[nums.size()-1][target];
// }

int findWays(vector<int>& nums,int target){
    vector<int> prev(target+1,0),curr(target+1,0);
    prev[0] = 1;
    prev[nums[0]] = 1;
    for(int i=1;i<nums.size();i++){
        curr[0] = 1;
        for(int j=1;j<target+1;j++){
            int notTake = prev[j];
            int take = 0;
            if(j >= nums[i]) take = prev[j-nums[i]];
            curr[j] = take + notTake;
        }
        prev = curr;
    }
    return prev[target];
}

int main(){
    vector<int> nums = {1,1,2,3,6};
    int target = 2;
    cout << findWays(nums,target);
    return 0;
}