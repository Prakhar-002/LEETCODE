//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 437

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int pathSum(TreeNode* root, int targetSum) {
            // Map to store the frequency of prefix sums encountered
            unordered_map<long long, int> sums;
            sums[0] = 1;  // Base case: there's one way to get a sum of 0 (empty path)

            // Helper function to perform DFS
            return dfs(root, targetSum, 0, sums);
      }

private:
      int dfs(TreeNode* node, int targetSum, long long currentSum, unordered_map<long long, int>& sums) {
            // If the node is null, no path is possible
            if (!node) {
                  return 0;
            }

            // Add the current node's value to the running sum
            currentSum += node->val;

            // The number of valid paths to the current node is the number of times
            // (currentSum - targetSum) has been seen as a prefix sum
            int count = sums[currentSum - targetSum];

            // Record the current sum in the prefix sum map
            sums[currentSum]++;

            // Recursively check the left and right subtrees for more paths
            count += dfs(node->left, targetSum, currentSum, sums) + dfs(node->right, targetSum, currentSum, sums);

            // Backtrack: remove the current sum from the prefix sum map
            sums[currentSum]--;

            return count;
      }
};

//!---------------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(H)    👉🏻  h = Height of Tree

//* Dual DFS

class Solution {
public:
      int pathSum(TreeNode* root, int targetSum) {
            // Helper function to count paths starting from the current node
            return pathFromNode(root, targetSum);
      }

private:
      int pathFromNode(TreeNode* node, long long target) {
            if (!node) {
                  return 0;
            }

            // Start DFS from the current node and check all paths
            int count = dfs(node, target);

            // Recursively check the left and right subtrees for paths
            count += pathFromNode(node->left, target);
            count += pathFromNode(node->right, target);
            return count;
      }

      int dfs(TreeNode* node, long long target) {
            if (!node) {
                  return 0;
            }

            // Check if the current node itself matches the target
            int count = (node->val == target) ? 1 : 0;

            // Recursively check the left and right subtrees
            count += dfs(node->left, target - node->val);
            count += dfs(node->right, target - node->val);

            return count;
      }
};
