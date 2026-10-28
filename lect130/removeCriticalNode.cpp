// removal of critical node using tarjan's algorithm

#include <iostream>
#include <vector>
# include <set>
using namespace std;

class Graph {
public:
    vector<vector<int>> adj;
    int V;

    int time;
    vector<int> dt, low;
    
    Graph(int V){
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int u , int parU ,set<int> &cp){
        dt[u] = low[u] = ++time;
        int children = 0;

        for(int i=0 ; i<adj[u].size() ; i++){
            int v = adj[u][i];

            if(dt[u] == -1){
                children++;
                dfs(v, u , cp);
                //update low
                low[u] = min(low[u], low[v]);

                if(parU != -1  &&  low[v] >= dt[u]){
                        cp.insert(u);
                }
            }

            else if(v != parU){
                low[u] = min(low[u], dt[v]);
            }
        }

        if(parU == -1 && children >1){
            cp.insert(u);
        }
    }

    int articulationPoints(){  // Complete this
        time =0 ;
        dt.resize(V, -1);  // dt == -1 => not visited
        low.resize(V);

        set<int> criticalPoints;
   
        for(int i=0 ; i<V; i++){
            if(dt[i] == -1){
                dfs(i, -1, criticalPoints);
            }
        }

        // print the critical points
        for(auto val : criticalPoints){
            cout << val << " ";
        }
        cout << endl;
        return criticalPoints.size();
    }
};

int main(){
    Graph graph(6);

    graph.addEdge(1, 0);
    graph.addEdge(1, 2);
    graph.addEdge(4, 3);
    graph.addEdge(4, 5);
    graph.addEdge(4, 1);

    cout << graph.articulationPoints() << endl;
}