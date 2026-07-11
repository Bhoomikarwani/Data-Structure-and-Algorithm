#include <iostream>
#include <vector>
using namespace std;

class LRUCache {
public:
    
    class Node{
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
    LRUCache(int capacity) {
        
    }
    
    int get(int key) {
        
    }
    
    void put(int key, int value) {
        
    }
};

int main(){

}
