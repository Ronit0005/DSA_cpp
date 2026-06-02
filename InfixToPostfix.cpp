#include <iostream>
using namespace std;
#include <string>
#include <stack>
int priority(char ch){
    if(ch == '^') return 3;
    else if(ch == '*' || ch == '/') return 2;
    else if(ch == '+' || ch == '-') return 1;
    else return -1;
}
int main(){
    string q = "1+2*3";
    string ans="";
    stack<char> st;
    for(char ch:q){
        if(ch >= 'A' && ch <= 'Z' || ch >='a' && ch <= 'z' || ch >='0' && ch <= '9'){
            ans += ch;
        } else if(ch == '('){
            st.push(ch);
        } else if(ch == ')'){
            while(st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        } else {
            if(!st.empty() && priority(ch) <= priority(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout << "Postfix Expression : "<<ans<<endl;
    return 0;
}