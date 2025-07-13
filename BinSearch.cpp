// #include <iostream>
// using namespace std;

// int binarySearch(int arr[],int target,int size){
//     int str=0;
//     int mid;
//     int end=size-1;
//     while(str<=end){
//         mid=str+(end-str)/2;
//         if(arr[mid]>target){
//             end=mid-1;
//         }
//         else if(arr[mid]<target){
//             str=mid+1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int target=100;
//     int size=10;
//     cout<<binarySearch(arr,target,size);
//     return 0;
// }


// Using recursive method :-
#include <iostream>
using namespace std;

int binarySearch(int arr[],int str,int end,int target){
    if(str<=end){
        int mid=str+ (end-str)/2;
        if(arr[mid]>target){
            return binarySearch(arr,str,mid-1,target);
        }
        else if(arr[mid]<target){
            return binarySearch(arr,mid+1,end,target);
        }
        else{
            return mid;
        }
    }
    else{
        return -1;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int target=100;
    int size=10;
    cout<<binarySearch(arr,0,size-1,target);
    return 0;
}