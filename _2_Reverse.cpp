#include <iostream>
using namespace std;

int main(){
    string str = "Ronit Kumar Singh";
    int start=0;
    int end=str.length()-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;

    }
    cout<<"Reversed string : "<<str<<endl;
    return 0;
}