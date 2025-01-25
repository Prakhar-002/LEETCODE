//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 236

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. Of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

class Solution {
public:
      TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            // Start DFS from the root node
            return dfs(root, p, q);
      }

private:
      TreeNode* dfs(TreeNode* node, TreeNode* p, TreeNode* q) {
            // If the current node is null, return null
            if (node == nullptr) {
                  return nullptr;
            }

            // If the current node matches either p or q, return the current node
            if (node == p || node == q) {
                  return node;
            }

            // Recursively search the left and right subtrees
            TreeNode* left = dfs(node->left, p, q);
            TreeNode* right = dfs(node->right, p, q);

            // If both left and right are non-null, the current node is the LCA
            if (left != nullptr && right != nullptr) {
                  return node;
            }

            // Return the non-null child, or null if both are null
            return (left != nullptr) ? left : right;
      }
};
