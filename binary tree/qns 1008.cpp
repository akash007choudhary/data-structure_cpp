// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     TreeNode* helper(vector<int>& preorder,int &i, int bound){
//         if(i>=preorder.size()|| preorder[i]>bound){
//             return NULL ;
//         }
//        TreeNode* root= new TreeNode(preorder[i]);
//        i++;
//        root->left= helper(preorder,i,root->val);  // left ke jo bhi values honge wo hamesha root se chote honge,
//        root->right= helper(preorder,i,bound);
// and right ke jo bhi values honge wo apne parent ke value se chota hota , ye bst bana k dekle

//        return root;
//     }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         int i = 0;
//         return helper (preorder, i,INT_MAX);
//     }
// };