/*#include <iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int targetSum=9;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(arr[i]+arr[j]==targetSum){
            cout<<"Pair Sum is : "<<arr[i]<<" and "<<arr[j]<<endl;
            i=10;
            break;
           }
        }
    }
    return 0;
}
*/
// OPTIMIZE APPROACHZ:
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int str=0;
    int target=9;
    int end=(sizeof(arr)/sizeof(int)-1);
    while(str!=end){
        if(arr[str]+arr[end]>target){
            end--;
        }
        else if(arr[str]+arr[end]<target){
            str++;
        }
        else{
            cout<<"The pair sum that hits the target "<<target<<" is : "<<arr[str]<<" and "<<arr[end];
            break;
        }
    }
    return 0;

}