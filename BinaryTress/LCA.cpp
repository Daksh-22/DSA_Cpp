#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class node {
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
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

node* LCA(node* root,int a,int b){
    if(!root){
        return NULL;
    }

   if (root->data == a || root->data == b){
    return root;
   }
   node* leftKaAdrr = LCA(root->left,a,b);
   node* rightKaAddr = LCA(root->right,a,b);

   if (leftKaAdrr && rightKaAddr) return root;
   else if (leftKaAdrr) return leftKaAdrr;
    return rightKaAddr; 

}

int main()
{   cout << "Enter order in Pre-Order-";
    node* root = buildTree();
    node* ans = LCA(root,3,13);
    if (ans){
        cout << "Exists at-" << ans->data << " "; 
    }
    else{
        cout<<"No LCA!!"<<endl;
    }

    
    return 0;
}