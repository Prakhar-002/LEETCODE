//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1123

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      // Main function to find the Lowest Common Ancestor of deepest leaves
      TreeNode* lcaDeepestLeaves(TreeNode* root) {
            // Call DFS and return the node part of the result
            return dfs(root, 0).first;
      }

private:
      // Helper function that returns pair of LCA node and depth
      pair<TreeNode*, int> dfs(TreeNode* node, int depth) {
            // Base case: if node is null, return null and increment depth
            if (!node) {
                  return {nullptr, depth + 1};
            }

            // Recursive DFS on left and right subtrees
            pair<TreeNode*, int> left = dfs(node->left, depth + 1);
            pair<TreeNode*, int> right = dfs(node->right, depth + 1);

            // If left subtree is deeper, return left's result
            if (left.second > right.second) return left;

            // If right subtree is deeper, return right's result
            if (left.second < right.second) return right;

            // If both have equal depth, current node is LCA
            return {node, left.second};
      }
};
