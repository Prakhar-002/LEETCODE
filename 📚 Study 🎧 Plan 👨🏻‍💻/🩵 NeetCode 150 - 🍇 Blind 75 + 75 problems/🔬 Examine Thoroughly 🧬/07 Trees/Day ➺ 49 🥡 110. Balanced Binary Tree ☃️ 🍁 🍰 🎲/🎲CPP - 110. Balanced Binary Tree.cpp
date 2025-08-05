//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 110

//? ⌚ Time complexity -> O(n) 👉 Number of nodes

//? 🧺 Space complexity -> O(1)

class Solution {
public:
      // Main function to check if tree is height-balanced
      bool isBalanced(TreeNode* root) {
            // Call the helper function and return the balanced status only (first element of pair)
            return checkBalance(root).first;
      }

private:
      // Helper function returns a pair: {isBalanced, height}
      pair<bool, int> checkBalance(TreeNode* root) {
            // Base case: if node is null, it's balanced with height 0
            if (root == nullptr) {
                  return {true, 0};
            }

            // Recursively check balance of left and right subtrees
            pair<bool, int> left = checkBalance(root->left);
            pair<bool, int> right = checkBalance(root->right);

            // Check if both subtrees are balanced and height difference is not more than 1
            bool balanced = left.first && right.first && abs(left.second - right.second) <= 1;

            // Height of current node = 1 + max height of left or right subtree
            int height = 1 + max(left.second, right.second);

            // Return whether this subtree is balanced and its height
            return {balanced, height};
      }
};
