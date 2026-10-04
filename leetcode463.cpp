#include <iostream>
#include <vector>
#include <list>

using namespace std;

void dfs(vector<vector<int>>& grid, int i , int j, int &perimeter , vector<vector<bool>>& vis){
        // base case
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 0 || vis[i][j] == true ){
            return ;
        }

        vis[i][j] = true;
        if(perimeter != 0){
            perimeter -=1;
            perimeter += 3;
        }
        else{
            perimeter += 4;
        }
        dfs(grid ,i-1, j, perimeter , vis) ; //top
        dfs(grid ,i, j+1, perimeter , vis) ;  //right
        dfs(grid ,i+1, j, perimeter, vis) ; //bottom
        dfs(grid ,i, j-1, perimeter, vis) ; //left

}
int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter =0;
        vector<vector<bool>> vis(grid.size() , vector<bool>(grid[0].size() , false));
        dfs(grid, 0,0 , perimeter , vis);
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