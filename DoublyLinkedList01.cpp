#include <iostream>
using namespace std;
#include <vector>

class Node{
    public:
    int data;Node* next;Node* back;
    Node(int data){
        this->data = data;
        next = back = NULL;
    }
    Node(int data,Node* prev){
        this->data = data;
        back = prev;
    }
};

void printer(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int c=1;c<arr.size();c++){
        Node* newNode = new Node(arr[c],prev);
        prev->next = newNode;
        prev = newNode;
    }
    printer(head);
    return 0;
}