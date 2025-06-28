#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* buildTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void levelOrder(node* root){
    queue<node*>q;

    q.push(root);

    while(q.size() > 0){
        node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";

       
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        cout<<endl;
    }
}

int main()
{
    
    return 0;
}