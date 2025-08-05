// // Bubble Sorting :-

// #include <iostream>
// using namespace std;
// #include <algorithm>

// int main(){

//     int arr[]={4,1,5,2,3,6};
//     // int size = sizeof(arr)/sizeof(int);
//     int size=6;
//     bool isSwap=false;
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap=true;
//             }
//         }
//         if(!isSwap){
//             break;
//         }
//     }
//         for(int val : arr){
//             cout<<val<<" ";
//         }
//     return 0;
// }

// // Selection Sorting :-
// #include <iostream>
// #include <algorithm>
// using namespace std;
// #include <vector>

// void selectionSort(int arr[],int n){
//     int size=n;
//     for(int i=0;i<size-1;i++){
//         int smallestIdx=i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[smallestIdx]){
//                 smallestIdx=j;
//             }
//         }
//         swap(arr[i],arr[smallestIdx]);
//     }
//     return ;
// }
// int main(){
//     int arr[]={4,2,7,0,1,4,8};
//     for(int val : arr){
//         cout<<val<<" ";
//     }
//     selectionSort(arr,7);
//     cout<<endl<<"After Selection Sort"<<endl;
//     for(int val : arr){
//         cout<<val<<" ";
//     }

//     return 0;
// }

// // Insertion Sort :-
// #include <iostream>
// using namespace std;

// void insertionSort(int arr[],int size){
//     for(int i=1;i<size;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//     }
// }

// int main(){
//     int arr[]={4,1,2,5,3};
//     insertionSort(arr,5);
//     for(int val : arr){
//         cout<<val<<" ";
//     }
//     return 0;
// }


// // Selection Sort :-
// #include <iostream>
// using namespace std;

// void selectionSort(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         int smallestIdx = i;
//         for(int j=i+1;j<size;j++){
//             if(arr[smallestIdx]>arr[j]){
//                 smallestIdx=j;
//             }
//         }
//         swap(arr[i],arr[smallestIdx]);
//     }
// }

// int main(){
//     int arr[]={4,1,5,2,3};
//     selectionSort(arr,5);
//     for(int val : arr){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// // Insertion Sort :-

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[],int size){
//     for(int i=1;i<size;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev] > curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }

// int main(){
//     int arr[]={4,1,5,2,3};
//     int size = 5;
//     insertionSort(arr,size);
//     for(int val : arr){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int main(){
//     set<set<int>> st;
//     set<int> temp;
//     temp.insert(1);
//     temp.insert(2);
//     temp.insert(3);
//     st.insert(temp);
    
//     temp.clear();
//     temp.insert(1);
//     temp.insert(2);
//     temp.insert(3);
//     st.insert(temp);

//     for(set<int> val :st){
//         for(int el : val){
//             cout<<el<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

