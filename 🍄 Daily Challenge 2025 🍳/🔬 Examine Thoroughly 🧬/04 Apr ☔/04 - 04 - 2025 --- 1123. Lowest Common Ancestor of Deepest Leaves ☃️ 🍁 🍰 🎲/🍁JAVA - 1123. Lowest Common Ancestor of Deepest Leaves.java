//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1123

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      // Main function to find LCA of deepest leaves
      public TreeNode lcaDeepestLeaves(TreeNode root) {
            // Perform DFS starting from root, only return the node from Pair
            return dfs(root, 0).node;
      }

      // Helper class to store both node and depth
      class Pair {
            TreeNode node; // Potential LCA node
            int depth; // Depth of the deepest leaf in this subtree

            Pair(TreeNode node, int depth) {
                  this.node = node;
                  this.depth = depth;
            }
      }

      // Recursive DFS function
      private Pair dfs(TreeNode node, int depth) {
            // If node is null, return null and next depth level
            if (node == null) {
                  return new Pair(null, depth + 1);
            }

            // Recur on left and right children
            Pair left = dfs(node.left, depth + 1);
            Pair right = dfs(node.right, depth + 1);

            // If left subtree is deeper, return left's result
            if (left.depth > right.depth)
                  return left;

            // If right subtree is deeper, return right's result
            if (left.depth < right.depth)
                  return right;

            // If both are equal, current node is the LCA
            return new Pair(node, left.depth);
      }
}
