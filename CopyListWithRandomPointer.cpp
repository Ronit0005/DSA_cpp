// #include <iostream>
// using namespace std;
// #include <unordered_map>

// class Node{
// public:
//     int Data;
//     Node* next;
//     Node* random;
//     Node(int data){
//         Data = data;
//         next = random = NULL;
//     }
// };

// class List{
//     Node* head;
//     Node* tail;
//     public:
//         List(){
//             head = tail = NULL;
//         }

//         void push_back(int val){
//             Node* newNode = new Node(val);
//             if(head == NULL){
//                 head = tail = newNode;
//                 return;
//             }

//             tail->next = newNode;
//             tail = newNode;
//         }

//         Node* copyList(){
//             unordered_map<Node* ,Node*> match;
//             Node* newHead = new Node(head->Data);
//             Node* oldTemp = head->next;
//             Node* newTemp = newHead;

//             while(oldTemp != NULL){
//                 Node* copyNode = new Node(oldTemp->Data);
//                 match[oldTemp] = copyNode;
//                 newTemp->next = copyNode;
//                 oldTemp = oldTemp->next;
//                 newTemp = newTemp->next;
//             }

//             // Random ptr:-
//             oldTemp = head;
//             newTemp = newHead;
//             while(oldTemp != NULL){
//                 newTemp->random = oldTemp->random;
//                 oldTemp = oldTemp->next;
//                 newTemp = newTemp->next;
//             }
//             return newHead;
//         }
// };

// int main(){
//     List lest;
//     lest.push_back(1);  
//     lest.push_back(2);  
//     lest.push_back(3);  
//     lest.push_back(4);
    
    
//     return 0;
// }


#include <iostream>
using namespace std;
#include <unordered_map>
class Node{
    public:
        int Data;
        Node* next;
        Node* random;
        Node(int data){
            Data=data;
            next = random = NULL;
        }
};

class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head = tail = NULL;
        }

        Node* copyList(){
            unordered_map<Node*,Node*> mp;
            Node* newHead = new Node(head->Data);
            mp[head]=newHead;
            Node* newTemp = newHead;
            Node* oldTemp = head->next;

            while(oldTemp != NULL){
                Node* copyNode = new Node(oldTemp->Data);
                mp[oldTemp]=copyNode;
                newTemp->next = copyNode;
                oldTemp = oldTemp->next;
                newTemp = newTemp->next;
            }

            oldTemp = head;newTemp = newHead;
            while(oldTemp != NULL){
                newTemp->random = mp[oldTemp->random];
                oldTemp = oldTemp->next;
                newTemp = newTemp->next;
            }
            return newHead;
        }
};

int main(){
    
    return 0;
}