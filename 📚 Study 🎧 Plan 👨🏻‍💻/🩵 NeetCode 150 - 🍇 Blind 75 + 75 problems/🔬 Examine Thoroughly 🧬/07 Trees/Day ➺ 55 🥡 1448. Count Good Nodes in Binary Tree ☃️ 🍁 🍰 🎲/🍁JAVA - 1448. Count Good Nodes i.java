//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1448

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

//* Recursive Way

class Solution {
      public int dfs(TreeNode node, int maxVal) {
            // Base case: if the node is null, return 0
            if (node == null) {
                  return 0;
            }

            // Count this node as "good" if its value is greater than or equal to maxVal
            int goodNode = (node.val >= maxVal) ? 1 : 0;

            // Update maxVal to the maximum value encountered so far
            maxVal = Math.max(maxVal, node.val);

            // Recursively count the good nodes in the left and right subtrees
            goodNode += dfs(node.left, maxVal);
            goodNode += dfs(node.right, maxVal);

            return goodNode;
      }

      public int goodNodes(TreeNode root) {
            // Start the DFS with the root value as the initial maxVal
            return dfs(root, root.val);
      }
}
