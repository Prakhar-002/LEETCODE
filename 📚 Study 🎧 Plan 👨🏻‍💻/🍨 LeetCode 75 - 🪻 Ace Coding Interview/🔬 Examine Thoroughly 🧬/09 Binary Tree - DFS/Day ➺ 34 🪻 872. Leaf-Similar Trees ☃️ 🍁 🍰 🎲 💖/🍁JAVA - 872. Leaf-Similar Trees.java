//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 872

//? ⌚ Time complexity ➺ O(n1 + n2) 👉🏻  n1, n2 = No. of nodes in roo1 and root2

//? 🧺 Space complexity ➺ O(h + l)  👉🏻  h = height of tree , l = No. of leaf nodes

import java.util.*;

class Solution {
      // Extracts leaf values from a binary tree
      public List<Integer> getLeafValues(TreeNode root) {
            List<Integer> leafs = new ArrayList<>(); // Stores leaf values
            Stack<TreeNode> stack = new Stack<>();   // Stack for traversal
            stack.push(root); // Initialize stack with root

            while (!stack.isEmpty()) {
                  TreeNode node = stack.pop(); // Process top node
                  if (node != null) {
                        if (node.left == null && node.right == null) {
                              leafs.add(node.val); // Add leaf value
                        }
                        stack.push(node.right); // Push right child
                        stack.push(node.left);  // Push left child
                  }
            }
            return leafs;
      }

      // Compares leaf sequences of two trees
      public boolean leafSimilar(TreeNode root1, TreeNode root2) {
            List<Integer> leafs1 = getLeafValues(root1); // Leaf values of tree 1
            List<Integer> leafs2 = getLeafValues(root2); // Leaf values of tree 2
            return leafs1.equals(leafs2); // Compare leaf sequences
      }
}
