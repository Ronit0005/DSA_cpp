#include <iostream>
using namespace std;
// void changer(int* ptr){
//     *ptr=20;
// }
// void changer(int &b){
//     b=100;
// }
int main(){
    // int a=10;
    // //cout<<"The address of a is : "<<&a;
    // int* ptr=&a;
    // //cout<<"ptr is : "<<ptr;
    // int** ptr2=&ptr;
    // // cout<<&ptr<<endl;
    // // cout<<ptr2;
    // //cout<<*ptr;
    // // int* gtr=NULL;
    // // cout<<gtr;
    // int* gtr;
    // cout<<gtr;
    // int a=10;
    // changer(&a);
    // cout<<"The value of changed a is : "<<a;
    // int a=10;
    // changer(a);
    // cout<<"The value of changed a is : "<<a;
    int arr[5]={1,2,3,4,5};
    // cout<<*arr<<endl;
    // cout<<&arr[0];
    // int* ptr=&arr[3];
    // cout<<*(ptr-2);
    //cout<<&arr[0]-&arr[4];
    //cout<<(&arr[0]<&arr[3]);
    //cout<<(&arr[0]==arr);
    cout<<(&arr[0]!=&arr[3]);
    return 0;
}