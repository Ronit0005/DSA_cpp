// STACK Using vectors :-

// #include <iostream>
// using namespace std;
// #include <vector>

// class Stack{
//     vector<int> stack;
//     public:
//     void Push(int newData){
//         stack.push_back(newData);
//         cout<<endl<<"Pushed "<<newData;
//     }
//     void Pop(){
//         if(stack.size()==0){
//             cout<<endl<<"Stack Underflow";
//         }
//         else{
//             cout<<"Poped "<<stack.back()<<endl;;
//             stack.pop_back();
//         }
//     }
//     int Top(){
//         return stack[stack.size()-1];
//     }
//     string empty(){
//         if(stack.size()==0){
//             return "True";
//         }else{
//             return "False";
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Stack stak;
//     cout<<stak.empty();
//     stak.Push(10);
//     stak.Push(11);
//     stak.Push(12);
//     stak.Push(13);
//     stak.Push(14);
//     stak.Push(15);
//     stak.Push(16);
//     stak.Pop();
//     stak.Pop();
//     stak.Pop();
//     stak.Pop();
//     cout<<stak.Top()<<endl;;
//     cout<<stak.empty();
//     return 0;
// }


// STACK Using Linked List :-

#include <iostream>
using namespace std;
#include <list>

class List {
    list<int> list;
    public:
    void Push(int newData){
        list.push_front(newData);
    }
    void Pop(){
        list.pop_front();
    }
    int Top(){
        return list.front();
    }
    bool isEmpty(){
        return list.size()==0;
    }
};

int main(){
    List lst;
    lst.Push(10);
    lst.Push(20);
    lst.Push(30);

    while(!lst.isEmpty()){
        cout<<lst.Top()<<" ";
        lst.Pop();
    }
    return 0;
}