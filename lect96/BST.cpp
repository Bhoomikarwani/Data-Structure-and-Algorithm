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

bool search(Node* root ,int key){  // O(log n)
   if(root == NULL){
    return false;
   }

   if(root->data == key){
      return true;
   }
   if(key < root->data){
      return search(root->left , key);
   }
   else{
      return search(root->right , key);
   }
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root , val);
    }
    return root;
}

void inorder(Node* root ){
    if(root == NULL) return ;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    vector<int> arr = {3, 2,1 ,5,6,4};
    Node* root = buildBST(arr);
    inorder(root);      // -> if sorted sequence mil rha hai means BST successfully create ho chuka hai

    cout << endl;
    cout << search(root , 8);

    return 0; 
}