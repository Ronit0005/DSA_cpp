#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    int finalVolume=0;
    int leftMax=0;
    for(int i=0;i<height.size();i++){
        int rightMax=0;
        for(int j=i+1;j<height.size();j++){
            rightMax=max(height[j],rightMax);
        }
        finalVolume+=(min(leftMax,rightMax)-height[i]);   
        leftMax=max(height[i],leftMax);
    }
    cout<<"Final Volume : "<<finalVolume;
    return 0;
}
