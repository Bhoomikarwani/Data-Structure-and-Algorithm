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

// calculate height of binary tree
int height(Node* root){
  if(root == NULL){
    return 0;
  }
  int leftHeight = height(root->left);
  int rightHeight = height(root->right);
  
  return max(leftHeight , rightHeight) + 1 ; 
}

// count total no. of nodes
int count(Node* root){
    if(root == NULL){
      return 0;
    }
    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return leftCount + rightCount + 1;
}

// sum of nodes
int sum(Node* root){
  if(root == NULL){
    return 0;
  }
  int leftSum = sum(root->left);
  int rightSum = sum(root->right);

  return leftSum + rightSum + root->data;
}

// check whether the given trees are identical or not
bool isSameTree(Node* p, Node* q) {
        if(p == NULL || q == NULL){
            return p==q;
        }

        bool isLeftSame = isSameTree(p->left , q->left);
        bool isRightSame = isSameTree(p->right , q->right);

        return isLeftSame && isRightSame && (p->data == q->data);
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
    //levelOrder(root);
    //cout  << height(root);
    //cout << count(root);
    //cout << sum(root) ; 

    vector<int> p = {1,2,-1,-1,3,-1,-1};
    vector<int> q = {1,2,-1,-1,3,-1,-1};
    
    Node* root1 = buildTree(p);
    Node* root2 = buildTree(q);
    cout << isSameTree(root1 , root2) << endl; 
    return 0;
}