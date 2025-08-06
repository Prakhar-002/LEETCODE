//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 230

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int cnt;                                   // To track remaining k
      int res;                                   // To store result

      int kthSmallest(TreeNode* root, int k) {
            cnt = k;                             // Initialize counter
            res = root->val;                     // Default result

            dfs(root);                           // Start inorder traversal
            return res;                          // Return the result
      }

      void dfs(TreeNode* node) {
            if (!node) return;                   // Base case: null node

            dfs(node->left);                     // Traverse left subtree

            cnt--;                               // Visit current node
            if (cnt == 0) {                      // If it's the kth node
                  res = node->val;               // Store the result
                  return;
            }

            dfs(node->right);                    // Traverse right subtree
      }
};
