#include <iostream>
using namespace std;

void upper_bound(int arr[],int low,int high,int tar,int& ans){
    if(low > high){
        return;
    }
    int mid = low + (high-low)/2;
    if(arr[mid] > tar){
        high = mid-1;
        ans = mid;
        upper_bound(arr,low,high,tar,ans);
    } else {
        low = mid+1;
        upper_bound(arr,low,high,tar,ans);
    }
}

int main(){
    int arr[]= {2,3,6,7,8,8,11,11,11,12};
    int tar = 11;
    int size = sizeof(arr)/sizeof(int);
    int ans = size-1;
    upper_bound(arr,0,size-1,tar,ans);
    cout<<"The Upper Bound for "<<tar<<" is : "<<arr[ans]<<endl;
    return 0;
}