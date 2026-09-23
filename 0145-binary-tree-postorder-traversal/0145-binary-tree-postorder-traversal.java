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

//     public List<Integer> ans= new LinkedList<>();
//     List<Integer> postorderTraversal(TreeNode root) {
//         if(root==null)
//         {
//             return ans;
//         }
//     postorderTraversal(root.left);
//     postorderTraversal(root.right);
//     ans.add(root.val);
//     return ans;
//     }

class Solution {
public void postorder(TreeNode root, List<Integer> ans){
    if(root==null)
    {
        return ;
    }
    postorder(root.left,ans);
    postorder(root.right,ans);
    ans.add(root.val);
}
List<Integer> postorderTraversal(TreeNode root){
    List<Integer> ans= new LinkedList<>();
    postorder(root, ans);
    return ans;
}
};
