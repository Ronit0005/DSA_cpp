#include <iostream>
using namespace std;

class Heap{
    int arr[100];
    int size = 0;
    public:
    void insert(int val){
        size += 1;
        arr[size] = val;
        int idx = size;
        while(idx > 1){
            if(arr[idx>>1] < arr[idx]){
                swap(arr[idx>>1],arr[idx]);
                idx = idx >> 1;
            } else {
                break;
            }
        }
    }
    void  deleter(){
        if(size == 0){
            return;
        }
        arr[1] = arr[size];
        int idx = 1;
        size -= 1;
        while(idx <= size){
            int leftIdx = 2 * idx;
            int rightIdx = 2 * idx + 1;
            if(leftIdx <= size && arr[idx] < arr[leftIdx]){
                swap(arr[idx],arr[leftIdx]);
                idx = leftIdx;
            } else if(rightIdx <= size && arr[idx] < arr[rightIdx]){
                swap(arr[idx],arr[rightIdx]);
                idx = rightIdx;
            } else {
                break;
            }
        }
    }

    void printHeap(){
        int x = 1;
        while(x <= size){
            cout<<arr[x]<<" ";
            x += 1;
        }
        cout<<endl;
    }
};

void heapify(int arr[],int n,int i){
    int par = i;
    int leftIdx = 2 * i;
    int rightIdx = 2 * i + 1;
    if(leftIdx < n && arr[par] < arr[leftIdx]){
        par = leftIdx;
    } else if(rightIdx < n && arr[par] < arr[rightIdx]){
        par = rightIdx;
    }
    if(par != i){
        swap(arr[par],arr[i]);
        heapify(arr,n,par);
    }
}

void printHeaper(int arr[],int size){
    int x = 1;
    while(x <= size){
        cout<<arr[x]<<" ";
        x += 1;
    }
    cout<<endl;
}

int main(){
    Heap h;
    // h.insert(60);
    // h.insert(50);
    // h.insert(40);
    // h.insert(30);
    // h.insert(20);
    // h.insert(70);
    // h.printHeap();
    // h.deleter();
    // h.printHeap();
    int arr[6] = {-1,54,55,53,52,50};
    int n = 5;
    for(int i = n/2;i>0;i--){
        heapify(arr,5,i);
    }
    printHeaper(arr,5);
    return 0;
}