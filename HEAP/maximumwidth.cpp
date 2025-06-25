#include<iostream>
#include<vector>
#include<queue>  
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
    if (data == -1){
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree;
    root->right = buildTree();

    return root;

}
int main()
{
    
    return 0;
}