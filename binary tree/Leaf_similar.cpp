
// class Solution {
// public:
//     void helper(TreeNode* root, vector<int>&leaves){
//         if(!root){
//             return;
//         }
//         if(!root->left && !root->right){
//             leaves.push_back(root->val);
//             return ;
//         }
//         helper(root->left, leaves);
//         helper(root->right,leaves);
//     }
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//        vector<int> l1,l2;
//        helper(root1,l1);
//        helper(root2,l2);

//        return l1==l2;
//     }
// };