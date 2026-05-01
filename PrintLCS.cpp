#include <iostream>
using namespace std;
#include <vector>

void printLCS(string text1,string text2){
    int m = text1.size(); int n = text2.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i=0;i<n+1;i++) dp[0][i] = 0;
    for(int i=0;i<m+1;i++) dp[i][0] = 0;
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(text1[i-1] == text2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    int len = dp[m][n];
    string str="";
    int idx = len-1;
    for(int i=0;i<len;i++) str+= '$';
    int i = m;int j = n;
    while(i>0 && j >0){
        if(text1[i-1] == text2[j-1]){
            str[idx--] = text1[i-1];
            i--;j--;
        } else if(dp[i-1][j] > dp[i][j-1]){
            i = i-1;
        } else {
            j = j-1;
        }
    }
    for(auto it:str){
        cout<<it<<" ";
    }
}

int main(){
    printLCS("abcde","bdgek");
    return 0;
}