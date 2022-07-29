/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

 func minDepth(root *TreeNode) int {
    if root==nil {
        return 0;
    } 
    var left int = minDepth(root.Left);
    var right int = minDepth(root.Right);
    if left==0 {
        return right+1;
    } else if right== 0 {
        return left+1;
    } else if left > right {
        return right+1;
    } else {
        return left+1;
    }
}