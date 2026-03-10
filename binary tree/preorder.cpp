#include <iostream>
#include <vector>
#include<queue>
using namespace std;

// ye meko ek new node create krne main use hoga ;
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
node *buildtree(vector<int> preorder)
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

                         // traversal algorithms

// preorder traversal (recursive)->> O(n) TC;

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// inorder traversal;timecmmplexity O(n):

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

// postordeer traversal tc= O(n)

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);

    postorder(root->right);
    cout << root->data << " ";
}




// level order traversal (non rrecursive ->> iterative traversal):
// ye wala level wise print kreega 
// if you want ki ek hi line main sab print krega without newline then dont add null and also doont use the if (curr==null) wala if case so it wil print in a single line then :

void levelorder(node *root ){
    queue<node*>q;
    q.push(root);

        // q.push(NULL);


    while (q.size()>0){
        node* curr= q.front();
        q.pop();

        // if(curr==NULL){
        //     if(!q.empty()){  // matlb ham ek null ko jab pop kreneg tab if the queeu has elements then matlb only a newline is added but if it empty then hame khatam krna hai ;
        //         cout<<endl;
        //         q.push(NULL);
        //         continue; 
        //     }
        //     else{
        //         break;
        //     }
        // }

        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        
    }
    cout<<endl;
    
}


int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node *root = buildtree(preorder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;

    // preOrder(root);
    // cout << endl;
    // inorder(root);
    // cout << endl;
    // postorder(root);
    // cout << endl;
    levelorder(root);


    return 0;
}