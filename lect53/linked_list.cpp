#include <iostream>
#include <string>
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

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "LL is empty\n" ;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        // using tail
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        Node* ttemp = temp->next;
        temp->next = NULL ; 
        tail = temp;
        delete ttemp;
    }

    void insert(int val , int pos){
        if(pos < 0 ){
            cout<< "invalid position\n";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        
        Node* temp = head;
        for(int i=0 ; i<pos-1; i++){
            if(temp == NULL){
                cout << "invalid pos\n" ;
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key){     
        Node* temp = head;
        int idx=0;
        while(temp != NULL){
           if(temp->data == key)
              return idx;
           temp = temp->next;
           idx++;
        }
        return -1;
    }

};

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.insert(9,3);
    cout << ll.search(9) << endl;
    ll.printLL();
   return 0;
}
