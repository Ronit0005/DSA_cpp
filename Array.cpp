
// #include <iostream>
// using namespace std;
// /*void changer(int t[]){
//      cout<<"In the changer function\n";
//      for(int i=0;i<10;i++){
//         t[i]*=10;
//      }
// }

// int main(){
    
//     /*int arr[]={1,2,3,4,5};
//     int size=(sizeof(arr))/sizeof(int);
//     long long int smallest = INT64_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<"The smallest number in the array is "<<smallest;
//     */
//     /*int arr[]={1,2,3,4,5,6,7,8,9,10};
//     changer(arr);
//     cout<<"In the main function\n";
//     for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
//         cout<<arr[i]<< ' ';
//     }
//     cout<<endl;
//     //cout<<(sizeof(arr)/sizeof(int));
    
//    //BINARY SEARCH TECHNIQUE
//    /*int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int num,index=-1;
//    cout<<"Enter the number to be searched :"<<endl;
//    cin>>num;
//    for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
//       if(num==arr[i]){
//         index=i;
//         cout<<"Number found"<<endl;
//       }
//    }
//    if(index==-1){
//     cout<<"Number not found"<<endl;
//    }
//    cout<<"Index is : "<<index;
   
   
//     return 0;
// }

#include <iostream>
using namespace std;
/*int algorithm(int n,int arr[]){
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}
*/
int main(){
    /*int n;
    cout<<"Enter the number to be checked :"<<endl;
    cin>>n;
    int arr[]={1,2,3,4,5};
    int t=algorithm(n,arr);
    if(t!=-1){
        cout<<"Number found : "<<"with the index : "<<t;
    }else{
         cout<<"Number not found : "<<"with the index : "<<t;
    }
    */
//    int arr[]={1,2,3,4,5,6,7,8,9};
//    for(int i=0;i<((sizeof(arr)/sizeof(int))/2);i++){
//     int t=arr[i];
//     arr[i]=arr[(sizeof(arr)/sizeof(int))-i-1];
//     arr[(sizeof(arr)/sizeof(int))-i-1]=t;
//    }
//    for(int j=0;j<9;j++){
//     cout<<arr[j]<<" ";
//    }
    // WAP TO PRINT ALL UNIQUE NUMBER IN THE ARRAY.
    int arr[]={9,2,8,4,3,6,3,8,9};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]&&i!=j){
                cout<<arr[j]<<endl;
                arr[i]=INT16_MAX;
            }
        }
    }
    return 0;
}