#include <iostream>
using namespace std;

class Node{
    public:
        int Data;
        Node* prev;
        Node* next;
        Node(int val){
            Data = val;
            prev = NULL;
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
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = NULL;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout<<"List Is Empty"<<endl;
                return;
            }else{
                Node* temp = head;
                head = head->next;
                if(head != NULL){
                    head->prev = NULL;
                }
                delete temp;
            }
        }

        void pop_back(){
            if(head == NULL){
                cout<<"List Is empty"<<endl;
            }else{
                Node* temp = tail;
                tail = tail->prev;
                if(tail != NULL){
                    tail->next = NULL;
                }
                temp->prev = NULL;
                delete temp;
            }
        }

        int search(int target){
            Node* temp = head;
            int pos = 0;
            while(temp != NULL){
                if(temp->Data == target){
                    return pos;
                }
                temp = temp->next;
                pos++;
            }
            return -1;
        }

        void insert_in_middle(int target,int pos){
            Node* newNode = new Node(target);
            if(pos<0){
                cout<<"Invalid Input"<<endl;
                return;
            }
            if(pos==0){
                push_front(target);
                return;
            }
            Node* temp = head;
            for(int i=0;i<pos-1;i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next->prev= newNode;
            temp->next = newNode;
            newNode->prev = temp;

        }

        void print_all(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->Data<<" ";
                temp = temp->next;
            }
        }
};



int main(){
    List lest;
    lest.push_front(10);  
    lest.push_front(20);  
    lest.push_front(30);  
    lest.push_front(40);
    
    lest.push_back(1);
    lest.push_back(2);
    lest.push_back(3);

    lest.print_all();
    lest.insert_in_middle(100,4);
    cout<<endl<<lest.search(100);
    return 0;
}