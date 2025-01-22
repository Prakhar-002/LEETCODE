//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1372

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>
int pathLength = 0;

// Helper function to perform DFS and calculate ZigZag path length
void dfs(struct TreeNode* node, int goLeft, int steps) {
      // Base condition: if the current node is not null
      if (node != NULL) {
            // Update the maximum ZigZag path length encountered
            if (steps > pathLength) {
                  pathLength = steps;
            }

            // If we are going left, continue the left path with steps incremented
            // and reset the right path to 1 (start a new path)
            if (goLeft) {
                  dfs(node->left, 0, steps + 1);  // Go left, increment steps
                  dfs(node->right, 1, 1);         // Go right, reset steps to 1
            } else {
                  // If we are going right, continue the right path with steps incremented
                  // and reset the left path to 1 (start a new path)
                  dfs(node->left, 0, 1);          // Go left, reset steps to 1
                  dfs(node->right, 1, steps + 1); // Go right, increment steps
            }
      }
}

int longestZigZag(struct TreeNode* root) {
      // Initialize the variable to keep track of the longest ZigZag path
      pathLength = 0;

      // Start the depth-first search (DFS) from the root node
      dfs(root, 1, 0);  // Start going left from root with 0 steps
      return pathLength;   // Return the longest ZigZag path length found
}
