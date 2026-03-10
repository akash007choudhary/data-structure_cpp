#include <iostream>
#include<queue>
#include<vector>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

 // iska timecomplexity would be O(n)-->>> as we are jist traversing the whole vector :

static int idx = -1;
node *buildtree(vector<int> &preorder)
{
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }

    node *root = new node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);

    return root;
}



// this is okay to do but you gotta do thiis using recursive method as that is better for longer bst ;
// this was iterative apporach 
// void levelorder(node *root, int k  ){
//     if (root==NULL) return ;
//     queue<node*>q;
//     q.push(root);
//     int count=1;
//         q.push(NULL);


//     while (!q.empty()){
//         node* curr= q.front();
//         q.pop();

//         if(curr==NULL){
//             if(!q.empty()){  // matlb ham ek null ko jab pop kreneg tab if the queeu has elements then matlb only a newline is added but if it empty then hame khatam krna hai ;
//                 // cout<<endl;
//                 count++;
//                 q.push(NULL);
//                 continue; 
//             }
//             else{
//                 break;
//             }
//         }
//         if(count==k){
// cout<<curr->data<<" ";
//         }
        
//         if(curr->left!=NULL){
//             q.push(curr->left);
//         }
//         if(curr->right!=NULL){
//             q.push(curr->right);
//         }
        
//     }
//     cout<<endl;
    
// }
// this is the recursive approach 
void kthlevel(node* root,int k){
    if(root==NULL) return ;

    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    kthlevel(root->left,k-1);
    kthlevel(root->right,k-1);
    
}


int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node *root = buildtree(preorder);
   
    kthlevel(root,3);
    
    return 0;
}

