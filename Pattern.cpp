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
   
    return 0;
}