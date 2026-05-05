#include <iostream>
#include <vector>
using namespace std;
bool isSafe(vector<vector<char>>& board , int row , int col , char dig){
   // check horizontal
   for(int j=0 ; j<9 ; j++){
      if(board[row][j] == dig)
          return false;
   }

   // check vertically
   for(int i=0 ; i<9 ; i++){
      if(board[i][col] == dig)
          return false;
   }

   // check in 3x3 grid
   int sr = (row/3) * 3;
   int sc = (col/3) * 3;
   for(int i=sr ; i < sr+3 ; i++){
      for(int j=sc ; j < sc+3 ; j++){
        if(board[i][j] == dig) {
            return false;
        }
      }
   }
   return true;
}

bool fillValues(vector<vector<char>>& board , int row , int col ){ // helper funtion
    // base case
    if(row == 9){
        return true;
    }

    int nextRow = row , nextCol = col+1;
    if(nextCol == 9){
        nextRow = row +1;
        nextCol = 0 ;
    }

    if(board[row][col] != '.'){
        //move to next cell
       return  fillValues(board , nextRow , nextCol);
    }

    //for inserting any value to cell from(1-9) simultaneously
    for (char dig = '1'; dig <= '9'; dig++)
    { // dig=> digit
        if (isSafe(board, row, col, dig))
        {
            board[row][col] = dig;
            if (fillValues(board, nextRow, nextCol))
            {
                return true;
            }

            // if it is not returning true means koi value sahi place nhi hui hai
            //  so we do backtracking
            board[row][col] = '.';
        }
    }

    return false ; // if don't get output
}

void solveSudoku(vector<vector<char>>& board) {
      fillValues(board , 0 , 0 );
}

int main(){
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}};
    solveSudoku(board)  ;
    for( vector<char> val: board){
        for(char i : val){
            cout << i <<" ";
        }
        cout << endl ; 
    }                            
}
