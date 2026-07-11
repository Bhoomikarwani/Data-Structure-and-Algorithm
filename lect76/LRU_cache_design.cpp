#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class LRUCache{
public:
    
    class Node{
    public:    
        int key , val;
        Node* prev;
        Node* next;

        //constructor
        Node(int k , int v){
            key =k ;
            val =v;
            prev = next = NULL;
        }
    };

    Node* head  = new Node(-1,-1);
    Node* tail  = new Node(-1,-1);

    unordered_map<int, Node*> m;
    int limit;

    void addNode(Node* newNode){   // O(1)
       Node* oldNext = head->next;
       head->next = newNode;
       oldNext->prev = newNode;
       newNode->prev = head;
       newNode->next = oldNext;
    }

    void delNode(Node* oldNode){   // O(1)
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {             // O(1)
        // if key does not exist
        if(m.find(key) == m.end()){
            return -1;
        }

        Node* ansNode = m[key] ;
        int ans = ansNode->val;

        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key] = ansNode;
    }
    
    void put(int key, int value) {  // O(1)
        // if already exist
        if(m.find(key) != m.end()){
            Node* oldNode = m[key];
            delNode(oldNode);
            m.erase(key);
        }

        // capacity reach
        if(m.size() == limit){
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        m[key]= newNode;
    }
};

int main(){

}
