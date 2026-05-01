#include <iostream>
using namespace std;
#include <vector>

void func(vector<int>& arr,vector<int>& height,int steps,int totE,int& N,int& ans){
    if(steps > N) return;
    if(steps == N){
        ans = min(ans,totE);
        return;
    }
    func(arr,height,steps+1,totE+abs(height[steps]-height[steps+1]),N,ans);
    func(arr,height,steps+1,totE+abs(height[steps]-height[steps+2]),N,ans);
}

int main(){
    
    return 0;
}