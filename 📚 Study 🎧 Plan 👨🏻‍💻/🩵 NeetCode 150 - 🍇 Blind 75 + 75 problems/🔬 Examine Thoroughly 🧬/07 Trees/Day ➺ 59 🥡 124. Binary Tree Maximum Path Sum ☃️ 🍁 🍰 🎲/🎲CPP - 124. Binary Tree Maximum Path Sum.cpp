//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 124

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(h)

class Solution {
public:
      int maxPathSum(TreeNode* root) {
            // Initialize the result with root's value
            int res = root->val;

            // Start DFS traversal
            dfs(root, res);

            return res;   // Return the maximum path sum found
      }

private:
      int dfs(TreeNode* node, int& res) {
            // Base case: null node contributes 0
            if (!node) return 0;

            // Recursively find max path sum from left and right children
            int leftMax = max(0, dfs(node->left, res));
            int rightMax = max(0, dfs(node->right, res));

            // Update result considering the current node as root of path
            res = max(res, node->val + leftMax + rightMax);

            // Return the max single side path sum to parent
            return node->val + max(leftMax, rightMax);
      }
};
