// swap nodes in pairs

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next; //ptr of node
    
    Node(int val){
        data = val;
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
    void push_front(int val){
        Node* newNode = new Node(val);    // creates new node
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
     
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void swap_pairs(){
        
        if(head == NULL || head->next == NULL){
            return ;
        }
        Node* first = head;
        Node* sec = head->next;
        Node* prev = NULL;

        while(first != NULL && sec != NULL){
            Node* third = sec->next;
            sec->next = first;
            first->next = third;
            if(prev != NULL){
               prev->next = sec;
            }
            else{       //prev == NULL
               head = sec;
            }        

            //update
            prev = first;
            first = third;
            if(third != NULL){
               sec = third->next;
            }
            else{
                sec = NULL;
            }   
        }
        return;
    }
};   

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printLL();
    ll.swap_pairs();
    ll.printLL();
    return 0;
}