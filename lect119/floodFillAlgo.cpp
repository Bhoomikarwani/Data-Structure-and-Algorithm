#include <iostream>
#include <vector>
#include <list>
#include <stack>
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
};