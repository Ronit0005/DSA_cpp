// Question 1: Detect whether there is a cycle in the linked list or not .
// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int Data;
//         Node* next;
//         Node(int data){
//             Data = data;
//             next = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;
//     List(){
//         head = tail = NULL;
//     }

//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         }else{
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     bool isCycle(){
//         Node* slow = head;
//         Node* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             if(slow == fast){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// Question 2: Find the position from where there is a cycle started in the linked list .
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
    Node* head;
    Node* tail;
    public:
        List(){
            head = tail = NULL;
        }

        void push_back(int val){
            Node* newNode = new Node(val);
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
                temp = temp->next;
            }
        }

        int posInCycle(){
            Node* slow = head;
            Node* fast = head;

            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;

                if(slow == fast){
                    slow = head;
                    while(slow != fast){
                        slow = slow->next;
                        fast = fast->next;
                    }
                    return slow->Data;
                }
            }
            return NULL;
        }

        void createCycle(int val){
            Node* temp=head;
            while(temp != NULL){
                if(temp->Data == val){
                    tail->next = temp;
                    return;
                }
                temp = temp->next;
            }
        }
};

int main(){
    List lest;
    lest.push_back(1);
    lest.push_back(2);
    lest.push_back(3);
    lest.push_back(4);
    lest.push_back(5);

    lest.createCycle(2);
    cout<<lest.posInCycle();
    // lest.print_all();
    return 0;
}