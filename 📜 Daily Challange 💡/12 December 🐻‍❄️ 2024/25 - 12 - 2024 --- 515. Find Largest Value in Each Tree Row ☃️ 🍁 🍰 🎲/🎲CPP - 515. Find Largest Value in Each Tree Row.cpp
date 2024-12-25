//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 515

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(w)  ->   w <= n

#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
      vector<int> largestValues(TreeNode* root) {
            // If the tree is empty, return an empty vector
            if (!root) {
                  return {};
            }

            // Initialize a queue with the root node
            queue<TreeNode*> q;
            q.push(root);

            // Initialize the result vector to store the largest values in each row
            vector<int> levelMaxes;

            // Perform level-order traversal
            while (!q.empty()) {
                  // Initialize the maximum value for the current level
                  int curMax = INT_MIN;

                  // Traverse all nodes in the current level
                  int levelSize = q.size();
                  for (int i = 0; i < levelSize; i++) {
                        TreeNode* node = q.front();
                        q.pop();

                        // Update the maximum value for the current level
                        curMax = max(curMax, node->val);

                        // Add the left child to the queue if it exists
                        if (node->left) {
                              q.push(node->left);
                        }

                        // Add the right child to the queue if it exists
                        if (node->right) {
                              q.push(node->right);
                        }
                  }

                  // Append the largest value of the current level to the result vector
                  levelMaxes.push_back(curMax);
            }

            // Return the result vector containing the largest values in each row
            return levelMaxes;
      }
};
