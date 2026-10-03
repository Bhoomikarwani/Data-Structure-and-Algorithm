// cycle detection in directed graph
#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
                                           // Kahn's Algorithm (topological order using bfs)
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
    }
    
    void topoSort(){
        // indegree of all nodes
        vector<int> indeg(V , 0);
        for(int u=0 ; u<V ; u++){
            for(int v : l[u]){
                indeg[v]++;
            }
        }

        // start with 0 indeg node
        queue<int> q;
        for(int i=0 ; i<V ; i++){
            if(indeg[i] == 0){
              q.push(i);
            }
        }


        vector<int> res;
        while(q.size() > 0){
            int curr = q.front();
            q.pop();
            res.push_back(curr);

            for(int v : l[curr]){
                indeg[v]--;
                if(indeg[v] == 0){
                    q.push(v);
                }
            }
        }

        for(int i : res){
            cout << i << " ";
        }
    }
  
};    


int main(){
    Graph g(6);
    g.addEdge(5,0);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(5,2);

    g.topoSort();
    return  0 ;
}