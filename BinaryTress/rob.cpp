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
    int data ;
    cin>> data;

    if(data == -1){
        return NULL;
    }
    node* root = new node(data);
    root -> left = buildTree();
    root -> right = buildTree();

    return root;
}

class Pair {
    public:
        int choriKari, choriNahiKari;
};

class solution {
    public:
        Pair solve(node* root){
            if (!root) return {0,0};

            Pair left = solve(root->left);
            Pair right = solve(root->right); 

            Pair p;
            p.choriKari = root->data + left.choriNahiKari + right.choriNahiKari;
            p.choriNahiKari = max(left.choriKari,left.choriNahiKari) + max (right.choriKari,right.choriNahiKari);

            return p;
        }
        int rob (node* root){
            Pair  ans = solve(root);
            return max(ans.choriKari,ans.choriNahiKari);
        }
};

int main(){

    cout<<"Enter tree in PreOrder:-";
    node* root = buildTree();

}