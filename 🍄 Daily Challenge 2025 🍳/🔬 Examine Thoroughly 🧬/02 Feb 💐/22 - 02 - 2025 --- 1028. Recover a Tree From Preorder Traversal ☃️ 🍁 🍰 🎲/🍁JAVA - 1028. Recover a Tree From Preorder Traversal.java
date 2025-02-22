//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1028

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public TreeNode recoverFromPreorder(String traversal) {
            Stack<TreeNode> stack = new Stack<>();
            int i = 0; // Pointer for traversal

            while (i < traversal.length()) {
                  int dashes = 0; // Depth level of the current node

                  // Count dashes to determine depth
                  while (i < traversal.length() && traversal.charAt(i) == '-') {
                        dashes++;
                        i++;
                  }

                  // Extract the numeric value of the node
                  int j = i;
                  while (j < traversal.length() && Character.isDigit(traversal.charAt(j))) {
                        j++;
                  }
                  int val = Integer.parseInt(traversal.substring(i, j));
                  TreeNode node = new TreeNode(val);
                  i = j; // Move pointer forward

                  // Pop stack to correct depth level
                  while (stack.size() > dashes) {
                        stack.pop();
                  }

                  // Attach node to its parent based on availability
                  if (!stack.isEmpty()) {
                        if (stack.peek().left == null) {
                              stack.peek().left = node;
                        } else {
                              stack.peek().right = node;
                        }
                  }

                  // Push current node to stack
                  stack.push(node);
            }

            return stack.firstElement(); // Root node is the first element in the stack
      }
}
