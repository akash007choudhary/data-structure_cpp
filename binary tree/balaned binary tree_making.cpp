// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> inorderVals;   universl as vetor does not change 


// get teh inorder of the given tree
//     void inorder(TreeNode* root) {
//         if (root == NULL)
//             return;

//         inorder(root->left);
//         inorderVals.push_back(root->val);
//         inorder(root->right);
//     }
// 

// now making the tree again froom the given inorder
//     TreeNode* buildBST(int st, int end) {
//         if (st > end)
//             return NULL;

//         int mid = st + (end - st) / 2;


// as  we need to create a new node root that has the value of miidel index , inorderVals[mid]
//         TreeNode* root =new TreeNode(inorderVals[mid]);

//             root->left = buildBST(st, mid - 1);

//             root->right = buildBST(mid+1,end);
//             return root;
//     }

//     TreeNode* balanceBST(TreeNode* root) {
//         inorder(root);
//         return buildBST(0, inorderVals.size() - 1);
//     }

// };