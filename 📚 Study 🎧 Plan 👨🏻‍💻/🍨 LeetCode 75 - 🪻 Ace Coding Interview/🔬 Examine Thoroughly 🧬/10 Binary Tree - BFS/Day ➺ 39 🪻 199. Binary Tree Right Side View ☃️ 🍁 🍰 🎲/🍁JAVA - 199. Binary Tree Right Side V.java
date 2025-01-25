//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 199

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)   ->  m = max width 

import java.util.*;

class Solution {
      public List<Integer> rightSideView(TreeNode root) {
            // List to store the right-side view
            List<Integer> rightSideArr = new ArrayList<>();

            // Queue for level-order traversal (BFS)
            Queue<TreeNode> q = new LinkedList<>();
            if (root != null) {
                  q.offer(root);
            }

            // Perform BFS
            while (!q.isEmpty()) {
                  TreeNode rightSide = null;

                  // Iterate over all nodes at the current level
                  int levelSize = q.size();
                  for (int i = 0; i < levelSize; i++) {
                        TreeNode node = q.poll();
                        if (node != null) {
                              // Update the rightmost node
                              rightSide = node;
                              // Add left and right children to the queue
                              if (node.left != null) {
                                    q.offer(node.left);
                              }
                              if (node.right != null) {
                                    q.offer(node.right);
                              }
                        }
                  }

                  // Append the rightmost node's value if it exists
                  if (rightSide != null) {
                        rightSideArr.add(rightSide.val);
                  }
            }

            // Return the right-side view
            return rightSideArr;
      }
}
