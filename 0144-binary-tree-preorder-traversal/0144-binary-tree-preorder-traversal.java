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
//     public List<Integer> ans= new LinkedList<>();
//     List<Integer> preorderTraversal(TreeNode root) {
//         if (root==null)
//         {
//             return ans;
//         }
//     ans.add(root.val);
//     preorderTraversal(root.left);
//     preorderTraversal(root.right);
//     return ans;      
//     }
public void preorder(TreeNode root, List<Integer> ans)
{
    if(root==null)
    {
        return;
    }
    ans.add(root.val);
    preorder(root.left,ans);
    preorder(root.right,ans);
}
List<Integer> preorderTraversal(TreeNode root)
{
    List<Integer> ans= new LinkedList<>();
    preorder(root,ans);
    return ans;
}
};