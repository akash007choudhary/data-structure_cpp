// class Solution {
// public:
//     void dfs(int node, vector<vector<int>>& isConnected,vector<bool>& visited) {
//         visited[node] = true;

//         for(int j = 0 ; j < isConnected.size();j++){
//             if(isConnected[node][j]==1 && !visited[j] ){
//                 dfs(j, isConnected, visited);
//             }
//         }

// node matlb ek row hua , and node,j main uske values 1 dekhenge as if there is a connection or not , and then if also j is visited or not 




//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int V = isConnected.size();
//         vector<bool> visited(V, false);
//         int count = 0;
//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 dfs(i,isConnected, visited);
//                 count++;
//             }
//         }

//         return count;
//     }
// };




//                                       ** easy one your style 

// class Solution {
// public:
//     void dfs(int node, vector<vector<int>>& adjLs, vector<bool>& visited) {
//         visited[node] = true;

//         for (int v : adjLs[node]) {
//             if (!visited[v]) {
//                 dfs(v, adjLs, visited);
//             }
//         }
//     }

//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int V = isConnected.size();

//         // Step 1: Build adjacency list
//         vector<vector<int>> adjLs(V);




//                                       creating adjacency list 
//         for (int i = 0; i < V; i++) {
//             for (int j = 0; j < V; j++) {
//                 if (isConnected[i][j] == 1 && i != j) {
//                     adjLs[i].push_back(j);
//                     adjLs[j].push_back(i);
//                 }
//             }
//         }

//         // Step 2: DFS to count provinces
//         vector<bool> visited(V, false);
//         int count = 0;

//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 dfs(i, adjLs, visited);
//                 count++;
//             }
//         }

//         return count;
//     }
// };