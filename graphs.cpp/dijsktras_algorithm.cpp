#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

void dijkstra(int src, vector<vector<pair<int,int>>> &g, int V) {

    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src});

    while(!pq.empty()) {

        int u = pq.top().second;      //as the first value is the distance second is the node
        pq.pop();

        for(int i = 0; i < g[u].size(); i++) {

            int v = g[u][i].first;    // means g[u] is the adjency list uska then i is the neighboures so g[u] ka ith neighbooure usak first elmenst that is the v and second is the weight
            int wt = g[u][i].second;

            
            // edge relaxation 
            if(dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }

    for(int i = 0; i < V; i++) {
        cout << "Distance from " << src << " to " << i << " = " << dist[i] << endl;
    }
}

int main() {

    int V = 6;
    vector<vector<pair<int,int>>> g(V);

    g[0].push_back({1,2});
    g[0].push_back({2,4});

    g[1].push_back({2,1});
    g[1].push_back({3,7});

    g[2].push_back({4,3});

    g[3].push_back({5,1});

    g[4].push_back({3,2});
    g[4].push_back({5,5});

    dijkstra(0, g, V);

    return 0;
}