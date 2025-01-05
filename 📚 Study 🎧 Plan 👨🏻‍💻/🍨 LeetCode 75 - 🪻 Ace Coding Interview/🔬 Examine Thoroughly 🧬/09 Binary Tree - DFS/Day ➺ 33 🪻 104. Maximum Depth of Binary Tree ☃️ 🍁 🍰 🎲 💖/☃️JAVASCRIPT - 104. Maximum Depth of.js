//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 104

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

var maxDepth = function(root) {
      // If the tree is empty, return 0 (no depth)
      if (root === null) {
            return 0;
      }

      // Recursively compute the depth of the left subtree
      var leftHeight = maxDepth(root.left);

      // Recursively compute the depth of the right subtree
      var rightHeight = maxDepth(root.right);

      // Find the maximum depth between the left and right subtrees
      var max = Math.max(leftHeight, rightHeight);

      // Return the maximum depth plus 1 for the current node
      return max + 1;
};
