#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int start=0;
    int end=n-1;
    int mid=0;
    int target=9;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            cout<<"Target found at the index "<<mid<<endl;
            break;
        }
    }
    return 0;
}