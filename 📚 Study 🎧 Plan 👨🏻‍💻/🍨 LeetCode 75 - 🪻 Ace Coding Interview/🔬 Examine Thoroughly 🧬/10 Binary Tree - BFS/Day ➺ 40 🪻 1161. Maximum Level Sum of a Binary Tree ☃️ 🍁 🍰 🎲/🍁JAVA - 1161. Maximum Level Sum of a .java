//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1161

//? ⌚ Time complexity ➺ O(n)   👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)  👉🏻  m = max width 

import java.util.*;

class Solution {
      public int maxLevelSum(TreeNode root) {
            int minLevel = 0;     // Variable to store the level with maximum sum
            int maxSum = Integer.MIN_VALUE; // Initialize max sum to negative infinity
            int curLevel = 0;     // Current level counter

            Queue<TreeNode> q = new LinkedList<>();
            q.offer(root);

            while (!q.isEmpty()) {
                  int curSum = 0; // Sum of the current level
                  int levelSize = q.size();

                  for (int i = 0; i < levelSize; i++) {
                        TreeNode node = q.poll();
                        curSum += node.val;

                        // Add left and right children to the queue
                        if (node.left != null) {
                              q.offer(node.left);
                        }

                        if (node.right != null) {
                              q.offer(node.right);
                        }
                  }

                  curLevel++; // Increment the current level

                  // Update the level with the maximum sum
                  if (maxSum < curSum) {
                        maxSum = curSum;
                        minLevel = curLevel;
                  }
            }

            return minLevel;
      }
}
