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


// convert sorted array to binary tree
Node* helper(vector<int>& nums , int st , int end){
        if(st>end) return NULL;
        int mid = st + (end-st)/2;
        Node* root = new Node(nums[mid]);
        root->left = helper(nums , st , mid-1);
        root->right = helper(nums , mid+1 , end);
        return root;
}
Node* sortedArrayToBST(vector<int>& nums) {
        return helper(nums , 0 , nums.size()-1);
}

int main(){
    vector<int> nums = {-10 ,-2 ,0 ,1, 3,4};
    Node* root =sortedArrayToBST(nums);
    cout << root->data <<" ";
    return 0;
}