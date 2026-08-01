#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
       data = val;
       left = right = NULL ; 
    }
};
static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if (preorder[idx] == -1)
    {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);  // Left
    root->right = buildTree(preorder); // Right

    return root;
}

void preOrderTraversal(Node* root){
   if(root == NULL){
     return;
   }

   cout << root->data << " ";
   preOrderTraversal(root->left);
   preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
   if(root == NULL){
     return;
   }
   inOrderTraversal(root->left);
   cout << root->data << " ";
   inOrderTraversal(root->right);
}

void postOrder(Node* root){
   if(root == NULL){
     return;
   }
   postOrder(root->left);
   postOrder(root->right);
   cout << root->data << " ";
}

// level order traverse
void levelOrder(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(q.size()>0){
      Node* curr =  q.front();
      q.pop();

      if(curr == NULL){
        if(!q.empty()){
          cout << endl;
          q.push(NULL);
          continue;
        }
        else{
          break;
        }
      }
      cout<< curr->data << " ";
      if(curr->left != NULL){
        q.push(curr->left);
      }
      if(curr->right != NULL){
        q.push(curr->right);
      }
  }
  return;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->right->data << endl;

    // preOrderTraversal(root);
    // cout << endl;
    // inOrderTraversal(root);
    // cout << endl;
    // postOrder(root);
    // cout << endl ; 
    levelOrder(root);
    return 0;
}