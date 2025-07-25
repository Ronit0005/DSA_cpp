#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<vector<int>> mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n=3;
    int target=16;
    int str=0;
    int mid;
    int end=mat.size()-1;
    while(str<=end){
        mid=str+(end-str)/2;
        if(mat[mid][n-1]<target<mat[mid][0]){
            cout<<"Target lies in the row : "<<mid<<endl;
        }
    }
    return 0;
}