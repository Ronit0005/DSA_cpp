#include <iostream>
using namespace std;
#include <vector>

int func(vector<int> vec){
    int str=1;
    int end=vec.size()-2;
    while(str<=end){
        int mid=str+(end-str)/2;
        if(vec[mid]>vec[mid-1]&&vec[mid]>vec[mid+1]){
            return mid;
        }
        else if(vec[mid]>vec[mid-1]){
            end=mid-1;
        }
        else{
            str=mid+1;
        }
    }
    return -1;
}


int main(){
    vector<int> vec={0,10,5,2};
    cout<<func(vec);
    return 0;
}