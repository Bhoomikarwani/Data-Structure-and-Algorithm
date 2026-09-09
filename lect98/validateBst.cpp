#include <iostream>
#include <vector>
using namespace std;
                        //        validate BST
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
                                           // Brute force approach
                    // first find inorder sequenece then check whether it is in increasing order or not   
void inorder(Node* root , vector<int>& ans){
    if(root == NULL) return;

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right , ans);
}

bool isValidBST(Node* root) {
   vector<int> ans;
   inorder(root , ans);
   
   if(ans.empty()) return true;

   for(int i=0 ; i < ans.size()-1 ; i++){
      if(ans[i]>= ans[i+1]){
         return false;
      }
   }
   return true;
}

int main(){
    vector<int> preorder = {5,1,-1,-1,4,3,-1,-1,6,-1,-1};
    Node* root = buildTree(preorder);
    cout << isValidBST(root);
    return  0 ;
}