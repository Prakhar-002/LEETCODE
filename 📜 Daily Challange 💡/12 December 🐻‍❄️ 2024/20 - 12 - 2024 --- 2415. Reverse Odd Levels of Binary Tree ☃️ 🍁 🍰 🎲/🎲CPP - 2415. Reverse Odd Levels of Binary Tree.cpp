//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2415

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of node

//? 🧺 Space complexity ➺ O(n)

#include <queue>
using namespace std;

class Solution {
public:
      TreeNode* reverseOddLevels(TreeNode* root) {
            // Initialize a queue for level order traversal
            queue<TreeNode*> q;
            q.push(root);

            bool isOddLevel = false; // Flag to track odd levels

            while (!q.empty()) {
                  int size = q.size();
                  vector<TreeNode*> nodes;

                  // Store nodes of the current level
                  for (int i = 0; i < size; i++) {
                        TreeNode* node = q.front();
                        q.pop();
                        nodes.push_back(node);

                        // Add child nodes to the queue
                        if (node->left) q.push(node->left);
                        if (node->right) q.push(node->right);
                  }

                  // Reverse node values if the level is odd
                  if (isOddLevel) {
                        int left = 0, right = nodes.size() - 1;
                        while (left < right) {
                              swap(nodes[left]->val, nodes[right]->val);
                              left++;
                              right--;
                        }
                  }

                  // Toggle the level flag
                  isOddLevel = !isOddLevel;
            }

            return root;
      }
};
