//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1399

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
      long totalSum = 0; // Total sum of all nodes in the tree
      long maxProduct = 0; // Tracks maximum product found so far
      long M = 1_000_000_007;

      // ---------- DFS: returns subtree sum rooted at node ----------
      private long dfs(TreeNode node) {
            // Base case: null node contributes 0 to sum
            if (node == null)
                  return 0;

            // Subtree sum = current node + left subtree + right subtree
            long subSum = node.val + dfs(node.left) + dfs(node.right);

            // Product of this split = subSum * remaining sum on other side
            maxProduct = Math.max(maxProduct, subSum * (totalSum - subSum));

            return subSum;
      }

      public int maxProduct(TreeNode root) {
            // First pass: compute total sum of entire tree
            totalSum = dfs(root);

            // Second pass: try every possible edge cut and track max product
            dfs(root);

            return (int) (maxProduct % M);
      }
}