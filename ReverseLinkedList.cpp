#include <iostream>
using namespace std;

class Node{
    public:
        int Data;
        Node* next;
        Node(int data){
            Data=data;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head=tail=NULL;
        }

        void push_back(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void print_all(){
            Node* temp = head;
            while(temp!= NULL){
                cout<<temp->Data<<" ";
                temp = temp->next;
            }
        }

        Node* reverse(){
            Node* curr = head;
            Node* prev = NULL;
            Node* succ = NULL;

            while(curr != NULL){
                succ = curr->next;
                curr->next = prev;
                prev = curr;
                curr = succ;
            }
            return prev;
        }
};

int main(){
    List lest;
    lest.push_back(10);
    lest.push_back(20);
    lest.push_back(30);
    lest.push_back(40);
    lest.print_all();
    cout<<lest.reverse();
    return 0;
}