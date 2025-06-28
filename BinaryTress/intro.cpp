#include<iostream>
#include<vector>
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

static int idx = -1;

node* buildTree(vector<int> preOrder) {
    idx++;

    // base case
    if (preOrder[idx] == -1) {
        return NULL;
    }

    node* root = new node(preOrder[idx]);  // ROOT
    root->left = buildTree(preOrder);        // LST
    root->right = buildTree(preOrder);       // RST

    return root;
}

void preOrder(node* root){      //ROOT_LEFT_RIGHT
    if(!root){
        return;
    }
    cout << root->data << " "; 
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node* root){     //LEFT_ROOT_RIGHT
    if(!root){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(node* root){    //LEFT-RIGHT-ROOT
    if(!root){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
    
int main()
{
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node* root = buildTree(preOrder);

    cout << root->data << " "
         << root->left->data << " "
         << root->right->data;
    
    return 0;
}
