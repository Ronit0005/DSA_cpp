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

//#include <iostream>
//using namespace std;
// int cube(int n){
//     return n*n*n;
// }
// int add(int x,int y);
// void Swap(int* p,int*q){
//     int temp;
//     temp=*p;
//     *p=*q;
//     *q=temp;
// }
// inline void modifier(int& x){
//     x+=10;
// }


//int main(){
    /*int a,b;
    cout<<"Enter the value of a and b respectively"<<endl;
    cin>>a;
    cin>>b;
    cout<<cube(add(cube(a),cube(b)));
    */
    // cout<<"Enter the two number a and b"<<endl;
    // int a,b;
    // cin>>a;
    // cin>>b;
    // cout<<"The value of a and b is : "<<a<<" "<<b<<endl;
    // Swap(&a,&b);
    // cout<<"The value of a and b is : "<<a<<" "<<b;
   /*
   int a=3;
   modifier(a);
   */
//   for (int i=10;i<20;i++){
//     cout<<"Hello"<<endl;
//   }
  
 //  return 0;
//}
// int add(int x,int y){
//     return x+y;
// }
// int add(int x,int y,int z=10){
//     return x+y+z;
// }
/*
int main(){
    // cout<<add(20,30);
    // int twoD[2][3];
    // for(int i=0;i<2;i++){
        //     for(int j=0;j<3;j++){
            //         cin>>twoD[i][j];
            //     }
            // }
            // for(int i=0;i<2;i++){
                //     for(int j=0;j<3;j++){
                    //         cout<<twoD[i][j];
                    //     }
                    //     }
                    return 0;
                }
*/
/*#include <iostream>
using namespace std;
int main(){
    // int t=0;
    // while(t<10){
    //     cout<<"Hello World ! "<<t<<endl;
    //     t++;
    // }
    // int t=0;
    // do{
    //     cout<<"Hello World ! "<<t<<endl;
    //     t++;
    // }while(t<10);
    string day[7]={"sunday","Monaday","tuesday","wednesday","thursday","friday","saturday"};
    int n;
    cout<<"Enter the day number : ";
    cin>>n;
    if(n>6){
        cout<<"Invalid day number : ";
    }
    else{
        cout<<day[n-1];
    }
    return 0;
}*/



/*#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    cout<<"Enter the numbers in array one by one !!";
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<"The factoial of "<<i+1<<" "<<factorial(arr[i])<<endl;
    }
    return 0;
}*/


/*#include <iostream>
using namespace std;
struct Student{
    string name;
    int roll_no;
    int age;
    float cgpa;
};

int main(){
    Student s[5];
    for(int i=0;i<5;i++){
        cout<<"The student no. "<<i+1;
        cout<<"Enter your name"<<endl;
        getline(cin,s[i].name,'.');
        cout<<"Enter your age :"<<endl;
        cin>>s[i].age;
        cout<<"Enter your roll no. "<<endl;
        cin>>s[i].roll_no;
        cout<<"Enter your cgpa : "<<endl;
        cin>>s[i].cgpa;
    }
    for(int i=0;i<5;i++){
        cout<<"Name : "<<s[i].name<<" "<<"Age : "<<s[i].age<<" "<<"Roll No : "<<s[i].roll_no<<" "<<"Cgpa : "<<s[i].cgpa<<endl;
    }
    return 0;
}*/
// PRINTING DAY BY RESPECTIVELY NUMBER

/*#include <iostream>
using namespace std;
int main(){
    cout<<"Enter your choice"<<endl ;
    int n;
    cin>>n;
    if(n==0){
        cout<<"Monday";
    }
    else if(n==1){
        cout<<"Tuesday";
    }
    else if(n==2){
        cout<<"Wednesday";
    }
    else if(n==3){
        cout<<"Thurday";
    }
    else if(n==4){
        cout<<"Friday";
    }
    else if(n==5){
        cout<<"Saturday";
    }
    else if(n==6){
        cout<<"Sunday";
    }
    else {
        cout<<"Invalid Input !!!";
    }
    return 0;
}
*/

