#include <iostream>
using namespace std;
#include <vector>

void quickSort(vector<int>& arr,int low,int high){
    if(low>=high) return ;
    int pivot = low;
    int i = low;
    int j = high;
    if(i<j){
        while(i<arr.size() && arr[i]<=arr[pivot] && i<j){
            i++;
        }
        while(j>i && arr[j]>=arr[pivot] && j>=0){
            j--;
        }
        swap(arr[i],arr[j]);
    }
    int partition = j;
    swap(arr[pivot],arr[partition]);
    quickSort(arr,low,partition-1);
    quickSort(arr,partition+1,high);
}

int main(){
    
    return 0;
}