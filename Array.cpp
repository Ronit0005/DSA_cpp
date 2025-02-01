#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=(sizeof(arr))/sizeof(int);
    long long int smallest = INT64_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"The smallest number in the array is "<<smallest;
    return 0;
}