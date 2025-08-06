//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 98

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var isValidBST = function (root) {
      // Start the recursion with min and max bounds
      return isValid(root, -Infinity, Infinity);

      function isValid(node, left, right) {
            // Null node is valid
            if (!node) return true;

            // If node's value is not within valid range, return false
            if (node.val <= left || node.val >= right) return false;

            // Recursively validate left and right subtrees with updated bounds
            return isValid(node.left, left, node.val) &&
                  isValid(node.right, node.val, right);
      }
};
