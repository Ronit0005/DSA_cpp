//#include <iostream>
//using namespace std;
//enum size {small=10,medium=20,large=30,extralarge=40};
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }else{
//         return n*factorial(n-1);
//     }
// }
// int sum(int a,int b){
//     return a+b;
// }
//#include <string>
//int main(){
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
    // int a=10;
    // int* ptr[3];
    // ptr[0]=&a;
    // //cout<<ptr[0];
    // for(int i=0;i<3;i++){
    //     cout<<ptr[i]<<endl;
    // }
    // int a=10;
    // int * ptr=&a;
    // cout<<"The address of a is : "<<ptr;
    //int a=10;
    // int* ptr=&a;
    // int** gtr=&ptr;
    // cout<<**gtr;
    // struct Person{
    //     int age;
    //     float score;
    // };
    // Person p[150];
    // p.age=20;
    // p.score=100.69;
    // cout<<p.age<<endl;
    // cout<<p.score;
    // p[0].age=20;
    // p[0].score=10;
    // cout<<p[0].age<<endl;
    // cout<<p[0].score;
    // ENUMERATE DATA TYPE:
    // size s=small;
    // size s1=medium;
    // cout<<s<<endl;
    // cout<<s1;
    //string str="Ronit";
    //string occupaton="Software Engineer";
    //cout<<"The string is : "<<str<<" "<<occupaton;
    //cout<<str[0];
    //cout<<str.length();
// CONCATING NEW STRING:
    //char st[]="Kumar Singh";
    //cout<<str+' '+st;
    //char st[]="kumar Singh";
    //cout<<str+' '+st;
    //str.append(" Singh");
    //cout<<str;
    //str.erase(8);
    //cout<<str;
    //cout<<str.length();
    //cout<<str.find("ron");
//     string str="Ronit";
//     str.insert(5," Singh");
//     cout<<str;
// int a,b;
// cout<<"Enter the value of a and b "<<endl;
// cin>>a;
// cin>>b;
// int fact1=factorial(a);
// int fact2=factorial(b);
//cout<<"The sum of factorial of two numbers : "<<sum(factorial(a),factorial(b));
//return 0;
//}

#include <iostream>
using namespace std;
// int cube(int n){
//     return n*n*n;
// }
// int add(int x,int y);
void Swap(int* p,int*q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}


int main(){
    /*int a,b;
    cout<<"Enter the value of a and b respectively"<<endl;
    cin>>a;
    cin>>b;
    cout<<cube(add(cube(a),cube(b)));
    */
    cout<<"Enter the two number a and b"<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"The value of a and b is : "<<a<<" "<<b<<endl;
    Swap(&a,&b);
    cout<<"The value of a and b is : "<<a<<" "<<b;
    return 0;
}
// int add(int x,int y){
//     return x+y;
// }