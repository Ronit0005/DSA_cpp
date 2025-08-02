#include <iostream>
using namespace std;
#include <algorithm>
// Bubble Sorting :-

int main(){

    int arr[]={4,1,5,2,3,6};
    // int size = sizeof(arr)/sizeof(int);
    int size=6;
    bool isSwap=false;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            break;
        }
    }
        for(int val : arr){
            cout<<val<<" ";
        }
    return 0;
}