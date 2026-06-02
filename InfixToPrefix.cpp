#include <iostream>
using namespace std;
#include <stack>
#include <algorithm>

int priority(char ch){
    if(ch == '^') return 3;
    else if(ch == '*' || ch == '/') return 2;
    else if(ch == '+' || ch == '-') return 1;
    else return -1;
}

void rev(string& str){
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(str[i] == '(') str[i] = ')';
        else if(str[i] == ')') str[i] = '(';
    }
}

int main(){
    string q = "a+b-c";
    rev(q);
    stack<char> st;
    string ans = "";
    for(char ch:q){
        if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
            ans += ch;
        } else if(ch == '('){
            st.push(ch);
        } else if(ch == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        } else {
            if(ch == '^'){
                while(!st.empty() && priority(ch) <= priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
            } else {
                while(!st.empty() && priority(ch) < priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    rev(ans);
    cout<<"Prefix Expression : "<<ans<<endl;
    return 0;
}