#include <iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node( int val){
        data = val;
        left = right= NULL;
    }
};

static int idx= -1;

node* buildtree( vector<int> &preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    node * root= new node(preorder[idx]);
    root->left= buildtree(preorder);
    root->right= buildtree(preorder);

    return root;

}

int height( node* root){
    if(root==NULL){
        return 0;
    }
    int left= height(root->left);
    int right= height(root->right);
    return max(left,right)+1;  // as one must be added to include the brnach of root so good ;
}

// total number of nodes 
int nodenum(node* root){
    if(root==NULL){
        return 0 ; 
    }
    int leftr=nodenum(root->left);
    int rightr=nodenum(root->right);
    return leftr+rightr+1; 
}

// sum of total number of nodes->elements:
int sum(node* root){
    if (root==NULL){
        return 0 ;
    }
    int leftsum= sum(root->left);
    int rightsum= sum(root->right);
    return leftsum+rightsum+root->data;
}



int main() {
     vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node *root = buildtree(preorder);

// cout<<"the height is"<<height(root);
  cout<<nodenum(root)<<endl;
  cout<<sum(root);
    return 0;
   
}