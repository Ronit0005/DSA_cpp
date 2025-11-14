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
            tail = newNode;
        }

        Node* mergeTwoSortedList(Node* lest,Node* kest){
            Node* temp1;
            Node* temp2;
            Node* prev;
            Node* newHead;
            if(lest->Data > kest->Data){
                newHead = new Node(kest->Data);
                temp1 = lest;
                temp2 = kest->next;
            }else{
                newHead = new Node(lest->Data);
                temp1 = lest->next;
                temp2 = kest;
            }
            prev = newHead;
            lest = temp1;
            kest = temp2;
            while(lest != NULL or kest != NULL){
                if(lest == NULL){
                    Node* curr = new Node(kest->Data);
                    prev->next = curr;
                    kest = kest->next;
                    prev = curr;
                }
                else if(kest == NULL){
                    Node* curr = new Node(lest->Data);
                    prev->next = curr;
                    lest = lest->next;
                    prev = curr;
                }
                else if(lest->Data > kest->Data){
                    Node* curr = new Node(kest->Data);
                    prev->next = curr;
                    kest = kest->next;
                    prev = curr;
                } else{
                    Node* curr = new Node(lest->Data);
                    prev->next = curr;
                    lest = lest->next;
                    prev = curr;
                }
                
            }
            return newHead;
        }

        void print_all(Node* Head){
            Node* temp = Head;
            while(temp != NULL){
                cout<<temp->Data<<" ";
                temp = temp->next;
            }
        }
};

int main(){
    List lest;
    lest.push_back(1);  
    lest.push_back(3);  
    lest.push_back(5);  
    lest.push_back(7);
    
    List kest;
    kest.push_back(2);
    kest.push_back(4);
    kest.push_back(6);
    kest.push_back(8);

    lest.print_all(lest.mergeTwoSortedList(lest.head,kest.head));

    return 0;
}