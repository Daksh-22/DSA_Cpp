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

node* insertion(node* root, int data){
    if(!root){
        return new node(data);
    }
    if (root->data > data){
        root->left = insertion(root->left,data);
    }
    if (root->data < data){
        root->right = insertion(root->right,data);
    }
    return root;
}

node* buildBST(){
    node* root = NULL;
    int data;
    cout<<"Enter data for BST:- ";
    while(cin>>data && data!= -1){
        root = insertion(root,data);
    }
    return root;
}

void inOrder(node* root,vector<int> ip){
    if(!root){
        return;
    }
    inOrder(root->left,ip);
    ip.push_back(root->data);
    inOrder(root->right,ip);
} 

vector<int> mergedArray(vector<int> a,vector<int> b){
    int n = a.size() + b.size();

    vector<int> mergedArr(n);

    int i = 0; int j = 0; int k = 0;

    while(i < a.size() && j < b.size()){
        if (a[i] >= b[j]){
            mergedArr[k++] = b[j];
        }
        else{
            mergedArr[k++] = a[i];
        }
    }
    while(i < a.size()){
          mergedArr[k++] = a[i];
    }
    while(j < b.size()){
          mergedArr[k++] = b[j];
    }

    return mergedArr;
}

node* inOrder_BST(int s,int e,vector<int> ip){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    node* BSTroot = new node(mid);
    BSTroot->left = inOrder_BST(s,mid-1,ip);
    BSTroot->right = inOrder_BST(mid+1,e,ip);

    return BSTroot;
}

node* mergedTrees(node* root1, node* root2){
    vector<int> BST1;
    vector<int> BST2;

    inOrder(root1,BST1);
    inOrder(root2,BST2);

    vector<int> merge = mergedArray(BST1,BST2);

    inOrder_BST(0,merge.size()-1,merge); 

}

int main()
{
    
    return 0;
}