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

    void inorder(TreeNode* root, vector<int>& in) {
        if (!root) return;

        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }

    pair<int,int> find_xy(vector<int>& in) {
        int x = -1, y = -1;
        bool flag = false;

        for (int i = 0; i < in.size() - 1; i++) {
            if (in[i] > in[i + 1]) {
                y = in[i + 1];
                if (!flag) {
                    x = in[i];
                    flag = true;
                } else {
                    break;
                }
            }
        }
        return {x, y};
    }

    void recover(TreeNode* root, int& count, int x, int y) {
        if (!root) return;

        if (root->val == x || root->val == y) {
            root->val = (root->val == x) ? y : x;
            if (--count == 0) return;
        }

        recover(root->left, count, x, y);
        recover(root->right, count, x, y);
    }

    void recoverTree(TreeNode* root) {
        vector<int> in;

        inorder(root, in);                

        pair<int,int> p = find_xy(in);   

        int count = 2;
        recover(root, count, p.first, p.second);
    }
};