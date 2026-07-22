#include <iostream>
using namespace std;

struct Node{
    Node* links[26];
    int ew = 0; int cp = 0;
    bool containsKey(char ch){
        return links[ch-'a'] != NULL;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* newNode){
        links[ch-'a'] = newNode;
    }
    void increaseEnd(){ ew += 1;}
    void increasePre(){ cp += 1;}
    void deleteEnd(){ ew -= 1;}
    void deletePre(){ cp -= 1;}
    int getEnd(){ return ew;}
    int getPre(){ return cp;}
};

class Trie{
    public:
    Node* root;
    Trie(){
        root = new Node();
    }
    void insert(string word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containsKey(word[i])){
                node->put(word[i],new Node());
            }
            node = node->get(word[i]);
            node->increasePre();
        }
        node->increaseEnd();
    }
    int countWordEqualTo(string word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containsKey(word[i])) return 0;
            node = node->get(word[i]);
        }
        return node->getEnd();
    }
    int countWordStartingWith(string word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containsKey(word[i])) return 0;
            node = node->get(word[i]);
        }
        return node->getPre();
    }
    void erase(string word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(!node->containsKey(word[i])) return;
            node = node->get(word[i]);
            node->deletePre();
        }
        node->deleteEnd();
        node->deletePre();
    }
};


int main(){
    
    return 0;
}