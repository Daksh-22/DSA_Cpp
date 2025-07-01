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

node* inOrder_to_BST(vector<int> ip, int s,int e){
    if (s>e){
        return NULL;
    }
    int mid = (s+e)/2;

    node* root = new node(ip[mid]);
    root->left = inOrder_to_BST(ip,s,mid-1);
    root->right = inOrder_to_BST(ip,mid+1,e);

    return root;
}

node* balancedBST(node* root){
    vector<int> input;
    inOrder(root,input);

    int n = input.size();

    return inOrder_to_BST(input,0,n-1);
}

void printLL(node* root){
    if(!root){
        return;
    }
    printLL(root->left);
    cout<<root->data<<" ";
    printLL(root->right);
}
int main()
{
     node* root = buildTree();

    cout << "\nOriginal BST (Inorder): ";
    printLL(root);

    node* balanced = balancedBST(root);
    cout << "\nBalanced BST (Inorder): ";
    printLL(balanced);
    
    return 0;
}