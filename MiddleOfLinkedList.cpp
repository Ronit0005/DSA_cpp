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
            while(temp != NULL){
                cout<<temp->Data<<" ";
                temp=temp->next;
            }
        }

        int middle_of_linked_list(){
            Node* temp = head;
            int count=0;
            while(temp!=NULL){
                temp=temp->next;
                count++;
            }
            int idx = (count/2)+1;
            int c=0;
            Node* temp2 = head;
            while(temp2 != NULL){
                c++;
                if(c == idx){
                    return temp2->Data;
                }
                temp2= temp2->next;
            }
        }

        Node* middle2(){
            Node* slow = head;
            Node* fast = head;

            while(fast != NULL && fast->next->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
};

int main(){
    List lest;
    lest.push_back(10);
    lest.push_back(20);
    lest.push_back(30);
    lest.push_back(40);
    lest.push_back(50);
    lest.push_back(60);
    // cout<<endl;
    // cout<<lest.middle_of_linked_list();
    cout<<lest.middle2();
    return 0;
}