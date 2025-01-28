#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number :";
    // cin>>n;
    // if(n>=0){
    //     cout<<"The number is positive"<<endl;
    // }else{
    //     cout<<"The number is negative"<<endl;
    // }
    //CONDITIONAL STATEMENT:
    /*int marks=85;
    if(marks>=90){
        cout<<"A";
    }
    else if(marks>=80){
        cout<<"B";
    }
    else{
        cout<<"C";
    }*/
    //FIND WHETHER A CHARACTER IS UPPERCASE OR LOWERCASE.
    /*char ch;
    cout<<"Enter the character :"<<endl;
    cin>>ch;
    int ascii=(int)ch;
    if(ascii>=97 && ascii<=122){
        cout<<"The character is in lower case";
    }
    else{
        cout<<"The character is in upper case";
    }
         */
    // OR
    /*char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"LowerCase";
    }else{
        cout<<"UpperCase";
    }*/
    //OR
    //AS CHAR ARE STORED IN THE MEMEORY IN THE ASCII VALUE.
    /*char ch;
    cout<<"Enter the character :"<<endl;
    cin>>ch;
    if(ch>=97&&ch<=122){
        cout<<"LowerCase";
    }else{
        cout<<"Upper Case";
    }*/
//TERNARY STATEMENT:
    /*int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<(n>=0?"Positive":"Negative");
    */
    int i=1;
    while(i<=10){
        cout<<i<<' ';
        i++;
    }
    return 0;
}