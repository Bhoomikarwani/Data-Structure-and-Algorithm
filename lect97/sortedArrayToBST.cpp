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

Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root , val);
    }
    return root;
}



Node* buildTree(vector<int> arr , int st ,int end){
    if(st>end){
        return NULL;
    }
    int mid = st + (end-st)/2;
    Node* root = new Node(arr[mid]);
    root->left = buildTree(arr , st , mid-1);
    root->right = buildTree(arr, mid+1 ,end);
    return root;
}


int main(){
    vector<int> arr = {-10 , -2 , 0 , 3 , 5};
    Node* root = buildTree(arr , 0 , arr.size()-1);

    cout << root->data <<endl;
    cout << root->right->data;
}    