#include <stddef.h>;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int * lSize=calloc(1, sizeof(int));
    int * rSize=calloc(1, sizeof(int));
    int * lArr;
    int * rArr;
    if(root){
        lArr=inorderTraversal(root->left, lSize);
        rArr=inorderTraversal(root->right, rSize);
        
        *returnSize=*lSize+*rSize+1;
        int* arr = calloc(*returnSize, sizeof(int));
        
        for (int i = 0; i < *lSize; i++)
            arr[i]=lArr[i];
        arr[*lSize]=root->val;
        for (int i = 0; i < *rSize; i++)
            arr[i+*lSize+1]=rArr[i];

        free(lArr);
        free(rArr);
        free(lSize);
        free(rSize);
        
        return arr;
    } 
    
    free(lSize);
    free(rSize);
    *returnSize=0;
    return NULL;
    
    
}