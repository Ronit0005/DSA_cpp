// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1000,-100,5,6,23,67,10};
//     int largest=INT32_MIN;
//     int smallest=INT32_MAX;
//     for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
//         // if(arr[i]>largest){
//         //     largest=arr[i];
//         // }
//         largest=max(largest,arr[i]);
//         smallest=min(smallest,arr[i]);
//         // if(arr[i]<smallest){
//         //     smallest=arr[i];
//         // }
//     }
//     cout<<"Largest : "<<largest<<endl<<"Smallest : "<<smallest<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void changer(int arr[],int size){
//     for(int i=0;i<size;i++){
//         arr[i]+=10;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     changer(arr,5);
//     for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// // Linear Search :-
// #include <iostream>
// using namespace std;
// int linearSearch(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(target==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     cout<<"Target Found at : "<<linearSearch(arr,0,4);
//     return 0;
// }


// // Reversing an array :-
// #include <iostream>
// using namespace std;
// void changer(int arr[],int size){
//     int str = 0;
//     int end = size-1;
//     while(str<end){
//         swap(arr[str],arr[end]);
//         str++;
//         end--;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     changer(arr,10);
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// // Wap to find the unique number in array :-
// #include <iostream>
// using namespace std;
// void unique(int arr[],int size ){
//     for(int i=0;i<size;i++){
//         bool isUnique=true ;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j]&&i!=j){
//                 isUnique=false;
//             }
//         }
//         if(isUnique){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,2,3,3,4,5,6,6};
//     unique(arr,(sizeof(arr)/sizeof(int)));
//     return 0;
// }

// // Intersection of two array :-
// #include <iostream>
// using namespace std;
// void intersection(int arr1[],int size1,int arr2[],int size2){
//     for(int i=0;i<size1;i++){
//         for(int j=0;j<size2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int arr1[]={2,3,4,5,6,7};
//     int arr2[]={5,6,7,10,11,12};
//     intersection(arr1,6,arr2,6);
//     return 0;
// }

