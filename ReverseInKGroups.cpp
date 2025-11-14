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
            head = tail = head;
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
        
        Node* reverse(Node* head,int k){
            Node* temp = head; int count =0;
            while(count < k){
                if(temp == NULL){
                    return head;
                }
                temp = temp->next;
            }
            Node* prevNode = reverse(temp , k);
            temp = head ; count = 0;
            while(count < k){
                Node* next = temp->next;
                temp->next = prevNode;
                prevNode = temp;
                temp = next;
                count++;
            }
            return prevNode;
        }
};

int main(){
    List lest;
    lest.push_back(1);  
    lest.push_back(2);  
    lest.push_back(3);  
    lest.push_back(4);  
    lest.push_back(5);  
    lest.push_back(6);  
    lest.push_back(7);  
    lest.push_back(8);  

    lest.reverse(lest.head,2);
    return 0;
}