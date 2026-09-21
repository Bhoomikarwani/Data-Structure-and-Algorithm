#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
                                                         //Building Graph
class Graph{
    int V;
    list<int> *l ;  // int *arr (dynamnic array)

public:
    Graph(int V){
       this->V = V;
       l = new list<int>[V]; // arr = new int[v]  =>initializing and allocating size;  
    } 

    void addEdge(int u , int v){
      l[u].push_back(v);
      l[v].push_back(u);
    }

    void bfs()
    {
        queue<int> q;
        vector<bool> visited(V, false);

        q.push(0);
        visited[0] = true;

        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();

            cout << u << " ";

            for (int v : l[u])
            {
                if (visited[v] == false)
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl ;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.bfs();
}