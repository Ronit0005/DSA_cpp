#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int maxWater=0;
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            maxWater=max(maxWater,(min(height[i],height[j])*(j-i)));
        }
    }
    cout<<"Maximum water : "<<maxWater<<endl;
    return 0;
}