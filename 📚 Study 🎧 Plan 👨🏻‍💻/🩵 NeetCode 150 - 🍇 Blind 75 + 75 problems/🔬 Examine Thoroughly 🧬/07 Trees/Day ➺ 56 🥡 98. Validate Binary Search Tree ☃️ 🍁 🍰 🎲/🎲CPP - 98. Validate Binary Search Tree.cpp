//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 98

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      bool isValidBST(TreeNode *root) {
            // Call helper function with long min and max to prevent overflow
            return isValid(root, LONG_MIN, LONG_MAX);
      }

private:
      // Helper function to validate BST with constraints
      bool isValid(TreeNode *node, long left, long right) {
            // Null node is always valid
            if (!node)
                  return true;

            // Node value must be strictly between left and right
            if (node->val <= left || node->val >= right)
                  return false;

            // Recurse into left and right children with updated boundaries
            return isValid(node->left, left, node->val) &&
                  isValid(node->right, node->val, right);
      }
};
