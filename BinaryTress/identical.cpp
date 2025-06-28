#include<iostream>
#include<vector>
#include<queue>
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

    if (data == -1){
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

bool isSame(node* q, node* p){
    if (p==NULL || q==NULL){
        p == q;
    }
    bool isRight = isSame(p->left,q->left);
    bool isLeft = isSame(p->right,q->right);

    return isRight && isLeft && p->data == q->data;
}

bool isSubtree(node* root, node* subRoot){
    if (root == NULL || subRoot == NULL){
        return root == subRoot;
    }
    if (root->data == subRoot->data 
        && isSame(root,subRoot)){
            return true;
        }
    return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
}

int main(){
    node* root = buildTree();

}