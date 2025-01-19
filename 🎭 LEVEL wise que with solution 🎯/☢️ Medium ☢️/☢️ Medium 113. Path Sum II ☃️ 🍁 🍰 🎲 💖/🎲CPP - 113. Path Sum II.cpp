//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 113

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

#include <vector>
using namespace std;

class Solution {
public:
      vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            vector<vector<int>> res;
            vector<int> path;
            findPaths(root, targetSum, path, res);
            return res;
      }

private:
      // Helper function to recursively find paths
      void findPaths(TreeNode* node, int targetSum, vector<int>& path, vector<vector<int>>& res) {
            // Base case: if the node is null, return
            if (!node) {
                  return;
            }

            // Add the current node's value to the target sum and path
            targetSum -= node->val;
            path.push_back(node->val);

            // If it's a leaf node and the target sum equals zero, add the path to the result
            if (!node->left && !node->right && targetSum == 0) {
                  res.push_back(path);
            } else {
                  // Recursively call for left and right children
                  findPaths(node->left, targetSum, path, res);
                  findPaths(node->right, targetSum, path, res);
            }

            // Backtrack: remove the last element before returning
            path.pop_back();
      }
};
