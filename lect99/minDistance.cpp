#include <iostream>
#include <vector>
using namespace std;
                                               // minimum difference btw any 2 nodes
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


int min_Diff_in_bst(Node* root , Node* &prev ){
    if(root == NULL){
        return INT8_MAX;
    }

    int ans = INT8_MAX; 
    if(root->left != NULL){
        int leftMin = min_Diff_in_bst(root->left , prev);
        ans = min(ans , leftMin);
    }
    if(prev != NULL){
        ans = min(ans , root->data - prev->data);
    }
    prev = root;

    if(root->right != NULL){
        int rightMin = min_Diff_in_bst(root->right , prev);
        ans = min(ans , rightMin);
    }
    return ans;
}


int main(){
    vector<int> arr = {85,62,42,52,82,88};
    Node* root = buildBST(arr);
    Node* prev = NULL;
    cout << min_Diff_in_bst(root , prev);
}    