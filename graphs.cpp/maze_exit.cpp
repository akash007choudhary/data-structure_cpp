// class Solution {
// public:
//     int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
//         int m = maze.size(), n = maze[0].size();

//         queue<pair<pair<int,int>, int>> q;
//         vector<vector<int>> vis(m, vector<int>(n, 0));

//         q.push({{entrance[0], entrance[1]}, 0});
//         vis[entrance[0]][entrance[1]] = 1;

//         while (!q.empty()) {
//             auto front = q.front();
//             q.pop();

//             int i = front.first.first;
//             int j = front.first.second;
//             int steps = front.second;

//             // TOP
//             int ni = i - 1, nj = j;
//             if (ni >= 0  && maze[ni][nj] == '.' && !vis[ni][nj]) {
//                 if (ni == 0 || nj == 0 || ni == m-1 || nj == n-1)
//                     return steps + 1;
//                 vis[ni][nj] = 1;
//                 q.push({{ni, nj}, steps + 1});
//             }

//             // BOTTOM
//             ni = i + 1; nj = j;
//             if (ni < m && maze[ni][nj] == '.' && !vis[ni][nj]) {
//                 if (ni == 0 || nj == 0 || ni == m-1 || nj == n-1)
//                     return steps + 1;
//                 vis[ni][nj] = 1;
//                 q.push({{ni, nj}, steps + 1});
//             }

//             // LEFT
//             ni = i; nj = j - 1;
//             if (nj >= 0  && maze[ni][nj] == '.' && !vis[ni][nj]) {
//                 if (ni == 0 || nj == 0 || ni == m-1 || nj == n-1)
//                     return steps + 1;
//                 vis[ni][nj] = 1;
//                 q.push({{ni, nj}, steps + 1});
//             }

//             // RIGHT
//             ni = i; nj = j + 1;
//             if (nj < n  && maze[ni][nj] == '.' && !vis[ni][nj]) {
//                 if (ni == 0 || nj == 0 || ni == m-1 || nj == n-1)
//                     return steps + 1;
//                 vis[ni][nj] = 1;
//                 q.push({{ni, nj}, steps + 1});
//             }
//         }

//         return -1;
//     }
// };




// baisc flow
// while queue not empty:
    // take front cell
    // try all 4 directions
    // if valid:
    //     if exit → return
    //     mark visited
    //     push into queue with steps+1