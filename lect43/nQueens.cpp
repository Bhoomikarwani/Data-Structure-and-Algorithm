#include <iostream>
#include <vector>
using namespace std;
                                           // leetcode - 51
bool isSafe( int n, vector<string>& board , int row ,int col){
   // unique row
    for(int j=0 ; j<n ;j++){
      if(board[row][j] == 'Q'){
        return false;
      }
    }
    // unique column
    for(int i=0 ; i<n ;i++){
      if(board[i][col] == 'Q'){
        return false;
      }
    }
    
    // abhi niche wali digonals kai liye check nhi karenge
    //left digonal
    for(int i=row,j=col ; i>=0 && j>=0 ; i--,j--){
        if(board[i][j] == 'Q'){
        return false;
      }
    }
    //right digonal
    for(int i=row,j=col ; i>=0 && j<n ; i--,j++){
        if(board[i][j] == 'Q'){
        return false;
      }
    }

    return true;
}

vector<vector<string>> nQueens(int n , vector<vector<string>>& ans , vector<string>& board , int row) {
    if(row == n){
        ans.push_back(board);
        return ans;
    }
    for(int j=0 ; j<n ; j++){
        if( isSafe(n,board,row,j) ){
           board[row][j] = 'Q';
           nQueens(n , ans , board , row+1);
           board[row][j] = '.';  //backtracking
        } 
    }
    return ans; 
}
int main(){
    int n=4;
    vector<vector<string>> ans;
    vector<string> board(n, string(n,'.'));
    nQueens(n , ans , board , 0);
    for(vector<string> val : ans){
     for(int i=0 ; i< val.size() ; i++){
        cout<< val[i] << " ";
     }
     cout << endl;
    }
    return 0;
}