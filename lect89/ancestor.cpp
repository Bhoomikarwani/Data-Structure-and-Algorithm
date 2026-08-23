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
                                         // lowest common ancestor
Node* lowest_common_ancestor(Node* root , int p , int q){
      if(root == NULL){
        return NULL;    
      }
      if(root->data == p || root->data == q){
         return root;
      }  

      Node* left_LCA  =  lowest_common_ancestor(root->left , p ,q);
      Node* right_LCA  =  lowest_common_ancestor(root->right , p ,q);

       if(left_LCA && right_LCA){
            return root;
        }
        else if(left_LCA != NULL){
            return left_LCA;
        }
        else{
            return right_LCA;
        }
}                                         

int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,8,-1,-1,9,-1,-1,3,6,-1,-1,7,-1,-1};
    Node* root = buildTree(preorder);
    int p =8;
    int q = 9;
    Node * ans = lowest_common_ancestor(root , p , q);
    cout << ans->data;
}