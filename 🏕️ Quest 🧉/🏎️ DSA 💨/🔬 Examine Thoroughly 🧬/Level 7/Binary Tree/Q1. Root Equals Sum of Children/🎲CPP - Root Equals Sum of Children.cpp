//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.1 Q1

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool checkTree(TreeNode *root) {
            // The tree has exactly three nodes.
            // Check if root->val is equal to left->val + right->val.
            return root->val == (root->left->val + root->right->val);
      }
};
