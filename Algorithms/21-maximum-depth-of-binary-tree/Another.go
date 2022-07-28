/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func maxDepth(root *TreeNode) int {
    if root!=nil {
        var left int = maxDepth(root.Left);
        var right int = maxDepth(root.Right);
        if left > right {
            return left+1;
        } else {
            return right+1;
        }
    } else {
        return 0;
    }
}