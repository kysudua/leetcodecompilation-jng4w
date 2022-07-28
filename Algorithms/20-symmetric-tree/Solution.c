#include "../resources/main.h"


 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 

bool isMirrorTree(struct TreeNode* p, struct TreeNode* q){
    
    if(p!=NULL)
        if(q!=NULL)
             return isMirrorTree(p->left, q->right)&&
                 (p->val==q->val)&&
                 isMirrorTree(p->right, q->left);
        else return false;
    else
        if(q!=NULL) return false;
        else return true;
   
}

bool isSymmetric(struct TreeNode* root){
    return isMirrorTree(root->left, root->right);
}