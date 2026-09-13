#include <iostream>
#include <vector>
using namespace std;
                                             // Merge 2 BST and return root of merged tree
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

void inorder(Node* root , vector<int>&arr){
    if(root == NULL){
        return ;
    }
    inorder(root->left , arr);
    arr.push_back(root->data);
    inorder(root->right , arr);
}

Node* buildBSTFromSortedArray(vector<int>&arr , int st , int end){
       if(st > end){
           return NULL;
       }
       int mid = st + (end-st)/2;
       Node* root = new Node(arr[mid]);
       root->left = buildBSTFromSortedArray(arr , st , mid-1);
       root->right = buildBSTFromSortedArray(arr , mid+1 , end);
       return root;
}

Node* merge2BST(Node* root1 , Node* root2){
    vector<int> arr1 , arr2; 
    inorder(root1 ,arr1);
    inorder(root2 ,arr2);

    // merge arr1 & arr2 in sorted order
    vector<int> temp;
    int i = 0 , j=0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i++]);
        }
        else{
            temp.push_back(arr2[j++]); 
        }
    }
    while(i < arr1.size()){
        temp.push_back(arr1[i++]);
    }
    while(j < arr2.size()){
        temp.push_back(arr2[j++]);
    }

    return buildBSTFromSortedArray(temp , 0 , temp.size()-1);

}

int main(){
    vector<int> tree1 = {8 , 2 , 1 , 10};
    vector<int> tree2 = {5 , 3 , 0};
    Node* root1 = buildBST(tree1) ; 
    Node* root2 = buildBST(tree2) ;    
    Node* root3 = merge2BST(root1, root2);
    cout << root3->data << endl;

    vector<int> arr;
    inorder(root3 , arr);
    for(int val : arr){
        cout << val << " ";
    }
}