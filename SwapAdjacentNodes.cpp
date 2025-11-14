#include <iostream>
using namespace std;

class Node{
    public:
        int Data;
        Node* next;
        Node(int val){
            Data = val;
            next = NULL;
        }
};

class List{
    public:
    Node* head;
    Node* tail;
        List(){
            head = tail = NULL;
        }
        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return;
            }
            tail->next = newNode;
            tail =newNode;
            }

        Node* swapAdjacentNode(Node* head){
            if(head == NULL || head->next == NULL){
                return head == NULL ? NULL : head;
            }
            Node* temp1 = head;
            Node* temp2 = head->next;
            temp1->next = swapAdjacentNode(temp2->next);
            temp2->next = temp1;
            return temp2;
        }

        void print_all(Node* head){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->Data<<" ";
                temp = temp->next;
            }
        }
};

int main(){
    List lest;
    lest.push_back(0);
    lest.push_back(1);
    lest.push_back(2);
    lest.push_back(3);
    lest.push_back(4);

    lest.print_all(lest.swapAdjacentNode(lest.head));
    return 0;
}