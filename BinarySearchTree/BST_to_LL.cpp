#include<iostream>
#include<vector>
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

node* insertion(node* root,int d){
    if (!root) {
        return new node(d);
    }
    if (d > root->data){
       root->right = insertion(root->right,d);
    }
    else{
        root->left = insertion(root->left,d);
    }
    return root;
}

node* buildTree(){
    node* root = NULL;
    int data;
    cout<<"Enter values for BST-";
    while(cin>>data && data!= -1){
        root = insertion(root,data);
    }
    return root;
}

void inorder(node* root,vector<int> &ip){
    if(!root){
        return;
    }
    inorder(root->left,ip);
    ip.push_back(root->data);
    inorder(root->right,ip);
}

node* bst_LL(node* root){
    vector<int> input;
    inorder(root,input);
    int n = input.size();

    node* newRoot = new node(input[0]);

    node* curr = newRoot;

    for(int i = 1; i<n; i++){
        node* temp = new node(input[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    curr->left = NULL;
    curr->right = NULL;

    return newRoot;
}
int main()
{   node* root = buildTree();
    node* llRoot = bst_LL(root);

    // Print linked list:
    cout << "BST as sorted linked list: ";
    while (llRoot) {
        cout << llRoot->data << "-->";
        llRoot = llRoot->right;
    }

    return 0;
}