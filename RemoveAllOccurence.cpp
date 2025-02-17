#include <iostream>
using namespace std;
int main(){
    string part="abc";
    string s="daabc";
    // int lenPart=part.length();
    // int index=s.find(part);
    while(s.length()>0&&s.find(part)<s.length()){
      s.erase(s.find(part),part.length());
    }
    cout<<"Final string is : "<<s;
    return 0;
}