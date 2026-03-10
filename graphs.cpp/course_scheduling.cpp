
// // when nodes are given as 0,1,2, ... upto n-1   n is size or number of elemensts
// // but if edges has [6,9] type thing but number of elemenst is 4 6 type so in that case we cant use vector we will use unordered map and the code will be looking like this 



// #include <unordered_map>
// #include <vector>
// using namespace std;

// class Solution {
// public:

//     bool iscycledfs(int src, unordered_map<int, vector<int>> &adj,
//                     unordered_map<int,bool> &vis,
//                     unordered_map<int,bool> &recpath) {

//         vis[src] = true;
//         recpath[src] = true;

//         for(int v : adj[src]) {

//             if(!vis[v]) {
//                 if(iscycledfs(v, adj, vis, recpath)) {
//                     return true;
//                 }
//             }
//             else if(recpath[v]) {
//                 return true;
//             }
//         }

//         recpath[src] = false;
//         return false;
//     }

//     bool canFinish(vector<vector<int>>& edges) {

//         unordered_map<int, vector<int>> adj;

//         // build adjacency list
//         for(int i = 0; i < edges.size(); i++) {

//             int u = edges[i][1];
//             int v = edges[i][0];

//             adj[u].push_back(v);
//         }

//         unordered_map<int,bool> vis;
//         unordered_map<int,bool> recpath;

//         // run DFS for every node present in graph
//         for(auto &p : adj) {

//             int node = p.first;

//             if(!vis[node]) {
//                 if(iscycledfs(node, adj, vis, recpath)) {
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }
// };





// // normal code using vector of vector or adjecency list 
// class Solution {
// public:

//     bool iscycledfs(int src, vector<bool> &vis, vector<bool> &recpath, vector<vector<int>>&adj){
//         vis[src]= true; 
//         recpath[src]=true;
//         for(int v : adj[src]){
//                 if(!vis[v]){
//                     if(iscycledfs(v, vis, recpath, adj)){
//                         return true; 
//                     }
//                 }else if(recpath[v]){
//                     return true;
//                 }
            
//         }
//         recpath[src]=false;
//         return false;
//     }
//     bool canFinish(int n, vector<vector<int>>& edges) {
//         vector<vector<int>> adj(n); 
//         for(int i = 0; i < edges.size(); i++){
//             int u = edges[i][1];
//             int v = edges[i][0];
//             adj[u].push_back(v);
//         }
//          vector<bool> vis(n , false);
//           vector<bool> recpath(n, false);

//           for(int i =0 ; i<n; i++){
//             if(!vis[i]){
//                 if(iscycledfs(i, vis, recpath, adj)){
//                     return false;
//                 }
//             }
//           }
//           return true;
//     }
// };