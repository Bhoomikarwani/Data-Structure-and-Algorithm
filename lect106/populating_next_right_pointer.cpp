#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
// leetcode 116

class Node{
  public:
    int data;
    Node* left;
    Node* right;
    Node* next ;

    Node(int val){
        data = val;
        left = right = next = NULL;
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

Node* connect(Node* root) {
        // base case
        if(root == NULL || root->left == NULL ){  // Toh right bhi NULL hi hoga beacause it is perfect binary tree
               return root;
        }

        // level order traversal
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        Node* prev = NULL;
        while(q.size() > 0){
            Node* curr = q.front();
            q.pop();

            if(curr == NULL){
                if(q.size() == 0 ){
                    break;
                }
                q.push(NULL);
            }
            else{
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                if(prev != NULL){
                    prev->next = curr;                
                }
            }

            prev = curr;
        } 
        return root;   
}

int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};

    Node* root = buildTree(preorder);
    Node* new_root = connect(root);
    cout << new_root->left->next->data << endl;
    return 0;
}
