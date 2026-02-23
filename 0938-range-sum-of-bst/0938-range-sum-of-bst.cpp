class Solution {
public:

    int inorder(TreeNode* root, int L, int R) {
        if (!root) 
            return 0;

        int sum = 0;

        sum += inorder(root->left, L, R);

        if (root->val >= L && root->val <= R)
            sum += root->val;

        sum += inorder(root->right, L, R);

        return sum;
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        return inorder(root, low, high);
    }
};