#include <iostream>
#include <vector>
using namespace std;
                        //  binary tree paths
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
void helper(Node* root , vector<string>& ans , string s){
        if(root == NULL) return ;

        s += to_string(root->data);

        if(root->left == NULL && root->right == NULL){
            ans.push_back(s);
            return ;
        }

        
        if(root->left != NULL){
            helper(root->left , ans , s+"->");
        }
        if(root->right != NULL){
            helper(root->right ,ans , s+"->");
        }
    }

vector<string> binaryTreePaths(Node* root) {
    vector<string> ans;
    string s;
    if(root == NULL) return ans;
    helper(root , ans , s);
    return ans;
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    vector<string> paths = binaryTreePaths(root);
    for(string i : paths){
        cout << i << endl;
    }
    return 0;
}