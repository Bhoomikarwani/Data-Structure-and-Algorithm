// all paths from source to target

#include <iostream>
#include <vector>
using namespace std;

    void dfs(vector<vector<int>>& graph, vector<vector<int>>& ans, int n, int curr, vector<int>& path){
       
       path.push_back(curr);

       if(curr == n-1){
          ans.push_back(path);
       } 

        for(int neigh : graph[curr]){
            dfs(graph, ans, n, neigh, path);
        }
        
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> ans;
        vector<int> path;
        dfs(graph, ans, n, 0, path);
        return ans;
    }
    int main(){
       vector<vector<int>> graph =  {{1,2},{3},{3},{}};
       vector<vector<int>> ans = allPathsSourceTarget(graph);
       for(int i =0 ; i<ans.size() ; i++){
          for(int j=0 ; j<ans[i].size() ; j++){
             cout << ans[i][j] << " ";
          }
          cout << endl;
       }
    }