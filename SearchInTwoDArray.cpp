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

/*#include <iostream>
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
}*/



// TYPE 2:

#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector <vector<int>> vec={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,22},{18,21,23,26,29}};
    int target=5;
    int row=5;
    int col=5;
    int mid=vec[0][col-1];
    int r=0;
    int c=4;
    while(r<5&&c>=0){
        if(vec[r][c]==target){
            cout<<"The element is found at the index : "<<r<<" , "<<c;
            break;
        }
        else if(vec[r][c]>target){
            c--;
        }
        else {
            r++;
        }
    }
    return 0;
}