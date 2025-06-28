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


int main()
{   
    cout<<"ENter tree in preorder:-";
    node* root = buildTree();
    
    return 0;
}