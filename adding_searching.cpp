#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = right = NULL;
    }
};

//Creation and Insertion of humara BST
node* insertion(node* root, int data) {
    if (!root) {
        return new node(data);
    }
    if (data <= root->data) {
        root->left = insertion(root->left, data);
    } else {
        root->right = insertion(root->right, data);
    }
    return root;
}

//Jo values aayi unka tree bnaya jaara hai
node* buildBST() {
    node* root = NULL;
    int data;
    cout << "Enter values for BST:- ";
    while (cin >> data && data != -1) {
        root = insertion(root, data);
    }
    return root;
}

// Inorder traversal to check BST and BST ka "in-order is always sorted"
 void inorder(node* root) {
     if (!root) return;
     inorder(root->left);
     cout << root->data << " ";
     inorder(root->right);
 }

node* search(node* root, int key){
    if(!root){
        return NULL;
    }
    if (root->data == key){
        return root;
    }
    node* left = search(root->left,key);
    if (left!=NULL) return left;
    
    node* right = search(root->right,key);
    if (right!=NULL) return right;
}


int main(){
    node* root = buildBST();
    // cout<<"Enter tree in inorder:-";
    // inorder(root);
    node* ans;
    ans = search(root,3);
    if(ans-> data) cout << " FOUND" << endl;
    else cout << "NOT FOUND" << endl;


    return 0;
}