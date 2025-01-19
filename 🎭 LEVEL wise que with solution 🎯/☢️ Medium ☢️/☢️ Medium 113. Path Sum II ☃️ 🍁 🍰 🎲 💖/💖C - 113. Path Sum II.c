//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 113

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

#include <stdio.h>
#include <stdlib.h>

// Helper function to recursively find paths
void findPaths(struct TreeNode* node, int targetSum, int* path, int pathLen, int*** res, int* resSize, int** resColSizes) {
      if (!node) {
            return;
      }

      // Add the current node's value to the path
      path[pathLen] = node->val;
      pathLen++;
      targetSum -= node->val;

      // If the current node is a leaf and the path sum equals the target
      if (!node->left && !node->right && targetSum == 0) {
            // Add the current path to the result
            *res = realloc(*res, (*resSize + 1) * sizeof(int*));
            (*res)[*resSize] = malloc(pathLen * sizeof(int));
            for (int i = 0; i < pathLen; i++) {
                  (*res)[*resSize][i] = path[i];
            }

            // Update the column sizes
            *resColSizes = realloc(*resColSizes, (*resSize + 1) * sizeof(int));
            (*resColSizes)[*resSize] = pathLen;

            // Increment the result size
            (*resSize)++;
      } else {
            // Recurse for the left and right child nodes
            findPaths(node->left, targetSum, path, pathLen, res, resSize, resColSizes);
            findPaths(node->right, targetSum, path, pathLen, res, resSize, resColSizes);
      }
}

// Main function to return all paths with the given target sum
int** pathSum(struct TreeNode* root, int targetSum, int* returnSize, int** returnColumnSizes) {
      // Initialize the result variables
      int** res = NULL;
      int* resColSizes = NULL;
      int resSize = 0;

      // Temporary array to store the current path (assuming max depth of 1000)
      int path[1000];

      // Call the helper function
      findPaths(root, targetSum, path, 0, &res, &resSize, &resColSizes);

      // Set the output parameters
      *returnSize = resSize;
      *returnColumnSizes = resColSizes;

      // Return the result
      return res;
}