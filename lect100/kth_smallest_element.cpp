#include <iostream>
#include <vector>
using namespace std;
                                               // Kth smallest element in BST
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


int prevOrder = 0;
int kthSmallest(Node* root, int k) {
        if(root == NULL) return -1;

        // left part
        if(root->left){
            int left_ans = kthSmallest(root->left , k);
            if(left_ans !=  -1){
                return left_ans;
            }
        }
        
        //current root
        if(prevOrder + 1 == k){
            return root->data;
        }
        prevOrder++ ;

        //right part
        if(root->right){
            int right_ans = kthSmallest(root->right , k);
            if(right_ans !=  -1){
                return right_ans;
            }
        }
        return -1;
}


int main(){
   vector<int> arr = {10, 2, 4, 7 , 13 , 20};
   Node* root = buildBST(arr);
   cout << kthSmallest(root , 4);
}