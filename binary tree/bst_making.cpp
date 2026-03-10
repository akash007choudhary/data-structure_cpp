#include <bits/stdc++.h>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Insert into BST
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Build BST from array
Node* buildBST(vector<int>& arr) {
    Node* root = NULL;

    for (int val : arr) {
        root = insert(root, val);
    }

    return root;
}

bool search (Node* root, int key ){
    if (root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data>key){
        return  search(root->left,key);
    }else{
        return  search(root->right,key);
    }
}

// Inorder Traversal (sorted order in BST)
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal
void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal
void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// left most node in right subtree;
Node* getinordersuccesor(Node* root){
    while(root!=NULL && root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* del(Node* root, int key){

    //  the process of searching  teh key in the bst whchi is to be deleted ;
    if (root == NULL) return;
    if(key<root->data){
        root->left=del(root->left,key);
    }else if(key>root->data){
        root->right=del(root->right,key);
    }


    // when found the key in the bst 

    else{
        // key==root
        // no child oor 1 child:    
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
       else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }


        // 2 children so root main succsor ka valeu store and then use dlete ;z
        else{
            Node* is= getinordersuccesor(root->right);
            root->data=is->data;
            root->right=del(root->right,is->data);
        }
    }
    return root;   // root of new bst where dleteion is done:


}

// Driver code
int main() {
    vector<int> arr = {5, 1, 3, 4, 2, 7};

    Node* root = buildBST(arr);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}
