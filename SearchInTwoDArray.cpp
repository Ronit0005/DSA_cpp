// BRUTE FORCE TECHNIQUE:
/*#include <iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=34;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                cout<<"The element is found at the index : "<<i<<" , "<<j;
                break;
            }
        }
    }
    return 0;
}*/

// MY APPROCH:

#include <iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=34;
    int row=3;
    int col=4;
    for(int i=0;i<3;i++){
        if(arr[i][col-1]>target){
            for(int j=0;j<col;j++){
                if(arr[i][j]==target){
                    cout<<"The element is found at the index : "<<"("<<i<<","<<j<<")";
                    break;
                }
            }
            break;
        }
    }
    return 0;
}