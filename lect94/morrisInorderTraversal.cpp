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
        if(root == NULL){                
            return;                      
        } 
        Node* curr = root;
        while(curr != NULL){
            if(curr->left == NULL){
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else{
                // find Inorder Predecessors
                Node* IP = curr->left;
                while(IP->right != NULL && IP->right != curr){
                    IP = IP->right;
                }
                if(IP->right == NULL){
                    IP->right = curr;     // create thread
                    curr = curr->left;
                }
                else{   // IP->right != NULL
                    IP->right = NULL;            // delete thread
                    ans.push_back(curr->data);
                    curr = curr->right; 
                }
            }
        }        
        return ;              

    }
vector<int> inorderTraversal(Node* root){
    vector<int> ans;
    helper(root , ans);
    return ans;
}
int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(preorder);
    vector<int> ans = inorderTraversal(root);
    for(int i : ans){
        cout << i << endl;
    }  
}