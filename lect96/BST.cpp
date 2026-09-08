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

Node* getIS(Node* root){   // left most node in right subtree
    while(root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root , int key){  // key => value to delete
    if(root == NULL){
        return NULL;
    }

    if(key < root->data){
        root->left = delNode(root->left , key);
    }
    else if(key > root->data){
        root->right = delNode(root->right , key);
    }
    else{ // root->data == key (delete)
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{  // 2 children
            Node* IS = getIS(root->right); // IS = inorder successor
            root->data = IS->data;
            root->right = delNode(root->right , IS->data);
        }
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

void inorder(Node* root ){
    if(root == NULL) return ;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    vector<int> arr = {3, 2,1 ,5,6,4};
    Node* root = buildBST(arr);
    
    cout << "before" ;
    inorder(root);      // -> if sorted sequence mil rha hai means BST successfully create ho chuka hai

    cout << endl;
    //cout << search(root , 8);
    //delNode(root , 6);
    //delNode(root , 5);
    delNode(root , 3);
    cout << "after";
    inorder(root);

    return 0; 
}