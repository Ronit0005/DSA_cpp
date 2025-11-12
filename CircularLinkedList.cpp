#include <iostream>
using namespace std;

class Node{
public:
    int Data;
    Node* next;
    Node(int val){
        Data = val;
    }
};

class CircularLL{
    Node* head;
    Node* tail;
    public:
        CircularLL(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                newNode->next = newNode;
            }else{
                newNode->next = head;
                tail->next = newNode;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                newNode->next = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
                newNode->next = head;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout<<"List Is Empty"<<endl;
                return;
            }

            if(head == tail){
                head->next = NULL;
                delete head;
                return;
            }

            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }

        void pop_back(){
            if(head == NULL){
                cout<<"List Is Empty"<<endl;
                return;
            }

            if(head == tail){
                head->next = NULL;
                delete head;
            }

            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            prev->next = head;
            delete temp;
        }

        void print_all(){
            Node* temp = head;
            do{
                cout<<temp->Data<<" ";
                temp = temp->next;
            } while(temp != head);
        }
};

int main(){
    CircularLL lest;
    lest.push_back(1);
    lest.push_back(2);
    lest.push_back(3);
    lest.push_back(4);

    lest.print_all();
    return 0;
}