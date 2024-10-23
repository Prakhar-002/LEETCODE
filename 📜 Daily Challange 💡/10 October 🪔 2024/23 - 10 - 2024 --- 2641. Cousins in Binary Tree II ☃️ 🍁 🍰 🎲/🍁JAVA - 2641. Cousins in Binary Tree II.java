//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2641

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Number of Nodes

//? 🧺 Space complexity ➺ O(h) -> h = Height of Tree

import java.util.*;

class Solution {
      public TreeNode replaceValueInTree(TreeNode root) {
            // List to store the sum of values at each level of the tree
            List<Integer> levelSum = new ArrayList<>();

            // Queue for level-order traversal
            Queue<TreeNode> q = new LinkedList<>();

            // Add root to the queue
            q.offer(root);

            // First traversal: Calculate the sum of nodes at each level
            while (!q.isEmpty()) {
                  int curSum = 0; // Sum of values at current level
                  int size = q.size(); // Number of nodes at current level

                  for (int i = 0; i < size; i++) {
                        TreeNode node = q.poll(); // Remove and get the first node in the queue
                        curSum += node.val; // Add node's value to current sum

                        // Add children to queue if they exist
                        if (node.left != null)
                              q.offer(node.left);

                        if (node.right != null)
                              q.offer(node.right);
                  }

                  levelSum.add(curSum); // Add sum of current level to list
            }

            // Second traversal: Replace node values
            q.offer(root); // Add root back to queue for second traversal
            int level = 0; // Track current level

            while (!q.isEmpty()) {
                  // Number of nodes at current level
                  int size = q.size(); 

                  for (int i = 0; i < size; i++) {
                        // Remove and get the first node in the queue
                        TreeNode node = q.poll(); 

                        // Calculate the sum of values of its child nodes
                        int siblingSum = (node.left != null ? node.left.val : 0) +
                                    (node.right != null ? node.right.val : 0);

                        // Replace left child's value and add to queue
                        if (node.left != null) {
                              node.left.val = levelSum.get(level + 1) - siblingSum;
                              q.offer(node.left);
                        }

                        // Replace right child's value and add to queue
                        if (node.right != null) {
                              node.right.val = levelSum.get(level + 1) - siblingSum;
                              q.offer(node.right);
                        }
                  }

                  level++; // Move to next level
            }

            root.val = 0; // Set root's value to 0
            return root; // Return the modified tree
      }
}
