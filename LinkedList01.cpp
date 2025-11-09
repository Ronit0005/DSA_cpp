#include <iostream>
using namespace std;

class Node{
    public:
        int Data;
        Node* next;
        Node(int data){
            Data = data;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void print_all(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->Data<<" ";
                temp = temp->next;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head= tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = newNode;
        }

        void pop_front(){
            Node* temp = head;
            if(head == NULL){
                cout<<"List Is Empty"<<" ";
                return;
            }
            head = head->next;
            temp->next = NULL;
            delete temp;
        }

        void pop_back(){
            if(head == NULL){
                cout<<"List Is Empty"<<" ";
                return;
            }

            Node* temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }

            temp->next = NULL;
            delete tail;
            tail = temp;
        }

        void insert_at_middle(int val,int pos){
            Node* newNode = new Node(val); 
            if(pos < 0 ){
                cout<<"Invalid Position"<<endl;
                return;
            }

            if(pos == 0){
                push_front(val);
                return;
            }

            Node* temp = head;
            for(int i=0;i<pos-1;i++){
                if(temp == NULL){
                    return;
                }
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

        int search(int val){
            Node* temp = head;
            int idx=0;
            while(temp != NULL){
                if(temp->Data == val){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
        }
};

int main(){
    List lest;
    lest.push_back(10);
    lest.push_back(40);
    lest.push_back(30);
    lest.push_back(20);
    lest.insert_at_middle(100,2);
    lest.print_all();
    return 0;
}