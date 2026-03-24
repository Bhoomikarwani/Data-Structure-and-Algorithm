#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//MY APPROACH
int findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int row = grid.size();
    int cols=grid[0].size();
    int n= row * cols ;
    unordered_map<int , int> m;
    for(int i=0 ; i < row ; i++){
        for (int j = 0; j < cols; j++)
        {
            int num = grid[i][j];
            if (m.find(num) != m.end())
            {
                return grid[i][j];
            }
            m[num] = i;
        }
    }
}
int main(){
  vector<vector<int>> grid= {{9,1,7} , {8,9,2} , {3,4,6}};
  cout << "repeated value : "<<findMissingAndRepeatedValues(grid);
}