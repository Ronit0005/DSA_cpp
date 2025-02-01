/*#include <iostream>
using namespace std;
int greet(){
    cout<<"HII FRIEND"<<endl;
    return 1;
}
int main(){
    int t=greet();
    cout<<"The value is = "<<t<<endl;
    return 0;
}*/
// CALCULATING THE SUM OF THE DIGIT OF A NUMBER USING FUNCTIONS.
/*#include <iostream>
using namespace std;
int sum(int n){
    int sum=0;
    while(n>0){
        int t=n%10;
        sum+=t;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number whose sum of digit is to be calculated. "<<endl;
    cin>>n;
    cout<<"The sum of the digit of number "<<n<<" is "<<sum(n);
    return  0;
}
*/
// CALCULATE NCR FOR BINOMAIL COEFFICIENT N AND C.
/*#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
    int n,c;
    cout<<"Enter the value of n for the binomail coefficient : "<<endl;
    cin>>n;
    cout<<"Enter the value of c for the binomial coefficient : "<<endl;
    cin>>c;
    double value=factorial(n)/(factorial(c)*(double)factorial(n-c));
    cout<<"The value of the binomial coefficient is : "<<value;
    return 0;
}
*/
// SWITCH STATEMENT IN CPP.
#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number.";
  cin>>n;
  switch(n){
    case 1:{
    cout<<"The number is one...";
    break;
    }
    case 2:{
        cout<<"The number is two...";
        break;
    }
    default:{
        cout<<"The number is some other than one and two.....";
    }
  }
}