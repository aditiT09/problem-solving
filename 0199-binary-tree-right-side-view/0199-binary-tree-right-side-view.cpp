class Solution {
public:
    vector<int> BFS(TreeNode* root) {
        vector<int> ans;

        if (root == NULL) {
            return ans;
        }

        queue<TreeNode*> Q;
        Q.push(root);

        while (!Q.empty()) {
            int level_size = Q.size();

            for (int i = 0; i < level_size; i++) {
                TreeNode* node = Q.front();
                Q.pop();
                if (i == level_size - 1) {
                    ans.push_back(node->val);
                }
                  if (node->left != NULL)
                    Q.push(node->left);
                if (node->right != NULL)
                    Q.push(node->right);
            }
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        return BFS(root);
    }
};