#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
// Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise
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


unordered_set<int> s;
bool findTarget(Node* root, int k) {
      
       if(root == NULL ) return false;

       if(s.count(k-root->data)){   //count() function ka use yeh check karne ke liye hota 
          return true;              // hai ki koi element set me present hai ya nahi
       } 
       else{
          s.insert(root->data);
       }

       return findTarget(root->left , k ) || findTarget(root->right , k);
       
       
}

int main(){
    Node* root = new Node(6);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    cout << findTarget(root , 9);
}    