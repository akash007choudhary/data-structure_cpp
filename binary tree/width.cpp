// class Solution {
// public:
//     int widthOfBinaryTree(TreeNode* root) {
//         if (!root) return 0;

//         queue<pair<TreeNode*, long long>> q;
//         q.push({root, 0});
//         int maxw = 0;

//         while (!q.empty()) {
//             int currsize = q.size();
//             long long start = q.front().second;
//             long long end = q.back().second;

//             maxw = max(maxw, (int)(end - start + 1));

//             for (int i = 0; i < currsize; i++) {
//                 auto curr = q.front();
//                 q.pop();

//                 long long idx = curr.second - start; // normalization

//                 if (curr.first->left) {
//                     q.push({curr.first->left, idx * 2 + 1});
//                 }
//                 if (curr.first->right) {
//                     q.push({curr.first->right, idx * 2 + 2});
//                 }
//             }
//         }
//         return maxw;
//     }
// };



// LOGIC IS EASY TO UNDERSTAND BUT THE CODE IS LITTLE TOUGH TO UNDERSTAND AND WWRIET ON OWN SO REMEMERS THSI PROBLEM 