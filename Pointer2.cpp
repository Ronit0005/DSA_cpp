#include <iostream>
using namespace std;

int main(){
    // int a=10;
    // cout<<&a<<endl;
    // int* ptr=&a;
    // cout<<ptr<<endl;
    // string str="Ronit";
    // cout<<&str<<endl;
    // string* ptr2=&str;
    // cout<<ptr2<<endl;
    // float a=10.09;
    // cout<<sizeof(a)<<endl;
    // int a=10;
    // int* ptr=&a;
    // int** ptr2=&ptr;
    // cout<<ptr<<" "<<*ptr<<endl;
    // cout<<ptr2<<" "<<*(*ptr2)<<endl;
    // int a=10;
    // int* ptr =NULL;
    // int* ptr2 ;
    // cout<<ptr<<endl;
    // cout<<ptr2<<endl;
    // int arr[]={10,3,7,3,1,20};
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*arr+2<<endl;
    // int a =20;
    // int* ptr = &a;
    // int* ptr2=ptr+10;
    // cout<<ptr2-ptr;
    int a=10;
    int* ptr = &a;
    int* ptr2=ptr+3;
    cout<<(ptr2>=ptr);
    return 0;
}