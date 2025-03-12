/*#include <iostream>
using namespace std;
int area(int l,int w){
    return l*w;
}
int main(){
    int data[]={1,8,6,2,5,4,8,3,7};
    int size=sizeof(data)/sizeof(int);
    int str,end;
    int maxArea=INT16_MIN;int c=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            c++;
            if(i!=j){
                if(maxArea<area(min(data[i],data[j]),c)){
                    maxArea=area(min(data[i],data[j]),c);
                    str=i;end=j;
                }
            }
        }
        c=0;
    }
    cout<<"The area of the container with maximum water is : "<<maxArea<<endl;
    cout<<"The starting endex is :"<<str<<" "<<"The ending index is : "<<end<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;
int main(){
    int data[]={1,8,6,2,5,4,8,3,7};
    int size=sizeof(data)/sizeof(int);
    int lp=0;
    int rp=size-1;
    int ans=0;
    while(lp<rp){
        int currenyArea=(rp-lp)*(min(data[lp],data[rp]));
        ans=max(ans,currenyArea);
        if(data[lp]>data[rp]){
            rp--;
        }else{
            lp++;
        }
    }
    cout<<"The maximum area of the container is : "<<ans<<endl;
    return 0;;
}