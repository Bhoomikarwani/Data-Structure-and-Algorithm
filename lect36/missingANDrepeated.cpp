#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//MY APPROACH
// int RepeatedValues(vector<vector<int>>& grid) {
//     int row = grid.size();
//     int cols=grid[0].size();
//     int n= row * cols ;
//     unordered_map<int , int> m;
//     for(int i=0 ; i < row ; i++){
//         for (int j = 0; j < cols; j++)
//         {
//             int num = grid[i][j];
//             if (m.find(num) != m.end())
//             {
//                 return grid[i][j];
//             }
//             m[num] = i;
//         }
//     }
// }

//BETTER APPROACH
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        //hasing
        unordered_set<int> s;
        int n= grid.size();
        int a , b;
        
        int expSum =0 , actualSum = 0;

        for(int i=0 ; i < n ; i++){
           for (int j = 0; j < n; j++){
                
               actualSum += grid[i][j] ;

               if(s.find(grid[i][j]) != s.end()){
                a=grid[i][j];
                ans.push_back(a);
               }
               s.insert(grid[i][j]);
           }
        }  
        
        expSum = ((n*n) * (n*n + 1)) / 2;
        b = expSum + a - actualSum;
        ans.push_back(b);

        return ans;
}




int main(){
  vector<vector<int>> grid= {{9,1,7} , {8,9,2} , {3,4,6}};
  //cout << "repeated value : "<<RepeatedValues(grid);

  vector<int> vec = findMissingAndRepeatedValues(grid);
      for(int val : vec){
         cout << val << " ";
      }
}