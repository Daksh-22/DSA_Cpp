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

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);

    while(q.size()>0){
        node* curr = q.front();
        q.pop();

        cout<<curr->data<<" ";

        if (curr->left != NULL){
            q.push(curr->left);
        }
        if (curr->right != NULL){
            q.push(curr->right);
        }
    }
}

int main() {
    node* root = buildBST();
    inorder(root);
    levelOrder(root);
    return 0;
}
