#include <iostream>
using namespace std;

class CircularQueue{
public:
    int* arr;
    int cap,currSize,fr,re;
    CircularQueue(int size){
        cap=size;
        arr=new int[cap];
        currSize=0;
        fr=0;
        re=-1;
    }

    void push(int newData){
        if(currSize==cap){
            return;
        }else{
            re=(re+1)%cap;
            arr[re]=newData;
            currSize++;
        }
    }

    void pop(){
        if(currSize==0){
            return;
        }else{
            fr=(fr+1)%cap;
            currSize--;
        }
    }

    int isEmpty(){
        return (currSize==0);
    }

    int front(){
        if(currSize==0){
            return -1;
        }else{
            return arr[fr];
        }
    }
};
int main(){
    CircularQueue cq(5);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.pop();
    cq.push(6);

    while(!cq.isEmpty()){
        cout<<cq.front()<<" ";
        cq.pop();
    }
    return 0;
}
