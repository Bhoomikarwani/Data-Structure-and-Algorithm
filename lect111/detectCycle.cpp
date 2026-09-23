// detect cycle in undirected graph
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> *l;

public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }    

    void addEdge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool isCycleUndirDFS(int src , vector<int> &vis , int par){   // par =>parent
       vis[src] = true;

       for(int v : l[src]){
          if(!vis[v]){    // if not visited
              if(isCycleUndirDFS(v , vis , src)){
                  return true;
              } 
          }

          // visited
          else if(v != par){
             return par;
          }
       }

       return false;
    }

    bool isCycle(){
        vector<int> vis(V , false);

        for(int i=0 ; i<V ; i++){
            if(!vis[i]){
                if(isCycleUndirDFS(i ,vis , -1)){
                   return true;
                }
            }
        }
         
        return false;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(0,3);
    g.addEdge(3,4);

    cout << g.isCycle() << endl ; 
}