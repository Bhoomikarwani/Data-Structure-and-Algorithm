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


Node* right_most_of_left_subtree(Node* root){
   Node* ans; 
   while(root != NULL){
     ans = root;
     root = root->right;
   }
   return ans;
}

Node* left_most_of_right_subtree(Node* root){
   Node* ans; 
   while(root != NULL){
     ans = root;
     root = root->left;
   }
   return ans;
}

vector<int> pred_succ(Node *root, int key)
{
   Node *pred = NULL;
   Node *succ = NULL;
   Node *curr = root;

   while (curr != NULL)
   {
      if (key < curr->data)
      {
         succ = curr;
         curr = curr->left;
      }
      else if (key > curr->data)
      {
         pred = curr;
         curr = curr->right;
      }
      else
      { // key > curr->data
         if (curr->left != NULL)
         {
            pred = right_most_of_left_subtree(curr->left);
         }

         if (curr->right != NULL)
         {
            succ = left_most_of_right_subtree(curr->right);
         }

         break;
      }
   }
   return {pred ? pred->data : -1, succ ? succ->data : -1};
}


int main(){
    Node* root = new Node(6);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    
    vector<int> ans =  pred_succ(root , 5);
    cout << "predeccesor : " << ans[0] << endl;
    cout << "successor : " << ans[1] << endl;  
    return 0;
}