#include <iostream>
using namespace std;
int main(){
    //int arr[]={1,2,3,4,5};
    //cout<<*arr<<endl;
    //cout<<*(arr+1);
    //for(int i=0;i<=4;i++){
    //    cout<<*(arr+i)<<endl;
    //}
    // FOR TWO DIMENSIONAL ARRAY:
    //int arr[3][2]={{1,2},{3,4},{5,6}};
    //cout<<arr[0]<<" is "<<*arr[0]<<endl;
    //cout<<arr;
    //cout<<(*(*(arr+2))+1);
    //cout<<(*(arr+1));
    //POINTER :Is a derived data type.
    // int a=10;
    // int* ptr=&a;
    // cout<<"The address of a is "<<ptr<<endl;
    // cout<<"The value at the adress "<<ptr<<" is "<<*ptr;
    // We can also create an array of pointer.
    int a=10;
    int* ptr[3];
    ptr[0]=&a;
    //cout<<ptr[0];
    for(int i=0;i<3;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;
}