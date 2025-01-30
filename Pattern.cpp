#include <iostream>
using namespace std;
int main(){
    //PATTERN 1:
    /*int i=1;
    for(i=1;i<=9;i++){
        cout<<i;
        if(i%3==0){
            cout<<endl;
        }
    }
    */
   // PATTERN 2:
    /*for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
   */
    //PATTERN 3:
    /*for(int i=1;i<=4;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    */
   // PATTERN 4:
   /*int t=1;
   int n=1;
   for(int i=1;i<=10;i++){
     cout<<i;
     if(t==n){
        cout<<endl;
        n=0;
        t++;
     }
     n++;
   }
   */
  // PATTERN 5:
  /*int t=4;
    for(int i=1;i<=4;i++){
        for(int s=0;s<=i-1;s++){
            cout<<" ";
        }
        
        for(int j=1;j<=t;j++){
            cout<<i;
        }
        t--;
        cout<<endl;
    }
    */
   // PATTERN 5:
   /*int j;int n=3;
   for(int i=1;i<=4;i++){
    for( j=1;j<=n;j++){
        cout<<" ";
    }
    n--;
    for(int k=1;k<=i;k++){
        cout<<k;
    }
    for(int l=i-1;l>=1;l--){
        cout<<l;
    }
    cout<<endl;
   }
   */
  //PATTERN 6:
  int n=1;int z=3;
  for(int i=1;i<=4;i++){
    for(int j=1;j<=4-i;j++){
        cout<<" ";
    }
    cout<<"*";
    for(int k=1;k<=n-2;k++){
        cout<<" ";
    }
    n+=2;
    if(i!=1){
    cout<<"*";
    }
    cout<<endl;
  }
  for(int i=1;i<=3;i++){
    for(int j=1;j<=i;j++){
        cout<<" ";
    }
    cout<<"*";
    for(int k=1;k<=z;k++){
      cout<<" ";
    }
    z-=2;
    if(i!=3){
        cout<<"*";
    }
    cout<<endl;
  }
    return 0;
}