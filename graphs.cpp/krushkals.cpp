#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Edge{
public:
    int src,dest,weight;
    // src - source , dest - destination
};
bool compareEdges(Edge a , Edge b){
    if(a.weight < b.weight) return true;
    else return true;
}

//function for DFS traversal of a graph
bool isReachable(int curr, int target, vector<vector<int>>& adj, vector<bool>& visited) {
    if (curr == target) return true;
    visited[curr] = true;

    for (int neighbor : adj[curr]) {
        if (!visited[neighbor]) {
            if (isReachable(neighbor, target, adj, visited)) return true;
        }
    }
    return false;
}

void kruskalMST(int V, vector<Edge>& edges) {
    // 1. Sort edges by weight
    sort(edges.begin(), edges.end(), compareEdges);

    vector<vector<int>> adj(V); // Adjacency list for the MST
    vector<Edge> mst;
    int mst_weight = 0;

    for (auto& edge : edges) {
        vector<bool> visited(V, false);

        // 2. Using DFS to check if src and dest are already connected
        if (!isReachable(edge.src, edge.dest, adj, visited)) {
            // No cycle formed, add edge to MST
            adj[edge.src].push_back(edge.dest);
            adj[edge.dest].push_back(edge.src);
            mst.push_back(edge);
            mst_weight += edge.weight;
        }
    }
    cout << "Edges in MST (using DFS check):\n";
    for (auto& edge : mst) {
        cout << edge.src << " -- " << edge.dest << " == " << edge.weight << endl;
    }
    cout << "Total Weight: " << mst_weight << endl;
}
int main() {
    int V = 4; // Number of vertices
    vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskalMST(V, edges);

    return 0;
}