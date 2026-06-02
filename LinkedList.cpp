#include <iostream>
using namespace std;
#include <vector>
class Node{
    public:
    int data;Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    Node(int data,Node* next){
        this->data = data;
        this->next = next;
    }
};

Node* linkedListToArray(vector<int> arr){

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int c=1;c<arr.size();c++){
        Node* temp = new Node(arr[c]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printer(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* insertAtValueBefore(Node* head,int val){
    if(head == NULL) return NULL;
    if(head->next == NULL && head->data == val){
        return new Node(val,head);
    }
    Node* newNode = new Node(100);
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node* create(Node* head,int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = create(NULL,0);
    create(head,9);
    create(head,1);
    create(head,5);
    create(head,4);
    printer(insertAtValueBefore(head,9));
    return 0;
}