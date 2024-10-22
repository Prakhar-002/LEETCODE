//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2583

//? ⌚ Time complexity ➺ O(n + h Log k) 👉🏻  n = Total Nodes

//? 🧺 Space complexity ➺ O(k) h = Height of tree

#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      long long kthLargestLevelSum(TreeNode* root, int k) {
            // Initialize a queue with the root node to perform level order traversal
            queue<TreeNode*> q;
            q.push(root);

            // Initialize a vector to store level sums
            vector<long long> levelSums;

            // Loop to process each level in the binary tree
            while (!q.empty()) {
                  // Initialize the sum of the current level's nodes
                  long long levelSum = 0;
                  int levelSize = q.size();

                  // Loop through all nodes in the current level
                  for (int i = 0; i < levelSize; ++i) {
                        // Remove the node from the front of the queue
                        TreeNode* node = q.front();
                        q.pop();

                        // Add the node's value to the current level sum
                        levelSum += node->val;

                        // Add the left child to the queue if it exists
                        if (node->left) {
                              q.push(node->left);
                        }

                        // Add the right child to the queue if it exists
                        if (node->right) {
                              q.push(node->right);
                        }
                  }

                  // Add the current level sum to the vector
                  levelSums.push_back(levelSum);
            }

            // If there are fewer than k levels, return -1
            if (levelSums.size() < k) {
                  return -1;
            }

            // Use nth_element to find the kth largest element
            nth_element(levelSums.begin(), levelSums.begin() + k - 1, levelSums.end(), greater<long long>());

            // Return the kth largest level sum
            return levelSums[k - 1];
      }
};

