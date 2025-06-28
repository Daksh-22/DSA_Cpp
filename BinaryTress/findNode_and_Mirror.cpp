#include<iostream>
#include<vector>
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
    int data ;
    cin>> data;

    if(data == -1){
        return NULL;
    }
    node* root = new node(data);
    root -> left = buildTree();
    root -> right = buildTree();

    return root;
}

node* search(node* root,int K){
    if(!root){
        return NULL;
    }
    if (root->data == K){
        return root;
    }
    node* left = search(root->left,K);
    if(left != NULL) return left;

    node* right = search(root->right,K);
    if(right != NULL) return right;
}

void mirror(node* root){
    if(!root){
        return;
    }
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}

int main()
{
    node* root = buildTree();

    node* ans = search(root,12);

    if(ans){
        cout<< "found" << ans->data << endl;
    }
    else{
        cout<<"not found" << endl;
    }
    return 0;
}