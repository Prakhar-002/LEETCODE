//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 236

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. Of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

#include <stdio.h>
#include <stdlib.h>

struct TreeNode* dfs(struct TreeNode* node, struct TreeNode* p, struct TreeNode* q) {
      // If the current node is null, return null
      if (node == NULL) {
            return NULL;
      }

      // If the current node matches either p or q, return the current node
      if (node == p || node == q) {
            return node;
      }

      // Recursively search the left and right subtrees
      struct TreeNode* left = dfs(node->left, p, q);
      struct TreeNode* right = dfs(node->right, p, q);

      // If both left and right are non-null, the current node is the LCA
      if (left != NULL && right != NULL) {
            return node;
      }

      // Return the non-null child, or null if both are null
      return (left != NULL) ? left : right;
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
      // Start DFS from the root
      return dfs(root, p, q);
}
