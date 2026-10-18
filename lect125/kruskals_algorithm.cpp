#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Edge{
public:
  int u, v, wt;
  
  Edge(int u, int v, int wt){
      this->u = u;
      this->v = v;
      this->wt = wt;
  }

  // custom comparator => < 
  bool operator<(const Edge &other) const{    // jab baad mai hume edges ko sort karnege toh sirf weight kai basis par ho
      return this->wt < other.wt;
  }
};

class Graph{
public:
      int V;
      vector<Edge> edges;
      vector<int> par , rank;

      Graph(int V){
         this->V = V;
         for(int i=0 ; i<V ; i++){
             par.push_back(i);
             rank.push_back(0);
        }
      }

      void addEdge(int u , int v ,int wt){
         edges.push_back(Edge(u, v, wt));
      }

      int find(int x){
        if(par[x] == x){
            return x;
        }
        return par[x] = find(par[x]);
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
      
      void kruskals_algorithm(){  // O(ElogE)
        sort(edges.begin(), edges.end());
        int mstCost = 0;

        for (int i = 0; i < edges.size(); i++){
           Edge e = edges[i];

           int parU = find(e.u);
           int parV = find(e.v);

           if (parU != parV)
           { // no cycle
              unionByRank(e.u, e.v);
              mstCost += e.wt;
           }
        }
        cout << "MST Cost: " << mstCost << endl; 
      }
      
};


int main(){
  Graph graph(4);
  graph.addEdge(0,1,10);
  graph.addEdge(0,2,6);
  graph.addEdge(0,3,5);
  graph.addEdge(1,3,15);
  graph.addEdge(2,3,4);
  
  graph.kruskals_algorithm();
  return 0;
}