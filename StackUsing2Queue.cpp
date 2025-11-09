#include <iostream>
using namespace std;
#include <queue>

class MyStack {
public:
    queue<int> mains;
    queue<int> helper;
    MyStack() {
        
    }
    
    void push(int x) {
        if(mains.empty()){
            mains.push(x);
        }else{
            while(!mains.empty()){
                helper.push(mains.front());
                mains.pop();
            }
            mains.push(x);
            while(!helper.empty()){
                mains.push(helper.front());
                helper.pop();
            }
        }
    }
    
    int pop() {
        int temp = mains.front();
        mains.pop();
        return temp;
    }
    
    int top() {
        return mains.front();
    }
    
    bool empty() {
        return mains.empty();
    }
};


int main(){
    MyStack ms;
    ms.push(10);
    ms.push(20);
    ms.push(30);
    cout<<ms.top()<<endl;
    ms.pop();
    cout<<ms.top()<<endl;

    return 0;
}