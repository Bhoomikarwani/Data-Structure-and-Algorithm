// redundant connection
#include <iostream>
#include <vector>
#include <list>

using namespace std;

void unionByRank(int a , int b, vector<int>& par , vector<int>& rank){
         int par_a = find(a, par, rank);
         int par_b = find(b, par, rank);

         if(par_a == par_b){
            return;
         }

         if(rank[par_a] == rank[par_b]){   // case1
            par[par_b] = par_a;
            rank[par_a]++;
         }
         else if(rank[par_a] > rank[par_b]){  // case2
            par[par_b] = par_a;
         }
         else{
            par[par_a] = par_b;
         }
    }

    int find(int x , vector<int>& par , vector<int>& rank){
        if(par[x] == x){
            return x;
        }
        return find(par[x], par, rank);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> par(n + 1);
        vector<int> rank(n + 1, 0);

        for(int i = 1; i <= n; i++) {
            par[i] = i;
        }

        for(int i=0 ; i<n ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int parU = find(u, par, rank);
            int parV = find(v, par, rank);
            if(parU != parV){
                unionByRank(u, v, par, rank);
            }
            else{ //parU == parV
               return {u, v};
            }
        }
        return {};
    }

    int main(){
        vector<vector<int>> edges = {{1,2}, {1,3}, {2,3}};
        vector<int> ans =  findRedundantConnection(edges);
        for(int i : ans){
            cout << i << " ";
        }
    }