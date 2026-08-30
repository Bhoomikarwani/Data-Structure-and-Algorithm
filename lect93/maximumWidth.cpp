#include <iostream>
#include <vector>
#include <queue>
using namespace std;
                        //  maximum width of tree
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
int maxWidth(Node* root){
     queue<pair<Node* , int>> q;
     q.push({root , 0});
     int max_width = 0 ;
     while(q.size() > 0){
        int currSize = q.size();
        unsigned long long stIdx = q.front().second ; 
        unsigned long long endIdx = q.back().second;
        max_width = max(max_width , (int)(endIdx - stIdx+1) );
        for(int i=0 ; i<currSize ; i++){
                auto curr = q.front();
                q.pop();
                if(curr.first->left != NULL){
                    q.push({curr.first->left , curr.second*2+1});
                }
                if(curr.first->right != NULL){
                    q.push({curr.first->right , curr.second*2+2});
                }
        }
     }
     return max_width;
}
int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    
    Node* root = buildTree(preorder);
    cout << "maximum width : " << maxWidth(root) << endl;
}