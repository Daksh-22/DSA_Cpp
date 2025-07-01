#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = right = NULL;
    }
};

//Creation and Insertion of humara BST
node* insertion(node* root, int data) {
    if (!root) {
        return new node(data);
    }
    if (data <= root->data) {
        root->left = insertion(root->left, data);
    } else {
        root->right = insertion(root->right, data);
    }
    return root;
}

//Jo values aayi unka tree bnaya jaara hai
node* buildBST() {
    node* root = NULL;
    int data;
    cout << "Enter values for BST:- ";
    while (cin >> data && data != -1) {
        root = insertion(root, data);
    }
    return root;
}

int maxTree(node* root){
    if (!root)  return INT_MIN;

    int left = maxTree(root->left);
    int right = maxTree(root->right);

    return max(root->data, max(left,right));
}

int minTree(node* root){
    if (!root){
        return INT_MAX;
    }
    int left = minTree(root->left);
    int right = minTree(root->right);

    return min(root->data, min(left,right));
}
//TIME COMPLEXITY = O(N^2)
bool isBST(node* root){
    if (!root){
        return true;
    }
    int leftMax = maxTree(root->left);
    int rightMin = minTree(root->right);

    if (root->data >= leftMax and root->data <=rightMin and isBST(root->right) and isBST(root->left) ){
        return true;
    }
    else{
        return false;
    }
}
//TIME COMPLEXITY = O(N) 
bool checkBST(node* root, int min = INT_MIN, int max = INT_MAX){
    if(!root){
        return true;
    }
    int x = root->data;
    if (x<=min or x>=max) return false;

    return checkBST(root->left,min,x) and checkBST(root->right,x,max);
}

int main(){


    return 0;
}