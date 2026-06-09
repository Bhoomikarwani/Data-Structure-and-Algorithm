#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int val){
       data = val;
       next = NULL;
    }
};
class circularLL{
    Node* head;
    Node* tail;
public:
    circularLL(){
        head = tail = NULL;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = newNode;
        }
    }

    void printCLL(){
        if(head == NULL){
            cout << "LL is empty";
            return;
        }
        cout << head->data << "->";
        Node* temp = head->next;
        while(temp != head){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }

    void insertAtTail(int val){
       Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }

    void deleteAtHead(){
        if(head == NULL){
            cout << "LL is already empty" << endl;
        }
        else if(head == tail){    // for single element
            delete head;
            head = tail = NULL;
        }
        else{      // 2 or more nodes
            Node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp; 
        }
    }    

    void deleteAtTail(){
        if(head == NULL){
            cout << "LL is already empty" << endl;
        }
        else if(head == tail){    // for single element
            delete tail;
            head = tail = NULL;
        }
        else{
            Node* prev = head;
            while(prev->next != tail){
              prev= prev->next;
            }
            
            Node* temp = tail;
            prev->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
};

int main(){
    circularLL cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtHead(4);
    cll.insertAtTail(5);
    cll.deleteAtHead();
    cll.deleteAtTail();
    cll.printCLL();
    return 0;
}
