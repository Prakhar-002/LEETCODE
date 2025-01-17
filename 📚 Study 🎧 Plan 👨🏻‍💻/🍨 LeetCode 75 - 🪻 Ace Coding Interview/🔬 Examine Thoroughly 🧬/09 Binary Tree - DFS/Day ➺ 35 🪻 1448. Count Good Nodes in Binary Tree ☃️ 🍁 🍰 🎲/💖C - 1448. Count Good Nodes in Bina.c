//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1448

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

//* Recursive Way

#include <stdio.h>

// Helper function to perform depth-first search (DFS)
int dfs(struct TreeNode* node, int maxVal) {
      // Base case: if the node is NULL, return 0 as there are no good nodes
      if (node == NULL) {
            return 0;
      }

      // Check if the current node is a "good" node
      // A node is "good" if its value is greater than or equal to the maxVal seen so far
      int goodNode = (node->val >= maxVal) ? 1 : 0;

      // Update maxVal to the maximum value encountered so far
      maxVal = (maxVal > node->val) ? maxVal : node->val;

      // Recursively check the left and right subtrees for good nodes
      goodNode += dfs(node->left, maxVal);
      goodNode += dfs(node->right, maxVal);

      // Return the total count of good nodes for the current subtree
      return goodNode;
}

// Main function to calculate the total number of good nodes in the tree
int goodNodes(struct TreeNode* root) {
      // Start DFS with the root value as the initial maximum value
      return dfs(root, root->val);
}
