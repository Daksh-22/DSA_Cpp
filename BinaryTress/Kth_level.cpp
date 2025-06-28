#include<iostream>
#include<vector>
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

node* buildTree(){
    int data;
    cin>>data;

    if(data == -1){
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
        cout<<curr->data<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        cout << endl;
    }
}

void Kth_level(node* root,int K){
    if (root == NULL){
        return ;
    }
    if (K == 1){
        cout << root->data <<" ";
        return;
    }
    Kth_level(root->left,K-1);
    Kth_level(root->right,K-1);
}
int main()
{
    cout<<"Enter the data in PreOrder:";
    node* root = buildTree();

    cout<<"Level Order-";
    levelOrder(root);

    int K;
    cout << "\nEnter level to print: ";
    cin >> K;
    cout << "Nodes at level " << K << ": ";
    Kth_level(root, K);
    cout << endl;

    return 0;
}