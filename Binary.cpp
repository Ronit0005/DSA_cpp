// CONVERT DECIMAL TO BINARY SYSTEM.
/*#include <iostream>
using namespace std;
int converter(int n){
    int x=1;int ans=0;
    while(n>0){
        int t=n%2;
        ans=ans+(t*x);
        n=n/2;
        x*=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number which you want to convert to the binary form : ";
    cin>>n;
    cout<<"The binary form of the number "<<n<<" is "<<converter(n);
    return 0;
}
*/
// CONVERTING BINARY TO DECIMAL.
#include <iostream>
int converter(int n){
    int ans=0;int power=1;
    while(n>0){
        int rem=n%10;
        ans+=rem*power;
        n/=10;
        power*=2;
    }
    return ans;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary number : ";
    cin>>n;
    cout<<"The decimal form of the number is "<<converter(n);
    return 0;
}