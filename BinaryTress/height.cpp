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

    if (data==-1){
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void levelOrder(node* root){
    queue<node*> q;

    q.push(root);

    while(q.size() > 0){
        node* curr = q.front();
        q.pop();

        cout<< curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}

int countNodes(node* root){
    if(!root){
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int height(node* root){
    if(!root){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}
int main()
{   node* root = buildTree();
    levelOrder(root);
    cout << "Number of nodes: " << countNodes(root) << endl;
    cout << "Height of tree: " << height(root) << endl;
    
    return 0;
}