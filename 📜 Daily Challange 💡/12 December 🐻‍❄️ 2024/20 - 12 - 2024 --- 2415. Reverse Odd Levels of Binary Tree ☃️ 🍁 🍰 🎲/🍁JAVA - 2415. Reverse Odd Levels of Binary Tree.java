//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2415

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of node

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public TreeNode reverseOddLevels(TreeNode root) {
            // Initialize a queue with the root node for level order traversal
            Queue<TreeNode> queue = new LinkedList<>();
            queue.add(root);

            // Flag to track whether the current level is odd (false for even, true for odd)
            boolean isOddLevel = false;

            while (!queue.isEmpty()) {
                  // Get the size of the current level
                  int size = queue.size();

                  // If the current level is odd, reverse the node values at this level
                  if (isOddLevel) {
                        TreeNode[] nodes = new TreeNode[size];
                        for (int i = 0; i < size; i++) {
                              nodes[i] = queue.poll();
                              queue.add(nodes[i]);
                        }
                        // Swap values in the array of nodes
                        int left = 0, right = size - 1;
                        while (left < right) {
                              int temp = nodes[left].val;
                              nodes[left].val = nodes[right].val;
                              nodes[right].val = temp;
                              left++;
                              right--;
                        }
                  }

                  // Traverse the current level and add child nodes to the queue
                  for (int i = 0; i < size; i++) {
                        TreeNode node = queue.poll();
                        if (node.left != null) queue.add(node.left);
                        if (node.right != null) queue.add(node.right);
                  }

                  // Toggle the level flag to switch between even and odd levels
                  isOddLevel = !isOddLevel;
            }

            // Return the modified root node
            return root;
      }
}
