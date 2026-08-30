// class Solution {
// public:

//     int dfs(int node,   vector<vector<pair<int,int>>>&adj, vector<int> &vis){
//         vis[node]=1;
//         int count= 0;

//         for( auto i : adj[node]){
//             int neigh = i.first;
//             int change= i.second;

//             if(!vis[neigh]){
//                 count+=change;
//                 count+=dfs(neigh, adj, vis);
//             }
//         }
//         return count;
//     }

//     int minReorder(int n, vector<vector<int>>& connections) {
//         vector<vector<pair<int,int>>>adj(n);

//         // building graph
//         for(auto edge :connections){
//             int u = edge[0];
//             int v= edge[1];


// u->v hai to v se u to nhi aa skte so we need to rerverse thus , 1 is stored taht is added in he count 
// but v->u hai to we can reach thus no need to worry 0 

//             adj[u].push_back({v,1});
//             adj[v].push_back({u,0});
//         }

//         vector<int>vis(n,0);
//          return dfs(0, adj , vis);
//     }
// };