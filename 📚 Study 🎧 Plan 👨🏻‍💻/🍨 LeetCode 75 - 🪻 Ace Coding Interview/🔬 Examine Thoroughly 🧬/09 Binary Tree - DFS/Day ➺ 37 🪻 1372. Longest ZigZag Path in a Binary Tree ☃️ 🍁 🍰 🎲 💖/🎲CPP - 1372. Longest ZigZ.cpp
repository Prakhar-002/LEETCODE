//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1372

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
int pathLength;

public:
      // Main function to find the longest ZigZag path
      int longestZigZag(TreeNode* root) {
            // Initialize the variable to keep track of the longest ZigZag path
            this->pathLength = 0;

            // Start the depth-first search (DFS) from the root node
            dfs(root, true, 0);  // Start going left from root with 0 steps
            return this->pathLength;   // Return the longest ZigZag path length found
      }

private:
      // Helper function to perform DFS and calculate ZigZag path length
      void dfs(TreeNode* node, bool goLeft, int steps) {
            // Base condition: if the current node is not null
            if (node != nullptr) {
                  // Update the maximum ZigZag path length encountered
                  this->pathLength = max(this->pathLength, steps);

                  // If we are going left, continue the left path with steps incremented
                  // and reset the right path to 1 (start a new path)
                  if (goLeft) {
                        dfs(node->left, false, steps + 1);  // Go left, increment steps
                        dfs(node->right, true, 1);          // Go right, reset steps to 1
                  } else {
                        // If we are going right, continue the right path with steps incremented
                        // and reset the left path to 1 (start a new path)
                        dfs(node->left, false, 1);         // Go left, reset steps to 1
                        dfs(node->right, true, steps + 1); // Go right, increment steps
                  }
            }
      }
};
