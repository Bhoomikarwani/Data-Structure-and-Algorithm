#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
 
bool checkValid(vector<vector<int>>& matrix){
       int n = matrix.size();
        
        for (int i = 0; i < n; i++) {
            unordered_set<int> rowCheck;
            unordered_set<int> colCheck;
            
            for (int j = 0; j < n; j++) {
                // Check Row i: insert matrix[i][j]
                // If it's already there, it's a duplicate!
                if (rowCheck.count(matrix[i][j])) return false;
                rowCheck.insert(matrix[i][j]);
                
                // Check Column i: insert matrix[j][i]
                if (colCheck.count(matrix[j][i])) return false;
                colCheck.insert(matrix[j][i]);
            }
        }
        
        return true;
}
int main(){
    vector<vector<int>> matrix = {{1,1,3},{3,1,2},{2,1,3}};
    bool ans = checkValid(matrix);
    cout << ans << endl;
}