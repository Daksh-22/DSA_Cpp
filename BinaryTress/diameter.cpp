#include<iostream>
#include<queue>
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
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }
    node* root = new node(data);
    root -> left = buildTree();
    root -> right = buildTree();

    return root;
}

int height(node*root) {
	if (!root) return 0;

	return 1 + max(height(root->left), height(root->right));
}

int diameter(node* root){
    if(!root){
        return 0;
    }
    int d1 = height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

    return max(d1,d2,d3);
}


int main()
{
    
    return 0;
}