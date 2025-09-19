#include <iostream>
using namespace std;
class Node{
    public:
        int Data;
        Node* next;
        Node(int val){
            Data=val;
            next=NULL;
        }
};

class Queue{
public:
    Node* head;
    Node* tail;
    Queue(){
        head=tail=NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
        }
        Node* temp=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }
        delete temp;
    }
    int empty(){
        return head==NULL;
    }
    int front(){
        if(head==NULL){
            return -1;
        }else{
            return head->Data;
        }
    }
};

int main(){
    Queue queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);

    while(!queue.empty()){
        cout<<queue.front()<<" ";
        queue.pop();
    }
    return 0;
}