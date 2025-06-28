#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* buildTree() {
	int data;
	cin >> data;
	if (data == -1) return NULL;

	node* root = new node(data);
	// LST
	root->left = buildTree();
	// RST
	root->right = buildTree();

	return root;
}

void solve(node* root, int k, int d = 0){
    if (!root){
        return;
    }
    if (d == k){
        cout << root->data << " ";
        return;
    }
    solve(root->left,k,d+1);
    solve(root->right,k,d+1);
}
/*SOLVE() BASICALLY HAUMARE GIVEN NODE KE SAARE NEECHE VALE NODES KO PRINT KAR DERA HAI USING DFS*/

int distanceOfNode(node* root,int node,int k){
    if(!root){
        return -1;
    }
    if (root -> data == node){
        solve(root,k);              //HUM DESIRED LEVEL NODE PAR POHCH GAYE 
        return 0;
    }

    int d = distanceOfNode(root->left,node,k);
    if (d != -1 ){
        if (d + 1 == k){
            cout << root->data << " ";
            return -1;
        }
    int rd = k - d - 2;
    solve(root->right,rd);
    return d+1;  
    }

    d = distanceOfNode(root->right,node,k);
    if (d != -1 ){
        if (d + 1 == k){
            cout << root->data << " ";
            return -1;
        }
    int rd = k - d - 2;
    solve(root->left,rd);
    return d+1;  
    }

    return -1;
}

int main() {
    cout<<"Enter tree in preorder:-";
    node* root = buildTree();

    distanceOfNode(root, 10, 2);

    return 0;

}