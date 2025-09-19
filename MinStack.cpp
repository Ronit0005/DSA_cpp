// #include <iostream>
// using namespace std;
// #include <stack>
// #include <vector>
// #include <utility>

// void push(stack<pair<int,int>> &temp,int newValue){
//     if(temp.empty()){
//         temp.push({newValue,newValue});
//     }else{
//         int topMin = (temp.top()).second;
//         if(topMin<newValue){
//             temp.push({newValue,topMin});
//         }else{
//             temp.push({newValue,newValue});
//         }
//     }
//     cout<<"Pushed Value : "<<newValue<<endl;
// }

// void pop(stack<pair<int,int>> &temp){
//     temp.pop();
//     cout<<"Poped Successfully"<<endl;
// }

// void MinValue(stack<pair<int,int>> &temp){
//     cout<<temp.top().second<<endl;
// }
// int main(){
//     stack<pair<int,int>> stk;
//     push(stk,1);
//     push(stk,5);
//     push(stk,1);
//     pop(stk);
//     push(stk,0);
//     MinValue(stk);
//     return 0;
// }



#include <iostream>
using namespace std;
#include <stack>
class Stack{
    stack<long long int> stk;
    long long int minVal;
    public:
    int getMin(){
        return minVal;
    }
    void push(int val){
        if(stk.empty()){
            minVal=val;
            stk.push(val);
        }
        if(val<minVal){
            stk.push(2*val-minVal);
            minVal=val;
        }else{
            stk.push(val);
        }
        cout<<"Pushed "<<val<<endl;
    }
    void pop(){
        if(stk.empty()){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        if(stk.top()<minVal){
            minVal=2*minVal-stk.top();
        }
        stk.pop();
    }
    int top(){
        if(stk.top()<minVal){
            return minVal;
        }else{
            return stk.top();
        }
    }
};

int main(){
    Stack st;
    st.push(1);  
    st.push(-1);
    // st.pop();  
    st.push(2);
    cout<<st.top()<<endl;  
    st.push(0);  
    cout<<st.getMin()<<endl;
    return 0;
}