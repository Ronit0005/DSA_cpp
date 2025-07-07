// Brute Force :-
// #include <iostream>
// using namespace std;
// #include <vector>
// void pairSum(vector<int>& vec,int target){
//     for(int i=0;i<vec.size();i++){
//         for(int j=i+1;j<vec.size();j++){
//             if(vec[i]+vec[j]==target){
//                 cout<<"I : "<<i<<endl<<"J : "<<j<<endl;
//             }
//         }
//     }
// }
// int main(){
//     vector<int> vec={2,7,11,15};
//     pairSum(vec,13);
//     return 0;
// }


// Optimised approach :-

#include <iostream>
using namespace std;
#include <vector>
vector<int> pairSum(vector<int> vec,int target ){
    vector<int> vecAns;
    int str=0;
    int end=vec.size()-1;
    while(str<end){
        if(vec[str]+vec[end]>target){
            end--;
        }
        if(vec[str]+vec[end]<target){
            str++;
        }
        if(vec[str]+vec[end]==target){
            vecAns.push_back(str);
            vecAns.push_back(end);
            return vecAns;
        }
    }
}
int main(){
    vector<int> vec={2,7,11,15};
    vector<int> vecAns(pairSum(vec,13));
    for(int i=0;i<vecAns.size();i++){
        cout<<vecAns[i]<<" ";
    }
    return 0;
}