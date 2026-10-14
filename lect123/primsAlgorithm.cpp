#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Prim's algorithm is used to find Minimum spanning tree (MST)

int main() {
    int V = 4;
    vector<vector<pair<int, int>>> adj(V);

    // Undirected weighted graph
    adj[0].push_back({1, 10});
    adj[1].push_back({0, 10});

    adj[0].push_back({3, 30});
    adj[3].push_back({0, 30});

    adj[0].push_back({2, 15});
    adj[2].push_back({0, 15});

    adj[1].push_back({3, 40});
    adj[3].push_back({1, 40});

    adj[2].push_back({3, 50});
    adj[3].push_back({2, 50});
    return 0;
}

