#include <iostream>
#include <vector>
#include <list>

using namespace std;

 int dfs(vector<vector<int>>& grid, int i , int j){
        // base case
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 0 ){
            return 1;  // water contributes 1 to perimeter
        }

        if(grid[i][j] == -1){
            return 0 ;  // already visited land cell
        }
        

        //mark cell as visited
        grid[i][j] = -1;
        
        return dfs(grid ,i-1, j) + //top
                dfs(grid ,i, j+1) +  //right
                dfs(grid ,i+1, j) + //bottom
                dfs(grid ,i, j-1) ; //left

    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        
        for(int i = 0 ; i<grid.size() ; i++ ){
            for(int j= 0 ; j<grid[0].size() ; j++){
                if(grid[i][j] == 1){
                    perimeter += dfs(grid, i , j);
                }
            }
        }
        
        return perimeter;
    }

int main(){
vector<vector<int>> grid = {    {0,1,0,0},
                                {1,1,1,0},
                                {0,1,0,0 },
                                {1,1,0,0}
                                };

     cout <<  islandPerimeter(grid);
    
     return 0;
}       