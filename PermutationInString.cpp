#include <iostream>
using namespace std;
int freqMain[26]={0};
int freqWin[26]={0};
void mainCounter(string s){
    for(int i=0;i<s.length();i++){
      freqMain[s[i]-'a']++;  
    }
}
void winCounter(string s){
    for(int i=0;i<s.length();i++){
      freqWin[s[i]-'a']++;  
    }
}
bool check(){
    for(int i=0;i<26;i++){
        if(freqMain[i]!=freqWin[i]){
            return false;
        }
    }
    return true;
}
void resetter(){
    for(int i=0;i<26;i++){
        freqWin[i]=0;
    }
}
int main(){
    string s="eibdaooo";
    int sLen=s.length();
    string part="ab";bool j=true;
    int start=0; freqMain[26]={0};
    freqWin[26]={0};
    int partLen=part.length();
    int end=partLen-1;
    resetter();
    mainCounter(part);
    while(end<sLen){
        winCounter(s.substr(start,partLen));
        if(!check()){
            start++;end++;
            resetter();
        }
        else{
            j=false;
            break;
        }
    }
    if(!j){
        cout<<s.substr(start,partLen);
    }else{
        cout<<"The element is not found : ";
    }
    return 0;
}