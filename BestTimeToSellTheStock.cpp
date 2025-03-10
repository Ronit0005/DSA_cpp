#include <iostream>
using namespace std;
int main(){
    int n[]={7,1,5,3,6,4};
    int size=sizeof(n)/sizeof(int);
    int min=INT16_MAX;int str;
    for(int i=0;i<size;i++){
        if(n[i]<min){
            min=n[i];
            str=i;
        }
    }
    int max=INT16_MIN;int end;
    for(int i=str;i<size;i++){
        if(max<n[i]){
            max=n[i];
            end=i;
        }
    }
    if(max>min){
        cout<<"The best day to buy the stock is "<<str+1<<" and the best day to sell the stock is "<<end+1<<endl;
    }
    else{
        cout<<"No profits can be made "<<endl;
    }
    

    return 0;
}