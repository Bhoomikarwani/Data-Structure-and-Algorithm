#include <iostream>
using namespace std;

class Node{
public:
   int data;
   Node* next;
   Node* prev;

   Node(int val){
     data =  val;
     next = prev = NULL;
   }
};

class DoublyList{
   Node* head;
   Node* tail;

public:
   DoublyList(){
      head = tail = NULL;
   }   

   void push_front(int val){
     Node* newNode = new Node(val);
     if(head == NULL){
       head = tail = newNode;
     }
     else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
     }
   }

   void printLL(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data  << " <=> " ;
        temp = temp->next; 
    }
    cout << "NULL" << endl;
   }

   void push_back(int val){
     Node* newNode = new Node(val);
     if(head == NULL){
       head = tail = newNode;
     }
     else{
        tail->next =newNode;
        newNode->prev = tail;
        tail = newNode;
     }
   }

   void pop_front(){
    if(head == NULL){
        cout << "doubly linked list is empty" << endl ;
        return;
    }
    Node* temp = head;
    head = head->next;

    if(head != NULL){
        head->prev = NULL;
    }
    temp->next = NULL;
    delete temp;
   }

   void pop_back(){
    if(head == NULL){
        cout << "doubly linked list is empty" << endl ;
        return;
    }
    Node* temp = tail;
    tail = tail->prev;

    if(tail != NULL){
        tail->next = NULL;
    }
    temp->prev = NULL;
    delete temp;
   }
};

int main(){
  DoublyList dll;
  dll.push_front(1);
  dll.push_front(2);
  dll.push_front(3);
  dll.push_front(4);
  dll.push_back(5);
  dll.pop_front();
  dll.pop_front();
  dll.pop_back();
  dll.pop_back();
  dll.printLL();

  return 0;
}