#include <iostream>
#include <vector>
using namespace std;
                                               // Lowest common acestor in BST
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

Node* insert(Node* root , int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left , val);
    }
    else{
        root->right = insert(root->right , val);
    }
    return root;
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root , val);
    }
    return root;
}

Node* lowestCommonAncestor(Node* root, int p, int q) {
        if(root == NULL){
            return NULL;
        }

        // search in left part
        if(p < root->data  &&  q < root->data){
            return lowestCommonAncestor(root->left , p ,q);
        }
        // search in right part
        else if(p > root->data  &&  q > root->data){
            return lowestCommonAncestor(root->right , p ,q);
        }
        else{
            return root;
        }
}
int main(){
    vector<int> arr = {6 , 2 , 0 , 4 , 3 , 5 , 8 , 7 , 9};
    Node* root = buildBST(arr);
    int p = 7 ;
    int q = 9 ; 
    Node* ansNode = lowestCommonAncestor(root , p , q);
    cout << ansNode->data;
}