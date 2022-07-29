/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

 func hasPathNumUtils(root *TreeNode, targetSum int) bool {
    if root==nil {
        if targetSum!=0 {
            return false;
        } else {
            return true;
        }
    }
    var left bool = hasPathNumUtils(root.Left, targetSum-root.Val);
    var right bool = hasPathNumUtils(root.Right, targetSum-root.Val);
    if root.Left==nil {
        return right;
    } else if root.Right==nil {
        return left;
    } else {
        return right||left;
    }
}

func hasPathSum(root *TreeNode, targetSum int) bool {
    if root==nil {
        return false;
    } else {
        return hasPathNumUtils(root, targetSum);
    }
}