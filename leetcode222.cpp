#include <iostream>
#include <vector>
using namespace std;

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

void helper(Node* root , int &count){
        if(root == NULL){
            return ;
        }
        count++;
        helper(root->left , count);
        helper(root->right , count);
    }
int countNodes(Node* root) {
        int count = 0;
        helper(root , count);
        return count; 
}

int main(){
    vector<int> preorder = {5,1,-1,-1,7,6,-1,-1,8,-1,-1};
    Node* root = buildTree(preorder);
    cout << countNodes(root);
    return  0 ;
}