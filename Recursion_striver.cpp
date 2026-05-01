#include <iostream>
using namespace std;
#include <vector>

// Reverse an array :-
void rev(int idx,vector<int>& arr){
    if(idx == arr.size()) return;
    rev(idx+1,arr);
    cout<<arr[idx]<<" ";
}
void rev2(vector<int>& arr){
    for(int i=0;i<=arr.size()/2;i++){
        swap(arr[i],arr[arr.size()-1-i]);
    }
    for(int it:arr) cout<<it<<" ";
}

// A way to print only one answer :-
bool func(int idx,vector<int>& arr,int target){
    if(idx == 0){
        if(target == arr[0]) return true;
        return false;
    }
    // Take :-
    if(func(idx-1,arr,target-arr[idx])) return true;
    if(func(idx-1,arr,target-arr[idx])) return true;
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    // rev(0,arr);
    
    return 0;
}