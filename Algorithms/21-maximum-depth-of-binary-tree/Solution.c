#include "../resources/main.h"


// Definition for a binary tree node.
 struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };



int maxDepth(struct TreeNode* root){
    if(root){
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return left>right?(left+1):(right+1);
    }
    else return 0;
}