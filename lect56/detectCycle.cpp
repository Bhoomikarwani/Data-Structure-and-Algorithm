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

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void createCycle(int val){
        Node* temp = head;
        while(temp->data != val){
            temp = temp->next;
        }
        tail->next = temp;
    }
    
    bool isCycle(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};     
int main(){
    List ll ;
    //ll.push_front(6);
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();
    //ll.createCycle(3);
   // ll.printLL();
   cout<<ll.isCycle();

}