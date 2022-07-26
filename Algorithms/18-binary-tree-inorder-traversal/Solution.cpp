#include "../resources/main.h"

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> subtree;
        if (root)
        {
            vector<int> left = inorderTraversal(root->left);
            vector<int> right = inorderTraversal(root->right);
            subtree.insert(subtree.end(), left.begin(), left.end());
            subtree.push_back(root->val);
            subtree.insert(subtree.end(), right.begin(), right.end());
        }
        return subtree;
    }
};
