/*#include <iostream>
using namespace std;
int main(){
    int arr[7]={-1,0,2,4,5,6,12};
    int target=12;
    int start=0;int mid;
    int end=sizeof(arr)/sizeof(int)-1;
    while(start<=end){
      mid=start+(end-start)/2;
      if(arr[mid]>target){
        end=mid-1;
      }
      else if(arr[mid]<target){
        start=mid+1;
      }
      else{
        cout<<"The element is found at the index : "<<mid;
        break;
      }
    }
    return 0;
}*/

// USING RECURSION :
#include <iostream>
using namespace std;
int binarySearch(int arr[],int target,int start,int end){
    int mid=start+(end-start)/2;
    if(start<=end){

        if(arr[mid]>target){
            return binarySearch(arr,target,start,mid-1);
        }
        else if(arr[mid]<target){
            return binarySearch(arr,target,mid+1,end);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target=100;
    int end=sizeof(arr)/sizeof(int)-1;
    cout<<binarySearch(arr,target,0,end);
    return 0;
}