#include <iostream>
#include <vector>
using namespace std;
// spiral matrix

//   1 2 3
//   4 5 6
//   7 8 9

vector<int> spiralOrder(vector<vector<int>> &mat){
    int m = mat.size() , n= mat[0].size();
    int srow = 0, erow = m-1 , scol  = 0 , ecol = n-1;
    vector<int> ans ;
     
    while(srow <= erow && scol <= ecol){

        //top
        for(int j =scol ; j<=ecol ; j++){
            ans.push_back(mat[srow][j]);
        }
        //right
        for(int i =srow +1 ; i<=erow ; i++){
            ans.push_back(mat[i][ecol]);
        }
        //bottom
        for(int j =ecol - 1 ; j>=scol ; j--){
            if(srow == erow){              //corner case
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        //left
        for(int i =erow - 1 ; i>=srow + 1 ; i--){
            if(scol == ecol){               //corner case
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        
        srow++; scol++ ; erow--; ecol --;

    }
    return ans;

}
int main(){
    vector<vector<int>> mat= {{1,2,3,10,11},{4,5,6,78,90},{7,8,9,87,98}};
    vector<int> ans = spiralOrder(mat);
    for(int val : ans){
      cout << val << " ";
    }
    
    return 0;
}
