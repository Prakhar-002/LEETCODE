//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1161

//? ⌚ Time complexity ➺ O(n)   👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)  👉🏻  m = max width 

#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
      int maxLevelSum(TreeNode* root) {
            int minLevel = 0;         // Level with the maximum sum
            int maxSum = INT_MIN;     // Initialize max sum to negative infinity
            int curLevel = 0;         // Current level counter

            queue<TreeNode*> q;
            q.push(root);

            while (!q.empty()) {
                  int curSum = 0;     // Sum of the current level
                  int levelSize = q.size();

                  for (int i = 0; i < levelSize; i++) {
                        TreeNode* node = q.front();
                        q.pop();
                        curSum += node->val;

                        // Add left and right children to the queue
                        if (node->left != nullptr) {
                              q.push(node->left);
                        }

                        if (node->right != nullptr) {
                              q.push(node->right);
                        }
                  }

                  curLevel++; // Increment the current level

                  // Update the level with the maximum sum
                  if (maxSum < curSum) {
                        maxSum = curSum;
                        minLevel = curLevel;
                  }
            }

            return minLevel;
      }
};
