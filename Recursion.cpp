#include <iostream>
using namespace std;
#include <vector>
#include <set>

void func(){
    cout<<"Function Is Called"<<endl;
    func();
}

void func2(int i){
    if(i<=0){
        return ;
    }
    cout<<i<<" ";
    func2(--i);
}

int func3(vector<int> arr,int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[n-1]<=arr[n-2]){
        return false;
    }
    return func3(arr,n-1);
}

int binarySearch(vector<int> arr, int mid,int target,int str,int end){
    if(arr[mid]==target){
        return mid;
    }
    if(str >= end){
        return -1;
    }
    if(arr[mid]>target){
        end = mid-1;
        return binarySearch(arr,(str+end)/2,target,str,end);
    }
    else{
        str=mid+1;
        return binarySearch(arr,(str+end)/2,target,str,end);
    }
}

// Print All Subsets
void subSet(vector<int> vec,vector<int> ans,int n){
    if(n==0){
        cout<<"{"<<" "<<"} ";
    }
    if(n==vec.size()){
        cout<<"{";
        for(int i:ans){
            cout<<i;
        }
        cout<<"} ";
        return ;
    }
    subSet(vec,ans,n+1);
    ans.push_back(vec[n]);
    subSet(vec,ans,n+1);

}

void printPermutation(vector<int> vec,int idx,vector<int> ans){
    
}

int main(){
    set<int> vec = {1,2,3};
    vector<int> ans;
    set<int> choice = {1,2,3};
    
    return 0;
}