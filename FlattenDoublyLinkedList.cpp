#include <iostream>
using namespace std;

class Node{
    public:
    int Data;
    Node* next;
    Node* prev;
    Node* child;
    Node(int data){
        Data = data;
        next = prev = child = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    
    Node* flatten(Node* head){
        Node* curr = head;
        Node* nextNode;
        if(head == NULL){
            return head;
        }
        while(curr != NULL){
            if(curr->child != NULL){
                nextNode = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;
                while(curr->next != NULL){
                    curr= curr->next;
                }
                if(nextNode != NULL){
                    curr->next = nextNode;
                    nextNode->prev = curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

int main(){
    
    return 0;
}