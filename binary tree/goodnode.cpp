
// class Solution {
// public:

//     int helper(TreeNode* node, int maxsofar){
//         if(!node) return 0  ; 
//          int count = 0 ; 
//          if(node->val>=maxsofar){
//             count= 1;
//          }

//          maxsofar= max(maxsofar,node->val);

//          count+=helper(node->left,maxsofar);
//          count+=helper(node->right,maxsofar);
//          return count;

//     }
//     int goodNodes(TreeNode* root) {
//         return helper(root, root->val);
//     }
// };


// the important part was to think of using another fxn helper to solve this ;
//  The real rule (MEMORIZE THIS)
// If a recursive tree solution needs extra information beyond the node itself, you need a helper function (or equivalent).
// That’s it. No magic