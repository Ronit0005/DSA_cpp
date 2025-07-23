#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


bool palindrom(string str){
    int start = 0;
    int end = str.length()-1;
    int isPalindrom=1;
    while(start<end){
        char ch=tolower(str[start]);
        char chr = tolower(str[end]);
        if(!((ch>='a'&&ch<='z')||(ch>='A'&&chr<='Z')||(ch>='0'&&ch<='9'))){
            start++;
            continue;
        }
        else if (!((chr>='a'&&chr<='z')||(chr>='A'&&chr<='Z')||(chr>='0'&&chr<='9'))){
            end--;
            continue;
        }
        else{
            if(ch!=chr){
                isPalindrom=0;
                break;
            }
            else{
                start++;
                end--;
            }
        }
    }
    if(isPalindrom==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s = "race a car";
    cout<<palindrom(s)<<endl;
    return 0;
}