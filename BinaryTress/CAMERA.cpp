#include<iostream>
#include<vector>
#include<queue>
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
#define cameraNahiLaga 0
#define cameraLagaHai 1
#define underVigilance 2
class Solution {
public:
    int cameraCount  = 0;
    int solve(node* root){
        if (!root)  return underVigilance;

        int left = solve(root->left);
        int right = solve(root->right);

        if (left == cameraLagaHai || right == cameraNahiLaga){
            cameraCount++;
            return cameraLagaHai;
        }
        else if(left == cameraLagaHai || right == cameraLagaHai){
            return underVigilance;
        }
        else{
            return cameraNahiLaga;
        }
    }
    int minCameraCover(node* root){
        int rootState = solve(root);
        if (rootState == cameraNahiLaga) cameraCount++;
        return cameraCount;
    }
   
};

int main()
{
    cout << "Enter tree in PreOrder (-1 for NULL): ";
    node* root = buildTree();

    Solution sol;
    int ans = sol.minCameraCover(root);
    cout << "Minimum number of cameras needed: " << ans << endl;



    return 0;
}