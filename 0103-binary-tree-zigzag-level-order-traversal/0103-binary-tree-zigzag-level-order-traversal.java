class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {

        List<List<Integer>> ans = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();

        if (root == null) {
            return ans;
        }

        q.offer(root);
        int flag = 0;

        while (!q.isEmpty()) {

            int n = q.size();
            List<Integer> level = new ArrayList<>();

            for (int i = 0; i < n; i++) {

                TreeNode node = q.poll();

                level.add(node.val);

                if (node.left != null) {
                    q.offer(node.left);
                }

                if (node.right != null) {
                    q.offer(node.right);
                }
            }

            if (flag == 1) {
                Collections.reverse(level);
            }

            ans.add(level);

            flag = 1 - flag;
        }

        return ans;
    }
}