// class Solution {
// public:
//     bool iscycledfs(int src, vector<bool>& vis1, vector<bool>& recpath,
//                     vector<vector<int>>& adj) {
//         vis1[src] = true;
//         recpath[src] = true;
//         for (int v : adj[src]) {
//             if (!vis1[v]) {
//                 if (iscycledfs(v, vis1, recpath, adj)) {
//                     return true;
//                 }
//             } else if (recpath[v]) {
//                 return true;
//             }
//         }
//         recpath[src] = false;
//         return false;
//     }
//     void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis,
//              stack<int>& st) {
//         vis[node] = true;

//         for (int nbr : adj[node]) {
//             if (!vis[nbr]) {
//                 dfs(nbr, adj, vis, st);
//             }
//         }

//         st.push(node);
//     }
//     vector<int> findOrder(int n, vector<vector<int>>& edges) {
//         vector<bool> vis(n, false);
//         vector<bool> vis1(n, false);
//         vector<bool> recpath(n, false);
//         stack<int> st;
//         vector<int> answer;
//         vector<vector<int>> adj(n);

//         for (int i = 0; i < edges.size(); i++) {
//             int u = edges[i][1];
//             int v = edges[i][0];
//             adj[u].push_back(v);
//         }

//         for (int i = 0; i < n; i++) {

//             if (iscycledfs(i,vis1, recpath,adj) == false) {
//                 if (!vis[i]) {
//                     dfs(i, adj, vis, st);
//                 }
//             }
//             else{
//                 return {};
//             }
//         }

//         while (!st.empty()) {
//             answer.push_back(st.top());
//             st.pop();
//         }

//         return answer;
//     }
// };