#include <iostream>
#include <vector>
#include <queue>
using namespace std;
                        //        iterative approach for inorder traversal  
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
bool hasPathSum(Node* root, int targetSum) {
        if (!root) return false;
        
        targetSum -= root->data;
        
        if (!root->left && !root->right) {
            return targetSum == 0;
        }
        
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}
int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(preorder);
    hasPathSum(root , 22);
}