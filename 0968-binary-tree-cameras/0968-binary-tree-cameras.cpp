class Solution {
private:
    int dfs(TreeNode* root, int& cameras) {
        if (root == nullptr) {
            return 2; // Null nodes are considered covered
        }
        
        int left = dfs(root->left, cameras);
        int right = dfs(root->right, cameras);
        
        // 1. If any child is uncovered, parent must have a camera
        if (left == 0 || right == 0) {
            cameras++;
            return 1;
        }
        
        // 2. If any child has a camera, parent is covered
        if (left == 1 || right == 1) {
            return 2;
        }
        
        // 3. Children are covered but don't have cameras; parent is uncovered
        return 0;
    }

public:
    int minCameraCover(TreeNode* root) {
        int cameras = 0;
        // If the root node remains uncovered, it needs its own camera
        if (dfs(root, cameras) == 0) {
            cameras++;
        }
        return cameras;
    }
};
