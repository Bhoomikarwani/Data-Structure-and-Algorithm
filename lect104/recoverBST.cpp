#include <iostream>
#include <vector>
using namespace std;
                                            //recover BST place 2 swaped nodes to its correct place
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

void inorderSequence(Node* root){
   if(root == NULL){
     return;
   }
   inorderSequence(root->left);
   cout << root->data << " ";
   inorderSequence(root->right);
}

Node* prevNode = NULL;
Node* first = NULL;
Node* second = NULL;
void inorderPath(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPath(root->left);
    if (prevNode != NULL && root->data < prevNode->data)
    {
        if (!first)
        {
            first = prevNode;
        }
        second = root;
    }
    prevNode = root;
    inorderPath(root->right);
}

void recoverTree(Node *root)  // TC : O(N) &  
{                              //SC: O(N)  because of recusive calls
    inorderPath(root);
    int temp = first->data;
    first->data = second->data;
    second->data = temp;
}

int main(){

    vector<int> arr = {6 , 3, 1, -1, -1, 8, -1 , -1, 4, -1, 9 , -1 , -1};
    Node* root = buildTree(arr);

    cout << "before :" ;
    inorderSequence(root);  
    cout << endl;

    recoverTree(root);      

    cout << "after :" ;
    inorderSequence(root); 
    return 0; 
}