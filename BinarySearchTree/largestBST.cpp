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

class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};
node* insertion (node* root,int data){
    if (!root){
        return new node(data);
    }

    if(data <= root->data){
    root->left = insertion(root->left,data);
    }
    if (root->data < data){
        root->right = insertion(root->right,data);
    }
    return root;
}

node* buildTree(){
    node* root = NULL;
    int data;
    cout<<"Enter the values for BST-";
    while(cin>>data && data!=-1){
        root = insertion(root,data);
    }
    return root;
}

void inOrder(node* root,vector<int>& ip ){
    if(!root){
        return;
    }
    inOrder(root->left,ip);
    ip.push_back(root->data);
    inOrder(root->right,ip);
}

info solve (node* root, int &ans){
    if(!root){
        return {INT_MAX, INT_MIN, true, 0};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info currNode;
    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data, right.maxi);
    currNode.mini = min(root->data, left.mini);

    if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)) {
        currNode.isBST = true;
        ans = max(ans, currNode.size);
    } else {
        currNode.isBST = false;
    }

    return currNode;
}


int largestBST(node* root){
    int maxx;
    info temp = solve(root,maxx);
    return maxx;
}

int main() {
    node* root = buildTree();
    cout << "Size of Largest BST: " << largestBST(root) << endl;
    return 0;
}
