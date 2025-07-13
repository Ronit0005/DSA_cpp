// // Brute force .
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={3,-4,5,4,-1,7,-8};
//     int size = sizeof(arr)/sizeof(int);
//     int str;
//     int end ;
//     int maxSum=INT32_MIN;
//     int sum=0;
//     for(int i=0;i<size;i++){
//         for(int j=i;j<size;j++){
//             for(int k=i;k<=j;k++){
//                 sum+=arr[k];
//             }
//             if(sum>maxSum){
//                 maxSum=sum;
//                 str=i;
//                 end=j;
//             }
//             sum=0;
//         }
//     }
//     cout<<"Maximum Sum Of A Subarray : "<<maxSum<<endl;
//     cout<<"Start : "<<str<<endl<<"End : "<<end<<endl;
//     return 0;
// }


// // Optimised way :-
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={3,-4,5,4,-1,7,-8};
//     int size = sizeof(arr)/sizeof(int);
//     int maxSum=INT32_MIN;
//     int sum=0;
//     for(int i=0;i<size;i++){
//         for(int j=i;j<size;j++){
//             sum+=arr[j];
//             if(sum>maxSum){
//                 maxSum=sum;
//             }
//         }
//         sum=0;
//     }
//     cout<<"Maximum Sum : "<<maxSum<<endl;
//     return 0;
// }

// Kadane's Algorithm :-

