#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n){
    return ((int)(log10(n)+1));
}

bool isArmstrong(int n){
    int sum=0;
    int t=n;
    int d;
    while(t>0){
        d=t%10;
        sum+=d*d*d;
        t/=10;
    }
    return (n==sum);
}

int GCD(int n1,int n2){
    int Min=min(n1,n2);
    int Max=0;
    if(n1==0&&n2!=0){
        return n2;
    }
    if(n2==0&&n1!=0){
        return n1;
    }
    for(int i=1;i<=Min;i++){
        if(n1%i==0&&n2%i==0){
            Max=max(Max,i);
        }
    }
    return Max;

}

int gcd(int n1,int n2){
    if(n1==0){
        return n2; 
    }
    else if(n2==0){
        return n1;
    }
    else if(n1>n2){
        return gcd(n1%n2,n2);
    }
    else{
        return gcd(n1,n2%n1);
    }
}

int Gcd(int n1,int n2){
    while(n1>0&&n2>0){
        if(n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        return n2;
    }
    else{
        return n1;
    }
}

int reverseNum(int n){
    int t=n;
    int rev=0;
    int a=1;
    int noOfDig=(int)(log10(n)+1);
    for(int i=1;i<noOfDig;i++){
        a*=10;
    }
    while(t>0){
        int d=t%10;
        rev=rev+(d*a);
        a/=10;
        t/=10;
    }
    return rev;
}


int reverseNumb(int n){
    int rev=0;int t=n;
    while(t>0){
        int d=t%10;
        if(rev>INT32_MAX/10||rev<INT32_MIN/10){
            return 0;
        }
        rev=rev*10+d;
        t/=10;
    }
    return rev;
}

bool palindrom(int n){
    if(n){
        int t=n;int rev=0;
        while(t>0){
            int d=t%10;
            rev=rev*10+d;
            t/=10;
        }
        if(n==rev){
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}

int main(){
    // int n1=28;
    // int n2=20;
    // cout<<palindrom(5574)<<endl;
    // cout<<((10+98)%5==(10%5+98%5))<<endl;
    // cout<<(2%10)<<endl;

    return 0;
}