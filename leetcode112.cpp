#include <iostream>
#include <vector>

using namespace std;
                           //  Path Sum
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
    vector<int> preorder = {5,4,11,7,-1,-1,2,-1,-1,-1,8,13,-1,-1,4,-1,1};
    Node* root = buildTree(preorder);
    cout << hasPathSum(root , 22);
}