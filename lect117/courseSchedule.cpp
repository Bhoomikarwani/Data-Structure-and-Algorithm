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
    }

    bool isCycleDirDFS(int src , vector<bool> &vis , vector<bool> &recPath, vector<vector<int>>& edges){
        vis[src] = true;
        recPath[src] = true;
        
        for(int i=0 ; i<edges.size() ; i++){
            int v= edges[i][0];
            int u= edges[i][1];

            if (u == src)
            {
                if (!vis[v])
                {
                    if (isCycleDirDFS(v, vis, recPath, edges))
                    {
                        return true;
                    }
                }
                else if (recPath[v])
                {
                    return true;
                }
            }
        }

        recPath[src] = false;
        return false;
    }

    bool canFinish(int n , vector<vector<int>>& edges){
        vector<bool> vis(n , false);
        vector<bool> recPath(n , false);

        for(int i=0 ; i<n ; i++){
            if(!vis[i]){
                if(isCycleDirDFS(i , vis , recPath ,edges)){
                    return false;
                }
            }
        }
        
        return true;
    }
};

int main(){
    Graph g(4);

    // g.addEdge(1,0);
    // g.addEdge(0,2);
    // g.addEdge(2,3);
    // g.addEdge(3,0);

    vector<vector<int>> edges ={ {1,0} ,{2,0 } , {3,1} , {3,2}};
    cout << g.canFinish(4, edges) << endl ;  // true
}