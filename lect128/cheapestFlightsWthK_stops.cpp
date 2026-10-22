#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // first convert flights/edge data int graph for simple access in code
        vector<pair<int, int>> graph[n];

        for(int i=0 ; i<flights.size(); i++){
            int u= flights[i][0];
            int v= flights[i][1];
            int wt = flights[i][2];

            graph[u].push_back({v,wt});
        }

        queue<pair<int, pair<int ,int>> > q; // node, (cost, stops)
        vector<int> dist(n, 100000);  // in place of 1000000 write int_max
        dist[src] = 0;
        q.push({src, {0, -1} });

        while(q.size() > 0){
            auto val = q.front();
            int u = val.first;
            int cost = val.second.first;
            int stop = val.second.second;

            q.pop();

            // neigbors of u
            for(auto edge : graph[u] ){        // for each loop
                    int v = edge.first;
                    int wt = edge.second;

                    //edge relaxation
                    if(dist[v] > cost + wt  && stop+1 <= k){
                        dist[v] = cost + wt;
                        q.push({v , {dist[v], stop+1} });
                    }
            }
        }

        if(dist[dst] == 100000) return -1;    // in place of 1000000 write int_max

        return dist[dst];
}
int main(){
    vector<vector<int>> flights = { {0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    cout << findCheapestPrice(4 , flights, 0, 3, 1);
}