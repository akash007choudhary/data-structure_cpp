// In a graph with V vertices, the longest possible shortest path contains V−1 edges, so Bellman–Ford relaxes edges V−1 times to ensure all shortest paths are found.

// “Each Bellman–Ford iteration allows shortest paths with one more edge.”


#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void bellmanFord(int src, vector<vector<pair<int,int>>> &g, int V)
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Relax edges V-1 times
    for(int i = 0; i < V-1; i++)
    {
        for(int u = 0; u < V; u++)
        {
            for(int j = 0; j < g[u].size(); j++)
            {
                int v = g[u][j].first;
                int wt = g[u][j].second;

                if(dist[u] != INT_MAX && dist[u] + wt < dist[v])
                {
                    dist[v] = dist[u] + wt;
                }
            }
        }
    }

    // Check for negative cycle

    // if i did v-1 times the loop and again i made another loop and even if once that loop works it will be error as it must be the final shortest path after v-1 steps not more than that

    for(int u = 0; u < V; u++)
    {
        for(int j = 0; j < g[u].size(); j++)
        {
            int v = g[u][j].first;
            int wt = g[u][j].second;

            if(dist[u] != INT_MAX && dist[u] + wt < dist[v])
            {
                cout << "Negative weight cycle detected\n";
                return;
            }
        }
    }

    for(int i = 0; i < V; i++)
    {
        cout << "Distance from " << src << " to " << i << " = " << dist[i] << endl;
    }
}

int main()
{
    int V = 5;

    vector<vector<pair<int,int>>> g(V);

    g[0].push_back({1,-1});
    g[0].push_back({2,4});

    g[1].push_back({2,3});
    g[1].push_back({3,2});
    g[1].push_back({4,2});

    g[3].push_back({2,5});
    g[3].push_back({1,1});

    g[4].push_back({3,-3});

    bellmanFord(0, g, V);

    return 0;
}