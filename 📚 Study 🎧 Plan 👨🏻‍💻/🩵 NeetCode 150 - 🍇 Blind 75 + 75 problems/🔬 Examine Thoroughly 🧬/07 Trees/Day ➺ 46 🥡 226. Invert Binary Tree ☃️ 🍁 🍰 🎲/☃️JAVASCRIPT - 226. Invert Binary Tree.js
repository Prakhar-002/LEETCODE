//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 226

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var invertTree = function (root) {
      // Base case: if the current node is null, return null
      if (root === null) {
            return null;
      }

      // Swap left and right children of the node
      let temp = root.left;
      root.left = root.right;
      root.right = temp;

      // Recursively invert the left subtree
      invertTree(root.left);

      // Recursively invert the right subtree
      invertTree(root.right);

      // Return the root node after inversion
      return root;
};
