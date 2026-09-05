#include <iostream>
#include <vector>
using namespace std;
                        //        flattern binary tree to linked list
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


Node* lastVisited = NULL;
void flatten(Node* root){
      if(root == NULL){
        return;
      }
      flatten(root->right);
      flatten(root->left);
      root->left = NULL;
      root->right = lastVisited;
      lastVisited = root;
}

void printLinkedList(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->right;
    }
    cout << "NULL" << endl;
}
int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(preorder);
    flatten(root);
    printLinkedList(root);
    return  0 ;
}