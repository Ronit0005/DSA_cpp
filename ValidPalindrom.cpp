#include <iostream>
using namespace std;
bool isAlphaNumeric(char ch){
    if(ch>='0'&&ch<='9'||ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        return true;
    }
    return false;
}
int main(){
    string str="m*d*m";
    int st=0;bool t=true;
    int end=str.length()-1;
    while(st<end){
        if(!(isAlphaNumeric(str[st]))){
            st++;
        }
        if(!isAlphaNumeric(str[end])){
            end--;
        }
        if(tolower(str[st])!=tolower(str[end])){
            t=false;
        }
        st++;
        end--;
    }
    if(t){
        cout<<"The word is palindrom !!! ";
    }else{
        cout<<"The word is not palindrom !!!";
    }
    return 0;
}