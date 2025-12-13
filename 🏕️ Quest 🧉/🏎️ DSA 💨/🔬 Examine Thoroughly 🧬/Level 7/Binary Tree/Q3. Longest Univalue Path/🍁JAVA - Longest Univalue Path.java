//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
      private int ans = 0; // Global maximum univalue path length

      public int longestUnivaluePath(TreeNode root) {
            /**
             * Find longest univalue path: all nodes have same value.
             * Path can be left→root→right (not just root-to-leaf).
             */
            dfs(root, -1); // Start DFS with dummy parent value
            return ans;
      }

      private int dfs(TreeNode node, int parentVal) {
            /**
             * Post-order DFS: returns longest univalue path DOWNWARD from node.
             * Updates global 'ans' with max path through current node.
             */
            if (node == null) {
                  return 0; // Base case: empty subtree
            }

            // Recurse on children
            int left = dfs(node.left, node.val); // Left univalue path
            int right = dfs(node.right, node.val); // Right univalue path

            // Update global max: path through current node
            ans = Math.max(ans, left + right);

            // Return longest downward path from THIS node
            if (node.val == parentVal) {
                  return Math.max(left, right) + 1; // Extend longer child
            }
            return 0; // Cannot extend upward (value mismatch)
      }
}
