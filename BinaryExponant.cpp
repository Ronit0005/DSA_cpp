// #include <iostream>
// using namespace std;

// int binaryForm(int n){
//     int t=n;
//     int ans=0;
//     int x=1;
//     while(t>0){
//         int b=t%2;
//         ans+=b*x;
//         t/=2;
//         x*=10;
//     }
//     return ans;
// }

// int binaryExponant(int x,int n){
//     int binForm=binaryForm(n);
//     int c=x;
//     int ans=1;
//     int t=binForm;
//     while(t>0){
//         int d=t%10;
//         if(d==1){
//             ans=ans*c;
//         }
//         c*=c;
//         t/=10;
//     }
//     return ans;
// }
// int main(){
//     cout<<binaryExponant(2,5);
//     // cout<<binaryForm(10);
//     return 0;
// }

