#include <iostream>
#include<vector>
#include<stack>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &vis, stack<int> &st) {
    vis[node] = true;

    for (int nbr : adj[node]) {
        if (!vis[nbr]) {
            dfs(nbr, adj, vis, st);
        }
    }

    // push after visiting all neighbors
    st.push(node);
}

int main() {
    int V = 6;
    vector<int> adj[V];

    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    vector<bool> vis(V, false);
    stack<int> st;

    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            dfs(i, adj, vis, st);
        }
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}