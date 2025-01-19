//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 437

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(H)    👉🏻  h = Height of Tree

//* Dual DFS

#include <stdio.h>

long long dfs(struct TreeNode *node, long long target) {
      if (node == NULL) {
            return 0;
      }

      // Check if the current node itself matches the target
      long long count = (node->val == target) ? 1 : 0;

      // Recursively check the left and right subtrees
      count += dfs(node->left, target - node->val);
      count += dfs(node->right, target - node->val);

      return count;
}

long long pathFromNode(struct TreeNode *node, long long target) {
      if (node == NULL) {
            return 0;
      }

      // Start DFS from the current node and check all paths
      long long count = dfs(node, target);

      // Recursively check the left and right subtrees for paths
      count += pathFromNode(node->left, target);
      count += pathFromNode(node->right, target);

      return count;
}

int pathSum(struct TreeNode *root, int targetSum) {
      // Helper function to count paths starting from the current node
      return pathFromNode(root, (long long)targetSum);
}
