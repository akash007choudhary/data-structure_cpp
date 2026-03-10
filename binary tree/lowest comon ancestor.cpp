// logic
// each node return to its parent if it had found p or q or not , 
// like if node ke left or right return not null matlb p and q mil gye left and right main then taht node is the lca so it return itself but if not like left main p mila and right main null (nhi mila) then wo p retrun krega to apne parnet 

// MATLAB YE PROBLEM BOTTOM TO TOP APPPRAOCH MAIN SOLVE KRTE 


// code is below  ---- IT WAS TOUGH TO UNDERSTAND FIRST BUT REMEMBER THE APPROACH !!!!

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if (root == NULL)
//             return NULL;

//         if (root->val == p->val || root->val == q->val)
//             return root;
        
//          // the values jo retrn krneeg from left part and right part  
//         TreeNode* leftv = lowestCommonAncestor(root->left, p, q);
//         TreeNode* rightv = lowestCommonAncestor(root->right, p, q);

//         // yahan un values ke conditions check honge as if 
//         // val, val ->  retrun root as dono mil gye 
//         // val, null->retrrunr leftv;
//         // null  , val ->return rightv ;
//         if(leftv && rightv){
//             return root;
//         }
//         else if(leftv !=NULL ) return leftv;
//         else{
//             return rightv;
//         }
//     }
// };