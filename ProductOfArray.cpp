// Brute Force Approach :-
// #include <iostream>
// using namespace std;
// #include <vector>

// int main(){
//     int prod=1;
//     vector<int> arr={1,2,3,4};
//     vector<int> ans;
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr.size();j++){
//             if(j!=i){
//                 prod*=arr[j];
//             }
//         }
//             ans.push_back(prod);
//             prod=1;
//     }
//     for(int i:ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// Optimised Approach :-

#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> vec={1,2,3,4};
    int n=vec.size();
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    vector<int> ans;
    // Prefix
    int product=1;
    for(int i=0;i<n;i++){
        prefix[i]=product;
        product*=vec[i];
    }
    product=1;
    for(int i=n-1;i>=0;i--){
        suffix[i]=product;
        product*=vec[i];
    }
    for(int i=0;i<n;i++){
        ans.push_back(prefix[i]*suffix[i]);
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}