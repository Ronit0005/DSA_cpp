#include <iostream>
using namespace std;

int main(){
    string str ="daad";
    string subStr="ad";
    int lenSubStr=subStr.length();
    while(str.find(subStr)<str.length()&&str.length()!=0){
        str.erase(str.find(subStr),str.find(subStr)+lenSubStr);
    }
    cout<<str<<endl;
    return 0;
}