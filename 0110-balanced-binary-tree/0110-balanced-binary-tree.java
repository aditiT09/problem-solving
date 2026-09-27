/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isBalanced(TreeNode root) {
        return dfsH(root) != -1;
    }
    int dfsH(TreeNode root)
    {
        if(root==null)
        {
            return 0;
        }
        int leftH=dfsH(root.left);
        if(leftH==-1)
        {
            return -1;
        }
        int rightH=dfsH(root.right);
        if(rightH==-1)
        {
            return -1;
        }
        if(Math.abs(rightH-leftH)>1)
        return -1;
        return Math.max(leftH,rightH)+1;
    }
}