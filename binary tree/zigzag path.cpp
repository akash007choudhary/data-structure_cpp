// class Solution {
// public:
//     int maxLen = 0;   //global variable  initially max length was 0 as was at root so no length

//     void dfs(TreeNode* node, int dir, int len) {
//         if (!node) return;

//         maxLen = max(maxLen, len);

//         // If we came from left, we must go right
//         if (dir == 0) {
//             dfs(node->right, 1, len + 1); // continue zigzag as jab call hoga to next main matlb ki ye right se aya tha
//             dfs(node->left, 0, 1);        // break zigzag, restart so len = 1 as new start hoga and again maxlength calculated rhega so 1 hua bhi to no farak as maxlenth ho chuka calculate so ab isse naya calculations hoga if maxlegth se bada hai to maxlegth change nhi to nhi
//         }
//         // If we came from right, we must go left
//         else {
//             dfs(node->left, 0, len + 1);  // continue zigzag
//             dfs(node->right, 1, 1);       // break zigzag, restart
//         }
//     }

//     int longestZigZag(TreeNode* root) {
//         if (!root) return 0;

//         // root has no parent → try both directions
//         dfs(root->left, 0, 1);   // assume parent direction was left
//         dfs(root->right, 1, 1);  // assume parent direction was right

//         return maxLen;
//     }
// };
