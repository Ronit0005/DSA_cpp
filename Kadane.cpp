/*#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
            cout<<endl;
    }
    return 0;
}
*/
// NORMAL APPROACH:
/*#include <iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    long long min=INT64_MIN;
    int sum=0;
    int n=sizeof(arr)/sizeof(int);
    for(int str=0;str<n;str++){
        for(int end=str;end<n;end++){
            for(int i=str;i<end;i++){
                sum+=arr[i];
            }
            if(sum>min){
                min=sum;
            }
        sum=0;
        }
    }
    cout<<"MAXIMUM SUBARRAY SUM : "<<min;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    long long int maxi=INT64_MIN;
    int n=sizeof(arr)/sizeof(int);
    for(int str=0;str<n;str++){
        long long int arraySum=0;
        for(int end=str;end<n;end++){
            arraySum+=arr[end];
            maxi=max(arraySum,maxi);
        }
    }
    cout<<"Maximum subarray sum : "<<maxi;
    return 0;
}