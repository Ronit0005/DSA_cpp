// Binary Numbers from decimal number 
#include <iostream>
using namespace std;
int decimalToBinary(int n){
    int t=n;int ans=0;int pow=1;
    while(t>0){
        int r=t%2;
        ans+=r*pow;
        t/=2;
        pow*=10;
    }
    return ans;
}
int binaryToDecimal(int n){
    int pow = 1;
    int t=n;int ans=0;
    while(t>0){
        int d=t%10;
        ans+=(pow*d);
        t/=10;
        pow*=2;
    }
    return ans;
}
int main(){
    // for(int i=0;i<=10;i++){
    //     cout<<"Binary from of "<<i<<" : "<<decimalToBinary(i)<<endl;
    // }
    cout<<"Decimal of binary "<<1010<<" is : "<<binaryToDecimal(1010)<<endl;
    return 0;
}