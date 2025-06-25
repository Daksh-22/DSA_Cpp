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

// Insertion function for BST
node* insertion(node* root, int data) {
    if (!root) {
        root = new node(data);
        return root;
    }
    if (data <= root->data) {
        root->left = insertion(root->left, data);
    } else {
        root->right = insertion(root->right, data);
    }
    return root;
}

// Build BST with values in range [k1, k2)
node* buildBST(int k1, int k2) {
    node* root = NULL;
    int data;
    cout << "Enter values for BST:- ";
    cin >> data;
    
     if (data == -1){
        return NULL;
     }
     if (data >= k1 && data < k2) {
            root = insertion(root, data);
        }

    return root;  
}

// Inorder traversal to print BST
void inorder(node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    node* root = buildBST(3, 10);
    cout << "Inorder traversal of BST in range:- ";
    inorder(root);
    cout << endl;
    return 0;
}
