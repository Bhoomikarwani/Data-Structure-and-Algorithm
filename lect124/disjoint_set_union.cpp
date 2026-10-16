#include <iostream>
#include <vector>
using namespace std;

class DisjointSetUnion{
public:
      int n;
      vector<int> par , rank;

      DisjointSetUnion(int n){
         this->n = n;
         for(int i=0 ; i<n ; i++){
             par.push_back(i);
             rank.push_back(0);
        }
      }

      void unionByRank(int a , int b){
         int par_a = find(a);
         int par_b = find(b);

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

      int find(int x){
        if(par[x] == x){
            return x;
        }
        return find(par[x]);
      }

      void getInfo(){
        for(int i = 0 ; i< n ; i++){
            cout << par[i] << " ";
        }
        cout << endl;
        for(int i = 0 ; i< n ; i++){
            cout << rank[i] << " ";
        }
        cout << endl;
      }
};

int main(){
  DisjointSetUnion dsu(6);
  dsu.unionByRank(0,2);
  cout << dsu.find(2) << endl;

  dsu.unionByRank(1,3);
  dsu.unionByRank(2,5);
  dsu.unionByRank(0,3);
  cout << dsu.find(2) << endl;

  dsu.unionByRank(0,4);
  return 0;
}