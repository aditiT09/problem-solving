/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL)
            return root;

        queue<Node*> Q;
        Q.push(root);

        while (!Q.empty()) {
            int level_size = Q.size();

            for (int i = 0; i < level_size; i++) {
                Node* curr = Q.front();
                Q.pop();

                // Connect next pointer
                if (i == level_size - 1) {
                    curr->next = NULL;
                } else {
                    curr->next = Q.front();
                }

                // Push children
                if (curr->left != NULL)
                    Q.push(curr->left);

                if (curr->right != NULL)
                    Q.push(curr->right);
            }
        }

        return root;
    }
};