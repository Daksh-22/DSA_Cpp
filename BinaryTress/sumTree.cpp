#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* buildTree(){
    int data;
    cin>> data;
    if (data == -1){
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void preOrder(node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int sumTree(node* root){
    if(!root){
        return 0;
    }
    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);

    root->data += leftSum+rightSum;
    return root->data;
}
int main()
{
    cout<<"Enter data in preorder:-";
    node* root = buildTree();

     sumTree(root);

     preOrder(root);

    return 0;
}