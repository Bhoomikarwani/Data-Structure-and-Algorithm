#include <iostream>
#include <vector>
using namespace std;
                                              // inorder predecessor and successor
class Node{
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* pred , succ = NULL;
vector<int> pred_succ(Node* root , int key){
    Node* curr = root;

    while(curr != NULL){
       if(key < curr->data){
          
          curr = curr->left;
       }
       if(key > curr->data){
          curr = curr->right;
       }
    }
    
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(20);
    
    

    return 0;
}