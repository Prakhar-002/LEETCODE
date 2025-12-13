//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.1 Q1

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

var checkTree = function (root) {
      // Tree is guaranteed to have root, root.left, and root.right.
      // Return true if root.val equals the sum of its two children.
      return root.val === (root.left.val + root.right.val);
};