/*#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,1,1};
    int freq=0;
    int size=sizeof(arr)/sizeof(int);
    int i;
    for(i=0;i<size;i++){
        freq=0;
        for(int j=0;j<size;j++){
            if(i!=j&&arr[i]==arr[j]){
              freq++;
              }
            }
            if(freq>=size/2){
                cout<<"Majority element is : "<<arr[i];
                break;
            }
        }
    return 0;
}
    */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int freq=1;
    vector<int> vec={1,2,2,1,1};
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
       if(vec[i]==vec[i+1]){
        freq++;
       }
       else{
        freq=1;
       }
       if(freq>=vec.size()/2){
        cout<<"Majority Element is "<<vec[i];
        break;
       }
    }
    return 0;
}