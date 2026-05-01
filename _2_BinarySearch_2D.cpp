#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int tar){
    if(low > high) return false;
    int mid = (low+high)/2;
    if(tar == arr[mid]) return true;
    else if(arr[mid] > tar){
        high = mid-1;
        return binarySearch(arr,low,high,tar);
    }
    else if(arr[mid] < tar){
        low = mid+1;
        return binarySearch(arr,low,high,tar);
    }
    return -1;
}
int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int tar = 10;
    cout<<binarySearch(arr,0,8,tar);
}