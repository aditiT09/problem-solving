/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxi=INT_MIN;
    int maxpath(TreeNode* root){
        
        if(root==NULL)
        {
            return 0;
        }
        int l=max(0,maxpath(root->left));
        int r=max(0,maxpath(root->right));
        maxi=max(maxi, root->val + l + r);
        return (root->val)+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        maxpath(root);
        return maxi;
    }
};