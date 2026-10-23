#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(int i, vector<vector<int>>& isConnected, vector<bool>& vis ){
       vis[i] = true;

       // visit all neighbors
       for(int j=0 ; j<isConnected[i].size() ; j++){
          if(isConnected[i][j]==1 && !vis[j] ){
             dfs(j, isConnected, vis);
          }
       }
    }
int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0 ;
        int n = isConnected.size();
        vector<bool> vis(n , false);
        for(int i =0 ; i<n ; i++){
            if(!vis[i]){
                dfs(i , isConnected, vis);
                count++;
            }
        }
        return count;
}
int main(){
    vector<vector<int>> isConnected = {{1,1,0},{1,1,0},{0,0,1}};
    cout << findCircleNum(isConnected);
    return 0;
}