//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1399

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

#include <algorithm>
using namespace std;

class Solution {
public:
      long long totalSum   = 0;    // Total sum of all nodes in the tree
      long long maxPro = 0;    // Tracks maximum product found so far
      long long M = 1'000'000'007;

      // ---------- DFS: returns subtree sum rooted at node ----------
      long long dfs(TreeNode* node) {
            // Base case: null node contributes 0 to sum
            if (!node)
                  return 0;

            // Subtree sum = current node + left subtree + right subtree
            long long subSum = node->val + dfs(node->left) + dfs(node->right);

            // Product of this split = subSum * remaining sum on other side
            maxPro = max(maxPro, subSum * (totalSum - subSum));

            return subSum;
      }

      int maxProduct(TreeNode* root) {
            // First pass: compute total sum of entire tree
            totalSum = dfs(root);

            // Second pass: try every possible edge cut and track max product
            dfs(root);

            return (int) (maxPro % M);
      }
};