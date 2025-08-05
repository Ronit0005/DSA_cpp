#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void func(int arr[],int size,int target){
    int sum;
    for(int i=0;i<size;i++){
        sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum==target){
                cout<<"Sub Array : ";
                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
    }
}

int main(){
    int arr[]={9,4,20,3,10,5};
    int target = 33;
    int size = sizeof(arr)/sizeof(int);
    func(arr,size,target);
    return 0;
}