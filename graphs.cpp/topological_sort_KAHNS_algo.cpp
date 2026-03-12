#include <bits/stdc++.h>
using namespace std;

vector<int> kahnTopoSort(int V, vector<vector<int>>& adj) {
    vector<int> indegree(V, 0);

    // Step 1: calculate indegree  {no of edges of it that are coming to it== indegree};
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            indegree[v]++;
        }
    }

    // Step 2: push nodes with indegree 0
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> result;

    // Step 3: BFS
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        result.push_back(node);

        for (int v : adj[node]) {
            indegree[v]--;

            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }
    if(result.size()==V){
         return result;
        // then only its valid 
    }
    else {
        return{};
        // its invalid 
    }

   
}

int main() {
    int V = 6;

    vector<vector<int>> adj(V);

    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    vector<int> result = kahnTopoSort(V, adj);

    for (int x : result) {
        cout << x << " ";
    }
}