#include <iostream>
using namespace std;
#include <vector>

int fibonacci(int n,vector<int> arr){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int last2nd;int last;
    if(arr[n-1]==-1){
        last = fibonacci(n-1,arr);
    } else {
        last = arr[n-1];
    }
    if (arr[n-2]==-1){
        last2nd = fibonacci(n-2,arr);
    } else {
        last2nd = arr[n-2];
    }
    arr[n] = last + last2nd;
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n+1);
    cout<<fibonacci(5,arr)<<endl;
    return 0;
}