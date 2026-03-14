#include <iostream>
#include <vector>
using namespace std;

bool searchInMidrow(vector<vector<int>>& mat, int target , int row){
    int n= mat[0].size();
    int st = 0;
    int end =n-1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(target == mat[row][mid]){
            return true;
        } 
        else if( target < mat[row][mid]){
            end = mid -1 ;
        }
        else{
            st = mid +1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& mat, int target) {
        
    int /*row*/ m = mat.size();
    int /*column*/ n = mat[0].size();

    int sR = 0 ;  //starting row
    int eR = m-1 ;//ending row

    while(sR <= eR){
       int midRow = sR + (eR - sR)/2 ;

       if(target >= mat[midRow][0]  && target <= mat[midRow][n-1]){
        //means target found in mid row

        return searchInMidrow(mat , target , midRow);
       }

       else if(target > mat[midRow][n-1]){
         sR = midRow + 1 ;
       }
       
       else{   // means target < mat[midRow][0]
        eR = midRow -1 ;
       }
    }

    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7} , {10, 11, 16 , 20}, { 23,30,34,60}};
    int target = 343 ;
    cout << searchMatrix(matrix , target);
}