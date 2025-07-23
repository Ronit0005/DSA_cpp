#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    // string str = "Ronit Kumar Singh";
    // int start=0;
    // int end=str.length()-1;
    // while(start<end){
    //     swap(str[start],str[end]);
    //     start++;
    //     end--;

    // }
    // cout<<"Reversed string : "<<str<<endl;

    // char chr[]={'a','b','c','d'};
    // chr[3]='z';
    // cout<<chr;

    string str = "Ronit Kumar Singh";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}