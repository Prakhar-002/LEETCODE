//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 113

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

import java.util.ArrayList;
import java.util.List; 

class Solution {
      public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
            // Initialize the result list
            List<List<Integer>> res = new ArrayList<>();
            // Start the recursive search
            findPaths(root, targetSum, new ArrayList<>(), res);
            return res;
      }

      // Helper function to recursively find paths
      private void findPaths(TreeNode node, int targetSum, List<Integer> path, List<List<Integer>> res) {
            // Base case: if the node is null, return
            if (node == null) {
                  return;
            }

            // Add the current node's value to the target sum and path
            targetSum -= node.val;
            path.add(node.val);

            // If it's a leaf node and the target sum equals zero, add the path to the result
            if (node.left == null && node.right == null && targetSum == 0) {
                  res.add(new ArrayList<>(path));
            } else {
                  // Recursively call for left and right children
                  findPaths(node.left, targetSum, path, res);
                  findPaths(node.right, targetSum, path, res);
            }

            // Backtrack: remove the last element before returning
            path.remove(path.size() - 1);
      }
}
