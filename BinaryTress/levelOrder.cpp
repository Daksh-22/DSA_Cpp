#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node (int d){
            data = d;
            left = right = NULL;
        }
};

static int idx = -1;
node* buildTree(){
    int data;
    cin>>data;
    idx++;

    if (data == -1){
        return NULL;
    }

    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
  
    return root;
}

void levelTraversal(node* root){
    queue<node*> q;

    q.push(root);
    
    while(q.size()>0){
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
    node* root = buildTree();
    cout<< "TREE-"<<endl;
    levelTraversal(root);
    
    return 0;
}