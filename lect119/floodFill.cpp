#include <iostream>
#include <vector>
#include <list>

using namespace std;

void dfs(vector<vector<int>>& image, int i, int j, int newColor , int orgColor){

         // base case
          if(i<0 || j<0 || i>=image.size() || j >= image[0].size() || 
             image[i][j] != orgColor || image[i][j] == newColor){
               return;
          }

          image[i][j] = newColor;
          dfs(image, i-1, j, newColor , orgColor);  //top
          dfs(image, i, j+1, newColor , orgColor);  // right
          dfs(image, i+1, j, newColor , orgColor);  //bottom
          dfs(image, i, j-1, newColor , orgColor);   //left
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image, sr, sc, color , image[sr][sc]);
        return image;
}

int main(){
vector<vector<int>> image = {    {1, 1 , 1 },
                                {1 , 1 , 0},
                                {1 , 0, 1 }
                                };

     floodFill(image , 1 , 1 , 2);
     for(int i=0 ; i<image.size() ; i++){
        for(int j=0 ; j<image[0].size() ; j++){
            cout << image[i][j] << " ";
        }
        cout << endl;
     }
     return 0;
}       