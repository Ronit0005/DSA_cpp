// #include <iostream>
// using namespace std;
// bool linearSpace(int sample[][3],int rows,int column,int target){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<column;j++){
//             if(target==sample[i][j]){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     // int two_d[4][3]={{1,2,3},{4,5,6},{7,8,9},{0,1,2}};
//     // for(int i=0;i<4;i++){
//     //     for(int j=0;j<3;j++){
//     //         cout<<two_d[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     // cout<<two_d[2][1];

//     int sample[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<linearSpace(sample,3,3,9);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void func(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[]={1,2,3,4};
//     func(arr,4);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n=3;
//     int arr[n][n]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i==j){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     int k=0;int m=2;int sum2=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i==k&&j==m){
//                 sum2+=arr[i][j];
//             }
//         }
//         k++;
//         m--;
//     }
//     cout<<"Sum Of Primary Diagonal: "<<sum<<endl;
//     cout<<"Sum Of Secondary Diagonal: "<<sum<<endl;
//     cout<<"Sum Of Diagonal: "<<sum2+sum-arr[1][1]<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int n=3;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 sum+=arr[i][j];
//             }
//             else if(j==n-1-i){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     cout<<"Sum : "<<sum<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int n=3;int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i][i];
//         if(i!=n-1-i){
//             sum+=arr[i][i];
//         }
//     }
//     return 0;
// }

#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    int rows = mat.size();
    int col=mat[1].size();
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}