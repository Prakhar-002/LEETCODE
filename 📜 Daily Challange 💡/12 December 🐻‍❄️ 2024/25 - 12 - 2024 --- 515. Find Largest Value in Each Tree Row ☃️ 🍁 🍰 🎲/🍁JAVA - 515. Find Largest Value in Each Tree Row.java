//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 515

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)  ->   w <= n

import java.util.*;

class Solution {
      public List<Integer> largestValues(TreeNode root) {
            // If the tree is empty, return an empty list
            if (root == null) {
                  return new ArrayList<>();
            }

            // Initialize a queue with the root node
            Queue<TreeNode> queue = new LinkedList<>();
            queue.add(root);

            // Initialize the result list to store the largest values in each row
            List<Integer> levelMaxes = new ArrayList<>();

            // Perform level-order traversal
            while (!queue.isEmpty()) {
                  // Initialize the maximum value for the current level
                  int curMax = Integer.MIN_VALUE;

                  // Traverse all nodes in the current level
                  int levelSize = queue.size();
                  for (int i = 0; i < levelSize; i++) {
                        TreeNode node = queue.poll();

                        // Update the maximum value for the current level
                        curMax = Math.max(curMax, node.val);

                        // Add the left child to the queue if it exists
                        if (node.left != null) {
                              queue.add(node.left);
                        }

                        // Add the right child to the queue if it exists
                        if (node.right != null) {
                              queue.add(node.right);
                        }
                  }

                  // Append the largest value of the current level to the result list
                  levelMaxes.add(curMax);
            }

            // Return the result list containing the largest values in each row
            return levelMaxes;
      }
}
