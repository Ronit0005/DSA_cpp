#include <iostream>
using namespace std;
#include <vector>

void lower(int arr[],int low,int high,int tar,int& ans){
    if(low > high){
        return;
    }
    int mid = low + (high-low)/2;
    if(arr[mid] == tar || arr[mid] > tar){
        high = mid-1;
        ans = mid;
        
    }
    if(arr[mid] < tar){
        low = mid+1;
    }
    lower(arr,low,high,tar,ans);
}

int main(){
    int arr[] = {1,2,3,3,7,8,9,9,9,11};
    int tar = 1;
    int size = sizeof(arr)/sizeof(int);
    int ans = size-1;
    lower(arr,0,size-1,tar,ans);
    cout<<"Asnwer is : "<<arr[ans];
    return 0;
}