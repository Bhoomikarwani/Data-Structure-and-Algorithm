#include <iostream>
#include <vector>
#include <queue>
using namespace std;
                        //  maximum width of tree
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
void helper(Node* root , vector<int>& ans){
        // if(root == NULL){                |
        //     return;                      | 
        // }                                |
        // helper(root->left , ans);        |---> recursive approach
        // ans.push_back(root->val);        | 
        // helper(root->right , ans);       |

                              // itreative approach
        if(root == NULL){                
            return;                      
        } 
        Node* curr = root;
        while(curr != NULL){
            if(curr->left == NULL){
                ans.push_back(curr->data);
                if(curr->right != NULL){
                   curr = curr->right;
                }
                else{
                    
                }
            }
            else{
                curr = curr->left;
            }
        }                      

    }
vector<int> inorderTraversal(Node* root){
        vector<int> ans;
        helper(root , ans);
        return ans;
}    
int main(){
     vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(preorder);
}