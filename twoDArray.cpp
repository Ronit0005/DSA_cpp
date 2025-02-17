/*#include <iostream>
using namespace std;
int main(){
    int matrix[4][3];
    int row=4;
    int col=3;
    //cout<<matrix[2][1];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}*/

// LINEAR SEARCH TECHNIQUE IN 2 D ARRAY .
/*#include <iostream>
using namespace std;
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    int key=8;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
                cout<<"The element is found at the index "<<i<<","<<j;
            }
        }
    }
    return 0;
}*/

// MAXIMUM ROW SUM :
/*#include <iostream>
using namespace std;
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    int sum=0;
    int maxi=INT16_MIN;
    int r=-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            r=i;
        }
        sum=0;
    }
    cout<<"The maximum row sum is : "<<maxi<<" Found in the row : "<<r;
    return 0;
}*/

// SUM OF PRIMARY AND SECONDARY DIAGONAL:
/*#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // sum of primary diagonal:
    int row=3;
    int col=3;int z=0;int sum=0;
    int temp=col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j||i==z&&j==temp-1){
                sum+=arr[i][j];
            }
            
        }
        z++;
        temp--;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}*/

// OPTIMIZE WAY:
/*#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int column=3;
    int sum=0;
    for(int i=0;i<3;i++){
        if(i!=column-1-i){
            sum=sum+arr[i][i];
        }
        sum+=arr[i][column-1-i];
    }
    cout<<"Sum is : "<<sum;
    return 0;
}*/

// TWO D VECTOR :
/*#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector<vector<int>> vec={{1,2,3},{4,5,6,10,11},{7,8,9}};
    // cout<<"The number of rows is : "<<vec.size()<<endl;
    // cout<<"The number of column is : "<<vec[0].size();
    int row=3;
    int col=3;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
