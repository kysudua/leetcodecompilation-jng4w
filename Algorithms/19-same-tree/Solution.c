#include "../resources/main.h"

//Definition for a binary tree node.
struct TreeNode {
     int val;
     struct TreeNode *left;
   struct TreeNode *right;
 };


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    
    if(p!=NULL)
        if(q!=NULL)
             return isSameTree(p->left, q->left)&&
                 (p->val==q->val)&&
                 isSameTree(p->right, q->right);
        else return false;
    else
        if(q!=NULL) return false;
        else return true;
   
}