// USING SWITCH CASE :

/*#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the day number :";
    int n;
    cin>>n;
    switch(n){
        case 0:{
            cout<<"Monday";
            break;
        }
        case 1:{
            cout<<"Tuesday";
            break;
        }
        case 3:{
            cout<<"Wednesday";
            break;
        }
        default:{
            cout<<"Invalid Input !!!";
        }
    }
    return 0;
}
*/

// CLASS AND OBJECT (OOPS):
/*#include <iostream>
using namespace std;
class Student{
    int age;float cgpa;
    public:
    Student(int x,float y){
       age=x;
       cgpa=y;
    }
    void display(){
        cout<<"Cgpa is : "<<cgpa<<endl;
        cout<<"Age is : "<<age;
    }
};
int main(){
    Student ronit(20,9.2);
    ronit.display();
    return 0;
}*/
/*#include <iostream>
using namespace std;
class Student{
    public:
    int age;
    float cgpa;
    Student(int x,int y){
        age=x;
        cgpa=y;
    }
    void display(){
        cout<<"The cgpa is : "<<cgpa<<endl;
        cout<<"The age is :  "<<age<<endl;
    }
};
int main(){
    Student ob(20,9.1);
    //cout<<ob.age<<endl;
    //cout<<ob.cgpa<<endl;
    ob.display();
    return 0;
}*/


/*#include <iostream>
using namespace std;
class Courses{
    public:
    int noOfSemester;
    int noOfYear;
    Courses(int a,int b){
        noOfSemester=a;
        noOfYear=b;
    }
    Courses(Courses &x){
        noOfSemester=x.noOfSemester;
        noOfYear=x.noOfYear;
    }
};
int main(){
    Courses obj(8,4);
    Courses obj2=obj;
    cout<<obj2.noOfSemester<<endl;
    cout<<obj2.noOfYear<<endl;
    return 0;
}*/
/*class rectangle{
    public :
    int height;
    int breadth;
    rectangle(){
       height=0;
       breadth=0;
    }
    rectangle(int x, int y){
        height=x;
        breadth=y;
    }
};
#include <iostream>
using namespace std;
int main(){
    rectangle obj;
    cout<<obj.breadth<<endl;
    rectangle ob(12,24);
    cout<<ob.breadth;
    return 0;
}*/
/*
#include <iostream>
using namespace std;
class student{
    private:
    int age;
    int CGPA;
    public:
    int regno;
    student(int x,int y,int z){
        age=x;
        CGPA=y;
        regno=z;
    }
    friend void display(student &x);
    
};
void display(student &x){
    cout<<x.age<<endl;
    cout<<x.CGPA<<endl;
    cout<<x.regno;
}
int main(){
    student ronit(18,9.2,2401);
     
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class student{
    public:
    int maths,science;
    student(int x,int y){
        this->maths=x;
        this->science=y;
    }
    student operator +(student &x){
        return student(maths+x.maths,science+x.science);
    }
    
};
int main(){
    student s1(10,20);
    student s2(30,40);
    student s3=s1+s2;
    return 0;
}

*/
/*
#include <iostream>
using namespace std;
class student{
    int age;
    public:
    student(int x){
        age=x;
    }
    friend void show(student &ref);
};
void show(student &ref){
    cout<<"Age : "<<ref.age;
}
int main(){
    student obj(10);
    show(obj);
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Base{
    public:
    int a,b;
    void show(){
        cout<<"A : "<<a;
        cout<<"B : "<<b;
    }
};
class Derived:public Base{
    public:
    int c,d;
    void show(){
        cout<<"Overriding the show method";
    }
};
int main(){
    Derived obj;
    obj.show();
    return 0;
}
*/

#include <iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"Show of class A";
    }
};
class B:public A{
    public:
    virtual void show(){
      cout<<"Show of class B";
    }
};
int main(){
    A* ptr=new B();
    ptr->show();
    return 0;
}