//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 124

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(h)

class Solution {
      public int maxPathSum(TreeNode root) {
            // Store the maximum path sum in a result array to allow mutation inside inner
            // method
            int[] res = new int[] { root.val };

            // Helper function for DFS traversal
            dfs(root, res);

            return res[0]; // Return the maximum path sum
      }

      private int dfs(TreeNode node, int[] res) {
            // Base case: if node is null, return 0
            if (node == null) {
                  return 0;
            }

            // Recursively calculate max path sum from left and right subtree
            int leftMax = Math.max(dfs(node.left, res), 0); // Ignore negative values
            int rightMax = Math.max(dfs(node.right, res), 0); // Ignore negative values

            // Update global result if needed
            res[0] = Math.max(res[0], node.val + leftMax + rightMax);

            // Return the maximum path sum from this node to parent
            return node.val + Math.max(leftMax, rightMax);
      }
}
