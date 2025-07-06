// #include <iostream>
// using namespace std;

// int main(){
//     // double PI ;
//     // PI = 1.01;
//     // cout<<PI<<endl;
//     // cout<<"Hello World"<<endl;
//     // char grade = 'A';
//     // int grade_num = grade ;
//     // cout<<grade_num<<endl;
//     // double a = 56.999;
//     // int b = (int)a;
//     // cout<<b<<endl;

//     // // Ternary statement :-
//     // int a = 10 ;
//     // cout<<(a>0?"Positive":"Negative");

//     // Infinite loop :-
//     // while(true){
//     //     cout<<"Hello People"<<endl;
//     // }
//     // cout<<"Prime numbers between 1 and 100 is : ";
//     // int n=100;
//     // for(int i=1;i<=n;i++){
//     //     int c=0;
//     //     for(int j=1;j<=i;j++){
//     //         if(i%j==0){
//     //             c++;
//     //         }
//     //     }
//     //     if(c==2){
//     //         cout<<i<<" ";
//     //     }
//     // }

//     // // Optimised prime number logic :-
//     // int n=10;
//     // for(int i=2;i*i<=n;i++){
//     //     if(n%i==0){
//     //         cout<<"Not A Prime Number"<<endl;
//     //         break;
//     //     }
//     // }

//     // // floyd's triangle :-
//     // int z=1;int n=9;
//     // for(int i=1;i<=n;i++){
//     //     for(int j=1;j<=i;j++){
//     //         cout<<z<<" ";
//     //         z++;
//     //     }
//     //     cout<<endl;
//     // }


//     // int n=10;
//     // int c=n;
//     // for(int i=1;i<=n;i++){
//     //     for(int j=1;j<=(i-1);j++){
//     //         cout<<' ';
//     //     }
//     //     for(int k=1;k<=c;k++){
//     //         cout<<i;
//     //     }
//     //     c--;
//     //     cout<<endl;
//     // }

//     // // Pyramid triangle :-
//     // int n=10;
//     // int c=n-1;
//     // int x=0;
//     // for(int i=1;i<=n;i++){
//     //     for(int j=1;j<=c;j++){
//     //         cout<<" ";
//     //     }
//     //     for(int k=1;k<=i;k++){
//     //         cout<<k;
//     //     }
//     //     for(int l=x;l>=1;l--){
//     //             cout<<l;
//     //     }
        
//     //     cout<<endl;
//     //     c--;
//     //     x++;
//     // }


//     // Hollow diamond pattern :-

//     // Fibonacii Series :-

//     return 0;
// }


// #include <iostream>
// using namespace std;
// void fibonacii(int n){
//     if(n==1){
//         cout<<0;
//     }
//     else if(n==2){
//         cout<<1;
//     }
//     else{
//         int a=0;
//         int b=1;
//         cout<<a<<' '<<b<<' ';
//         for(int i=3;i<=n;i++){
//             int t=b;
//             b=a+b;
//             a=t;
//             cout<<b<<' ';
//         }
//     }
// }
// int main(){
//     fibonacii(10);
//     return 0;
// }
