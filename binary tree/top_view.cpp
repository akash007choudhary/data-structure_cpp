#include <iostream>
#include<queue>
#include<map>
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

// this is the function for top view notes mian ho kya rha hai wo likha hai so reaad , and understand thsi for other variations :)

void topview(node* root){
    queue<pair<node*, int >>q;
    map<int,int>m;
    q.push({root,0});

    while(q.size()>0){
        node* curr= q.front().first;
        int  currhd= q.front().second;
        q.pop();
        if(m.find(currhd)==m.end()){
            m[currhd]=curr->data;
        }
        if (curr->left!=NULL){
            q.push({curr->left,currhd-1});
        }
        if (curr->right!=NULL){
            q.push({curr->right,currhd+1});
        }

    }
    for (auto it: m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}


int main() {
     vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node *root = buildtree(preorder);
    topview(root);
    return 0;
}